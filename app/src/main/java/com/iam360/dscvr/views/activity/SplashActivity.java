package com.iam360.dscvr.views.activity;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import com.iam360.dscvr.model.Optograph;
import com.iam360.dscvr.model.Person;
import com.iam360.dscvr.util.Cache;
import com.iam360.dscvr.util.GeneralUtils;

public class SplashActivity extends AppCompatActivity {

    private Cache cache;
    private GeneralUtils generalUtils = new GeneralUtils();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        // instatiate cache on start of application
        cache = Cache.getInstance(this);
        cache = Cache.open();
        String token = cache.getString(Cache.USER_TOKEN);
        String username = cache.getString(Cache.USER_NAME);
        int onboarding = cache.getInt(Cache.ONBOARDING_VERSION);
        Intent intent;

        // intent from notification service @GCMPushReceiverService
        if (getIntent() != null && getIntent().getExtras() != null && getIntent().getExtras().getParcelable("person")!=null) {
            Person person = getIntent().getExtras().getParcelable("person");
            intent = new Intent(this, MainActivity.class);
            intent.putExtra("person", person);
            startActivity(intent);
            generalUtils.decrementBadgeCount(cache, this);
            finish();
            return;
        }else if(getIntent() != null && getIntent().getExtras() != null && getIntent().getExtras().getParcelable("opto")!=null){
            Optograph optograph = getIntent().getExtras().getParcelable("opto");
            intent = new Intent(this, MainActivity.class);
            intent.putExtra("opto", optograph);
            startActivity(intent);
            generalUtils.decrementBadgeCount(cache, this);
            finish();
            return;
        }

        if(token.equals("")) intent = new Intent(this, SigninFBActivity.class);
//        if(token.equals("")) intent = new Intent(this, SignInActivity.class);
        else if(onboarding == 0) intent = new Intent(this, CreateUsernameActivity.class);
        else intent = new Intent(this, MainActivity.class);

        startActivity(intent);
        finish();
    }
}
