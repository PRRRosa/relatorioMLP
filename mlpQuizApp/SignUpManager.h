#ifndef __SIGNUPMANAGER_H__
#define __SIGNUPMANAGER_H__

#include <iostream>
#include <string>
#include "Player.h"

typedef void SignUpManagerDelegate(Player);

class SignUpManager {
  public:
    SignUpManager(SignUpManagerDelegate delegate);
    void start();
  private:
  	SignUpManagerDelegate* _delegate;
};
#endif