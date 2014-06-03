# OpenPublic 1.x on OpenShift

### Git commands

This repo was created with the following commands:

```
git remote add -f pressflow-drops https://github.com/phase2/openpublic-drops-7
git subtree add --prefix php pressflow-drops master --squash
```

When a new OpenPublic version (like 7.x-1.0) comes out, you should be able to upgrade it with the following command:

```
git remote add -f pressflow-drops https://github.com/phase2/openpublic-drops-7
git subtree pull --prefix php pressflow-drops master --squash
```

### Creating an app

```
rhc app-create openpublic php-5.3 mysql-5.1 cron \
  https://cartreflect-claytondev.rhcloud.com/reflect?github=smerrill/openshift-community-pressflow7 \
  --from-code=https://github.com/maxamillion/openpublic-1-openshift-quickstart.git

