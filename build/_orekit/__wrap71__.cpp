#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_3543a5b2e9e83041] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics NormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_3543a5b2e9e83041], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider, t_NormalizedSphericalHarmonicsProvider, NormalizedSphericalHarmonicsProvider);

          void t_NormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider), module, "NormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "NormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)));
          }

          void t_NormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider::wrap_Object(NormalizedSphericalHarmonicsProvider(((t_NormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoCoefficientsLoader::class$ = NULL;
          jmethodID *KlobucharIonoCoefficientsLoader::mids$ = NULL;
          bool KlobucharIonoCoefficientsLoader::live$ = false;
          ::java::lang::String *KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass KlobucharIonoCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_0343d25c5af74eca] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getAlpha_25e1757a36c4dde2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_25e1757a36c4dde2] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getSupportedNames_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_360461e719fb564c] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadKlobucharIonosphericCoefficients_a1fa5dae97ea5ed2] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "()V");
              mids$[mid_loadKlobucharIonosphericCoefficients_a97e9138404c69cd] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "(Lorg/orekit/time/DateComponents;)V");
              mids$[mid_stillAcceptsData_9ab94ac1dc23b105] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0343d25c5af74eca, a0.this$, a1.this$)) {}

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_25e1757a36c4dde2]));
          }

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_25e1757a36c4dde2]));
          }

          ::java::lang::String KlobucharIonoCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_1c1fa1e935d6cdcf]));
          }

          void KlobucharIonoCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_360461e719fb564c], a0.this$, a1.this$);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_a1fa5dae97ea5ed2]);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_a97e9138404c69cd], a0.this$);
          }

          jboolean KlobucharIonoCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_9ab94ac1dc23b105]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyGetSetDef t_KlobucharIonoCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, alpha),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, beta),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadKlobucharIonosphericCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoCoefficientsLoader)[] = {
            { Py_tp_methods, t_KlobucharIonoCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoCoefficientsLoader_init_ },
            { Py_tp_getset, t_KlobucharIonoCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoCoefficientsLoader, t_KlobucharIonoCoefficientsLoader, KlobucharIonoCoefficientsLoader);

          void t_KlobucharIonoCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoCoefficientsLoader), &PY_TYPE_DEF(KlobucharIonoCoefficientsLoader), module, "KlobucharIonoCoefficientsLoader", 0);
          }

          void t_KlobucharIonoCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "class_", make_descriptor(KlobucharIonoCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "wrapfn_", make_descriptor(t_KlobucharIonoCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(KlobucharIonoCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoCoefficientsLoader::wrap_Object(KlobucharIonoCoefficientsLoader(((t_KlobucharIonoCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                INT_CALL(object = KlobucharIonoCoefficientsLoader());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0, a1));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadKlobucharIonosphericCoefficients", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GMSTScale::class$ = NULL;
      jmethodID *GMSTScale::mids$ = NULL;
      bool GMSTScale::live$ = false;

      jclass GMSTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GMSTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_fd347811007a6ba3] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_140b8964300ddedf] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GMSTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
      }

      jdouble GMSTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_fd347811007a6ba3], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GMSTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_140b8964300ddedf], a0.this$));
      }

      ::java::lang::String GMSTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_getName(t_GMSTScale *self);
      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data);
      static PyGetSetDef t_GMSTScale__fields_[] = {
        DECLARE_GET_FIELD(t_GMSTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GMSTScale__methods_[] = {
        DECLARE_METHOD(t_GMSTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GMSTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GMSTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GMSTScale)[] = {
        { Py_tp_methods, t_GMSTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GMSTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GMSTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GMSTScale, t_GMSTScale, GMSTScale);

      void t_GMSTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GMSTScale), &PY_TYPE_DEF(GMSTScale), module, "GMSTScale", 0);
      }

      void t_GMSTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "class_", make_descriptor(GMSTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "wrapfn_", make_descriptor(t_GMSTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GMSTScale::initializeClass, 1)))
          return NULL;
        return t_GMSTScale::wrap_Object(GMSTScale(((t_GMSTScale *) arg)->object.this$));
      }
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GMSTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GMSTScale_getName(t_GMSTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GMSTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/AbstractFieldMatrix.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *AbstractFieldMatrix::class$ = NULL;
      jmethodID *AbstractFieldMatrix::mids$ = NULL;
      bool AbstractFieldMatrix::live$ = false;

      jclass AbstractFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/AbstractFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_e74c5d5fdc2ea025] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_addToEntry_c2695120fce254e7] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_81d49643ce3a3c0b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_copySubMatrix_c37e1208ec719e9a] = env->getMethodID(cls, "copySubMatrix", "([I[I[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_copySubMatrix_66c7ed41fa5e9c95] = env->getMethodID(cls, "copySubMatrix", "(IIII[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_createMatrix_add2e370542edc2f] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getColumn_32f3c1a06713be87] = env->getMethodID(cls, "getColumn", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getColumnDimension_55546ef6a647f39b] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getColumnMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getColumnMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getColumnVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getData_79f47d23e197eb68] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_d0f2803baa5859d6] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getRow_32f3c1a06713be87] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_55546ef6a647f39b] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getRowMatrix_2b05a6661cb56e40] = env->getMethodID(cls, "getRowMatrix", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowVector_06abfeddf4c4a28c] = env->getMethodID(cls, "getRowVector", "(I)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getSubMatrix_6f66e4ac0405ef8b] = env->getMethodID(cls, "getSubMatrix", "([I[I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSubMatrix_fccf627d1096268f] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getTrace_2ff8de927fda4153] = env->getMethodID(cls, "getTrace", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isSquare_9ab94ac1dc23b105] = env->getMethodID(cls, "isSquare", "()Z");
          mids$[mid_multiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyEntry_c2695120fce254e7] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_operate_0721a6f091b7d386] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_operate_0c912ec1e9dd9ed7] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_power_2b05a6661cb56e40] = env->getMethodID(cls, "power", "(I)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_0721a6f091b7d386] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_e74c5d5fdc2ea025] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_preMultiply_0c912ec1e9dd9ed7] = env->getMethodID(cls, "preMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_scalarAdd_7f54bca136ec1209] = env->getMethodID(cls, "scalarAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_scalarMultiply_7f54bca136ec1209] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setColumn_a38853481346cb12] = env->getMethodID(cls, "setColumn", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setColumnMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setColumnMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setColumnVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setColumnVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setEntry_c2695120fce254e7] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_a38853481346cb12] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setRowMatrix_8b62bd16a362a59d] = env->getMethodID(cls, "setRowMatrix", "(ILorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_setRowVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setRowVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_setSubMatrix_3b5f1aa21de3920a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_e74c5d5fdc2ea025] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_transpose_81d49643ce3a3c0b] = env->getMethodID(cls, "transpose", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInOptimizedOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInOptimizedOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_695885c54f7e1d00] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_0cfd3392c17e8c72] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_81e6970a97ecd473] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_aa15efee847b0fad] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_checkRowIndex_44ed599e93e8a30c] = env->getMethodID(cls, "checkRowIndex", "(I)V");
          mids$[mid_checkColumnIndex_44ed599e93e8a30c] = env->getMethodID(cls, "checkColumnIndex", "(I)V");
          mids$[mid_checkSubMatrixIndex_e8629e72f2d3b3fa] = env->getMethodID(cls, "checkSubMatrixIndex", "([I[I)V");
          mids$[mid_checkSubMatrixIndex_5a4af21a43a35df3] = env->getMethodID(cls, "checkSubMatrixIndex", "(IIII)V");
          mids$[mid_checkAdditionCompatible_3c04247304967ec8] = env->getMethodID(cls, "checkAdditionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkSubtractionCompatible_3c04247304967ec8] = env->getMethodID(cls, "checkSubtractionCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_checkMultiplicationCompatible_3c04247304967ec8] = env->getMethodID(cls, "checkMultiplicationCompatible", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_extractField_4f608ec19ff2288c] = env->getStaticMethodID(cls, "extractField", "([Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");
          mids$[mid_extractField_bc59735ca6cf5818] = env->getStaticMethodID(cls, "extractField", "([[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/Field;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::add(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_add_e74c5d5fdc2ea025], a0.this$));
      }

      void AbstractFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_81d49643ce3a3c0b]));
      }

      void AbstractFieldMatrix::copySubMatrix(const JArray< jint > & a0, const JArray< jint > & a1, const JArray< JArray< ::org::hipparchus::FieldElement > > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_c37e1208ec719e9a], a0.this$, a1.this$, a2.this$);
      }

      void AbstractFieldMatrix::copySubMatrix(jint a0, jint a1, jint a2, jint a3, const JArray< JArray< ::org::hipparchus::FieldElement > > & a4) const
      {
        env->callVoidMethod(this$, mids$[mid_copySubMatrix_66c7ed41fa5e9c95], a0, a1, a2, a3, a4.this$);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_add2e370542edc2f], a0, a1));
      }

      jboolean AbstractFieldMatrix::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getColumn(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getColumn_32f3c1a06713be87], a0));
      }

      jint AbstractFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getColumnMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getColumnMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getColumnVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getColumnVector_06abfeddf4c4a28c], a0));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > AbstractFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_79f47d23e197eb68]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_d0f2803baa5859d6], a0, a1));
      }

      ::org::hipparchus::Field AbstractFieldMatrix::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_32f3c1a06713be87], a0));
      }

      jint AbstractFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getRowMatrix(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getRowMatrix_2b05a6661cb56e40], a0));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::getRowVector(jint a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_getRowVector_06abfeddf4c4a28c], a0));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(const JArray< jint > & a0, const JArray< jint > & a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_6f66e4ac0405ef8b], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_fccf627d1096268f], a0, a1, a2, a3));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::getTrace() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getTrace_2ff8de927fda4153]));
      }

      jint AbstractFieldMatrix::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jboolean AbstractFieldMatrix::isSquare() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSquare_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::multiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e74c5d5fdc2ea025], a0.this$));
      }

      void AbstractFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_0721a6f091b7d386], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::operate(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_operate_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::power(jint a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_power_2b05a6661cb56e40], a0));
      }

      JArray< ::org::hipparchus::FieldElement > AbstractFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_0721a6f091b7d386], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_preMultiply_e74c5d5fdc2ea025], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector AbstractFieldMatrix::preMultiply(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_preMultiply_0c912ec1e9dd9ed7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarAdd_7f54bca136ec1209], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::scalarMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_scalarMultiply_7f54bca136ec1209], a0.this$));
      }

      void AbstractFieldMatrix::setColumn(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumn_a38853481346cb12], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void AbstractFieldMatrix::setColumnVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setColumnVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void AbstractFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_c2695120fce254e7], a0, a1, a2.this$);
      }

      void AbstractFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_a38853481346cb12], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowMatrix(jint a0, const ::org::hipparchus::linear::FieldMatrix & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowMatrix_8b62bd16a362a59d], a0, a1.this$);
      }

      void AbstractFieldMatrix::setRowVector(jint a0, const ::org::hipparchus::linear::FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRowVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      void AbstractFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_3b5f1aa21de3920a], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::subtract(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e74c5d5fdc2ea025], a0.this$));
      }

      ::java::lang::String AbstractFieldMatrix::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::linear::FieldMatrix AbstractFieldMatrix::transpose() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transpose_81d49643ce3a3c0b]));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInOptimizedOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInOptimizedOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_695885c54f7e1d00], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_0cfd3392c17e8c72], a0.this$));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_81e6970a97ecd473], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement AbstractFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_aa15efee847b0fad], a0.this$, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg);
      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self);
      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args);
      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data);
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data);
      static PyGetSetDef t_AbstractFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, data),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, field),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, square),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, trace),
        DECLARE_GET_FIELD(t_AbstractFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, add, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copy, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, copySubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, equals, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumn, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getColumnVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getData, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRow, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowMatrix, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getRowVector, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, getTrace, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, isSquare, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, power, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarAdd, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, scalarMultiply, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumn, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setColumnVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setRowVector, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, subtract, METH_O),
        DECLARE_METHOD(t_AbstractFieldMatrix, toString, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, transpose, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInOptimizedOrder, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldMatrix)[] = {
        { Py_tp_methods, t_AbstractFieldMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldMatrix)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldMatrix, t_AbstractFieldMatrix, AbstractFieldMatrix);
      PyObject *t_AbstractFieldMatrix::wrap_Object(const AbstractFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldMatrix *self = (t_AbstractFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldMatrix), &PY_TYPE_DEF(AbstractFieldMatrix), module, "AbstractFieldMatrix", 0);
      }

      void t_AbstractFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "class_", make_descriptor(AbstractFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "wrapfn_", make_descriptor(t_AbstractFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldMatrix::wrap_Object(AbstractFieldMatrix(((t_AbstractFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldMatrix_of_(t_AbstractFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldMatrix_add(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_addToEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addToEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_copy(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_copySubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::FieldElement > > a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "[I[I[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          break;
         case 5:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            JArray< JArray< ::org::hipparchus::FieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "IIII[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(self->object.copySubMatrix(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_createMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "createMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_equals(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_getColumn(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumn(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getColumnMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getColumnVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getColumnVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getColumnVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getData(t_AbstractFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_getEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getField(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_getRow(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getRow", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowDimension(t_AbstractFieldMatrix *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldMatrix_getRowMatrix(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowMatrix(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getRowVector(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRowVector(a0));
          return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getRowVector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jint > a0((jobject) NULL);
            JArray< jint > a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "[I[I", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_getTrace(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrace());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldMatrix_hashCode(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_isSquare(t_AbstractFieldMatrix *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSquare());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_AbstractFieldMatrix_multiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_multiplyEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "multiplyEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_operate(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.operate(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "operate", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_power(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "power", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_preMultiply(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.preMultiply(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "preMultiply", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarAdd(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarAdd(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarAdd", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_scalarMultiply(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumn(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setColumn(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumn", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setColumnMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setColumnVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setColumnVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setColumnVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setEntry(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRow(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRow", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldMatrix a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(self->object.setRowMatrix(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setRowVector(t_AbstractFieldMatrix *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::linear::FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::linear::t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setRowVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRowVector", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_setSubMatrix(t_AbstractFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubMatrix", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_subtract(t_AbstractFieldMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_toString(t_AbstractFieldMatrix *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(AbstractFieldMatrix), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_AbstractFieldMatrix_transpose(t_AbstractFieldMatrix *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.transpose());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldMatrix_walkInColumnOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInColumnOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInOptimizedOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInOptimizedOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInOptimizedOrder", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldMatrix_walkInRowOrder(t_AbstractFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "walkInRowOrder", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldMatrix_get__parameters_(t_AbstractFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldMatrix_get__columnDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__data(t_AbstractFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_AbstractFieldMatrix_get__field(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__rowDimension(t_AbstractFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldMatrix_get__square(t_AbstractFieldMatrix *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSquare());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_AbstractFieldMatrix_get__trace(t_AbstractFieldMatrix *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrace());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Set.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Set::class$ = NULL;
    jmethodID *Set::mids$ = NULL;
    bool Set::live$ = false;

    jclass Set::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Set");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_801a92d34e44726e] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_460c5e2d9d51c6cc] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_801a92d34e44726e] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_fb74752714043cb0] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/Set;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_of_7e8f11dd23d1142c] = env->getStaticMethodID(cls, "of", "()Ljava/util/Set;");
        mids$[mid_of_062948ff260192b4] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_4cf7e79da59e06aa] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_b307852bb8ccde79] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_8a6506c253eeebcd] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_01b5e3b7caaa6b1b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_fc187030d8774e2a] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_0a1ed04cb62e3af9] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_6e579146a228e54b] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_1be6b93407ed60dd] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_9c2d3272071876d5] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_7396ef9c60b399d1] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_remove_460c5e2d9d51c6cc] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_801a92d34e44726e] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_801a92d34e44726e] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_fe8f811ebd6e639a] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_24e2edd6319f4c5a] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_70d423ae061f83d5] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Set::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Set::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_801a92d34e44726e], a0.this$);
    }

    void Set::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean Set::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Set::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_801a92d34e44726e], a0.this$);
    }

    Set Set::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_copyOf_fb74752714043cb0], a0.this$));
    }

    jboolean Set::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint Set::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jboolean Set::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    ::java::util::Iterator Set::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    Set Set::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_7e8f11dd23d1142c]));
    }

    Set Set::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_062948ff260192b4], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_4cf7e79da59e06aa], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_b307852bb8ccde79], a0.this$, a1.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_8a6506c253eeebcd], a0.this$, a1.this$, a2.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_01b5e3b7caaa6b1b], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_fc187030d8774e2a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_0a1ed04cb62e3af9], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_6e579146a228e54b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_1be6b93407ed60dd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_9c2d3272071876d5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_7396ef9c60b399d1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    jboolean Set::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean Set::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_801a92d34e44726e], a0.this$);
    }

    jboolean Set::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_801a92d34e44726e], a0.this$);
    }

    jint Set::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
    }

    ::java::util::Spliterator Set::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_fe8f811ebd6e639a]));
    }

    JArray< ::java::lang::Object > Set::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_24e2edd6319f4c5a]));
    }

    JArray< ::java::lang::Object > Set::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_70d423ae061f83d5], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_of_(t_Set *self, PyObject *args);
    static PyObject *t_Set_add(t_Set *self, PyObject *args);
    static PyObject *t_Set_addAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_clear(t_Set *self, PyObject *args);
    static PyObject *t_Set_contains(t_Set *self, PyObject *args);
    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_equals(t_Set *self, PyObject *args);
    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args);
    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args);
    static PyObject *t_Set_iterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Set_remove(t_Set *self, PyObject *args);
    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_size(t_Set *self, PyObject *args);
    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_toArray(t_Set *self, PyObject *args);
    static PyObject *t_Set_get__empty(t_Set *self, void *data);
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data);
    static PyGetSetDef t_Set__fields_[] = {
      DECLARE_GET_FIELD(t_Set, empty),
      DECLARE_GET_FIELD(t_Set, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Set__methods_[] = {
      DECLARE_METHOD(t_Set, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, of_, METH_VARARGS),
      DECLARE_METHOD(t_Set, add, METH_VARARGS),
      DECLARE_METHOD(t_Set, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, clear, METH_VARARGS),
      DECLARE_METHOD(t_Set, contains, METH_VARARGS),
      DECLARE_METHOD(t_Set, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, equals, METH_VARARGS),
      DECLARE_METHOD(t_Set, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Set, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Set, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Set, remove, METH_VARARGS),
      DECLARE_METHOD(t_Set, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, size, METH_VARARGS),
      DECLARE_METHOD(t_Set, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Set)[] = {
      { Py_tp_methods, t_Set__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Set__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Set *)) get_generic_iterator< t_Set >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Set)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Set, t_Set, Set);
    PyObject *t_Set::wrap_Object(const Set& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Set::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Set::install(PyObject *module)
    {
      installType(&PY_TYPE(Set), &PY_TYPE_DEF(Set), module, "Set", 0);
    }

    void t_Set::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "class_", make_descriptor(Set::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "wrapfn_", make_descriptor(t_Set::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Set::initializeClass, 1)))
        return NULL;
      return t_Set::wrap_Object(Set(((t_Set *) arg)->object.this$));
    }
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Set::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Set_of_(t_Set *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Set_add(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Set_addAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Set_clear(t_Set *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Set_contains(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Set::copyOf(a0));
        return t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Set_equals(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Set_iterator(t_Set *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Set result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Set::of());
          return t_Set::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Set::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Set_remove(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_Set_size(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Set_toArray(t_Set *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Set_get__empty(t_Set *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LineSearch::class$ = NULL;
          jmethodID *LineSearch::mids$ = NULL;
          bool LineSearch::live$ = false;

          jclass LineSearch::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LineSearch");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5dd6771805fad5cf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;DDD)V");
              mids$[mid_search_b6b7b19b6c5ffebb] = env->getMethodID(cls, "search", "([D[D)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LineSearch::LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5dd6771805fad5cf, a0.this$, a1, a2, a3)) {}

          ::org::hipparchus::optim::univariate::UnivariatePointValuePair LineSearch::search(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_search_b6b7b19b6c5ffebb], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args);

          static PyMethodDef t_LineSearch__methods_[] = {
            DECLARE_METHOD(t_LineSearch, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LineSearch, search, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LineSearch)[] = {
            { Py_tp_methods, t_LineSearch__methods_ },
            { Py_tp_init, (void *) t_LineSearch_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LineSearch)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LineSearch, t_LineSearch, LineSearch);

          void t_LineSearch::install(PyObject *module)
          {
            installType(&PY_TYPE(LineSearch), &PY_TYPE_DEF(LineSearch), module, "LineSearch", 0);
          }

          void t_LineSearch::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "class_", make_descriptor(LineSearch::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "wrapfn_", make_descriptor(t_LineSearch::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LineSearch), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LineSearch_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LineSearch::initializeClass, 1)))
              return NULL;
            return t_LineSearch::wrap_Object(LineSearch(((t_LineSearch *) arg)->object.this$));
          }
          static PyObject *t_LineSearch_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LineSearch::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LineSearch_init_(t_LineSearch *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            LineSearch object((jobject) NULL);

            if (!parseArgs(args, "KDDD", ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer::initializeClass, &a0, &p0, ::org::hipparchus::optim::nonlinear::scalar::t_MultivariateOptimizer::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = LineSearch(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LineSearch_search(t_LineSearch *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              OBJ_CALL(result = self->object.search(a0, a1));
              return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "search", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Long::class$ = NULL;
    jmethodID *Long::mids$ = NULL;
    bool Long::live$ = false;
    jint Long::BYTES = (jint) 0;
    jlong Long::MAX_VALUE = (jlong) 0;
    jlong Long::MIN_VALUE = (jlong) 0;
    jint Long::SIZE = (jint) 0;
    ::java::lang::Class *Long::TYPE = NULL;

    jclass Long::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Long");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_3d7dd2314a0dd456] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_bitCount_da24d9dc605e436c] = env->getStaticMethodID(cls, "bitCount", "(J)I");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_a475dff09c4a8036] = env->getStaticMethodID(cls, "compare", "(JJ)I");
        mids$[mid_compareTo_697efac7c416888c] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Long;)I");
        mids$[mid_compareUnsigned_a475dff09c4a8036] = env->getStaticMethodID(cls, "compareUnsigned", "(JJ)I");
        mids$[mid_decode_63948a43f8a26139] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_divideUnsigned_8f345e4204401ff5] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getLong_63948a43f8a26139] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_getLong_4e0df24b8d07cee1] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
        mids$[mid_getLong_c458fe919015d2a1] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_da24d9dc605e436c] = env->getStaticMethodID(cls, "hashCode", "(J)I");
        mids$[mid_highestOneBit_9db63109f74a74fc] = env->getStaticMethodID(cls, "highestOneBit", "(J)J");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_9db63109f74a74fc] = env->getStaticMethodID(cls, "lowestOneBit", "(J)J");
        mids$[mid_max_8f345e4204401ff5] = env->getStaticMethodID(cls, "max", "(JJ)J");
        mids$[mid_min_8f345e4204401ff5] = env->getStaticMethodID(cls, "min", "(JJ)J");
        mids$[mid_numberOfLeadingZeros_da24d9dc605e436c] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(J)I");
        mids$[mid_numberOfTrailingZeros_da24d9dc605e436c] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(J)I");
        mids$[mid_parseLong_cbeeb2314499c200] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;)J");
        mids$[mid_parseLong_2ff283f35c90efa5] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseLong_b497eb3ab4c913a6] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_parseUnsignedLong_cbeeb2314499c200] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;)J");
        mids$[mid_parseUnsignedLong_2ff283f35c90efa5] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseUnsignedLong_b497eb3ab4c913a6] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_remainderUnsigned_8f345e4204401ff5] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
        mids$[mid_reverse_9db63109f74a74fc] = env->getStaticMethodID(cls, "reverse", "(J)J");
        mids$[mid_reverseBytes_9db63109f74a74fc] = env->getStaticMethodID(cls, "reverseBytes", "(J)J");
        mids$[mid_rotateLeft_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "rotateLeft", "(JI)J");
        mids$[mid_rotateRight_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "rotateRight", "(JI)J");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_da24d9dc605e436c] = env->getStaticMethodID(cls, "signum", "(J)I");
        mids$[mid_sum_8f345e4204401ff5] = env->getStaticMethodID(cls, "sum", "(JJ)J");
        mids$[mid_toBinaryString_9078858c11a58b1e] = env->getStaticMethodID(cls, "toBinaryString", "(J)Ljava/lang/String;");
        mids$[mid_toHexString_9078858c11a58b1e] = env->getStaticMethodID(cls, "toHexString", "(J)Ljava/lang/String;");
        mids$[mid_toOctalString_9078858c11a58b1e] = env->getStaticMethodID(cls, "toOctalString", "(J)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_9078858c11a58b1e] = env->getStaticMethodID(cls, "toString", "(J)Ljava/lang/String;");
        mids$[mid_toString_16178c1d99d0765d] = env->getStaticMethodID(cls, "toString", "(JI)Ljava/lang/String;");
        mids$[mid_toUnsignedString_9078858c11a58b1e] = env->getStaticMethodID(cls, "toUnsignedString", "(J)Ljava/lang/String;");
        mids$[mid_toUnsignedString_16178c1d99d0765d] = env->getStaticMethodID(cls, "toUnsignedString", "(JI)Ljava/lang/String;");
        mids$[mid_valueOf_63948a43f8a26139] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_valueOf_30f988f295a635df] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/Long;");
        mids$[mid_valueOf_439108b9ef2718bd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticLongField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticLongField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Long::Long(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Long::Long(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_3d7dd2314a0dd456, a0)) {}

    jint Long::bitCount(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_da24d9dc605e436c], a0);
    }

    jbyte Long::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Long::compare(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a475dff09c4a8036], a0, a1);
    }

    jint Long::compareTo(const Long & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_697efac7c416888c], a0.this$);
    }

    jint Long::compareUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_a475dff09c4a8036], a0, a1);
    }

    Long Long::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_decode_63948a43f8a26139], a0.this$));
    }

    jlong Long::divideUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_8f345e4204401ff5], a0, a1);
    }

    jdouble Long::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Long::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jfloat Long::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    Long Long::getLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_63948a43f8a26139], a0.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, const Long & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_4e0df24b8d07cee1], a0.this$, a1.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_c458fe919015d2a1], a0.this$, a1));
    }

    jint Long::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Long::hashCode(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_da24d9dc605e436c], a0);
    }

    jlong Long::highestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_highestOneBit_9db63109f74a74fc], a0);
    }

    jint Long::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jlong Long::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jlong Long::lowestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_lowestOneBit_9db63109f74a74fc], a0);
    }

    jlong Long::max$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_max_8f345e4204401ff5], a0, a1);
    }

    jlong Long::min$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_min_8f345e4204401ff5], a0, a1);
    }

    jint Long::numberOfLeadingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_da24d9dc605e436c], a0);
    }

    jint Long::numberOfTrailingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_da24d9dc605e436c], a0);
    }

    jlong Long::parseLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_cbeeb2314499c200], a0.this$);
    }

    jlong Long::parseLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_2ff283f35c90efa5], a0.this$, a1);
    }

    jlong Long::parseLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_b497eb3ab4c913a6], a0.this$, a1, a2, a3);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_cbeeb2314499c200], a0.this$);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_2ff283f35c90efa5], a0.this$, a1);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_b497eb3ab4c913a6], a0.this$, a1, a2, a3);
    }

    jlong Long::remainderUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_8f345e4204401ff5], a0, a1);
    }

    jlong Long::reverse(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverse_9db63109f74a74fc], a0);
    }

    jlong Long::reverseBytes(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverseBytes_9db63109f74a74fc], a0);
    }

    jlong Long::rotateLeft(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateLeft_a60a6e0b1c5dfa26], a0, a1);
    }

    jlong Long::rotateRight(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateRight_a60a6e0b1c5dfa26], a0, a1);
    }

    jshort Long::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    jint Long::signum(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_da24d9dc605e436c], a0);
    }

    jlong Long::sum(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_sum_8f345e4204401ff5], a0, a1);
    }

    ::java::lang::String Long::toBinaryString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_9078858c11a58b1e], a0));
    }

    ::java::lang::String Long::toHexString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_9078858c11a58b1e], a0));
    }

    ::java::lang::String Long::toOctalString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_9078858c11a58b1e], a0));
    }

    ::java::lang::String Long::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Long::toString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_9078858c11a58b1e], a0));
    }

    ::java::lang::String Long::toString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_16178c1d99d0765d], a0, a1));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_9078858c11a58b1e], a0));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_16178c1d99d0765d], a0, a1));
    }

    Long Long::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_63948a43f8a26139], a0.this$));
    }

    Long Long::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_30f988f295a635df], a0));
    }

    Long Long::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_439108b9ef2718bd], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg);
    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_equals(t_Long *self, PyObject *args);
    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args);
    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_intValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_longValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toString(t_Long *self, PyObject *args);
    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Long__methods_[] = {
      DECLARE_METHOD(t_Long, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, compareTo, METH_O),
      DECLARE_METHOD(t_Long, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, equals, METH_VARARGS),
      DECLARE_METHOD(t_Long, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, getLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Long, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, parseLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, parseUnsignedLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toString, METH_VARARGS),
      DECLARE_METHOD(t_Long, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Long)[] = {
      { Py_tp_methods, t_Long__methods_ },
      { Py_tp_init, (void *) t_Long_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Long)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Long, t_Long, Long);

    void t_Long::install(PyObject *module)
    {
      installType(&PY_TYPE(Long), &PY_TYPE_DEF(Long), module, "Long", 0);
    }

    void t_Long::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "class_", make_descriptor(Long::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "wrapfn_", make_descriptor(unboxLong));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "boxfn_", make_descriptor(boxLong));
      env->getClass(Long::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "BYTES", make_descriptor(Long::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MAX_VALUE", make_descriptor(Long::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MIN_VALUE", make_descriptor(Long::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "SIZE", make_descriptor(Long::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Long::TYPE)));
    }

    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Long::initializeClass, 1)))
        return NULL;
      return t_Long::wrap_Object(Long(((t_Long *) arg)->object.this$));
    }
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Long::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Long object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg)
    {
      Long a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Long), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Long result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::decode(a0));
        return t_Long::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::divideUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Long_equals(t_Long *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Long a1((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Long), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLong", args);
      return NULL;
    }

    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::highestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_intValue(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Long_longValue(t_Long *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::lowestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::max$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::min$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseLong", args);
      return NULL;
    }

    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedLong", args);
      return NULL;
    }

    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::remainderUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverseBytes(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateLeft(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateRight(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::sum(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Long_toString(t_Long *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        {
          jlong a0;
          Long result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedInternalError::class$ = NULL;
        jmethodID *RuggedInternalError::mids$ = NULL;
        bool RuggedInternalError::live$ = false;

        jclass RuggedInternalError::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedInternalError");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c5d3549d4f245728] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
            mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_26070c28e6ea354d] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_24e2edd6319f4c5a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_d8f5056e4f45c9a6] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedInternalError::RuggedInternalError(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_c5d3549d4f245728, a0.this$)) {}

        ::java::lang::String RuggedInternalError::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String RuggedInternalError::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String RuggedInternalError::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_26070c28e6ea354d], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedInternalError::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_24e2edd6319f4c5a]));
        }

        ::org::hipparchus::exception::Localizable RuggedInternalError::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_d8f5056e4f45c9a6]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {
        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args);
        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self);
        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data);
        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data);
        static PyGetSetDef t_RuggedInternalError__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedInternalError, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedInternalError, message),
          DECLARE_GET_FIELD(t_RuggedInternalError, parts),
          DECLARE_GET_FIELD(t_RuggedInternalError, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedInternalError__methods_[] = {
          DECLARE_METHOD(t_RuggedInternalError, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedInternalError, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedInternalError, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedInternalError, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedInternalError)[] = {
          { Py_tp_methods, t_RuggedInternalError__methods_ },
          { Py_tp_init, (void *) t_RuggedInternalError_init_ },
          { Py_tp_getset, t_RuggedInternalError__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedInternalError)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedInternalError, t_RuggedInternalError, RuggedInternalError);

        void t_RuggedInternalError::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedInternalError), &PY_TYPE_DEF(RuggedInternalError), module, "RuggedInternalError", 0);
        }

        void t_RuggedInternalError::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "class_", make_descriptor(RuggedInternalError::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "wrapfn_", make_descriptor(t_RuggedInternalError::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedInternalError), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedInternalError_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedInternalError::initializeClass, 1)))
            return NULL;
          return t_RuggedInternalError::wrap_Object(RuggedInternalError(((t_RuggedInternalError *) arg)->object.this$));
        }
        static PyObject *t_RuggedInternalError_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedInternalError::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedInternalError_init_(t_RuggedInternalError *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuggedInternalError object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuggedInternalError(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RuggedInternalError_getLocalizedMessage(t_RuggedInternalError *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getMessage(t_RuggedInternalError *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getMessage());
              return j2p(result);
            }
            break;
           case 1:
            {
              ::java::util::Locale a0((jobject) NULL);
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMessage(a0));
                return j2p(result);
              }
            }
          }

          return callSuper(PY_TYPE(RuggedInternalError), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedInternalError_getParts(t_RuggedInternalError *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_getSpecifier(t_RuggedInternalError *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedInternalError_get__localizedMessage(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__message(t_RuggedInternalError *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedInternalError_get__parts(t_RuggedInternalError *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedInternalError_get__specifier(t_RuggedInternalError *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialSplineFunction::class$ = NULL;
        jmethodID *FieldPolynomialSplineFunction::mids$ = NULL;
        bool FieldPolynomialSplineFunction::live$ = false;

        jclass FieldPolynomialSplineFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ad23d3ac68588806] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)V");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getKnots_883be608cfc68c26] = env->getMethodID(cls, "getKnots", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getN_55546ef6a647f39b] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_13b21eb80399600d] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_isValidPoint_5d7e323f5aec64d9] = env->getMethodID(cls, "isValidPoint", "(Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_polynomialSplineDerivative_744530848955be76] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");
            mids$[mid_value_1d3e368d09a6f8a6] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6e00dc5eb352fe51] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialSplineFunction::FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad23d3ac68588806, a0.this$, a1.this$)) {}

        ::org::hipparchus::Field FieldPolynomialSplineFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialSplineFunction::getKnots() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getKnots_883be608cfc68c26]));
        }

        jint FieldPolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_55546ef6a647f39b]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > FieldPolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_13b21eb80399600d]));
        }

        jboolean FieldPolynomialSplineFunction::isValidPoint(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_5d7e323f5aec64d9], a0.this$);
        }

        FieldPolynomialSplineFunction FieldPolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_744530848955be76]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_1d3e368d09a6f8a6], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6e00dc5eb352fe51], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {
        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self);
        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data);
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialSplineFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, knots),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, n),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, polynomials),
          DECLARE_GET_FIELD(t_FieldPolynomialSplineFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialSplineFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getKnots, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getN, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, getPolynomials, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, isValidPoint, METH_O),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, polynomialSplineDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialSplineFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialSplineFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialSplineFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialSplineFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialSplineFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialSplineFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialSplineFunction, t_FieldPolynomialSplineFunction, FieldPolynomialSplineFunction);
        PyObject *t_FieldPolynomialSplineFunction::wrap_Object(const FieldPolynomialSplineFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialSplineFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialSplineFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialSplineFunction *self = (t_FieldPolynomialSplineFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialSplineFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialSplineFunction), &PY_TYPE_DEF(FieldPolynomialSplineFunction), module, "FieldPolynomialSplineFunction", 0);
        }

        void t_FieldPolynomialSplineFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "class_", make_descriptor(FieldPolynomialSplineFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "wrapfn_", make_descriptor(t_FieldPolynomialSplineFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialSplineFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialSplineFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialSplineFunction::wrap_Object(FieldPolynomialSplineFunction(((t_FieldPolynomialSplineFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialSplineFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialSplineFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialSplineFunction_of_(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialSplineFunction_init_(t_FieldPolynomialSplineFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > a1((jobject) NULL);
          PyTypeObject **p1;
          FieldPolynomialSplineFunction object((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::parameters_))
          {
            INT_CALL(object = FieldPolynomialSplineFunction(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialSplineFunction_getField(t_FieldPolynomialSplineFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getKnots(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getKnots());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getN(t_FieldPolynomialSplineFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialSplineFunction_getPolynomials(t_FieldPolynomialSplineFunction *self)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolynomials());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_isValidPoint(t_FieldPolynomialSplineFunction *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialSplineFunction_polynomialSplineDerivative(t_FieldPolynomialSplineFunction *self)
        {
          FieldPolynomialSplineFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialSplineDerivative());
          return t_FieldPolynomialSplineFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialSplineFunction_value(t_FieldPolynomialSplineFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialSplineFunction_get__parameters_(t_FieldPolynomialSplineFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__field(t_FieldPolynomialSplineFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__knots(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getKnots());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__n(t_FieldPolynomialSplineFunction *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldPolynomialSplineFunction_get__polynomials(t_FieldPolynomialSplineFunction *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolynomials());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::polynomials::t_FieldPolynomialFunction::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ionosphere/KlobucharIonoModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoModel::class$ = NULL;
          jmethodID *KlobucharIonoModel::mids$ = NULL;
          bool KlobucharIonoModel::live$ = false;

          jclass KlobucharIonoModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b15baa0161a4e9c7] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_0559b4bd8fb5191f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_0c51f26f37c66719] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_5e4bace87c721642] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/TopocentricFrame;D[D)D");
              mids$[mid_pathDelay_4c566508b4c2e6c1] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;DDD[D)D");
              mids$[mid_pathDelay_972d6ed5203e4547] = env->getMethodID(cls, "pathDelay", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;D[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b15baa0161a4e9c7, a0.this$, a1.this$)) {}

          KlobucharIonoModel::KlobucharIonoModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0559b4bd8fb5191f, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List KlobucharIonoModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0c51f26f37c66719], a0.this$, a1.this$, a2, a3.this$));
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::TopocentricFrame & a1, jdouble a2, const JArray< jdouble > & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_5e4bace87c721642], a0.this$, a1.this$, a2, a3.this$);
          }

          jdouble KlobucharIonoModel::pathDelay(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::bodies::GeodeticPoint & a1, jdouble a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_4c566508b4c2e6c1], a0.this$, a1.this$, a2, a3, a4, a5.this$);
          }

          ::org::hipparchus::CalculusFieldElement KlobucharIonoModel::pathDelay(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, const JArray< ::org::hipparchus::CalculusFieldElement > & a5) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_972d6ed5203e4547], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {
          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self);
          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args);
          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data);
          static PyGetSetDef t_KlobucharIonoModel__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoModel__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoModel)[] = {
            { Py_tp_methods, t_KlobucharIonoModel__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoModel_init_ },
            { Py_tp_getset, t_KlobucharIonoModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoModel, t_KlobucharIonoModel, KlobucharIonoModel);

          void t_KlobucharIonoModel::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoModel), &PY_TYPE_DEF(KlobucharIonoModel), module, "KlobucharIonoModel", 0);
          }

          void t_KlobucharIonoModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "class_", make_descriptor(KlobucharIonoModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "wrapfn_", make_descriptor(t_KlobucharIonoModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_KlobucharIonoModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoModel::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoModel::wrap_Object(KlobucharIonoModel(((t_KlobucharIonoModel *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoModel_init_(t_KlobucharIonoModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                KlobucharIonoModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = KlobucharIonoModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_KlobucharIonoModel_getParametersDrivers(t_KlobucharIonoModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_KlobucharIonoModel_pathDelay(t_KlobucharIonoModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< jdouble > a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkD[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
                jdouble a2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KkD[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 6:
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                JArray< ::org::hipparchus::CalculusFieldElement > a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKD[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                jdouble a2;
                jdouble a3;
                jdouble a4;
                JArray< jdouble > a5((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkDDD[D", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoModel_get__parametersDrivers(t_KlobucharIonoModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Data.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03::class$ = NULL;
              jmethodID *SsrIgm03::mids$ = NULL;
              bool SsrIgm03::live$ = false;

              jclass SsrIgm03::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_380d60280655c2ef] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm03Data_810bed48fafb0b9a] = env->getMethodID(cls, "getSsrIgm03Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03::SsrIgm03(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_380d60280655c2ef, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm03::getSsrIgm03Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm03Data_810bed48fafb0b9a]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args);
              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self);
              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data);
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data);
              static PyGetSetDef t_SsrIgm03__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm03, ssrIgm03Data),
                DECLARE_GET_FIELD(t_SsrIgm03, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm03, getSsrIgm03Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03)[] = {
                { Py_tp_methods, t_SsrIgm03__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03_init_ },
                { Py_tp_getset, t_SsrIgm03__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm03, t_SsrIgm03, SsrIgm03);
              PyObject *t_SsrIgm03::wrap_Object(const SsrIgm03& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm03::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm03::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm03 *self = (t_SsrIgm03 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm03::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03), &PY_TYPE_DEF(SsrIgm03), module, "SsrIgm03", 0);
              }

              void t_SsrIgm03::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "class_", make_descriptor(SsrIgm03::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "wrapfn_", make_descriptor(t_SsrIgm03::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03::wrap_Object(SsrIgm03(((t_SsrIgm03 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm03_of_(t_SsrIgm03 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm03_init_(t_SsrIgm03 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm03 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm03Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm03(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm03Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm03_getSsrIgm03Data(t_SsrIgm03 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm03_get__parameters_(t_SsrIgm03 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm03_get__ssrIgm03Data(t_SsrIgm03 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm03Data());
                return ::java::util::t_Map::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Float.h"
#include "java/lang/Float.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Float::class$ = NULL;
    jmethodID *Float::mids$ = NULL;
    bool Float::live$ = false;
    jint Float::BYTES = (jint) 0;
    jint Float::MAX_EXPONENT = (jint) 0;
    jfloat Float::MAX_VALUE = (jfloat) 0;
    jint Float::MIN_EXPONENT = (jint) 0;
    jfloat Float::MIN_NORMAL = (jfloat) 0;
    jfloat Float::MIN_VALUE = (jfloat) 0;
    jfloat Float::NEGATIVE_INFINITY = (jfloat) 0;
    jfloat Float::NaN = (jfloat) 0;
    jfloat Float::POSITIVE_INFINITY = (jfloat) 0;
    jint Float::SIZE = (jint) 0;
    ::java::lang::Class *Float::TYPE = NULL;

    jclass Float::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Float");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_init$_bb7181dc3b1dc22b] = env->getMethodID(cls, "<init>", "(F)V");
        mids$[mid_byteValue_82ba37184c5152a3] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_f51a5f51aeb31ecc] = env->getStaticMethodID(cls, "compare", "(FF)I");
        mids$[mid_compareTo_4aeca5172eca6a61] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Float;)I");
        mids$[mid_doubleValue_b74f83833fdad017] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatToIntBits_5a61e72bed090dfc] = env->getStaticMethodID(cls, "floatToIntBits", "(F)I");
        mids$[mid_floatToRawIntBits_5a61e72bed090dfc] = env->getStaticMethodID(cls, "floatToRawIntBits", "(F)I");
        mids$[mid_floatValue_1fb1bf0772ae5db7] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_5a61e72bed090dfc] = env->getStaticMethodID(cls, "hashCode", "(F)I");
        mids$[mid_intBitsToFloat_ad59499be011e898] = env->getStaticMethodID(cls, "intBitsToFloat", "(I)F");
        mids$[mid_intValue_55546ef6a647f39b] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_967314f8b6d71dd4] = env->getStaticMethodID(cls, "isFinite", "(F)Z");
        mids$[mid_isInfinite_9ab94ac1dc23b105] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_967314f8b6d71dd4] = env->getStaticMethodID(cls, "isInfinite", "(F)Z");
        mids$[mid_isNaN_9ab94ac1dc23b105] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_967314f8b6d71dd4] = env->getStaticMethodID(cls, "isNaN", "(F)Z");
        mids$[mid_longValue_6c0ce7e438e5ded4] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_4f5dd4904966745b] = env->getStaticMethodID(cls, "max", "(FF)F");
        mids$[mid_min_4f5dd4904966745b] = env->getStaticMethodID(cls, "min", "(FF)F");
        mids$[mid_parseFloat_6ceea6a9a6b9a108] = env->getStaticMethodID(cls, "parseFloat", "(Ljava/lang/String;)F");
        mids$[mid_shortValue_02a2271f89f4492b] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_4f5dd4904966745b] = env->getStaticMethodID(cls, "sum", "(FF)F");
        mids$[mid_toHexString_2dfeb5b800d7df61] = env->getStaticMethodID(cls, "toHexString", "(F)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_2dfeb5b800d7df61] = env->getStaticMethodID(cls, "toString", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_ee23627e521cfced] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
        mids$[mid_valueOf_c96062813f66800d] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/Float;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticFloatField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticFloatField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticFloatField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticFloatField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticFloatField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticFloatField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Float::Float(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

    Float::Float(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

    Float::Float(jfloat a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_bb7181dc3b1dc22b, a0)) {}

    jbyte Float::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_82ba37184c5152a3]);
    }

    jint Float::compare(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_f51a5f51aeb31ecc], a0, a1);
    }

    jint Float::compareTo(const Float & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_4aeca5172eca6a61], a0.this$);
    }

    jdouble Float::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_b74f83833fdad017]);
    }

    jboolean Float::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jint Float::floatToIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToIntBits_5a61e72bed090dfc], a0);
    }

    jint Float::floatToRawIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToRawIntBits_5a61e72bed090dfc], a0);
    }

    jfloat Float::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_1fb1bf0772ae5db7]);
    }

    jint Float::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint Float::hashCode(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_5a61e72bed090dfc], a0);
    }

    jfloat Float::intBitsToFloat(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_intBitsToFloat_ad59499be011e898], a0);
    }

    jint Float::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_55546ef6a647f39b]);
    }

    jboolean Float::isFinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_967314f8b6d71dd4], a0);
    }

    jboolean Float::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_9ab94ac1dc23b105]);
    }

    jboolean Float::isInfinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_967314f8b6d71dd4], a0);
    }

    jboolean Float::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_9ab94ac1dc23b105]);
    }

    jboolean Float::isNaN(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_967314f8b6d71dd4], a0);
    }

    jlong Float::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_6c0ce7e438e5ded4]);
    }

    jfloat Float::max$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_max_4f5dd4904966745b], a0, a1);
    }

    jfloat Float::min$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_min_4f5dd4904966745b], a0, a1);
    }

    jfloat Float::parseFloat(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_parseFloat_6ceea6a9a6b9a108], a0.this$);
    }

    jshort Float::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_02a2271f89f4492b]);
    }

    jfloat Float::sum(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_sum_4f5dd4904966745b], a0, a1);
    }

    ::java::lang::String Float::toHexString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_2dfeb5b800d7df61], a0));
    }

    ::java::lang::String Float::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    ::java::lang::String Float::toString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_2dfeb5b800d7df61], a0));
    }

    Float Float::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ee23627e521cfced], a0.this$));
    }

    Float Float::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c96062813f66800d], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg);
    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_equals(t_Float *self, PyObject *args);
    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_intValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isInfinite(t_Float *self);
    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isNaN(t_Float *self);
    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_longValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_toString(t_Float *self, PyObject *args);
    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_get__infinite(t_Float *self, void *data);
    static PyObject *t_Float_get__naN(t_Float *self, void *data);
    static PyGetSetDef t_Float__fields_[] = {
      DECLARE_GET_FIELD(t_Float, infinite),
      DECLARE_GET_FIELD(t_Float, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Float__methods_[] = {
      DECLARE_METHOD(t_Float, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, compareTo, METH_O),
      DECLARE_METHOD(t_Float, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, equals, METH_VARARGS),
      DECLARE_METHOD(t_Float, floatToIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatToRawIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intBitsToFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Float, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Float, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, parseFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, toString, METH_VARARGS),
      DECLARE_METHOD(t_Float, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Float)[] = {
      { Py_tp_methods, t_Float__methods_ },
      { Py_tp_init, (void *) t_Float_init_ },
      { Py_tp_getset, t_Float__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Float)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Float, t_Float, Float);

    void t_Float::install(PyObject *module)
    {
      installType(&PY_TYPE(Float), &PY_TYPE_DEF(Float), module, "Float", 0);
    }

    void t_Float::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "class_", make_descriptor(Float::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "wrapfn_", make_descriptor(unboxFloat));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "boxfn_", make_descriptor(boxFloat));
      env->getClass(Float::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "BYTES", make_descriptor(Float::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_EXPONENT", make_descriptor(Float::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_VALUE", make_descriptor(Float::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_EXPONENT", make_descriptor(Float::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_NORMAL", make_descriptor(Float::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_VALUE", make_descriptor(Float::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NEGATIVE_INFINITY", make_descriptor(Float::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NaN", make_descriptor(Float::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "POSITIVE_INFINITY", make_descriptor(Float::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "SIZE", make_descriptor(Float::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Float::TYPE)));
    }

    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Float::initializeClass, 1)))
        return NULL;
      return t_Float::wrap_Object(Float(((t_Float *) arg)->object.this$));
    }
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Float::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jfloat a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jint result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg)
    {
      Float a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Float), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Float_equals(t_Float *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToRawIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToRawIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jint result;

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jfloat result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::intBitsToFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "intBitsToFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_intValue(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Float_isInfinite(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Float_isNaN(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Float_longValue(t_Float *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jfloat result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::parseFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Float_toString(t_Float *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          Float result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Float_get__infinite(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Float_get__naN(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/DcbSatellite.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbSatellite::class$ = NULL;
        jmethodID *DcbSatellite::mids$ = NULL;
        bool DcbSatellite::live$ = false;

        jclass DcbSatellite::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbSatellite");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_getDcbData_6576256e2b26ae89] = env->getMethodID(cls, "getDcbData", "()Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_e96c642b778d7ae9] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getPRN_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getPRN", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSytem_21bd759cc4a81606] = env->getMethodID(cls, "getSatelliteSytem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_setDescription_1a571fee8223b5dd] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbSatellite::DcbSatellite(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

        ::org::orekit::files::sinex::Dcb DcbSatellite::getDcbData() const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_6576256e2b26ae89]));
        }

        ::org::orekit::files::sinex::DcbDescription DcbSatellite::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_e96c642b778d7ae9]));
        }

        ::java::lang::String DcbSatellite::getPRN() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPRN_1c1fa1e935d6cdcf]));
        }

        ::org::orekit::gnss::SatelliteSystem DcbSatellite::getSatelliteSytem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSytem_21bd759cc4a81606]));
        }

        void DcbSatellite::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_1a571fee8223b5dd], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self);
        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg);
        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data);
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data);
        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data);
        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data);
        static PyGetSetDef t_DcbSatellite__fields_[] = {
          DECLARE_GET_FIELD(t_DcbSatellite, dcbData),
          DECLARE_GETSET_FIELD(t_DcbSatellite, description),
          DECLARE_GET_FIELD(t_DcbSatellite, pRN),
          DECLARE_GET_FIELD(t_DcbSatellite, satelliteSytem),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbSatellite__methods_[] = {
          DECLARE_METHOD(t_DcbSatellite, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbSatellite, getDcbData, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getPRN, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, getSatelliteSytem, METH_NOARGS),
          DECLARE_METHOD(t_DcbSatellite, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbSatellite)[] = {
          { Py_tp_methods, t_DcbSatellite__methods_ },
          { Py_tp_init, (void *) t_DcbSatellite_init_ },
          { Py_tp_getset, t_DcbSatellite__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbSatellite)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbSatellite, t_DcbSatellite, DcbSatellite);

        void t_DcbSatellite::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbSatellite), &PY_TYPE_DEF(DcbSatellite), module, "DcbSatellite", 0);
        }

        void t_DcbSatellite::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "class_", make_descriptor(DcbSatellite::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "wrapfn_", make_descriptor(t_DcbSatellite::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbSatellite), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbSatellite_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbSatellite::initializeClass, 1)))
            return NULL;
          return t_DcbSatellite::wrap_Object(DcbSatellite(((t_DcbSatellite *) arg)->object.this$));
        }
        static PyObject *t_DcbSatellite_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbSatellite::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbSatellite_init_(t_DcbSatellite *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbSatellite object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbSatellite(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbSatellite_getDcbData(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);
          OBJ_CALL(result = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getDescription(t_DcbSatellite *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_getPRN(t_DcbSatellite *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPRN());
          return j2p(result);
        }

        static PyObject *t_DcbSatellite_getSatelliteSytem(t_DcbSatellite *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_DcbSatellite_setDescription(t_DcbSatellite *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbSatellite_get__dcbData(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::Dcb value((jobject) NULL);
          OBJ_CALL(value = self->object.getDcbData());
          return ::org::orekit::files::sinex::t_Dcb::wrap_Object(value);
        }

        static PyObject *t_DcbSatellite_get__description(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbSatellite_set__description(t_DcbSatellite *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbSatellite_get__pRN(t_DcbSatellite *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPRN());
          return j2p(value);
        }

        static PyObject *t_DcbSatellite_get__satelliteSytem(t_DcbSatellite *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSytem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/J2DifferentialEffect.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *J2DifferentialEffect::class$ = NULL;
        jmethodID *J2DifferentialEffect::mids$ = NULL;
        bool J2DifferentialEffect::live$ = false;

        jclass J2DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/J2DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e48861ead2e64add] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_c9e3ce9731fe3047] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZLorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_2c773257f1f84283] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/Orbit;ZDDD)V");
            mids$[mid_init$_90d5c8781f3c6810] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;ZDDD)V");
            mids$[mid_apply_17366d6f28f0e9a3] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_c3c52b1257139045] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e48861ead2e64add, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9e3ce9731fe3047, a0.this$, a1.this$, a2, a3.this$)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c773257f1f84283, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        J2DifferentialEffect::J2DifferentialEffect(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a1, jboolean a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90d5c8781f3c6810, a0.this$, a1.this$, a2, a3, a4, a5)) {}

        ::org::orekit::orbits::Orbit J2DifferentialEffect::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_17366d6f28f0e9a3], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState J2DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_c3c52b1257139045], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds);
        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args);

        static PyMethodDef t_J2DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_J2DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_J2DifferentialEffect, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(J2DifferentialEffect)[] = {
          { Py_tp_methods, t_J2DifferentialEffect__methods_ },
          { Py_tp_init, (void *) t_J2DifferentialEffect_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(J2DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(J2DifferentialEffect, t_J2DifferentialEffect, J2DifferentialEffect);

        void t_J2DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(J2DifferentialEffect), &PY_TYPE_DEF(J2DifferentialEffect), module, "J2DifferentialEffect", 0);
        }

        void t_J2DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "class_", make_descriptor(J2DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "wrapfn_", make_descriptor(t_J2DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(J2DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_J2DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, J2DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_J2DifferentialEffect::wrap_Object(J2DifferentialEffect(((t_J2DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_J2DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, J2DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_J2DifferentialEffect_init_(t_J2DifferentialEffect *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a1((jobject) NULL);
              jboolean a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              J2DifferentialEffect object((jobject) NULL);

              if (!parseArgs(args, "kkZDDD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = J2DifferentialEffect(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_J2DifferentialEffect_apply(t_J2DifferentialEffect *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRange::class$ = NULL;
        jmethodID *BistaticRange::mids$ = NULL;
        bool BistaticRange::live$ = false;
        ::java::lang::String *BistaticRange::MEASUREMENT_TYPE = NULL;

        jclass BistaticRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd3e59569738d7bf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_e5278a7660eeb13f] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_e5278a7660eeb13f] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_9347cf3b1f0dd85a] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_d598991c5cac8ab0] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRange::BistaticRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_bd3e59569738d7bf, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_e5278a7660eeb13f]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRange::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_e5278a7660eeb13f]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args);
        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self);
        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data);
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data);
        static PyGetSetDef t_BistaticRange__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRange, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRange, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRange__methods_[] = {
          DECLARE_METHOD(t_BistaticRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRange, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRange, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRange)[] = {
          { Py_tp_methods, t_BistaticRange__methods_ },
          { Py_tp_init, (void *) t_BistaticRange_init_ },
          { Py_tp_getset, t_BistaticRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRange, t_BistaticRange, BistaticRange);
        PyObject *t_BistaticRange::wrap_Object(const BistaticRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRange *self = (t_BistaticRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRange::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRange), &PY_TYPE_DEF(BistaticRange), module, "BistaticRange", 0);
        }

        void t_BistaticRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "class_", make_descriptor(BistaticRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "wrapfn_", make_descriptor(t_BistaticRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRange::initializeClass, 1)))
            return NULL;
          return t_BistaticRange::wrap_Object(BistaticRange(((t_BistaticRange *) arg)->object.this$));
        }
        static PyObject *t_BistaticRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRange_of_(t_BistaticRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRange_init_(t_BistaticRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRange_getEmitterStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRange_getReceiverStation(t_BistaticRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRange_get__parameters_(t_BistaticRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRange_get__emitterStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRange_get__receiverStation(t_BistaticRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Data::class$ = NULL;
          jmethodID *Data::mids$ = NULL;
          bool Data::live$ = false;

          jclass Data::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Data");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Data__methods_[] = {
            DECLARE_METHOD(t_Data, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Data, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Data)[] = {
            { Py_tp_methods, t_Data__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Data)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Section),
            NULL
          };

          DEFINE_TYPE(Data, t_Data, Data);

          void t_Data::install(PyObject *module)
          {
            installType(&PY_TYPE(Data), &PY_TYPE_DEF(Data), module, "Data", 0);
          }

          void t_Data::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "class_", make_descriptor(Data::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "wrapfn_", make_descriptor(t_Data::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Data), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Data_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Data::initializeClass, 1)))
              return NULL;
            return t_Data::wrap_Object(Data(((t_Data *) arg)->object.this$));
          }
          static PyObject *t_Data_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Data::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/PythonCelestialBodies.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBodies::class$ = NULL;
      jmethodID *PythonCelestialBodies::mids$ = NULL;
      bool PythonCelestialBodies::live$ = false;

      jclass PythonCelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBody_7eb4325e211386e9] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_5df52e80cbb5eb85] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_5df52e80cbb5eb85] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_5df52e80cbb5eb85] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_5df52e80cbb5eb85] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_5df52e80cbb5eb85] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_5df52e80cbb5eb85] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_5df52e80cbb5eb85] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_5df52e80cbb5eb85] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_5df52e80cbb5eb85] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_5df52e80cbb5eb85] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_5df52e80cbb5eb85] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBodies::PythonCelestialBodies() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonCelestialBodies::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonCelestialBodies::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonCelestialBodies::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self);
      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data);
      static PyGetSetDef t_PythonCelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBodies, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBodies__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBodies, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBodies, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBodies)[] = {
        { Py_tp_methods, t_PythonCelestialBodies__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBodies_init_ },
        { Py_tp_getset, t_PythonCelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBodies, t_PythonCelestialBodies, PythonCelestialBodies);

      void t_PythonCelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBodies), &PY_TYPE_DEF(PythonCelestialBodies), module, "PythonCelestialBodies", 1);
      }

      void t_PythonCelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "class_", make_descriptor(PythonCelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "wrapfn_", make_descriptor(t_PythonCelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBodies), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBodies::initializeClass);
        JNINativeMethod methods[] = {
          { "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getBody0 },
          { "getEarth", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarth1 },
          { "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getEarthMoonBarycenter2 },
          { "getJupiter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getJupiter3 },
          { "getMars", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMars4 },
          { "getMercury", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMercury5 },
          { "getMoon", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getMoon6 },
          { "getNeptune", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getNeptune7 },
          { "getPluto", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getPluto8 },
          { "getSaturn", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSaturn9 },
          { "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSolarSystemBarycenter10 },
          { "getSun", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getSun11 },
          { "getUranus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getUranus12 },
          { "getVenus", "()Lorg/orekit/bodies/CelestialBody;", (void *) t_PythonCelestialBodies_getVenus13 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBodies_pythonDecRef14 },
        };
        env->registerNatives(cls, methods, 15);
      }

      static PyObject *t_PythonCelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBodies::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBodies::wrap_Object(PythonCelestialBodies(((t_PythonCelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBodies_init_(t_PythonCelestialBodies *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBodies object((jobject) NULL);

        INT_CALL(object = PythonCelestialBodies());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBodies_finalize(t_PythonCelestialBodies *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBodies_pythonExtension(t_PythonCelestialBodies *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getBody0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getBody", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getBody", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getEarth1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarth", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarth", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getEarthMoonBarycenter2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarthMoonBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getEarthMoonBarycenter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getJupiter3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJupiter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getJupiter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMars4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMars", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMars", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMercury5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMercury", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMercury", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getMoon6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMoon", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getMoon", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getNeptune7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getNeptune", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getNeptune", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getPluto8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPluto", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getPluto", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSaturn9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSaturn", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSaturn", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSolarSystemBarycenter10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSolarSystemBarycenter", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSolarSystemBarycenter", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getSun11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSun", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getSun", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getUranus12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUranus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getUranus", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonCelestialBodies_getVenus13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVenus", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &value))
        {
          throwTypeError("getVenus", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonCelestialBodies_pythonDecRef14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBodies::mids$[PythonCelestialBodies::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonCelestialBodies_get__self(t_PythonCelestialBodies *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonMeasurementCombination::class$ = NULL;
          jmethodID *PythonMeasurementCombination::mids$ = NULL;
          bool PythonMeasurementCombination::live$ = false;

          jclass PythonMeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonMeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_combine_12b3dc80befaeb6c] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementCombination::PythonMeasurementCombination() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void PythonMeasurementCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
          }

          jlong PythonMeasurementCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
          }

          void PythonMeasurementCombination::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self);
          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args);
          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data);
          static PyGetSetDef t_PythonMeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementCombination)[] = {
            { Py_tp_methods, t_PythonMeasurementCombination__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementCombination_init_ },
            { Py_tp_getset, t_PythonMeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementCombination, t_PythonMeasurementCombination, PythonMeasurementCombination);

          void t_PythonMeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementCombination), &PY_TYPE_DEF(PythonMeasurementCombination), module, "PythonMeasurementCombination", 1);
          }

          void t_PythonMeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "class_", make_descriptor(PythonMeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "wrapfn_", make_descriptor(t_PythonMeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;", (void *) t_PythonMeasurementCombination_combine0 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonMeasurementCombination_getName1 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementCombination::wrap_Object(PythonMeasurementCombination(((t_PythonMeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementCombination object((jobject) NULL);

            INT_CALL(object = PythonMeasurementCombination());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet value((jobject) NULL);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "combine", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet::initializeClass, &value))
            {
              throwTypeError("combine", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_6c0ce7e438e5ded4]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/Month.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *DateTimeComponents::class$ = NULL;
      jmethodID *DateTimeComponents::mids$ = NULL;
      bool DateTimeComponents::live$ = false;
      DateTimeComponents *DateTimeComponents::JULIAN_EPOCH = NULL;

      jclass DateTimeComponents::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/DateTimeComponents");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87bf07f0ebe49ff9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)V");
          mids$[mid_init$_c643d20492025243] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/DateTimeComponents;D)V");
          mids$[mid_init$_cb5fad2f35fdd552] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;I)V");
          mids$[mid_init$_a0df4b8e4ed3805e] = env->getMethodID(cls, "<init>", "(III)V");
          mids$[mid_init$_99718373fb134ca1] = env->getMethodID(cls, "<init>", "(ILorg/orekit/time/Month;IIID)V");
          mids$[mid_init$_95f55466c5eda770] = env->getMethodID(cls, "<init>", "(IIIIID)V");
          mids$[mid_compareTo_167562ea0d5aaaa3] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/DateTimeComponents;)I");
          mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDate_357436921b6db81c] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/DateComponents;");
          mids$[mid_getTime_f6de698ca751b724] = env->getMethodID(cls, "getTime", "()Lorg/orekit/time/TimeComponents;");
          mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_offsetFrom_67953e0a78e1093f] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/DateTimeComponents;)D");
          mids$[mid_parseDateTime_c468f224154d2782] = env->getStaticMethodID(cls, "parseDateTime", "(Ljava/lang/String;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_roundIfNeeded_86222a613b253114] = env->getMethodID(cls, "roundIfNeeded", "(II)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_2a9bffd3d5397f7c] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_e91e53c42d39aef9] = env->getMethodID(cls, "toString", "(II)Ljava/lang/String;");
          mids$[mid_toStringRfc3339_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toStringRfc3339", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toStringWithoutUtcOffset", "()Ljava/lang/String;");
          mids$[mid_toStringWithoutUtcOffset_e91e53c42d39aef9] = env->getMethodID(cls, "toStringWithoutUtcOffset", "(II)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          JULIAN_EPOCH = new DateTimeComponents(env->getStaticObjectField(cls, "JULIAN_EPOCH", "Lorg/orekit/time/DateTimeComponents;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateTimeComponents::DateTimeComponents(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87bf07f0ebe49ff9, a0.this$, a1.this$)) {}

      DateTimeComponents::DateTimeComponents(const DateTimeComponents & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c643d20492025243, a0.this$, a1)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb5fad2f35fdd552, a0, a1.this$, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0df4b8e4ed3805e, a0, a1, a2)) {}

      DateTimeComponents::DateTimeComponents(jint a0, const ::org::orekit::time::Month & a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99718373fb134ca1, a0, a1.this$, a2, a3, a4, a5)) {}

      DateTimeComponents::DateTimeComponents(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95f55466c5eda770, a0, a1, a2, a3, a4, a5)) {}

      jint DateTimeComponents::compareTo(const DateTimeComponents & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_167562ea0d5aaaa3], a0.this$);
      }

      jboolean DateTimeComponents::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
      }

      ::org::orekit::time::DateComponents DateTimeComponents::getDate() const
      {
        return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getDate_357436921b6db81c]));
      }

      ::org::orekit::time::TimeComponents DateTimeComponents::getTime() const
      {
        return ::org::orekit::time::TimeComponents(env->callObjectMethod(this$, mids$[mid_getTime_f6de698ca751b724]));
      }

      jint DateTimeComponents::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
      }

      jdouble DateTimeComponents::offsetFrom(const DateTimeComponents & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFrom_67953e0a78e1093f], a0.this$);
      }

      DateTimeComponents DateTimeComponents::parseDateTime(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DateTimeComponents(env->callStaticObjectMethod(cls, mids$[mid_parseDateTime_c468f224154d2782], a0.this$));
      }

      DateTimeComponents DateTimeComponents::roundIfNeeded(jint a0, jint a1) const
      {
        return DateTimeComponents(env->callObjectMethod(this$, mids$[mid_roundIfNeeded_86222a613b253114], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_2a9bffd3d5397f7c], a0));
      }

      ::java::lang::String DateTimeComponents::toString(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_e91e53c42d39aef9], a0, a1));
      }

      ::java::lang::String DateTimeComponents::toStringRfc3339() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringRfc3339_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_1c1fa1e935d6cdcf]));
      }

      ::java::lang::String DateTimeComponents::toStringWithoutUtcOffset(jint a0, jint a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toStringWithoutUtcOffset_e91e53c42d39aef9], a0, a1));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg);
      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self);
      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args);
      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data);
      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data);
      static PyGetSetDef t_DateTimeComponents__fields_[] = {
        DECLARE_GET_FIELD(t_DateTimeComponents, date),
        DECLARE_GET_FIELD(t_DateTimeComponents, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateTimeComponents__methods_[] = {
        DECLARE_METHOD(t_DateTimeComponents, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, compareTo, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, equals, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, getTime, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, offsetFrom, METH_O),
        DECLARE_METHOD(t_DateTimeComponents, parseDateTime, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateTimeComponents, roundIfNeeded, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toString, METH_VARARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringRfc3339, METH_NOARGS),
        DECLARE_METHOD(t_DateTimeComponents, toStringWithoutUtcOffset, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateTimeComponents)[] = {
        { Py_tp_methods, t_DateTimeComponents__methods_ },
        { Py_tp_init, (void *) t_DateTimeComponents_init_ },
        { Py_tp_getset, t_DateTimeComponents__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateTimeComponents)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DateTimeComponents, t_DateTimeComponents, DateTimeComponents);

      void t_DateTimeComponents::install(PyObject *module)
      {
        installType(&PY_TYPE(DateTimeComponents), &PY_TYPE_DEF(DateTimeComponents), module, "DateTimeComponents", 0);
      }

      void t_DateTimeComponents::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "class_", make_descriptor(DateTimeComponents::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "wrapfn_", make_descriptor(t_DateTimeComponents::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "boxfn_", make_descriptor(boxObject));
        env->getClass(DateTimeComponents::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateTimeComponents), "JULIAN_EPOCH", make_descriptor(t_DateTimeComponents::wrap_Object(*DateTimeComponents::JULIAN_EPOCH)));
      }

      static PyObject *t_DateTimeComponents_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateTimeComponents::initializeClass, 1)))
          return NULL;
        return t_DateTimeComponents::wrap_Object(DateTimeComponents(((t_DateTimeComponents *) arg)->object.this$));
      }
      static PyObject *t_DateTimeComponents_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateTimeComponents::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateTimeComponents_init_(t_DateTimeComponents *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::DateComponents a0((jobject) NULL);
            ::org::orekit::time::TimeComponents a1((jobject) NULL);
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            DateTimeComponents a0((jobject) NULL);
            jdouble a1;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "kD", DateTimeComponents::initializeClass, &a0, &a1))
            {
              INT_CALL(object = DateTimeComponents(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKI", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "III", &a0, &a1, &a2))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jint a0;
            ::org::orekit::time::Month a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IKIIID", ::org::orekit::time::Month::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_Month::parameters_, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            DateTimeComponents object((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = DateTimeComponents(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateTimeComponents_compareTo(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_equals(t_DateTimeComponents *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DateTimeComponents_getDate(t_DateTimeComponents *self)
      {
        ::org::orekit::time::DateComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_getTime(t_DateTimeComponents *self)
      {
        ::org::orekit::time::TimeComponents result((jobject) NULL);
        OBJ_CALL(result = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(result);
      }

      static PyObject *t_DateTimeComponents_hashCode(t_DateTimeComponents *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DateTimeComponents_offsetFrom(t_DateTimeComponents *self, PyObject *arg)
      {
        DateTimeComponents a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", DateTimeComponents::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_parseDateTime(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        DateTimeComponents result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::DateTimeComponents::parseDateTime(a0));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseDateTime", arg);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_roundIfNeeded(t_DateTimeComponents *self, PyObject *args)
      {
        jint a0;
        jint a1;
        DateTimeComponents result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.roundIfNeeded(a0, a1));
          return t_DateTimeComponents::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "roundIfNeeded", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_toString(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(DateTimeComponents), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_DateTimeComponents_toStringRfc3339(t_DateTimeComponents *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.toStringRfc3339());
        return j2p(result);
      }

      static PyObject *t_DateTimeComponents_toStringWithoutUtcOffset(t_DateTimeComponents *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toStringWithoutUtcOffset());
            return j2p(result);
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.toStringWithoutUtcOffset(a0, a1));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "toStringWithoutUtcOffset", args);
        return NULL;
      }

      static PyObject *t_DateTimeComponents_get__date(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::DateComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_DateComponents::wrap_Object(value);
      }

      static PyObject *t_DateTimeComponents_get__time(t_DateTimeComponents *self, void *data)
      {
        ::org::orekit::time::TimeComponents value((jobject) NULL);
        OBJ_CALL(value = self->object.getTime());
        return ::org::orekit::time::t_TimeComponents::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *GroundStation::class$ = NULL;
        jmethodID *GroundStation::mids$ = NULL;
        bool GroundStation::live$ = false;
        ::java::lang::String *GroundStation::DRIFT_SUFFIX = NULL;
        ::java::lang::String *GroundStation::INTERMEDIATE_SUFFIX = NULL;
        ::java::lang::String *GroundStation::OFFSET_SUFFIX = NULL;

        jclass GroundStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/GroundStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_153388b9c226b897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_2a576616b9e520cb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/frames/EOPHistory;[Lorg/orekit/models/earth/displacement/StationDisplacement;)V");
            mids$[mid_getBaseFrame_c2b113ddceb69262] = env->getMethodID(cls, "getBaseFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_getClockDriftDriver_a59daa5e273117e1] = env->getMethodID(cls, "getClockDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getClockOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getClockOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getDisplacements_ab135c4e373d337c] = env->getMethodID(cls, "getDisplacements", "()[Lorg/orekit/models/earth/displacement/StationDisplacement;");
            mids$[mid_getEastOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getEastOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getEstimatedEarthFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getEstimatedEarthFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEstimatedUT1_03c3c9443d7f95bb] = env->getMethodID(cls, "getEstimatedUT1", "()Lorg/orekit/time/UT1Scale;");
            mids$[mid_getNorthOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getNorthOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getOffsetGeodeticPoint_2f2ea1b3ce15a97a] = env->getMethodID(cls, "getOffsetGeodeticPoint", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getOffsetToInertial_d366b6c6071d64e1] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/frames/Transform;");
            mids$[mid_getOffsetToInertial_b7a75136987e4aae] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getOffsetToInertial_e929bc1c2d83ca7b] = env->getMethodID(cls, "getOffsetToInertial", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;ILjava/util/Map;)Lorg/orekit/frames/FieldTransform;");
            mids$[mid_getPolarDriftXDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarDriftXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarDriftYDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarDriftYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetXDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarOffsetXDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPolarOffsetYDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPolarOffsetYDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianDriftDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPrimeMeridianDriftDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getPrimeMeridianOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getZenithOffsetDriver_a59daa5e273117e1] = env->getMethodID(cls, "getZenithOffsetDriver", "()Lorg/orekit/utils/ParameterDriver;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRIFT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DRIFT_SUFFIX", "Ljava/lang/String;"));
            INTERMEDIATE_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "INTERMEDIATE_SUFFIX", "Ljava/lang/String;"));
            OFFSET_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "OFFSET_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_153388b9c226b897, a0.this$)) {}

        GroundStation::GroundStation(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::frames::EOPHistory & a1, const JArray< ::org::orekit::models::earth::displacement::StationDisplacement > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a576616b9e520cb, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::frames::TopocentricFrame GroundStation::getBaseFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getBaseFrame_c2b113ddceb69262]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockDriftDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getClockOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getClockOffsetDriver_a59daa5e273117e1]));
        }

        JArray< ::org::orekit::models::earth::displacement::StationDisplacement > GroundStation::getDisplacements() const
        {
          return JArray< ::org::orekit::models::earth::displacement::StationDisplacement >(env->callObjectMethod(this$, mids$[mid_getDisplacements_ab135c4e373d337c]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getEastOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getEastOffsetDriver_a59daa5e273117e1]));
        }

        ::org::orekit::frames::Frame GroundStation::getEstimatedEarthFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getEstimatedEarthFrame_2c51111cc6894ba1]));
        }

        ::org::orekit::time::UT1Scale GroundStation::getEstimatedUT1() const
        {
          return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getEstimatedUT1_03c3c9443d7f95bb]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getNorthOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getNorthOffsetDriver_a59daa5e273117e1]));
        }

        ::org::orekit::bodies::GeodeticPoint GroundStation::getOffsetGeodeticPoint(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getOffsetGeodeticPoint_2f2ea1b3ce15a97a], a0.this$));
        }

        ::org::orekit::frames::Transform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
        {
          return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_d366b6c6071d64e1], a0.this$, a1.this$, a2));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_b7a75136987e4aae], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::frames::FieldTransform GroundStation::getOffsetToInertial(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, jint a2, const ::java::util::Map & a3) const
        {
          return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getOffsetToInertial_e929bc1c2d83ca7b], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftXDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarDriftYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarDriftYDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetXDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetXDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPolarOffsetYDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPolarOffsetYDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianDriftDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianDriftDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getPrimeMeridianOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianOffsetDriver_a59daa5e273117e1]));
        }

        ::org::orekit::utils::ParameterDriver GroundStation::getZenithOffsetDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getZenithOffsetDriver_a59daa5e273117e1]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self);
        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self);
        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self);
        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg);
        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args);
        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self);
        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data);
        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data);
        static PyGetSetDef t_GroundStation__fields_[] = {
          DECLARE_GET_FIELD(t_GroundStation, baseFrame),
          DECLARE_GET_FIELD(t_GroundStation, clockDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, clockOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, displacements),
          DECLARE_GET_FIELD(t_GroundStation, eastOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, estimatedEarthFrame),
          DECLARE_GET_FIELD(t_GroundStation, estimatedUT1),
          DECLARE_GET_FIELD(t_GroundStation, northOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarDriftYDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetXDriver),
          DECLARE_GET_FIELD(t_GroundStation, polarOffsetYDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianDriftDriver),
          DECLARE_GET_FIELD(t_GroundStation, primeMeridianOffsetDriver),
          DECLARE_GET_FIELD(t_GroundStation, zenithOffsetDriver),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundStation__methods_[] = {
          DECLARE_METHOD(t_GroundStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundStation, getBaseFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getClockOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getDisplacements, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEastOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedEarthFrame, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getEstimatedUT1, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getNorthOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getOffsetGeodeticPoint, METH_O),
          DECLARE_METHOD(t_GroundStation, getOffsetToInertial, METH_VARARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarDriftYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetXDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPolarOffsetYDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianDriftDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getPrimeMeridianOffsetDriver, METH_NOARGS),
          DECLARE_METHOD(t_GroundStation, getZenithOffsetDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundStation)[] = {
          { Py_tp_methods, t_GroundStation__methods_ },
          { Py_tp_init, (void *) t_GroundStation_init_ },
          { Py_tp_getset, t_GroundStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GroundStation, t_GroundStation, GroundStation);

        void t_GroundStation::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundStation), &PY_TYPE_DEF(GroundStation), module, "GroundStation", 0);
        }

        void t_GroundStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "class_", make_descriptor(GroundStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "wrapfn_", make_descriptor(t_GroundStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundStation::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "DRIFT_SUFFIX", make_descriptor(j2p(*GroundStation::DRIFT_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "INTERMEDIATE_SUFFIX", make_descriptor(j2p(*GroundStation::INTERMEDIATE_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundStation), "OFFSET_SUFFIX", make_descriptor(j2p(*GroundStation::OFFSET_SUFFIX)));
        }

        static PyObject *t_GroundStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundStation::initializeClass, 1)))
            return NULL;
          return t_GroundStation::wrap_Object(GroundStation(((t_GroundStation *) arg)->object.this$));
        }
        static PyObject *t_GroundStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundStation_init_(t_GroundStation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = GroundStation(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ::org::orekit::frames::EOPHistory a1((jobject) NULL);
              JArray< ::org::orekit::models::earth::displacement::StationDisplacement > a2((jobject) NULL);
              GroundStation object((jobject) NULL);

              if (!parseArgs(args, "kk[k", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::frames::EOPHistory::initializeClass, ::org::orekit::models::earth::displacement::StationDisplacement::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = GroundStation(a0, a1, a2));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundStation_getBaseFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getClockOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getDisplacements(t_GroundStation *self)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getDisplacements());
          return JArray<jobject>(result.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_getEastOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedEarthFrame(t_GroundStation *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getEstimatedUT1(t_GroundStation *self)
        {
          ::org::orekit::time::UT1Scale result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getNorthOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getOffsetGeodeticPoint(t_GroundStation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getOffsetGeodeticPoint(a0));
            return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetGeodeticPoint", arg);
          return NULL;
        }

        static PyObject *t_GroundStation_getOffsetToInertial(t_GroundStation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jboolean a2;
              ::org::orekit::frames::Transform result((jobject) NULL);

              if (!parseArgs(args, "kkZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2));
                return ::org::orekit::frames::t_Transform::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::java::util::Map a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::frames::FieldTransform result((jobject) NULL);

              if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::java::util::t_Map::parameters_))
              {
                OBJ_CALL(result = self->object.getOffsetToInertial(a0, a1, a2, a3));
                return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getOffsetToInertial", args);
          return NULL;
        }

        static PyObject *t_GroundStation_getPolarDriftXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarDriftYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetXDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPolarOffsetYDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianDriftDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getPrimeMeridianOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_getZenithOffsetDriver(t_GroundStation *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_GroundStation_get__baseFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__clockOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getClockOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__displacements(t_GroundStation *self, void *data)
        {
          JArray< ::org::orekit::models::earth::displacement::StationDisplacement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getDisplacements());
          return JArray<jobject>(value.this$).wrap(::org::orekit::models::earth::displacement::t_StationDisplacement::wrap_jobject);
        }

        static PyObject *t_GroundStation_get__eastOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getEastOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedEarthFrame(t_GroundStation *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedEarthFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__estimatedUT1(t_GroundStation *self, void *data)
        {
          ::org::orekit::time::UT1Scale value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedUT1());
          return ::org::orekit::time::t_UT1Scale::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__northOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getNorthOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarDriftYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarDriftYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetXDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetXDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__polarOffsetYDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPolarOffsetYDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianDriftDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianDriftDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__primeMeridianOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeMeridianOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_GroundStation_get__zenithOffsetDriver(t_GroundStation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getZenithOffsetDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVector$Entry.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVector$Entry::class$ = NULL;
      jmethodID *RealVector$Entry::mids$ = NULL;
      bool RealVector$Entry::live$ = false;

      jclass RealVector$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVector$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_872f190ac7ffe0f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;)V");
          mids$[mid_getIndex_55546ef6a647f39b] = env->getMethodID(cls, "getIndex", "()I");
          mids$[mid_getValue_b74f83833fdad017] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_setIndex_44ed599e93e8a30c] = env->getMethodID(cls, "setIndex", "(I)V");
          mids$[mid_setValue_8ba9fe7a847cecad] = env->getMethodID(cls, "setValue", "(D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RealVector$Entry::RealVector$Entry(const ::org::hipparchus::linear::RealVector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_872f190ac7ffe0f7, a0.this$)) {}

      jint RealVector$Entry::getIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getIndex_55546ef6a647f39b]);
      }

      jdouble RealVector$Entry::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_b74f83833fdad017]);
      }

      void RealVector$Entry::setIndex(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIndex_44ed599e93e8a30c], a0);
      }

      void RealVector$Entry::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_8ba9fe7a847cecad], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self);
      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg);
      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data);
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data);
      static PyGetSetDef t_RealVector$Entry__fields_[] = {
        DECLARE_GETSET_FIELD(t_RealVector$Entry, index),
        DECLARE_GETSET_FIELD(t_RealVector$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealVector$Entry__methods_[] = {
        DECLARE_METHOD(t_RealVector$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVector$Entry, getIndex, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_RealVector$Entry, setIndex, METH_O),
        DECLARE_METHOD(t_RealVector$Entry, setValue, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVector$Entry)[] = {
        { Py_tp_methods, t_RealVector$Entry__methods_ },
        { Py_tp_init, (void *) t_RealVector$Entry_init_ },
        { Py_tp_getset, t_RealVector$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVector$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVector$Entry, t_RealVector$Entry, RealVector$Entry);

      void t_RealVector$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVector$Entry), &PY_TYPE_DEF(RealVector$Entry), module, "RealVector$Entry", 0);
      }

      void t_RealVector$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "class_", make_descriptor(RealVector$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "wrapfn_", make_descriptor(t_RealVector$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVector$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVector$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVector$Entry::initializeClass, 1)))
          return NULL;
        return t_RealVector$Entry::wrap_Object(RealVector$Entry(((t_RealVector$Entry *) arg)->object.this$));
      }
      static PyObject *t_RealVector$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVector$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RealVector$Entry_init_(t_RealVector$Entry *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        RealVector$Entry object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          INT_CALL(object = RealVector$Entry(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RealVector$Entry_getIndex(t_RealVector$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealVector$Entry_getValue(t_RealVector$Entry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVector$Entry_setIndex(t_RealVector$Entry *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIndex(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIndex", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_setValue(t_RealVector$Entry *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", arg);
        return NULL;
      }

      static PyObject *t_RealVector$Entry_get__index(t_RealVector$Entry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIndex());
        return PyLong_FromLong((long) value);
      }
      static int t_RealVector$Entry_set__index(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIndex(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "index", arg);
        return -1;
      }

      static PyObject *t_RealVector$Entry_get__value(t_RealVector$Entry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_RealVector$Entry_set__value(t_RealVector$Entry *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/SaastamoinenModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *SaastamoinenModel::class$ = NULL;
          jmethodID *SaastamoinenModel::mids$ = NULL;
          bool SaastamoinenModel::live$ = false;
          jdouble SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD = (jdouble) 0;
          ::java::lang::String *SaastamoinenModel::DELTA_R_FILE_NAME = NULL;

          jclass SaastamoinenModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/SaastamoinenModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_init$_86e04e54e74f419a] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;)V");
              mids$[mid_init$_b722bf633ce1eb32] = env->getMethodID(cls, "<init>", "(DDDLjava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getLowElevationThreshold_b74f83833fdad017] = env->getMethodID(cls, "getLowElevationThreshold", "()D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_21d2c53891518209] = env->getStaticMethodID(cls, "getStandardModel", "()Lorg/orekit/models/earth/troposphere/SaastamoinenModel;");
              mids$[mid_pathDelay_6f66c6b7094d6f08] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_2edbfa177156ee09] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_setLowElevationThreshold_8ba9fe7a847cecad] = env->getMethodID(cls, "setLowElevationThreshold", "(D)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_LOW_ELEVATION_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_LOW_ELEVATION_THRESHOLD");
              DELTA_R_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DELTA_R_FILE_NAME", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86e04e54e74f419a, a0, a1, a2, a3.this$)) {}

          SaastamoinenModel::SaastamoinenModel(jdouble a0, jdouble a1, jdouble a2, const ::java::lang::String & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b722bf633ce1eb32, a0, a1, a2, a3.this$, a4.this$)) {}

          jdouble SaastamoinenModel::getLowElevationThreshold() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowElevationThreshold_b74f83833fdad017]);
          }

          ::java::util::List SaastamoinenModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          SaastamoinenModel SaastamoinenModel::getStandardModel()
          {
            jclass cls = env->getClass(initializeClass);
            return SaastamoinenModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_21d2c53891518209]));
          }

          ::org::hipparchus::CalculusFieldElement SaastamoinenModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_6f66c6b7094d6f08], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble SaastamoinenModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_2edbfa177156ee09], a0, a1.this$, a2.this$, a3.this$);
          }

          void SaastamoinenModel::setLowElevationThreshold(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setLowElevationThreshold_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self);
          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type);
          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args);
          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg);
          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data);
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data);
          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data);
          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data);
          static PyGetSetDef t_SaastamoinenModel__fields_[] = {
            DECLARE_GETSET_FIELD(t_SaastamoinenModel, lowElevationThreshold),
            DECLARE_GET_FIELD(t_SaastamoinenModel, parametersDrivers),
            DECLARE_GET_FIELD(t_SaastamoinenModel, standardModel),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SaastamoinenModel__methods_[] = {
            DECLARE_METHOD(t_SaastamoinenModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, getLowElevationThreshold, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_SaastamoinenModel, getStandardModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_SaastamoinenModel, pathDelay, METH_VARARGS),
            DECLARE_METHOD(t_SaastamoinenModel, setLowElevationThreshold, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SaastamoinenModel)[] = {
            { Py_tp_methods, t_SaastamoinenModel__methods_ },
            { Py_tp_init, (void *) t_SaastamoinenModel_init_ },
            { Py_tp_getset, t_SaastamoinenModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SaastamoinenModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SaastamoinenModel, t_SaastamoinenModel, SaastamoinenModel);

          void t_SaastamoinenModel::install(PyObject *module)
          {
            installType(&PY_TYPE(SaastamoinenModel), &PY_TYPE_DEF(SaastamoinenModel), module, "SaastamoinenModel", 0);
          }

          void t_SaastamoinenModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "class_", make_descriptor(SaastamoinenModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "wrapfn_", make_descriptor(t_SaastamoinenModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(SaastamoinenModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DEFAULT_LOW_ELEVATION_THRESHOLD", make_descriptor(SaastamoinenModel::DEFAULT_LOW_ELEVATION_THRESHOLD));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SaastamoinenModel), "DELTA_R_FILE_NAME", make_descriptor(j2p(*SaastamoinenModel::DELTA_R_FILE_NAME)));
          }

          static PyObject *t_SaastamoinenModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SaastamoinenModel::initializeClass, 1)))
              return NULL;
            return t_SaastamoinenModel::wrap_Object(SaastamoinenModel(((t_SaastamoinenModel *) arg)->object.this$));
          }
          static PyObject *t_SaastamoinenModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SaastamoinenModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SaastamoinenModel_init_(t_SaastamoinenModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDs", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                ::java::lang::String a3((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                SaastamoinenModel object((jobject) NULL);

                if (!parseArgs(args, "DDDsk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SaastamoinenModel(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SaastamoinenModel_getLowElevationThreshold(t_SaastamoinenModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SaastamoinenModel_getParametersDrivers(t_SaastamoinenModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_SaastamoinenModel_getStandardModel(PyTypeObject *type)
          {
            SaastamoinenModel result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::SaastamoinenModel::getStandardModel());
            return t_SaastamoinenModel::wrap_Object(result);
          }

          static PyObject *t_SaastamoinenModel_pathDelay(t_SaastamoinenModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_setLowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setLowElevationThreshold(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setLowElevationThreshold", arg);
            return NULL;
          }

          static PyObject *t_SaastamoinenModel_get__lowElevationThreshold(t_SaastamoinenModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowElevationThreshold());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SaastamoinenModel_set__lowElevationThreshold(t_SaastamoinenModel *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setLowElevationThreshold(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "lowElevationThreshold", arg);
            return -1;
          }

          static PyObject *t_SaastamoinenModel_get__parametersDrivers(t_SaastamoinenModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SaastamoinenModel_get__standardModel(t_SaastamoinenModel *self, void *data)
          {
            SaastamoinenModel value((jobject) NULL);
            OBJ_CALL(value = self->object.getStandardModel());
            return t_SaastamoinenModel::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Glonass::class$ = NULL;
        jmethodID *Glonass::mids$ = NULL;
        bool Glonass::live$ = false;
        jdouble Glonass::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Glonass::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Glonass");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1e895b27f5ad5fa3] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_0e415c4bbe3bedab] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_4231606446b6d08a] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Glonass::Glonass(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_1e895b27f5ad5fa3, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {
        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Glonass__methods_[] = {
          DECLARE_METHOD(t_Glonass, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Glonass, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Glonass)[] = {
          { Py_tp_methods, t_Glonass__methods_ },
          { Py_tp_init, (void *) t_Glonass_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Glonass)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Glonass, t_Glonass, Glonass);

        void t_Glonass::install(PyObject *module)
        {
          installType(&PY_TYPE(Glonass), &PY_TYPE_DEF(Glonass), module, "Glonass", 0);
        }

        void t_Glonass::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "class_", make_descriptor(Glonass::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "wrapfn_", make_descriptor(t_Glonass::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "boxfn_", make_descriptor(boxObject));
          env->getClass(Glonass::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "DEFAULT_YAW_RATE", make_descriptor(Glonass::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Glonass::initializeClass, 1)))
            return NULL;
          return t_Glonass::wrap_Object(Glonass(((t_Glonass *) arg)->object.this$));
        }
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Glonass::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Glonass object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Glonass(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/ScaleFactorCorrection.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ScaleFactorCorrection::class$ = NULL;
          jmethodID *ScaleFactorCorrection::mids$ = NULL;
          bool ScaleFactorCorrection::live$ = false;

          jclass ScaleFactorCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ScaleFactorCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff4b669f0c231c8c] = env->getMethodID(cls, "<init>", "(DLjava/util/List;)V");
              mids$[mid_getCorrection_b74f83833fdad017] = env->getMethodID(cls, "getCorrection", "()D");
              mids$[mid_getTypesObsScaled_e62d3bb06d56d7e3] = env->getMethodID(cls, "getTypesObsScaled", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaleFactorCorrection::ScaleFactorCorrection(jdouble a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff4b669f0c231c8c, a0, a1.this$)) {}

          jdouble ScaleFactorCorrection::getCorrection() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCorrection_b74f83833fdad017]);
          }

          ::java::util::List ScaleFactorCorrection::getTypesObsScaled() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTypesObsScaled_e62d3bb06d56d7e3]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {
          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self);
          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data);
          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data);
          static PyGetSetDef t_ScaleFactorCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, correction),
            DECLARE_GET_FIELD(t_ScaleFactorCorrection, typesObsScaled),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaleFactorCorrection__methods_[] = {
            DECLARE_METHOD(t_ScaleFactorCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getCorrection, METH_NOARGS),
            DECLARE_METHOD(t_ScaleFactorCorrection, getTypesObsScaled, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaleFactorCorrection)[] = {
            { Py_tp_methods, t_ScaleFactorCorrection__methods_ },
            { Py_tp_init, (void *) t_ScaleFactorCorrection_init_ },
            { Py_tp_getset, t_ScaleFactorCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaleFactorCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ScaleFactorCorrection, t_ScaleFactorCorrection, ScaleFactorCorrection);

          void t_ScaleFactorCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaleFactorCorrection), &PY_TYPE_DEF(ScaleFactorCorrection), module, "ScaleFactorCorrection", 0);
          }

          void t_ScaleFactorCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "class_", make_descriptor(ScaleFactorCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "wrapfn_", make_descriptor(t_ScaleFactorCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaleFactorCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ScaleFactorCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaleFactorCorrection::initializeClass, 1)))
              return NULL;
            return t_ScaleFactorCorrection::wrap_Object(ScaleFactorCorrection(((t_ScaleFactorCorrection *) arg)->object.this$));
          }
          static PyObject *t_ScaleFactorCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaleFactorCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaleFactorCorrection_init_(t_ScaleFactorCorrection *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ScaleFactorCorrection object((jobject) NULL);

            if (!parseArgs(args, "DK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = ScaleFactorCorrection(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaleFactorCorrection_getCorrection(t_ScaleFactorCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCorrection());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ScaleFactorCorrection_getTypesObsScaled(t_ScaleFactorCorrection *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType));
          }

          static PyObject *t_ScaleFactorCorrection_get__correction(t_ScaleFactorCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCorrection());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaleFactorCorrection_get__typesObsScaled(t_ScaleFactorCorrection *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getTypesObsScaled());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *UtcId::class$ = NULL;
          jmethodID *UtcId::mids$ = NULL;
          bool UtcId::live$ = false;
          UtcId *UtcId::GAL = NULL;
          UtcId *UtcId::IRN = NULL;
          UtcId *UtcId::NICT = NULL;
          UtcId *UtcId::NIST = NULL;
          UtcId *UtcId::NTSC = NULL;
          UtcId *UtcId::OP = NULL;
          UtcId *UtcId::SU = NULL;
          UtcId *UtcId::USNO = NULL;

          jclass UtcId::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/UtcId");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parseUtcId_247a95328cebe570] = env->getStaticMethodID(cls, "parseUtcId", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_valueOf_247a95328cebe570] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_values_9aef199c9510dba2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/UtcId;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GAL = new UtcId(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              IRN = new UtcId(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NICT = new UtcId(env->getStaticObjectField(cls, "NICT", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NIST = new UtcId(env->getStaticObjectField(cls, "NIST", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              NTSC = new UtcId(env->getStaticObjectField(cls, "NTSC", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              OP = new UtcId(env->getStaticObjectField(cls, "OP", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              SU = new UtcId(env->getStaticObjectField(cls, "SU", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              USNO = new UtcId(env->getStaticObjectField(cls, "USNO", "Lorg/orekit/files/rinex/navigation/UtcId;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UtcId UtcId::parseUtcId(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_parseUtcId_247a95328cebe570], a0.this$));
          }

          UtcId UtcId::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return UtcId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_247a95328cebe570], a0.this$));
          }

          JArray< UtcId > UtcId::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< UtcId >(env->callStaticObjectMethod(cls, mids$[mid_values_9aef199c9510dba2]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args);
          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_UtcId_values(PyTypeObject *type);
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data);
          static PyGetSetDef t_UtcId__fields_[] = {
            DECLARE_GET_FIELD(t_UtcId, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_UtcId__methods_[] = {
            DECLARE_METHOD(t_UtcId, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, of_, METH_VARARGS),
            DECLARE_METHOD(t_UtcId, parseUtcId, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UtcId, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_UtcId, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UtcId)[] = {
            { Py_tp_methods, t_UtcId__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_UtcId__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UtcId)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(UtcId, t_UtcId, UtcId);
          PyObject *t_UtcId::wrap_Object(const UtcId& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_UtcId::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_UtcId::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_UtcId *self = (t_UtcId *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_UtcId::install(PyObject *module)
          {
            installType(&PY_TYPE(UtcId), &PY_TYPE_DEF(UtcId), module, "UtcId", 0);
          }

          void t_UtcId::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "class_", make_descriptor(UtcId::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "wrapfn_", make_descriptor(t_UtcId::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "boxfn_", make_descriptor(boxObject));
            env->getClass(UtcId::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "GAL", make_descriptor(t_UtcId::wrap_Object(*UtcId::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "IRN", make_descriptor(t_UtcId::wrap_Object(*UtcId::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NICT", make_descriptor(t_UtcId::wrap_Object(*UtcId::NICT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NIST", make_descriptor(t_UtcId::wrap_Object(*UtcId::NIST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "NTSC", make_descriptor(t_UtcId::wrap_Object(*UtcId::NTSC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "OP", make_descriptor(t_UtcId::wrap_Object(*UtcId::OP)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "SU", make_descriptor(t_UtcId::wrap_Object(*UtcId::SU)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UtcId), "USNO", make_descriptor(t_UtcId::wrap_Object(*UtcId::USNO)));
          }

          static PyObject *t_UtcId_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UtcId::initializeClass, 1)))
              return NULL;
            return t_UtcId::wrap_Object(UtcId(((t_UtcId *) arg)->object.this$));
          }
          static PyObject *t_UtcId_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UtcId::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UtcId_of_(t_UtcId *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_UtcId_parseUtcId(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::parseUtcId(a0));
              return t_UtcId::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseUtcId", arg);
            return NULL;
          }

          static PyObject *t_UtcId_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            UtcId result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::valueOf(a0));
              return t_UtcId::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_UtcId_values(PyTypeObject *type)
          {
            JArray< UtcId > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::UtcId::values());
            return JArray<jobject>(result.this$).wrap(t_UtcId::wrap_jobject);
          }
          static PyObject *t_UtcId_get__parameters_(t_UtcId *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldVector::class$ = NULL;
      jmethodID *FieldVector::mids$ = NULL;
      bool FieldVector::live$ = false;

      jclass FieldVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_0c912ec1e9dd9ed7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_9105020ef45172b7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_append_0c912ec1e9dd9ed7] = env->getMethodID(cls, "append", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_copy_b8b88195d3642875] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_dotProduct_8b189f525aa86de4] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/FieldElement;");
          mids$[mid_ebeDivide_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeDivide", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_ebeMultiply_0c912ec1e9dd9ed7] = env->getMethodID(cls, "ebeMultiply", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_getDimension_55546ef6a647f39b] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_getEntry_6c5caf579ccf9ce5] = env->getMethodID(cls, "getEntry", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getSubVector_b42960a5471f10ed] = env->getMethodID(cls, "getSubVector", "(II)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAdd_9105020ef45172b7] = env->getMethodID(cls, "mapAdd", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapAddToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapAddToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivide_9105020ef45172b7] = env->getMethodID(cls, "mapDivide", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapDivideToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapDivideToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInv_b8b88195d3642875] = env->getMethodID(cls, "mapInv", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapInvToSelf_b8b88195d3642875] = env->getMethodID(cls, "mapInvToSelf", "()Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiply_9105020ef45172b7] = env->getMethodID(cls, "mapMultiply", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapMultiplyToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapMultiplyToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtract_9105020ef45172b7] = env->getMethodID(cls, "mapSubtract", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_mapSubtractToSelf_9105020ef45172b7] = env->getMethodID(cls, "mapSubtractToSelf", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_outerProduct_8dfd3dc5a728ee60] = env->getMethodID(cls, "outerProduct", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_projection_0c912ec1e9dd9ed7] = env->getMethodID(cls, "projection", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_set_8d8d85cc6e14d2f7] = env->getMethodID(cls, "set", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setEntry_3e5e9beae9eb3b27] = env->getMethodID(cls, "setEntry", "(ILorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubVector_cd62bfbc5992c85f] = env->getMethodID(cls, "setSubVector", "(ILorg/hipparchus/linear/FieldVector;)V");
          mids$[mid_subtract_0c912ec1e9dd9ed7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");
          mids$[mid_toArray_ae860dc2d782e386] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldVector FieldVector::add(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_add_0c912ec1e9dd9ed7], a0.this$));
      }

      FieldVector FieldVector::append(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::append(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_append_0c912ec1e9dd9ed7], a0.this$));
      }

      FieldVector FieldVector::copy() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_copy_b8b88195d3642875]));
      }

      ::org::hipparchus::FieldElement FieldVector::dotProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_8b189f525aa86de4], a0.this$));
      }

      FieldVector FieldVector::ebeDivide(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeDivide_0c912ec1e9dd9ed7], a0.this$));
      }

      FieldVector FieldVector::ebeMultiply(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_ebeMultiply_0c912ec1e9dd9ed7], a0.this$));
      }

      jint FieldVector::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_55546ef6a647f39b]);
      }

      ::org::hipparchus::FieldElement FieldVector::getEntry(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_6c5caf579ccf9ce5], a0));
      }

      ::org::hipparchus::Field FieldVector::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
      }

      FieldVector FieldVector::getSubVector(jint a0, jint a1) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_getSubVector_b42960a5471f10ed], a0, a1));
      }

      FieldVector FieldVector::mapAdd(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAdd_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapAddToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapAddToSelf_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapDivide(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivide_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapDivideToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapDivideToSelf_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapInv() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInv_b8b88195d3642875]));
      }

      FieldVector FieldVector::mapInvToSelf() const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapInvToSelf_b8b88195d3642875]));
      }

      FieldVector FieldVector::mapMultiply(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiply_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapMultiplyToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapMultiplyToSelf_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapSubtract(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtract_9105020ef45172b7], a0.this$));
      }

      FieldVector FieldVector::mapSubtractToSelf(const ::org::hipparchus::FieldElement & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_mapSubtractToSelf_9105020ef45172b7], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix FieldVector::outerProduct(const FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_outerProduct_8dfd3dc5a728ee60], a0.this$));
      }

      FieldVector FieldVector::projection(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_projection_0c912ec1e9dd9ed7], a0.this$));
      }

      void FieldVector::set(const ::org::hipparchus::FieldElement & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_set_8d8d85cc6e14d2f7], a0.this$);
      }

      void FieldVector::setEntry(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_3e5e9beae9eb3b27], a0, a1.this$);
      }

      void FieldVector::setSubVector(jint a0, const FieldVector & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubVector_cd62bfbc5992c85f], a0, a1.this$);
      }

      FieldVector FieldVector::subtract(const FieldVector & a0) const
      {
        return FieldVector(env->callObjectMethod(this$, mids$[mid_subtract_0c912ec1e9dd9ed7], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > FieldVector::toArray() const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_ae860dc2d782e386]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_copy(t_FieldVector *self);
      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getDimension(t_FieldVector *self);
      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_getField(t_FieldVector *self);
      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapInv(t_FieldVector *self);
      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self);
      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args);
      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg);
      static PyObject *t_FieldVector_toArray(t_FieldVector *self);
      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data);
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data);
      static PyGetSetDef t_FieldVector__fields_[] = {
        DECLARE_GET_FIELD(t_FieldVector, dimension),
        DECLARE_GET_FIELD(t_FieldVector, field),
        DECLARE_GET_FIELD(t_FieldVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldVector__methods_[] = {
        DECLARE_METHOD(t_FieldVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, add, METH_O),
        DECLARE_METHOD(t_FieldVector, append, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, copy, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, dotProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, ebeMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getEntry, METH_O),
        DECLARE_METHOD(t_FieldVector, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, getSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, mapAdd, METH_O),
        DECLARE_METHOD(t_FieldVector, mapAddToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivide, METH_O),
        DECLARE_METHOD(t_FieldVector, mapDivideToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapInv, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapInvToSelf, METH_NOARGS),
        DECLARE_METHOD(t_FieldVector, mapMultiply, METH_O),
        DECLARE_METHOD(t_FieldVector, mapMultiplyToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtract, METH_O),
        DECLARE_METHOD(t_FieldVector, mapSubtractToSelf, METH_O),
        DECLARE_METHOD(t_FieldVector, outerProduct, METH_O),
        DECLARE_METHOD(t_FieldVector, projection, METH_O),
        DECLARE_METHOD(t_FieldVector, set, METH_O),
        DECLARE_METHOD(t_FieldVector, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, setSubVector, METH_VARARGS),
        DECLARE_METHOD(t_FieldVector, subtract, METH_O),
        DECLARE_METHOD(t_FieldVector, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldVector)[] = {
        { Py_tp_methods, t_FieldVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldVector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldVector, t_FieldVector, FieldVector);
      PyObject *t_FieldVector::wrap_Object(const FieldVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldVector *self = (t_FieldVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldVector::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldVector), &PY_TYPE_DEF(FieldVector), module, "FieldVector", 0);
      }

      void t_FieldVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "class_", make_descriptor(FieldVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "wrapfn_", make_descriptor(t_FieldVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldVector::initializeClass, 1)))
          return NULL;
        return t_FieldVector::wrap_Object(FieldVector(((t_FieldVector *) arg)->object.this$));
      }
      static PyObject *t_FieldVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldVector_of_(t_FieldVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldVector_add(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_append(t_FieldVector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.append(a0));
              return t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "append", args);
        return NULL;
      }

      static PyObject *t_FieldVector_copy(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_dotProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeDivide(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_ebeMultiply(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.ebeMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "ebeMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getDimension(t_FieldVector *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldVector_getEntry(t_FieldVector *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEntry(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEntry", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_getField(t_FieldVector *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_getSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        jint a1;
        FieldVector result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getSubVector(a0, a1));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAdd(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAdd(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAdd", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapAddToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapAddToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapAddToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivide(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivide(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivide", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapDivideToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapDivideToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapDivideToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapInv(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInv());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapInvToSelf(t_FieldVector *self)
      {
        FieldVector result((jobject) NULL);
        OBJ_CALL(result = self->object.mapInvToSelf());
        return t_FieldVector::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldVector_mapMultiply(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiply(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiply", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapMultiplyToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapMultiplyToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapMultiplyToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtract(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_mapSubtractToSelf(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapSubtractToSelf(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapSubtractToSelf", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_outerProduct(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.outerProduct(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "outerProduct", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_projection(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.projection(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "projection", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_set(t_FieldVector *self, PyObject *arg)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.set(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "set", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_setEntry(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setEntry", args);
        return NULL;
      }

      static PyObject *t_FieldVector_setSubVector(t_FieldVector *self, PyObject *args)
      {
        jint a0;
        FieldVector a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "IK", FieldVector::initializeClass, &a0, &a1, &p1, t_FieldVector::parameters_))
        {
          OBJ_CALL(self->object.setSubVector(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSubVector", args);
        return NULL;
      }

      static PyObject *t_FieldVector_subtract(t_FieldVector *self, PyObject *arg)
      {
        FieldVector a0((jobject) NULL);
        PyTypeObject **p0;
        FieldVector result((jobject) NULL);

        if (!parseArg(arg, "K", FieldVector::initializeClass, &a0, &p0, t_FieldVector::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_FieldVector::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", arg);
        return NULL;
      }

      static PyObject *t_FieldVector_toArray(t_FieldVector *self)
      {
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
      }
      static PyObject *t_FieldVector_get__parameters_(t_FieldVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldVector_get__dimension(t_FieldVector *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldVector_get__field(t_FieldVector *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MerweUnscentedTransform::class$ = NULL;
      jmethodID *MerweUnscentedTransform::mids$ = NULL;
      bool MerweUnscentedTransform::live$ = false;
      jdouble MerweUnscentedTransform::DEFAULT_ALPHA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_BETA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass MerweUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MerweUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44ed599e93e8a30c] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
          mids$[mid_getWc_3a10cc75bd070d84] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_3a10cc75bd070d84] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_b74f83833fdad017] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ALPHA = env->getStaticDoubleField(cls, "DEFAULT_ALPHA");
          DEFAULT_BETA = env->getStaticDoubleField(cls, "DEFAULT_BETA");
          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_44ed599e93e8a30c, a0)) {}

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_3a10cc75bd070d84]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data);
      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data);
      static PyGetSetDef t_MerweUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MerweUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_MerweUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MerweUnscentedTransform)[] = {
        { Py_tp_methods, t_MerweUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_MerweUnscentedTransform_init_ },
        { Py_tp_getset, t_MerweUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MerweUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(MerweUnscentedTransform, t_MerweUnscentedTransform, MerweUnscentedTransform);

      void t_MerweUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(MerweUnscentedTransform), &PY_TYPE_DEF(MerweUnscentedTransform), module, "MerweUnscentedTransform", 0);
      }

      void t_MerweUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "class_", make_descriptor(MerweUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "wrapfn_", make_descriptor(t_MerweUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(MerweUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_ALPHA", make_descriptor(MerweUnscentedTransform::DEFAULT_ALPHA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_BETA", make_descriptor(MerweUnscentedTransform::DEFAULT_BETA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(MerweUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MerweUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_MerweUnscentedTransform::wrap_Object(MerweUnscentedTransform(((t_MerweUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MerweUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MerweUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MerweUnscentedTransform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IntersectionAlgorithm::class$ = NULL;
        jmethodID *IntersectionAlgorithm::mids$ = NULL;
        bool IntersectionAlgorithm::live$ = false;

        jclass IntersectionAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IntersectionAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAlgorithmId_d67e2fdbea04a3ee] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_99e3200dafc19573] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_7819c980b8c560ad] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_882cf21796738f1c] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::api::AlgorithmId IntersectionAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_d67e2fdbea04a3ee]));
        }

        jdouble IntersectionAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_99e3200dafc19573], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_7819c980b8c560ad], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_882cf21796738f1c], a0.this$, a1.this$, a2.this$, a3.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self);
        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data);
        static PyGetSetDef t_IntersectionAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IntersectionAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntersectionAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IntersectionAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntersectionAlgorithm)[] = {
          { Py_tp_methods, t_IntersectionAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_IntersectionAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntersectionAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IntersectionAlgorithm, t_IntersectionAlgorithm, IntersectionAlgorithm);

        void t_IntersectionAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IntersectionAlgorithm), &PY_TYPE_DEF(IntersectionAlgorithm), module, "IntersectionAlgorithm", 0);
        }

        void t_IntersectionAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "class_", make_descriptor(IntersectionAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "wrapfn_", make_descriptor(t_IntersectionAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntersectionAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IntersectionAlgorithm::wrap_Object(IntersectionAlgorithm(((t_IntersectionAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntersectionAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldODEStateAndDerivative::class$ = NULL;
      jmethodID *FieldODEStateAndDerivative::mids$ = NULL;
      bool FieldODEStateAndDerivative::live$ = false;

      jclass FieldODEStateAndDerivative::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldODEStateAndDerivative");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f7a6bdb7cce5e7f1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_115eb671ed23c3e1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getCompleteDerivative_883be608cfc68c26] = env->getMethodID(cls, "getCompleteDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPrimaryDerivative_883be608cfc68c26] = env->getMethodID(cls, "getPrimaryDerivative", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSecondaryDerivative_d171b140dbb0db9f] = env->getMethodID(cls, "getSecondaryDerivative", "(I)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_f7a6bdb7cce5e7f1, a0.this$, a1.this$, a2.this$)) {}

      FieldODEStateAndDerivative::FieldODEStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a4) : ::org::hipparchus::ode::FieldODEState(env->newObject(initializeClass, &mids$, mid_init$_115eb671ed23c3e1, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getCompleteDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCompleteDerivative_883be608cfc68c26]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getPrimaryDerivative() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getPrimaryDerivative_883be608cfc68c26]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldODEStateAndDerivative::getSecondaryDerivative(jint a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getSecondaryDerivative_d171b140dbb0db9f], a0));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args);
      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self);
      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg);
      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data);
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data);
      static PyGetSetDef t_FieldODEStateAndDerivative__fields_[] = {
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, completeDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, primaryDerivative),
        DECLARE_GET_FIELD(t_FieldODEStateAndDerivative, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldODEStateAndDerivative__methods_[] = {
        DECLARE_METHOD(t_FieldODEStateAndDerivative, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getCompleteDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getPrimaryDerivative, METH_NOARGS),
        DECLARE_METHOD(t_FieldODEStateAndDerivative, getSecondaryDerivative, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldODEStateAndDerivative)[] = {
        { Py_tp_methods, t_FieldODEStateAndDerivative__methods_ },
        { Py_tp_init, (void *) t_FieldODEStateAndDerivative_init_ },
        { Py_tp_getset, t_FieldODEStateAndDerivative__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldODEStateAndDerivative)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::FieldODEState),
        NULL
      };

      DEFINE_TYPE(FieldODEStateAndDerivative, t_FieldODEStateAndDerivative, FieldODEStateAndDerivative);
      PyObject *t_FieldODEStateAndDerivative::wrap_Object(const FieldODEStateAndDerivative& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldODEStateAndDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldODEStateAndDerivative::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldODEStateAndDerivative *self = (t_FieldODEStateAndDerivative *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldODEStateAndDerivative::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldODEStateAndDerivative), &PY_TYPE_DEF(FieldODEStateAndDerivative), module, "FieldODEStateAndDerivative", 0);
      }

      void t_FieldODEStateAndDerivative::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "class_", make_descriptor(FieldODEStateAndDerivative::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "wrapfn_", make_descriptor(t_FieldODEStateAndDerivative::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEStateAndDerivative), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldODEStateAndDerivative_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldODEStateAndDerivative::initializeClass, 1)))
          return NULL;
        return t_FieldODEStateAndDerivative::wrap_Object(FieldODEStateAndDerivative(((t_FieldODEStateAndDerivative *) arg)->object.this$));
      }
      static PyObject *t_FieldODEStateAndDerivative_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldODEStateAndDerivative::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldODEStateAndDerivative_of_(t_FieldODEStateAndDerivative *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldODEStateAndDerivative_init_(t_FieldODEStateAndDerivative *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a4((jobject) NULL);
            PyTypeObject **p4;
            FieldODEStateAndDerivative object((jobject) NULL);

            if (!parseArgs(args, "K[K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldODEStateAndDerivative(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
         default:
         err:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldODEStateAndDerivative_getCompleteDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getPrimaryDerivative(t_FieldODEStateAndDerivative *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryDerivative());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_getSecondaryDerivative(t_FieldODEStateAndDerivative *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryDerivative", arg);
        return NULL;
      }
      static PyObject *t_FieldODEStateAndDerivative_get__parameters_(t_FieldODEStateAndDerivative *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldODEStateAndDerivative_get__completeDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldODEStateAndDerivative_get__primaryDerivative(t_FieldODEStateAndDerivative *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryDerivative());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixChangingVisitor::mids$ = NULL;
      bool DefaultRealMatrixChangingVisitor::live$ = false;

      jclass DefaultRealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_b74f83833fdad017] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_ea412797eafea800] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_31a9a04938175810] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixChangingVisitor::DefaultRealMatrixChangingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      jdouble DefaultRealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_b74f83833fdad017]);
      }

      void DefaultRealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_ea412797eafea800], a0, a1, a2, a3, a4, a5);
      }

      jdouble DefaultRealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_31a9a04938175810], a0, a1, a2);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self);
      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixChangingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixChangingVisitor, t_DefaultRealMatrixChangingVisitor, DefaultRealMatrixChangingVisitor);

      void t_DefaultRealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixChangingVisitor), &PY_TYPE_DEF(DefaultRealMatrixChangingVisitor), module, "DefaultRealMatrixChangingVisitor", 0);
      }

      void t_DefaultRealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "class_", make_descriptor(DefaultRealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixChangingVisitor::wrap_Object(DefaultRealMatrixChangingVisitor(((t_DefaultRealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixChangingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixChangingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/Selector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *Selector::class$ = NULL;
        jmethodID *Selector::mids$ = NULL;
        bool Selector::live$ = false;

        jclass Selector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/Selector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_select_99e3200dafc19573] = env->getMethodID(cls, "select", "(DD)D");
            mids$[mid_selectFirst_cd8da52a7e84190c] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Selector::Selector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Selector::select(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_select_99e3200dafc19573], a0, a1);
        }

        jboolean Selector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_cd8da52a7e84190c], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Selector_select(t_Selector *self, PyObject *args);
        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args);

        static PyMethodDef t_Selector__methods_[] = {
          DECLARE_METHOD(t_Selector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, select, METH_VARARGS),
          DECLARE_METHOD(t_Selector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Selector)[] = {
          { Py_tp_methods, t_Selector__methods_ },
          { Py_tp_init, (void *) t_Selector_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Selector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Selector, t_Selector, Selector);

        void t_Selector::install(PyObject *module)
        {
          installType(&PY_TYPE(Selector), &PY_TYPE_DEF(Selector), module, "Selector", 0);
        }

        void t_Selector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "class_", make_descriptor(Selector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "wrapfn_", make_descriptor(t_Selector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Selector::initializeClass, 1)))
            return NULL;
          return t_Selector::wrap_Object(Selector(((t_Selector *) arg)->object.this$));
        }
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Selector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds)
        {
          Selector object((jobject) NULL);

          INT_CALL(object = Selector());
          self->object = object;

          return 0;
        }

        static PyObject *t_Selector_select(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.select(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "select", args);
          return NULL;
        }

        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFirst", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *EphemerisFile$SatelliteEphemeris::class$ = NULL;
        jmethodID *EphemerisFile$SatelliteEphemeris::mids$ = NULL;
        bool EphemerisFile$SatelliteEphemeris::live$ = false;

        jclass EphemerisFile$SatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/EphemerisFile$SatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_b74f83833fdad017] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_2d80cda3dc1f1422] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_9e515362e8de0afe] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String EphemerisFile$SatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
        }

        jdouble EphemerisFile$SatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b74f83833fdad017]);
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_2d80cda3dc1f1422]));
        }

        ::org::orekit::propagation::BoundedPropagator EphemerisFile$SatelliteEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9e515362e8de0afe], a0.this$));
        }

        ::java::util::List EphemerisFile$SatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
        }

        ::org::orekit::time::AbsoluteDate EphemerisFile$SatelliteEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data);
        static PyGetSetDef t_EphemerisFile$SatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, propagator),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, stop),
          DECLARE_GET_FIELD(t_EphemerisFile$SatelliteEphemeris, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EphemerisFile$SatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, of_, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_EphemerisFile$SatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisFile$SatelliteEphemeris)[] = {
          { Py_tp_methods, t_EphemerisFile$SatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EphemerisFile$SatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisFile$SatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EphemerisFile$SatelliteEphemeris, t_EphemerisFile$SatelliteEphemeris, EphemerisFile$SatelliteEphemeris);
        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_Object(const EphemerisFile$SatelliteEphemeris& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_EphemerisFile$SatelliteEphemeris::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_EphemerisFile$SatelliteEphemeris::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EphemerisFile$SatelliteEphemeris *self = (t_EphemerisFile$SatelliteEphemeris *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_EphemerisFile$SatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisFile$SatelliteEphemeris), &PY_TYPE_DEF(EphemerisFile$SatelliteEphemeris), module, "EphemerisFile$SatelliteEphemeris", 0);
        }

        void t_EphemerisFile$SatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "class_", make_descriptor(EphemerisFile$SatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "wrapfn_", make_descriptor(t_EphemerisFile$SatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisFile$SatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_EphemerisFile$SatelliteEphemeris::wrap_Object(EphemerisFile$SatelliteEphemeris(((t_EphemerisFile$SatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisFile$SatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_of_(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getId(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getMu(t_EphemerisFile$SatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getPropagator(t_EphemerisFile$SatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getSegments(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStart(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_getStop(t_EphemerisFile$SatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__parameters_(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__id(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__mu(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__propagator(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__segments(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__start(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EphemerisFile$SatelliteEphemeris_get__stop(t_EphemerisFile$SatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
