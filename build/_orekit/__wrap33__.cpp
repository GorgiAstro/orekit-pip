#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIHistoryFilesLoader::class$ = NULL;
      jmethodID *UTCTAIHistoryFilesLoader::mids$ = NULL;
      bool UTCTAIHistoryFilesLoader::live$ = false;

      jclass UTCTAIHistoryFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIHistoryFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_451bc3479d2995cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      UTCTAIHistoryFilesLoader::UTCTAIHistoryFilesLoader(const ::org::orekit::data::DataProvidersManager & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_451bc3479d2995cd, a0.this$)) {}

      ::java::util::List UTCTAIHistoryFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_0d9551367f7ecdef]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/UTCTAIHistoryFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self);

      static PyMethodDef t_UTCTAIHistoryFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIHistoryFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIHistoryFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIHistoryFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIHistoryFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIHistoryFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIHistoryFilesLoader, t_UTCTAIHistoryFilesLoader, UTCTAIHistoryFilesLoader);

      void t_UTCTAIHistoryFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIHistoryFilesLoader), &PY_TYPE_DEF(UTCTAIHistoryFilesLoader), module, "UTCTAIHistoryFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(UTCTAIHistoryFilesLoader$Parser)));
      }

      void t_UTCTAIHistoryFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "class_", make_descriptor(UTCTAIHistoryFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIHistoryFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIHistoryFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIHistoryFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIHistoryFilesLoader::wrap_Object(UTCTAIHistoryFilesLoader(((t_UTCTAIHistoryFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIHistoryFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIHistoryFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIHistoryFilesLoader_init_(t_UTCTAIHistoryFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            INT_CALL(object = UTCTAIHistoryFilesLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
            UTCTAIHistoryFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
            {
              INT_CALL(object = UTCTAIHistoryFilesLoader(a0));
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

      static PyObject *t_UTCTAIHistoryFilesLoader_loadOffsets(t_UTCTAIHistoryFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *BeidouCivilianNavigationMessage::class$ = NULL;
            jmethodID *BeidouCivilianNavigationMessage::mids$ = NULL;
            bool BeidouCivilianNavigationMessage::live$ = false;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV1 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV2 = NULL;
            ::java::lang::String *BeidouCivilianNavigationMessage::CNV3 = NULL;

            jclass BeidouCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_515034c1b6155c70] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/Frequency;)V");
                mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getHealth_412668abc8d889e9] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getIODC_412668abc8d889e9] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_412668abc8d889e9] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getIntegrityFlags_412668abc8d889e9] = env->getMethodID(cls, "getIntegrityFlags", "()I");
                mids$[mid_getIscB1CD_557b8123390d8d0c] = env->getMethodID(cls, "getIscB1CD", "()D");
                mids$[mid_getIscB1CP_557b8123390d8d0c] = env->getMethodID(cls, "getIscB1CP", "()D");
                mids$[mid_getIscB2AD_557b8123390d8d0c] = env->getMethodID(cls, "getIscB2AD", "()D");
                mids$[mid_getSatelliteType_484c37600ee33628] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_getSignal_2cc7b050a39077eb] = env->getMethodID(cls, "getSignal", "()Lorg/orekit/gnss/Frequency;");
                mids$[mid_getSisaiOc1_412668abc8d889e9] = env->getMethodID(cls, "getSisaiOc1", "()I");
                mids$[mid_getSisaiOc2_412668abc8d889e9] = env->getMethodID(cls, "getSisaiOc2", "()I");
                mids$[mid_getSisaiOcb_412668abc8d889e9] = env->getMethodID(cls, "getSisaiOcb", "()I");
                mids$[mid_getSisaiOe_412668abc8d889e9] = env->getMethodID(cls, "getSisaiOe", "()I");
                mids$[mid_getSismai_412668abc8d889e9] = env->getMethodID(cls, "getSismai", "()I");
                mids$[mid_getTgdB1Cp_557b8123390d8d0c] = env->getMethodID(cls, "getTgdB1Cp", "()D");
                mids$[mid_getTgdB2ap_557b8123390d8d0c] = env->getMethodID(cls, "getTgdB2ap", "()D");
                mids$[mid_getTgdB2bI_557b8123390d8d0c] = env->getMethodID(cls, "getTgdB2bI", "()D");
                mids$[mid_setADot_10f281d777284cea] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_10f281d777284cea] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setHealth_a3da1a935cb37f7b] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setIODC_a3da1a935cb37f7b] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_a3da1a935cb37f7b] = env->getMethodID(cls, "setIODE", "(I)V");
                mids$[mid_setIntegrityFlags_a3da1a935cb37f7b] = env->getMethodID(cls, "setIntegrityFlags", "(I)V");
                mids$[mid_setIscB1CD_10f281d777284cea] = env->getMethodID(cls, "setIscB1CD", "(D)V");
                mids$[mid_setIscB1CP_10f281d777284cea] = env->getMethodID(cls, "setIscB1CP", "(D)V");
                mids$[mid_setIscB2AD_10f281d777284cea] = env->getMethodID(cls, "setIscB2AD", "(D)V");
                mids$[mid_setSatelliteType_210804240f1f93d6] = env->getMethodID(cls, "setSatelliteType", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;)V");
                mids$[mid_setSisaiOc1_a3da1a935cb37f7b] = env->getMethodID(cls, "setSisaiOc1", "(I)V");
                mids$[mid_setSisaiOc2_a3da1a935cb37f7b] = env->getMethodID(cls, "setSisaiOc2", "(I)V");
                mids$[mid_setSisaiOcb_a3da1a935cb37f7b] = env->getMethodID(cls, "setSisaiOcb", "(I)V");
                mids$[mid_setSisaiOe_a3da1a935cb37f7b] = env->getMethodID(cls, "setSisaiOe", "(I)V");
                mids$[mid_setSismai_a3da1a935cb37f7b] = env->getMethodID(cls, "setSismai", "(I)V");
                mids$[mid_setTgdB1Cp_10f281d777284cea] = env->getMethodID(cls, "setTgdB1Cp", "(D)V");
                mids$[mid_setTgdB2ap_10f281d777284cea] = env->getMethodID(cls, "setTgdB2ap", "(D)V");
                mids$[mid_setTgdB2bI_10f281d777284cea] = env->getMethodID(cls, "setTgdB2bI", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNV1 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV1", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                CNV3 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV3", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouCivilianNavigationMessage::BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency & a0) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_515034c1b6155c70, a0.this$)) {}

            jdouble BeidouCivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
            }

            jdouble BeidouCivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_557b8123390d8d0c]);
            }

            jint BeidouCivilianNavigationMessage::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getIntegrityFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getIntegrityFlags_412668abc8d889e9]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CD_557b8123390d8d0c]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CP_557b8123390d8d0c]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB2AD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB2AD_557b8123390d8d0c]);
            }

            ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType BeidouCivilianNavigationMessage::getSatelliteType() const
            {
              return ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_484c37600ee33628]));
            }

            ::org::orekit::gnss::Frequency BeidouCivilianNavigationMessage::getSignal() const
            {
              return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getSignal_2cc7b050a39077eb]));
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc1() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc1_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc2() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc2_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOcb() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOcb_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOe() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOe_412668abc8d889e9]);
            }

            jint BeidouCivilianNavigationMessage::getSismai() const
            {
              return env->callIntMethod(this$, mids$[mid_getSismai_412668abc8d889e9]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB1Cp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB1Cp_557b8123390d8d0c]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2ap() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2ap_557b8123390d8d0c]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2bI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2bI_557b8123390d8d0c]);
            }

            void BeidouCivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setIODE(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setIntegrityFlags(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrityFlags_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CD_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CP_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB2AD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB2AD_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatelliteType_210804240f1f93d6], a0.this$);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc1_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc2_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOcb(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOcb_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOe(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOe_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setSismai(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSismai_a3da1a935cb37f7b], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB1Cp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB1Cp_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2ap(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2ap_10f281d777284cea], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2bI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2bI_10f281d777284cea], a0);
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self);
            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg);
            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data);
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_BeidouCivilianNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, aDot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, deltaN0Dot),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, health),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, integrityFlags),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB1CP),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, iscB2AD),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, satelliteType),
              DECLARE_GET_FIELD(t_BeidouCivilianNavigationMessage, signal),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc1),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOc2),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOcb),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sisaiOe),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, sismai),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB1Cp),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2ap),
              DECLARE_GETSET_FIELD(t_BeidouCivilianNavigationMessage, tgdB2bI),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_BeidouCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getADot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getDeltaN0Dot, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getHealth, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIntegrityFlags, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB1CP, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getIscB2AD, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSatelliteType, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSignal, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc1, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOc2, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOcb, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSisaiOe, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getSismai, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB1Cp, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2ap, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, getTgdB2bI, METH_NOARGS),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setADot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setDeltaN0Dot, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setHealth, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIntegrityFlags, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB1CP, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setIscB2AD, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSatelliteType, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc1, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOc2, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOcb, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSisaiOe, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setSismai, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB1Cp, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2ap, METH_O),
              DECLARE_METHOD(t_BeidouCivilianNavigationMessage, setTgdB2bI, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(BeidouCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_BeidouCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_BeidouCivilianNavigationMessage_init_ },
              { Py_tp_getset, t_BeidouCivilianNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(BeidouCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(BeidouCivilianNavigationMessage, t_BeidouCivilianNavigationMessage, BeidouCivilianNavigationMessage);

            void t_BeidouCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(BeidouCivilianNavigationMessage), &PY_TYPE_DEF(BeidouCivilianNavigationMessage), module, "BeidouCivilianNavigationMessage", 0);
            }

            void t_BeidouCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "class_", make_descriptor(BeidouCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "wrapfn_", make_descriptor(t_BeidouCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(BeidouCivilianNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV1", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV1)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV2", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV2)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouCivilianNavigationMessage), "CNV3", make_descriptor(j2p(*BeidouCivilianNavigationMessage::CNV3)));
            }

            static PyObject *t_BeidouCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_BeidouCivilianNavigationMessage::wrap_Object(BeidouCivilianNavigationMessage(((t_BeidouCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_BeidouCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, BeidouCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_BeidouCivilianNavigationMessage_init_(t_BeidouCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::gnss::Frequency a0((jobject) NULL);
              PyTypeObject **p0;
              BeidouCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
              {
                INT_CALL(object = BeidouCivilianNavigationMessage(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getADot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getADot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getDeltaN0Dot(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getHealth(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODC(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIODE(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIntegrityFlags(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB1CP(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getIscB2AD(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSatelliteType(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType result((jobject) NULL);
              OBJ_CALL(result = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSignal(t_BeidouCivilianNavigationMessage *self)
            {
              ::org::orekit::gnss::Frequency result((jobject) NULL);
              OBJ_CALL(result = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc1(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc1());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOc2(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOc2());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOcb(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOcb());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSisaiOe(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSisaiOe());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getSismai(t_BeidouCivilianNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSismai());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB1Cp(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2ap(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_getTgdB2bI(t_BeidouCivilianNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setADot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setADot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setADot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setDeltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDeltaN0Dot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDeltaN0Dot", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setHealth(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setHealth", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIntegrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIntegrityFlags(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIntegrityFlags", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB1CP(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB1CP", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setIscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIscB2AD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIscB2AD", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSatelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::parameters_))
              {
                OBJ_CALL(self->object.setSatelliteType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSatelliteType", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc1", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOc2(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOc2", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOcb(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOcb", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSisaiOe(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisaiOe", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setSismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSismai(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSismai", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB1Cp(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB1Cp", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2ap(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2ap", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_setTgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTgdB2bI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTgdB2bI", arg);
              return NULL;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__aDot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getADot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__aDot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setADot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aDot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaN0Dot());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__deltaN0Dot(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDeltaN0Dot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "deltaN0Dot", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__health(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__health(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "health", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODC(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODC(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iODE(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iODE(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__integrityFlags(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIntegrityFlags());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__integrityFlags(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIntegrityFlags(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "integrityFlags", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB1CP(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB1CP());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB1CP(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB1CP(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB1CP", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__iscB2AD(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getIscB2AD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__iscB2AD(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIscB2AD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iscB2AD", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__satelliteType(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
              OBJ_CALL(value = self->object.getSatelliteType());
              return ::org::orekit::propagation::analytical::gnss::data::t_BeidouSatelliteType::wrap_Object(value);
            }
            static int t_BeidouCivilianNavigationMessage_set__satelliteType(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType::initializeClass, &value))
                {
                  INT_CALL(self->object.setSatelliteType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "satelliteType", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__signal(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              ::org::orekit::gnss::Frequency value((jobject) NULL);
              OBJ_CALL(value = self->object.getSignal());
              return ::org::orekit::gnss::t_Frequency::wrap_Object(value);
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc1(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc1());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc1(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc1", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOc2(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOc2());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOc2(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOc2(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOc2", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOcb(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOcb());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOcb(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOcb(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOcb", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sisaiOe(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSisaiOe());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sisaiOe(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSisaiOe(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisaiOe", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__sismai(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSismai());
              return PyLong_FromLong((long) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__sismai(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSismai(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sismai", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB1Cp());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB1Cp(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB1Cp(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB1Cp", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2ap(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2ap());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2ap(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2ap(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2ap", arg);
              return -1;
            }

            static PyObject *t_BeidouCivilianNavigationMessage_get__tgdB2bI(t_BeidouCivilianNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTgdB2bI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_BeidouCivilianNavigationMessage_set__tgdB2bI(t_BeidouCivilianNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTgdB2bI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tgdB2bI", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *PolynomialRotation::class$ = NULL;
        jmethodID *PolynomialRotation::mids$ = NULL;
        bool PolynomialRotation::live$ = false;

        jclass PolynomialRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/PolynomialRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7a08d7c8afe9826d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_init$_1bc215ef4b343331] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getParametersDrivers_d7cce92225eb0db2] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_193bcb23df54ca95] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_da5b61aadada7c1f] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7a08d7c8afe9826d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1bc215ef4b343331, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::stream::Stream PolynomialRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d7cce92225eb0db2]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_193bcb23df54ca95], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_da5b61aadada7c1f], a0, a1.this$, a2.this$, a3.this$));
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
      namespace los {
        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self);
        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args);
        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data);
        static PyGetSetDef t_PolynomialRotation__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialRotation__methods_[] = {
          DECLARE_METHOD(t_PolynomialRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialRotation)[] = {
          { Py_tp_methods, t_PolynomialRotation__methods_ },
          { Py_tp_init, (void *) t_PolynomialRotation_init_ },
          { Py_tp_getset, t_PolynomialRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialRotation, t_PolynomialRotation, PolynomialRotation);

        void t_PolynomialRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialRotation), &PY_TYPE_DEF(PolynomialRotation), module, "PolynomialRotation", 0);
        }

        void t_PolynomialRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "class_", make_descriptor(PolynomialRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "wrapfn_", make_descriptor(t_PolynomialRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialRotation::initializeClass, 1)))
            return NULL;
          return t_PolynomialRotation::wrap_Object(PolynomialRotation(((t_PolynomialRotation *) arg)->object.this$));
        }
        static PyObject *t_PolynomialRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialRotation_init_(t_PolynomialRotation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skk[D", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialFunction a3((jobject) NULL);
              PolynomialRotation object((jobject) NULL);

              if (!parseArgs(args, "skkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PolynomialRotation(a0, a1, a2, a3));
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

        static PyObject *t_PolynomialRotation_getParametersDrivers(t_PolynomialRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialRotation_transformLOS(t_PolynomialRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ikk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::orekit::rugged::utils::DerivativeGenerator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_PolynomialRotation_get__parametersDrivers(t_PolynomialRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *NumericalPropagatorBuilder::class$ = NULL;
        jmethodID *NumericalPropagatorBuilder::mids$ = NULL;
        bool NumericalPropagatorBuilder::live$ = false;

        jclass NumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/NumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bccbb305e30915b7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_824eb692ea2beac4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_e37f41a34246ae45] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_buildLeastSquaresModel_f4d4f95fc5d13a77] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/BatchLSModel;");
            mids$[mid_buildPropagator_92d6d5df6414e998] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/numerical/NumericalPropagator;");
            mids$[mid_copy_abb2afb1dd55a9aa] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;");
            mids$[mid_getAllForceModels_0d9551367f7ecdef] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_4785d50855609363] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_557b8123390d8d0c] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_setMass_10f281d777284cea] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_bccbb305e30915b7, a0.this$, a1.this$, a2.this$, a3)) {}

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_824eb692ea2beac4, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        void NumericalPropagatorBuilder::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_e37f41a34246ae45], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::BatchLSModel NumericalPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::BatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_f4d4f95fc5d13a77], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::numerical::NumericalPropagator NumericalPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::numerical::NumericalPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_92d6d5df6414e998], a0.this$));
        }

        NumericalPropagatorBuilder NumericalPropagatorBuilder::copy() const
        {
          return NumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_abb2afb1dd55a9aa]));
        }

        ::java::util::List NumericalPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_0d9551367f7ecdef]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder NumericalPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_4785d50855609363]));
        }

        jdouble NumericalPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_557b8123390d8d0c]);
        }

        void NumericalPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_10f281d777284cea], a0);
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
      namespace conversion {
        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data);
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_NumericalPropagatorBuilder, mass),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_NumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagatorBuilder_init_ },
          { Py_tp_getset, t_NumericalPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(NumericalPropagatorBuilder, t_NumericalPropagatorBuilder, NumericalPropagatorBuilder);

        void t_NumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagatorBuilder), &PY_TYPE_DEF(NumericalPropagatorBuilder), module, "NumericalPropagatorBuilder", 0);
        }

        void t_NumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "class_", make_descriptor(NumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_NumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagatorBuilder::wrap_Object(NumericalPropagatorBuilder(((t_NumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::BatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_BatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::numerical::t_NumericalPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          NumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_NumericalPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/IOException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *IOException::class$ = NULL;
    jmethodID *IOException::mids$ = NULL;
    bool IOException::live$ = false;

    jclass IOException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/IOException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_7d9320fd2ea36122] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_0701bef404aae0c6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IOException::IOException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    IOException::IOException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    IOException::IOException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7d9320fd2ea36122, a0.this$)) {}

    IOException::IOException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0701bef404aae0c6, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IOException__methods_[] = {
      DECLARE_METHOD(t_IOException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IOException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IOException)[] = {
      { Py_tp_methods, t_IOException__methods_ },
      { Py_tp_init, (void *) t_IOException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IOException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(IOException, t_IOException, IOException);

    void t_IOException::install(PyObject *module)
    {
      installType(&PY_TYPE(IOException), &PY_TYPE_DEF(IOException), module, "IOException", 0);
    }

    void t_IOException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "class_", make_descriptor(IOException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "wrapfn_", make_descriptor(t_IOException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IOException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IOException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IOException::initializeClass, 1)))
        return NULL;
      return t_IOException::wrap_Object(IOException(((t_IOException *) arg)->object.this$));
    }
    static PyObject *t_IOException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IOException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IOException_init_(t_IOException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IOException object((jobject) NULL);

          INT_CALL(object = IOException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IOException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IOException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IOException(a0, a1));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider$RawSphericalHarmonics::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider$RawSphericalHarmonics::mids$ = NULL;
          bool RawSphericalHarmonicsProvider$RawSphericalHarmonics::live$ = false;

          jclass RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRawCnm_21b81d54c06b64b0] = env->getMethodID(cls, "getRawCnm", "(II)D");
              mids$[mid_getRawSnm_21b81d54c06b64b0] = env->getMethodID(cls, "getRawSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawCnm_21b81d54c06b64b0], a0, a1);
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawSnm_21b81d54c06b64b0], a0, a1);
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
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawCnm, METH_VARARGS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), &PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics), module, "RawSphericalHarmonicsProvider$RawSphericalHarmonics", 0);
          }

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "class_", make_descriptor(RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(RawSphericalHarmonicsProvider$RawSphericalHarmonics(((t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawCnm", args);
            return NULL;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/propagation/events/GroundFieldOfViewDetector.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundFieldOfViewDetector::class$ = NULL;
        jmethodID *GroundFieldOfViewDetector::mids$ = NULL;
        bool GroundFieldOfViewDetector::live$ = false;

        jclass GroundFieldOfViewDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundFieldOfViewDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9308ec53382db087] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/geometry/fov/FieldOfView;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getFOV_0cb1db9d43d06211] = env->getMethodID(cls, "getFOV", "()Lorg/orekit/geometry/fov/FieldOfView;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_create_b54b7a336af66215] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundFieldOfViewDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundFieldOfViewDetector::GroundFieldOfViewDetector(const ::org::orekit::frames::Frame & a0, const ::org::orekit::geometry::fov::FieldOfView & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_9308ec53382db087, a0.this$, a1.this$)) {}

        jdouble GroundFieldOfViewDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::geometry::fov::FieldOfView GroundFieldOfViewDetector::getFOV() const
        {
          return ::org::orekit::geometry::fov::FieldOfView(env->callObjectMethod(this$, mids$[mid_getFOV_0cb1db9d43d06211]));
        }

        ::org::orekit::frames::Frame GroundFieldOfViewDetector::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
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
      namespace events {
        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args);
        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args);
        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self);
        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data);
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data);
        static PyGetSetDef t_GroundFieldOfViewDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, fOV),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, frame),
          DECLARE_GET_FIELD(t_GroundFieldOfViewDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundFieldOfViewDetector__methods_[] = {
          DECLARE_METHOD(t_GroundFieldOfViewDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFOV, METH_NOARGS),
          DECLARE_METHOD(t_GroundFieldOfViewDetector, getFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundFieldOfViewDetector)[] = {
          { Py_tp_methods, t_GroundFieldOfViewDetector__methods_ },
          { Py_tp_init, (void *) t_GroundFieldOfViewDetector_init_ },
          { Py_tp_getset, t_GroundFieldOfViewDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundFieldOfViewDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundFieldOfViewDetector, t_GroundFieldOfViewDetector, GroundFieldOfViewDetector);
        PyObject *t_GroundFieldOfViewDetector::wrap_Object(const GroundFieldOfViewDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundFieldOfViewDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundFieldOfViewDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundFieldOfViewDetector *self = (t_GroundFieldOfViewDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundFieldOfViewDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundFieldOfViewDetector), &PY_TYPE_DEF(GroundFieldOfViewDetector), module, "GroundFieldOfViewDetector", 0);
        }

        void t_GroundFieldOfViewDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "class_", make_descriptor(GroundFieldOfViewDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "wrapfn_", make_descriptor(t_GroundFieldOfViewDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundFieldOfViewDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundFieldOfViewDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundFieldOfViewDetector::initializeClass, 1)))
            return NULL;
          return t_GroundFieldOfViewDetector::wrap_Object(GroundFieldOfViewDetector(((t_GroundFieldOfViewDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundFieldOfViewDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundFieldOfViewDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundFieldOfViewDetector_of_(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundFieldOfViewDetector_init_(t_GroundFieldOfViewDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::geometry::fov::FieldOfView a1((jobject) NULL);
          GroundFieldOfViewDetector object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::geometry::fov::FieldOfView::initializeClass, &a0, &a1))
          {
            INT_CALL(object = GroundFieldOfViewDetector(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundFieldOfViewDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundFieldOfViewDetector_g(t_GroundFieldOfViewDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundFieldOfViewDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFOV(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::geometry::fov::FieldOfView result((jobject) NULL);
          OBJ_CALL(result = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(result);
        }

        static PyObject *t_GroundFieldOfViewDetector_getFrame(t_GroundFieldOfViewDetector *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }
        static PyObject *t_GroundFieldOfViewDetector_get__parameters_(t_GroundFieldOfViewDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GroundFieldOfViewDetector_get__fOV(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::geometry::fov::FieldOfView value((jobject) NULL);
          OBJ_CALL(value = self->object.getFOV());
          return ::org::orekit::geometry::fov::t_FieldOfView::wrap_Object(value);
        }

        static PyObject *t_GroundFieldOfViewDetector_get__frame(t_GroundFieldOfViewDetector *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {

          ::java::lang::Class *ParsedMessage::class$ = NULL;
          jmethodID *ParsedMessage::mids$ = NULL;
          bool ParsedMessage::live$ = false;

          jclass ParsedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ParsedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTypeCode_412668abc8d889e9] = env->getMethodID(cls, "getTypeCode", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint ParsedMessage::getTypeCode() const
          {
            return env->callIntMethod(this$, mids$[mid_getTypeCode_412668abc8d889e9]);
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
          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self);
          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data);
          static PyGetSetDef t_ParsedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedMessage, typeCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedMessage__methods_[] = {
            DECLARE_METHOD(t_ParsedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedMessage, getTypeCode, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedMessage)[] = {
            { Py_tp_methods, t_ParsedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ParsedMessage, t_ParsedMessage, ParsedMessage);

          void t_ParsedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedMessage), &PY_TYPE_DEF(ParsedMessage), module, "ParsedMessage", 0);
          }

          void t_ParsedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "class_", make_descriptor(ParsedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "wrapfn_", make_descriptor(t_ParsedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ParsedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedMessage::initializeClass, 1)))
              return NULL;
            return t_ParsedMessage::wrap_Object(ParsedMessage(((t_ParsedMessage *) arg)->object.this$));
          }
          static PyObject *t_ParsedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedMessage_getTypeCode(t_ParsedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTypeCode());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ParsedMessage_get__typeCode(t_ParsedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTypeCode());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileWriter::class$ = NULL;
        jmethodID *AttitudeEphemerisFileWriter::mids$ = NULL;
        bool AttitudeEphemerisFileWriter::live$ = false;

        jclass AttitudeEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_write_3e1b1b36d1b8b3a1] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");
            mids$[mid_write_dd179231c59f3177] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::String & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_3e1b1b36d1b8b3a1], a0.this$, a1.this$);
        }

        void AttitudeEphemerisFileWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_write_dd179231c59f3177], a0.this$, a1.this$);
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
        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args);

        static PyMethodDef t_AttitudeEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileWriter)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileWriter, t_AttitudeEphemerisFileWriter, AttitudeEphemerisFileWriter);

        void t_AttitudeEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileWriter), &PY_TYPE_DEF(AttitudeEphemerisFileWriter), module, "AttitudeEphemerisFileWriter", 0);
        }

        void t_AttitudeEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "class_", make_descriptor(AttitudeEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileWriter::wrap_Object(AttitudeEphemerisFileWriter(((t_AttitudeEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileWriter_write(t_AttitudeEphemerisFileWriter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "sK", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
              {
                OBJ_CALL(self->object.write(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/Edge.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Edge::class$ = NULL;
          jmethodID *Edge::mids$ = NULL;
          bool Edge::live$ = false;

          jclass Edge::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Edge");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCircle_7e98cfa0ffbe686f] = env->getMethodID(cls, "getCircle", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getEnd_3a3b22b9c96e532e] = env->getMethodID(cls, "getEnd", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");
              mids$[mid_getLength_557b8123390d8d0c] = env->getMethodID(cls, "getLength", "()D");
              mids$[mid_getPointAt_20de5f9d51c6611f] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getStart_3a3b22b9c96e532e] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/geometry/spherical/twod/Vertex;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::spherical::twod::Circle Edge::getCircle() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Circle(env->callObjectMethod(this$, mids$[mid_getCircle_7e98cfa0ffbe686f]));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getEnd() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getEnd_3a3b22b9c96e532e]));
          }

          jdouble Edge::getLength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLength_557b8123390d8d0c]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Edge::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_20de5f9d51c6611f], a0));
          }

          ::org::hipparchus::geometry::spherical::twod::Vertex Edge::getStart() const
          {
            return ::org::hipparchus::geometry::spherical::twod::Vertex(env->callObjectMethod(this$, mids$[mid_getStart_3a3b22b9c96e532e]));
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
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Edge_getCircle(t_Edge *self);
          static PyObject *t_Edge_getEnd(t_Edge *self);
          static PyObject *t_Edge_getLength(t_Edge *self);
          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg);
          static PyObject *t_Edge_getStart(t_Edge *self);
          static PyObject *t_Edge_get__circle(t_Edge *self, void *data);
          static PyObject *t_Edge_get__end(t_Edge *self, void *data);
          static PyObject *t_Edge_get__length(t_Edge *self, void *data);
          static PyObject *t_Edge_get__start(t_Edge *self, void *data);
          static PyGetSetDef t_Edge__fields_[] = {
            DECLARE_GET_FIELD(t_Edge, circle),
            DECLARE_GET_FIELD(t_Edge, end),
            DECLARE_GET_FIELD(t_Edge, length),
            DECLARE_GET_FIELD(t_Edge, start),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Edge__methods_[] = {
            DECLARE_METHOD(t_Edge, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Edge, getCircle, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getEnd, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getLength, METH_NOARGS),
            DECLARE_METHOD(t_Edge, getPointAt, METH_O),
            DECLARE_METHOD(t_Edge, getStart, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Edge)[] = {
            { Py_tp_methods, t_Edge__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Edge__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Edge)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Edge, t_Edge, Edge);

          void t_Edge::install(PyObject *module)
          {
            installType(&PY_TYPE(Edge), &PY_TYPE_DEF(Edge), module, "Edge", 0);
          }

          void t_Edge::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "class_", make_descriptor(Edge::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "wrapfn_", make_descriptor(t_Edge::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Edge), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Edge_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Edge::initializeClass, 1)))
              return NULL;
            return t_Edge::wrap_Object(Edge(((t_Edge *) arg)->object.this$));
          }
          static PyObject *t_Edge_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Edge::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Edge_getCircle(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(result);
          }

          static PyObject *t_Edge_getEnd(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_getLength(t_Edge *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLength());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Edge_getPointAt(t_Edge *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getPointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", arg);
            return NULL;
          }

          static PyObject *t_Edge_getStart(t_Edge *self)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex result((jobject) NULL);
            OBJ_CALL(result = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(result);
          }

          static PyObject *t_Edge_get__circle(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getCircle());
            return ::org::hipparchus::geometry::spherical::twod::t_Circle::wrap_Object(value);
          }

          static PyObject *t_Edge_get__end(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnd());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }

          static PyObject *t_Edge_get__length(t_Edge *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLength());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Edge_get__start(t_Edge *self, void *data)
          {
            ::org::hipparchus::geometry::spherical::twod::Vertex value((jobject) NULL);
            OBJ_CALL(value = self->object.getStart());
            return ::org::hipparchus::geometry::spherical::twod::t_Vertex::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *PerturbationsKey::class$ = NULL;
              jmethodID *PerturbationsKey::mids$ = NULL;
              bool PerturbationsKey::live$ = false;
              PerturbationsKey *PerturbationsKey::ALBEDO_GRID_SIZE = NULL;
              PerturbationsKey *PerturbationsKey::ALBEDO_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::ATMOSPHERIC_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::CENTRAL_BODY_ROTATION = NULL;
              PerturbationsKey *PerturbationsKey::COMMENT = NULL;
              PerturbationsKey *PerturbationsKey::EQUATORIAL_RADIUS = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_AP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_DST = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_KP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::GM = NULL;
              PerturbationsKey *PerturbationsKey::GRAVITY_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::N_BODY_PERTURBATIONS = NULL;
              PerturbationsKey *PerturbationsKey::OBLATE_FLATTENING = NULL;
              PerturbationsKey *PerturbationsKey::OCEAN_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::REDUCTION_THEORY = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_BODIES = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SOLID_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SRP_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_EPOCH = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_SOURCE = NULL;
              PerturbationsKey *PerturbationsKey::SW_INTERP_METHOD = NULL;

              jclass PerturbationsKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_5e0e8ad62a45aa65] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;)Z");
                  mids$[mid_valueOf_9f45414097b601c3] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");
                  mids$[mid_values_d84de0734e3601d8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALBEDO_GRID_SIZE = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_GRID_SIZE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ALBEDO_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ATMOSPHERIC_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  CENTRAL_BODY_ROTATION = new PerturbationsKey(env->getStaticObjectField(cls, "CENTRAL_BODY_ROTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  COMMENT = new PerturbationsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  EQUATORIAL_RADIUS = new PerturbationsKey(env->getStaticObjectField(cls, "EQUATORIAL_RADIUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_AP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_AP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_DST = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_DST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_KP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_KP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GM = new PerturbationsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GRAVITY_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  N_BODY_PERTURBATIONS = new PerturbationsKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OBLATE_FLATTENING = new PerturbationsKey(env->getStaticObjectField(cls, "OBLATE_FLATTENING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OCEAN_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "OCEAN_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  REDUCTION_THEORY = new PerturbationsKey(env->getStaticObjectField(cls, "REDUCTION_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_BODIES = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_BODIES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SOLID_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SOLID_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SRP_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SRP_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_EPOCH = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_SOURCE = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_INTERP_METHOD = new PerturbationsKey(env->getStaticObjectField(cls, "SW_INTERP_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean PerturbationsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_5e0e8ad62a45aa65], a0.this$, a1.this$, a2.this$);
              }

              PerturbationsKey PerturbationsKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return PerturbationsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9f45414097b601c3], a0.this$));
              }

              JArray< PerturbationsKey > PerturbationsKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< PerturbationsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d84de0734e3601d8]));
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_PerturbationsKey_values(PyTypeObject *type);
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data);
              static PyGetSetDef t_PerturbationsKey__fields_[] = {
                DECLARE_GET_FIELD(t_PerturbationsKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PerturbationsKey__methods_[] = {
                DECLARE_METHOD(t_PerturbationsKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, process, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PerturbationsKey)[] = {
                { Py_tp_methods, t_PerturbationsKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PerturbationsKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PerturbationsKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(PerturbationsKey, t_PerturbationsKey, PerturbationsKey);
              PyObject *t_PerturbationsKey::wrap_Object(const PerturbationsKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_PerturbationsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_PerturbationsKey::install(PyObject *module)
              {
                installType(&PY_TYPE(PerturbationsKey), &PY_TYPE_DEF(PerturbationsKey), module, "PerturbationsKey", 0);
              }

              void t_PerturbationsKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "class_", make_descriptor(PerturbationsKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "wrapfn_", make_descriptor(t_PerturbationsKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(PerturbationsKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_GRID_SIZE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_GRID_SIZE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ATMOSPHERIC_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ATMOSPHERIC_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "CENTRAL_BODY_ROTATION", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::CENTRAL_BODY_ROTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "COMMENT", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "EQUATORIAL_RADIUS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::EQUATORIAL_RADIUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_AP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_AP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_DST", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_DST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_KP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_KP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GM", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GRAVITY_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GRAVITY_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "N_BODY_PERTURBATIONS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::N_BODY_PERTURBATIONS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OBLATE_FLATTENING", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OBLATE_FLATTENING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OCEAN_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OCEAN_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "REDUCTION_THEORY", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::REDUCTION_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_BODIES", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_BODIES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SOLID_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SOLID_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SRP_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SRP_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_EPOCH", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_SOURCE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_INTERP_METHOD", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_INTERP_METHOD)));
              }

              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PerturbationsKey::initializeClass, 1)))
                  return NULL;
                return t_PerturbationsKey::wrap_Object(PerturbationsKey(((t_PerturbationsKey *) arg)->object.this$));
              }
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PerturbationsKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                PerturbationsKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::valueOf(a0));
                  return t_PerturbationsKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_PerturbationsKey_values(PyTypeObject *type)
              {
                JArray< PerturbationsKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::values());
                return JArray<jobject>(result.this$).wrap(t_PerturbationsKey::wrap_jobject);
              }
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/models/earth/tessellation/PythonTileAiming.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *PythonTileAiming::class$ = NULL;
          jmethodID *PythonTileAiming::mids$ = NULL;
          bool PythonTileAiming::live$ = false;

          jclass PythonTileAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/PythonTileAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_alongTileDirection_94d0bf825c02adfa] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getSingularPoints_0d9551367f7ecdef] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonTileAiming::PythonTileAiming() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonTileAiming::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonTileAiming::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonTileAiming::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        namespace tessellation {
          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self);
          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args);
          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data);
          static PyGetSetDef t_PythonTileAiming__fields_[] = {
            DECLARE_GET_FIELD(t_PythonTileAiming, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonTileAiming__methods_[] = {
            DECLARE_METHOD(t_PythonTileAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonTileAiming, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonTileAiming, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonTileAiming)[] = {
            { Py_tp_methods, t_PythonTileAiming__methods_ },
            { Py_tp_init, (void *) t_PythonTileAiming_init_ },
            { Py_tp_getset, t_PythonTileAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonTileAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonTileAiming, t_PythonTileAiming, PythonTileAiming);

          void t_PythonTileAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonTileAiming), &PY_TYPE_DEF(PythonTileAiming), module, "PythonTileAiming", 1);
          }

          void t_PythonTileAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "class_", make_descriptor(PythonTileAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "wrapfn_", make_descriptor(t_PythonTileAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTileAiming), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonTileAiming::initializeClass);
            JNINativeMethod methods[] = {
              { "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonTileAiming_alongTileDirection0 },
              { "getSingularPoints", "()Ljava/util/List;", (void *) t_PythonTileAiming_getSingularPoints1 },
              { "pythonDecRef", "()V", (void *) t_PythonTileAiming_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonTileAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonTileAiming::initializeClass, 1)))
              return NULL;
            return t_PythonTileAiming::wrap_Object(PythonTileAiming(((t_PythonTileAiming *) arg)->object.this$));
          }
          static PyObject *t_PythonTileAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonTileAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonTileAiming_init_(t_PythonTileAiming *self, PyObject *args, PyObject *kwds)
          {
            PythonTileAiming object((jobject) NULL);

            INT_CALL(object = PythonTileAiming());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonTileAiming_finalize(t_PythonTileAiming *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonTileAiming_pythonExtension(t_PythonTileAiming *self, PyObject *args)
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

          static jobject JNICALL t_PythonTileAiming_alongTileDirection0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
            PyObject *o1 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a1));
            PyObject *result = PyObject_CallMethod(obj, "alongTileDirection", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("alongTileDirection", result);
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

          static jobject JNICALL t_PythonTileAiming_getSingularPoints1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSingularPoints", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSingularPoints", result);
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

          static void JNICALL t_PythonTileAiming_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonTileAiming::mids$[PythonTileAiming::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonTileAiming_get__self(t_PythonTileAiming *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/PythonMeasurementFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *PythonMeasurementFilter::class$ = NULL;
          jmethodID *PythonMeasurementFilter::mids$ = NULL;
          bool PythonMeasurementFilter::live$ = false;

          jclass PythonMeasurementFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/PythonMeasurementFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_filter_87933cc299a70778] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementFilter::PythonMeasurementFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMeasurementFilter::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMeasurementFilter::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMeasurementFilter::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        namespace filtering {
          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args);
          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self);
          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args);
          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data);
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data);
          static PyGetSetDef t_PythonMeasurementFilter__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, self),
            DECLARE_GET_FIELD(t_PythonMeasurementFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementFilter__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementFilter, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementFilter)[] = {
            { Py_tp_methods, t_PythonMeasurementFilter__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementFilter_init_ },
            { Py_tp_getset, t_PythonMeasurementFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementFilter, t_PythonMeasurementFilter, PythonMeasurementFilter);
          PyObject *t_PythonMeasurementFilter::wrap_Object(const PythonMeasurementFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementFilter *self = (t_PythonMeasurementFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementFilter), &PY_TYPE_DEF(PythonMeasurementFilter), module, "PythonMeasurementFilter", 1);
          }

          void t_PythonMeasurementFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "class_", make_descriptor(PythonMeasurementFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "wrapfn_", make_descriptor(t_PythonMeasurementFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementFilter), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementFilter::initializeClass);
            JNINativeMethod methods[] = {
              { "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMeasurementFilter_filter0 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementFilter_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonMeasurementFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementFilter::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementFilter::wrap_Object(PythonMeasurementFilter(((t_PythonMeasurementFilter *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementFilter_of_(t_PythonMeasurementFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementFilter_init_(t_PythonMeasurementFilter *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementFilter object((jobject) NULL);

            INT_CALL(object = PythonMeasurementFilter());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementFilter_finalize(t_PythonMeasurementFilter *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementFilter_pythonExtension(t_PythonMeasurementFilter *self, PyObject *args)
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

          static void JNICALL t_PythonMeasurementFilter_filter0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "filter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementFilter_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementFilter::mids$[PythonMeasurementFilter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementFilter_get__self(t_PythonMeasurementFilter *self, void *data)
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
          static PyObject *t_PythonMeasurementFilter_get__parameters_(t_PythonMeasurementFilter *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201Data::class$ = NULL;
              jmethodID *SsrIm201Data::mids$ = NULL;
              bool SsrIm201Data::live$ = false;

              jclass SsrIm201Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCnm_8cf5267aa13a77f3] = env->getMethodID(cls, "getCnm", "()[[D");
                  mids$[mid_getHeightIonosphericLayer_557b8123390d8d0c] = env->getMethodID(cls, "getHeightIonosphericLayer", "()D");
                  mids$[mid_getSnm_8cf5267aa13a77f3] = env->getMethodID(cls, "getSnm", "()[[D");
                  mids$[mid_getSphericalHarmonicsDegree_412668abc8d889e9] = env->getMethodID(cls, "getSphericalHarmonicsDegree", "()I");
                  mids$[mid_getSphericalHarmonicsOrder_412668abc8d889e9] = env->getMethodID(cls, "getSphericalHarmonicsOrder", "()I");
                  mids$[mid_setCnm_edb361bfdd1ad9ae] = env->getMethodID(cls, "setCnm", "([[D)V");
                  mids$[mid_setHeightIonosphericLayer_10f281d777284cea] = env->getMethodID(cls, "setHeightIonosphericLayer", "(D)V");
                  mids$[mid_setSnm_edb361bfdd1ad9ae] = env->getMethodID(cls, "setSnm", "([[D)V");
                  mids$[mid_setSphericalHarmonicsDegree_a3da1a935cb37f7b] = env->getMethodID(cls, "setSphericalHarmonicsDegree", "(I)V");
                  mids$[mid_setSphericalHarmonicsOrder_a3da1a935cb37f7b] = env->getMethodID(cls, "setSphericalHarmonicsOrder", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201Data::SsrIm201Data() : ::org::orekit::gnss::metric::messages::ssr::SsrData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              JArray< JArray< jdouble > > SsrIm201Data::getCnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCnm_8cf5267aa13a77f3]));
              }

              jdouble SsrIm201Data::getHeightIonosphericLayer() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHeightIonosphericLayer_557b8123390d8d0c]);
              }

              JArray< JArray< jdouble > > SsrIm201Data::getSnm() const
              {
                return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getSnm_8cf5267aa13a77f3]));
              }

              jint SsrIm201Data::getSphericalHarmonicsDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsDegree_412668abc8d889e9]);
              }

              jint SsrIm201Data::getSphericalHarmonicsOrder() const
              {
                return env->callIntMethod(this$, mids$[mid_getSphericalHarmonicsOrder_412668abc8d889e9]);
              }

              void SsrIm201Data::setCnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCnm_edb361bfdd1ad9ae], a0.this$);
              }

              void SsrIm201Data::setHeightIonosphericLayer(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHeightIonosphericLayer_10f281d777284cea], a0);
              }

              void SsrIm201Data::setSnm(const JArray< JArray< jdouble > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSnm_edb361bfdd1ad9ae], a0.this$);
              }

              void SsrIm201Data::setSphericalHarmonicsDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsDegree_a3da1a935cb37f7b], a0);
              }

              void SsrIm201Data::setSphericalHarmonicsOrder(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSphericalHarmonicsOrder_a3da1a935cb37f7b], a0);
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
            namespace subtype {
              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self);
              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg);
              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data);
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIm201Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIm201Data, cnm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, heightIonosphericLayer),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, snm),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsDegree),
                DECLARE_GETSET_FIELD(t_SsrIm201Data, sphericalHarmonicsOrder),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201Data__methods_[] = {
                DECLARE_METHOD(t_SsrIm201Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201Data, getCnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getHeightIonosphericLayer, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSnm, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsDegree, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, getSphericalHarmonicsOrder, METH_NOARGS),
                DECLARE_METHOD(t_SsrIm201Data, setCnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setHeightIonosphericLayer, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSnm, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsDegree, METH_O),
                DECLARE_METHOD(t_SsrIm201Data, setSphericalHarmonicsOrder, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201Data)[] = {
                { Py_tp_methods, t_SsrIm201Data__methods_ },
                { Py_tp_init, (void *) t_SsrIm201Data_init_ },
                { Py_tp_getset, t_SsrIm201Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrData),
                NULL
              };

              DEFINE_TYPE(SsrIm201Data, t_SsrIm201Data, SsrIm201Data);

              void t_SsrIm201Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201Data), &PY_TYPE_DEF(SsrIm201Data), module, "SsrIm201Data", 0);
              }

              void t_SsrIm201Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "class_", make_descriptor(SsrIm201Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "wrapfn_", make_descriptor(t_SsrIm201Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201Data::wrap_Object(SsrIm201Data(((t_SsrIm201Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIm201Data_init_(t_SsrIm201Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIm201Data object((jobject) NULL);

                INT_CALL(object = SsrIm201Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIm201Data_getCnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getCnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getHeightIonosphericLayer(t_SsrIm201Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIm201Data_getSnm(t_SsrIm201Data *self)
              {
                JArray< JArray< jdouble > > result((jobject) NULL);
                OBJ_CALL(result = self->object.getSnm());
                return JArray<jobject>(result.this$).wrap(NULL);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsDegree(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_getSphericalHarmonicsOrder(t_SsrIm201Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIm201Data_setCnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setCnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setHeightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHeightIonosphericLayer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHeightIonosphericLayer", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSnm(t_SsrIm201Data *self, PyObject *arg)
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);

                if (!parseArg(arg, "[[D", &a0))
                {
                  OBJ_CALL(self->object.setSnm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSnm", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsDegree", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_setSphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSphericalHarmonicsOrder(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSphericalHarmonicsOrder", arg);
                return NULL;
              }

              static PyObject *t_SsrIm201Data_get__cnm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getCnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__cnm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setCnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "cnm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__heightIonosphericLayer(t_SsrIm201Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHeightIonosphericLayer());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIm201Data_set__heightIonosphericLayer(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHeightIonosphericLayer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "heightIonosphericLayer", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__snm(t_SsrIm201Data *self, void *data)
              {
                JArray< JArray< jdouble > > value((jobject) NULL);
                OBJ_CALL(value = self->object.getSnm());
                return JArray<jobject>(value.this$).wrap(NULL);
              }
              static int t_SsrIm201Data_set__snm(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< jdouble > > value((jobject) NULL);
                  if (!parseArg(arg, "[[D", &value))
                  {
                    INT_CALL(self->object.setSnm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "snm", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsDegree(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsDegree(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsDegree", arg);
                return -1;
              }

              static PyObject *t_SsrIm201Data_get__sphericalHarmonicsOrder(t_SsrIm201Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSphericalHarmonicsOrder());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIm201Data_set__sphericalHarmonicsOrder(t_SsrIm201Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSphericalHarmonicsOrder(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sphericalHarmonicsOrder", arg);
                return -1;
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
#include "org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/DoubleArrayDictionary.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalPropagator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *PythonAbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *PythonAbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool PythonAbstractAnalyticalMatricesHarvester::live$ = false;

        jclass PythonAbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/PythonAbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_af6d9a2ae8eb37fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/AbstractAnalyticalPropagator;Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getGradientConverter_ad82abd02e8e26ae] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractAnalyticalMatricesHarvester::PythonAbstractAnalyticalMatricesHarvester(const ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator & a0, const ::java::lang::String & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::orekit::utils::DoubleArrayDictionary & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester(env->newObject(initializeClass, &mids$, mid_init$_af6d9a2ae8eb37fb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void PythonAbstractAnalyticalMatricesHarvester::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAbstractAnalyticalMatricesHarvester::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAbstractAnalyticalMatricesHarvester::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data);
        static PyGetSetDef t_PythonAbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractAnalyticalMatricesHarvester, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractAnalyticalMatricesHarvester, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_PythonAbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractAnalyticalMatricesHarvester_init_ },
          { Py_tp_getset, t_PythonAbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(PythonAbstractAnalyticalMatricesHarvester, t_PythonAbstractAnalyticalMatricesHarvester, PythonAbstractAnalyticalMatricesHarvester);

        void t_PythonAbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(PythonAbstractAnalyticalMatricesHarvester), module, "PythonAbstractAnalyticalMatricesHarvester", 1);
        }

        void t_PythonAbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "class_", make_descriptor(PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_PythonAbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractAnalyticalMatricesHarvester::initializeClass);
          JNINativeMethod methods[] = {
            { "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;", (void *) t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractAnalyticalMatricesHarvester::wrap_Object(PythonAbstractAnalyticalMatricesHarvester(((t_PythonAbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractAnalyticalMatricesHarvester_init_(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
          ::org::orekit::utils::DoubleArrayDictionary a3((jobject) NULL);
          PythonAbstractAnalyticalMatricesHarvester object((jobject) NULL);

          if (!parseArgs(args, "kskk", ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::utils::DoubleArrayDictionary::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = PythonAbstractAnalyticalMatricesHarvester(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_finalize(t_PythonAbstractAnalyticalMatricesHarvester *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_pythonExtension(t_PythonAbstractAnalyticalMatricesHarvester *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractAnalyticalMatricesHarvester_getGradientConverter0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getGradientConverter", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter::initializeClass, &value))
          {
            throwTypeError("getGradientConverter", result);
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

        static void JNICALL t_PythonAbstractAnalyticalMatricesHarvester_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractAnalyticalMatricesHarvester::mids$[PythonAbstractAnalyticalMatricesHarvester::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractAnalyticalMatricesHarvester_get__self(t_PythonAbstractAnalyticalMatricesHarvester *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *BistaticRangeRate::class$ = NULL;
        jmethodID *BistaticRangeRate::mids$ = NULL;
        bool BistaticRangeRate::live$ = false;
        ::java::lang::String *BistaticRangeRate::MEASUREMENT_TYPE = NULL;

        jclass BistaticRangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/BistaticRangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_631cad984dc812e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getEmitterStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getEmitterStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getReceiverStation_2161f2a4a8c885ec] = env->getMethodID(cls, "getReceiverStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BistaticRangeRate::BistaticRangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_631cad984dc812e4, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getEmitterStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getEmitterStation_2161f2a4a8c885ec]));
        }

        ::org::orekit::estimation::measurements::GroundStation BistaticRangeRate::getReceiverStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getReceiverStation_2161f2a4a8c885ec]));
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
        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args);
        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self);
        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data);
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data);
        static PyGetSetDef t_BistaticRangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_BistaticRangeRate, emitterStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, receiverStation),
          DECLARE_GET_FIELD(t_BistaticRangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BistaticRangeRate__methods_[] = {
          DECLARE_METHOD(t_BistaticRangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BistaticRangeRate, of_, METH_VARARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getEmitterStation, METH_NOARGS),
          DECLARE_METHOD(t_BistaticRangeRate, getReceiverStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRate)[] = {
          { Py_tp_methods, t_BistaticRangeRate__methods_ },
          { Py_tp_init, (void *) t_BistaticRangeRate_init_ },
          { Py_tp_getset, t_BistaticRangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BistaticRangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(BistaticRangeRate, t_BistaticRangeRate, BistaticRangeRate);
        PyObject *t_BistaticRangeRate::wrap_Object(const BistaticRangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BistaticRangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BistaticRangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BistaticRangeRate *self = (t_BistaticRangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BistaticRangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(BistaticRangeRate), &PY_TYPE_DEF(BistaticRangeRate), module, "BistaticRangeRate", 0);
        }

        void t_BistaticRangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "class_", make_descriptor(BistaticRangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "wrapfn_", make_descriptor(t_BistaticRangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(BistaticRangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*BistaticRangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_BistaticRangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BistaticRangeRate::initializeClass, 1)))
            return NULL;
          return t_BistaticRangeRate::wrap_Object(BistaticRangeRate(((t_BistaticRangeRate *) arg)->object.this$));
        }
        static PyObject *t_BistaticRangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BistaticRangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BistaticRangeRate_of_(t_BistaticRangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BistaticRangeRate_init_(t_BistaticRangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          BistaticRangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = BistaticRangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BistaticRangeRate_getEmitterStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_BistaticRangeRate_getReceiverStation(t_BistaticRangeRate *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getReceiverStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_BistaticRangeRate_get__parameters_(t_BistaticRangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BistaticRangeRate_get__emitterStation(t_BistaticRangeRate *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getEmitterStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_BistaticRangeRate_get__receiverStation(t_BistaticRangeRate *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TrivariateGridInterpolator::class$ = NULL;
        jmethodID *TrivariateGridInterpolator::mids$ = NULL;
        bool TrivariateGridInterpolator::live$ = false;

        jclass TrivariateGridInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TrivariateGridInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_7d6b4f8b98e7e8f3] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/TrivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::TrivariateFunction TrivariateGridInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::TrivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_7d6b4f8b98e7e8f3], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace interpolation {
        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args);

        static PyMethodDef t_TrivariateGridInterpolator__methods_[] = {
          DECLARE_METHOD(t_TrivariateGridInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TrivariateGridInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TrivariateGridInterpolator)[] = {
          { Py_tp_methods, t_TrivariateGridInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TrivariateGridInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TrivariateGridInterpolator, t_TrivariateGridInterpolator, TrivariateGridInterpolator);

        void t_TrivariateGridInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TrivariateGridInterpolator), &PY_TYPE_DEF(TrivariateGridInterpolator), module, "TrivariateGridInterpolator", 0);
        }

        void t_TrivariateGridInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "class_", make_descriptor(TrivariateGridInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "wrapfn_", make_descriptor(t_TrivariateGridInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TrivariateGridInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TrivariateGridInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TrivariateGridInterpolator::initializeClass, 1)))
            return NULL;
          return t_TrivariateGridInterpolator::wrap_Object(TrivariateGridInterpolator(((t_TrivariateGridInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TrivariateGridInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TrivariateGridInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TrivariateGridInterpolator_interpolate(t_TrivariateGridInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::TrivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::t_TrivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$IdentityPreconditioner::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$IdentityPreconditioner::live$ = false;

            jclass NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$IdentityPreconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_precondition_d2593442847fe350] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$IdentityPreconditioner::NonLinearConjugateGradientOptimizer$IdentityPreconditioner() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            JArray< jdouble > NonLinearConjugateGradientOptimizer$IdentityPreconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_d2593442847fe350], a0.this$, a1.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__methods_ },
              { Py_tp_init, (void *) t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_ },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$IdentityPreconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner, t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner, NonLinearConjugateGradientOptimizer$IdentityPreconditioner);
            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(const NonLinearConjugateGradientOptimizer$IdentityPreconditioner& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self = (t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), module, "NonLinearConjugateGradientOptimizer$IdentityPreconditioner", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$IdentityPreconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner::wrap_Object(NonLinearConjugateGradientOptimizer$IdentityPreconditioner(((t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$IdentityPreconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_of_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_init_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args, PyObject *kwds)
            {
              NonLinearConjugateGradientOptimizer$IdentityPreconditioner object((jobject) NULL);

              INT_CALL(object = NonLinearConjugateGradientOptimizer$IdentityPreconditioner());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);

              return 0;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_precondition(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
              return NULL;
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner_get__parameters_(t_NonLinearConjugateGradientOptimizer$IdentityPreconditioner *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseBuilder::class$ = NULL;
          jmethodID *PhaseBuilder::mids$ = NULL;
          bool PhaseBuilder::live$ = false;

          jclass PhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ea91a9a36f19e05] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_2399d3358731d055] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/Phase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseBuilder::PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_6ea91a9a36f19e05, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::gnss::Phase PhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::Phase(env->callObjectMethod(this$, mids$[mid_build_2399d3358731d055], a0.this$, a1.this$));
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
          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args);
          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args);
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data);
          static PyGetSetDef t_PhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_PhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseBuilder)[] = {
            { Py_tp_methods, t_PhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_PhaseBuilder_init_ },
            { Py_tp_getset, t_PhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PhaseBuilder, t_PhaseBuilder, PhaseBuilder);
          PyObject *t_PhaseBuilder::wrap_Object(const PhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseBuilder), &PY_TYPE_DEF(PhaseBuilder), module, "PhaseBuilder", 0);
          }

          void t_PhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "class_", make_descriptor(PhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "wrapfn_", make_descriptor(t_PhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_PhaseBuilder::wrap_Object(PhaseBuilder(((t_PhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            PhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::Phase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_Phase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data)
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
#include "org/orekit/forces/gravity/LenseThirringRelativity.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *LenseThirringRelativity::class$ = NULL;
        jmethodID *LenseThirringRelativity::mids$ = NULL;
        bool LenseThirringRelativity::live$ = false;

        jclass LenseThirringRelativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/LenseThirringRelativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d73ae7ef61d1db39] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LenseThirringRelativity::LenseThirringRelativity(jdouble a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d73ae7ef61d1db39, a0, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LenseThirringRelativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        jboolean LenseThirringRelativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        ::java::util::List LenseThirringRelativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args);
        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self);
        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data);
        static PyGetSetDef t_LenseThirringRelativity__fields_[] = {
          DECLARE_GET_FIELD(t_LenseThirringRelativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LenseThirringRelativity__methods_[] = {
          DECLARE_METHOD(t_LenseThirringRelativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LenseThirringRelativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_LenseThirringRelativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LenseThirringRelativity)[] = {
          { Py_tp_methods, t_LenseThirringRelativity__methods_ },
          { Py_tp_init, (void *) t_LenseThirringRelativity_init_ },
          { Py_tp_getset, t_LenseThirringRelativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LenseThirringRelativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LenseThirringRelativity, t_LenseThirringRelativity, LenseThirringRelativity);

        void t_LenseThirringRelativity::install(PyObject *module)
        {
          installType(&PY_TYPE(LenseThirringRelativity), &PY_TYPE_DEF(LenseThirringRelativity), module, "LenseThirringRelativity", 0);
        }

        void t_LenseThirringRelativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "class_", make_descriptor(LenseThirringRelativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "wrapfn_", make_descriptor(t_LenseThirringRelativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LenseThirringRelativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LenseThirringRelativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LenseThirringRelativity::initializeClass, 1)))
            return NULL;
          return t_LenseThirringRelativity::wrap_Object(LenseThirringRelativity(((t_LenseThirringRelativity *) arg)->object.this$));
        }
        static PyObject *t_LenseThirringRelativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LenseThirringRelativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LenseThirringRelativity_init_(t_LenseThirringRelativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          LenseThirringRelativity object((jobject) NULL);

          if (!parseArgs(args, "Dk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            INT_CALL(object = LenseThirringRelativity(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LenseThirringRelativity_acceleration(t_LenseThirringRelativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_LenseThirringRelativity_dependsOnPositionOnly(t_LenseThirringRelativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_LenseThirringRelativity_getParametersDrivers(t_LenseThirringRelativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LenseThirringRelativity_get__parametersDrivers(t_LenseThirringRelativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *TimeConverter::class$ = NULL;
          jmethodID *TimeConverter::mids$ = NULL;
          bool TimeConverter::live$ = false;

          jclass TimeConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/TimeConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fbd3f40a11539f24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_components_0867f34156107eb8] = env->getMethodID(cls, "components", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeScale_527ee9dde1a96470] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_offset_b0b988f941da47d8] = env->getMethodID(cls, "offset", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_parse_8c77da8748f99b28] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeConverter::TimeConverter(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fbd3f40a11539f24, a0.this$, a1.this$)) {}

          ::org::orekit::time::DateTimeComponents TimeConverter::components(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_components_0867f34156107eb8], a0.this$));
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
          }

          ::org::orekit::time::TimeScale TimeConverter::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_527ee9dde1a96470]));
          }

          jdouble TimeConverter::offset(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_b0b988f941da47d8], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_parse_8c77da8748f99b28], a0.this$));
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
        namespace definitions {
          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self);
          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self);
          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg);
          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data);
          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data);
          static PyGetSetDef t_TimeConverter__fields_[] = {
            DECLARE_GET_FIELD(t_TimeConverter, referenceDate),
            DECLARE_GET_FIELD(t_TimeConverter, timeScale),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeConverter__methods_[] = {
            DECLARE_METHOD(t_TimeConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeConverter, components, METH_O),
            DECLARE_METHOD(t_TimeConverter, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_TimeConverter, offset, METH_O),
            DECLARE_METHOD(t_TimeConverter, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeConverter)[] = {
            { Py_tp_methods, t_TimeConverter__methods_ },
            { Py_tp_init, (void *) t_TimeConverter_init_ },
            { Py_tp_getset, t_TimeConverter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeConverter, t_TimeConverter, TimeConverter);

          void t_TimeConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeConverter), &PY_TYPE_DEF(TimeConverter), module, "TimeConverter", 0);
          }

          void t_TimeConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "class_", make_descriptor(TimeConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "wrapfn_", make_descriptor(t_TimeConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeConverter::initializeClass, 1)))
              return NULL;
            return t_TimeConverter::wrap_Object(TimeConverter(((t_TimeConverter *) arg)->object.this$));
          }
          static PyObject *t_TimeConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeConverter_init_(t_TimeConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            TimeConverter object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeConverter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeConverter_components(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.components(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "components", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_getReferenceDate(t_TimeConverter *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_getTimeScale(t_TimeConverter *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TimeConverter_offset(t_TimeConverter *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offset(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_parse(t_TimeConverter *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }

          static PyObject *t_TimeConverter_get__referenceDate(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeConverter_get__timeScale(t_TimeConverter *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/PythonRadiationSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *PythonRadiationSensitive::class$ = NULL;
        jmethodID *PythonRadiationSensitive::mids$ = NULL;
        bool PythonRadiationSensitive::live$ = false;

        jclass PythonRadiationSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/PythonRadiationSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getRadiationParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_radiationPressureAcceleration_a910b2c2e7db1f82] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_radiationPressureAcceleration_122b60d0431fddf5] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonRadiationSensitive::PythonRadiationSensitive() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonRadiationSensitive::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonRadiationSensitive::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonRadiationSensitive::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace radiation {
        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self);
        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args);
        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data);
        static PyGetSetDef t_PythonRadiationSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_PythonRadiationSensitive, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonRadiationSensitive__methods_[] = {
          DECLARE_METHOD(t_PythonRadiationSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonRadiationSensitive, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonRadiationSensitive, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonRadiationSensitive)[] = {
          { Py_tp_methods, t_PythonRadiationSensitive__methods_ },
          { Py_tp_init, (void *) t_PythonRadiationSensitive_init_ },
          { Py_tp_getset, t_PythonRadiationSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonRadiationSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonRadiationSensitive, t_PythonRadiationSensitive, PythonRadiationSensitive);

        void t_PythonRadiationSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonRadiationSensitive), &PY_TYPE_DEF(PythonRadiationSensitive), module, "PythonRadiationSensitive", 1);
        }

        void t_PythonRadiationSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "class_", make_descriptor(PythonRadiationSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "wrapfn_", make_descriptor(t_PythonRadiationSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRadiationSensitive), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonRadiationSensitive::initializeClass);
          JNINativeMethod methods[] = {
            { "getRadiationParametersDrivers", "()Ljava/util/List;", (void *) t_PythonRadiationSensitive_getRadiationParametersDrivers0 },
            { "pythonDecRef", "()V", (void *) t_PythonRadiationSensitive_pythonDecRef1 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration2 },
            { "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonRadiationSensitive_radiationPressureAcceleration3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonRadiationSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonRadiationSensitive::initializeClass, 1)))
            return NULL;
          return t_PythonRadiationSensitive::wrap_Object(PythonRadiationSensitive(((t_PythonRadiationSensitive *) arg)->object.this$));
        }
        static PyObject *t_PythonRadiationSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonRadiationSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonRadiationSensitive_init_(t_PythonRadiationSensitive *self, PyObject *args, PyObject *kwds)
        {
          PythonRadiationSensitive object((jobject) NULL);

          INT_CALL(object = PythonRadiationSensitive());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonRadiationSensitive_finalize(t_PythonRadiationSensitive *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonRadiationSensitive_pythonExtension(t_PythonRadiationSensitive *self, PyObject *args)
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

        static jobject JNICALL t_PythonRadiationSensitive_getRadiationParametersDrivers0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getRadiationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getRadiationParametersDrivers", result);
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

        static void JNICALL t_PythonRadiationSensitive_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = JArray<jdouble>(a2).wrap();
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static jobject JNICALL t_PythonRadiationSensitive_radiationPressureAcceleration3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonRadiationSensitive::mids$[PythonRadiationSensitive::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "radiationPressureAcceleration", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("radiationPressureAcceleration", result);
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

        static PyObject *t_PythonRadiationSensitive_get__self(t_PythonRadiationSensitive *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmElements::class$ = NULL;
              jmethodID *OcmElements::mids$ = NULL;
              bool OcmElements::live$ = false;
              OcmElements *OcmElements::COV = NULL;
              OcmElements *OcmElements::MAN = NULL;
              OcmElements *OcmElements::OD = NULL;
              OcmElements *OcmElements::ORB = NULL;
              OcmElements *OcmElements::PERT = NULL;
              OcmElements *OcmElements::PHYS = NULL;
              OcmElements *OcmElements::USER = NULL;

              jclass OcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_df20b5474f2b5281] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");
                  mids$[mid_values_d1b30da0ffe05b48] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  MAN = new OcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  OD = new OcmElements(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  ORB = new OcmElements(env->getStaticObjectField(cls, "ORB", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PERT = new OcmElements(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PHYS = new OcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  USER = new OcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmElements OcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_df20b5474f2b5281], a0.this$));
              }

              JArray< OcmElements > OcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_d1b30da0ffe05b48]));
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args);
              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmElements_values(PyTypeObject *type);
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data);
              static PyGetSetDef t_OcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_OcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmElements__methods_[] = {
                DECLARE_METHOD(t_OcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmElements)[] = {
                { Py_tp_methods, t_OcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmElements, t_OcmElements, OcmElements);
              PyObject *t_OcmElements::wrap_Object(const OcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmElements), &PY_TYPE_DEF(OcmElements), module, "OcmElements", 0);
              }

              void t_OcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "class_", make_descriptor(OcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "wrapfn_", make_descriptor(t_OcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "COV", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "MAN", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "OD", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "ORB", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::ORB)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PERT", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PHYS", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "USER", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::USER)));
              }

              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmElements::initializeClass, 1)))
                  return NULL;
                return t_OcmElements::wrap_Object(OcmElements(((t_OcmElements *) arg)->object.this$));
              }
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::valueOf(a0));
                  return t_OcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmElements_values(PyTypeObject *type)
              {
                JArray< OcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_OcmElements::wrap_jobject);
              }
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/utils/TrackingCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TrackingCoordinates::class$ = NULL;
      jmethodID *TrackingCoordinates::mids$ = NULL;
      bool TrackingCoordinates::live$ = false;

      jclass TrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getAzimuth_557b8123390d8d0c] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getElevation_557b8123390d8d0c] = env->getMethodID(cls, "getElevation", "()D");
          mids$[mid_getRange_557b8123390d8d0c] = env->getMethodID(cls, "getRange", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TrackingCoordinates::TrackingCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

      jdouble TrackingCoordinates::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_557b8123390d8d0c]);
      }

      jdouble TrackingCoordinates::getElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_557b8123390d8d0c]);
      }

      jdouble TrackingCoordinates::getRange() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_557b8123390d8d0c]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data);
      static PyGetSetDef t_TrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_TrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_TrackingCoordinates, range),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_TrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrackingCoordinates)[] = {
        { Py_tp_methods, t_TrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_TrackingCoordinates_init_ },
        { Py_tp_getset, t_TrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrackingCoordinates, t_TrackingCoordinates, TrackingCoordinates);

      void t_TrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TrackingCoordinates), &PY_TYPE_DEF(TrackingCoordinates), module, "TrackingCoordinates", 0);
      }

      void t_TrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "class_", make_descriptor(TrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "wrapfn_", make_descriptor(t_TrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_TrackingCoordinates::wrap_Object(TrackingCoordinates(((t_TrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        TrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = TrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRange());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getElevation());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRange());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonMessageWriter.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonMessageWriter::class$ = NULL;
            jmethodID *PythonMessageWriter::mids$ = NULL;
            bool PythonMessageWriter::live$ = false;

            jclass PythonMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormatVersionKey_3cffd47377eca18a] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_3cffd47377eca18a] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getVersion_557b8123390d8d0c] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_writeFooter_0503da09b1f1eb3c] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_9c5c2ece653aa3f3] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_c15b5f80625a03e0] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonMessageWriter::PythonMessageWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonMessageWriter::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonMessageWriter::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonMessageWriter::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args);
            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self);
            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args);
            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data);
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data);
            static PyGetSetDef t_PythonMessageWriter__fields_[] = {
              DECLARE_GET_FIELD(t_PythonMessageWriter, self),
              DECLARE_GET_FIELD(t_PythonMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonMessageWriter__methods_[] = {
              DECLARE_METHOD(t_PythonMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonMessageWriter, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonMessageWriter, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonMessageWriter)[] = {
              { Py_tp_methods, t_PythonMessageWriter__methods_ },
              { Py_tp_init, (void *) t_PythonMessageWriter_init_ },
              { Py_tp_getset, t_PythonMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonMessageWriter, t_PythonMessageWriter, PythonMessageWriter);
            PyObject *t_PythonMessageWriter::wrap_Object(const PythonMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_PythonMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_PythonMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonMessageWriter *self = (t_PythonMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_PythonMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonMessageWriter), &PY_TYPE_DEF(PythonMessageWriter), module, "PythonMessageWriter", 1);
            }

            void t_PythonMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "class_", make_descriptor(PythonMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "wrapfn_", make_descriptor(t_PythonMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMessageWriter), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonMessageWriter::initializeClass);
              JNINativeMethod methods[] = {
                { "getFormatVersionKey", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getFormatVersionKey0 },
                { "getRoot", "()Ljava/lang/String;", (void *) t_PythonMessageWriter_getRoot1 },
                { "getVersion", "()D", (void *) t_PythonMessageWriter_getVersion2 },
                { "pythonDecRef", "()V", (void *) t_PythonMessageWriter_pythonDecRef3 },
                { "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V", (void *) t_PythonMessageWriter_writeFooter4 },
                { "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V", (void *) t_PythonMessageWriter_writeHeader5 },
                { "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V", (void *) t_PythonMessageWriter_writeSegment6 },
              };
              env->registerNatives(cls, methods, 7);
            }

            static PyObject *t_PythonMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonMessageWriter::initializeClass, 1)))
                return NULL;
              return t_PythonMessageWriter::wrap_Object(PythonMessageWriter(((t_PythonMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_PythonMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonMessageWriter_of_(t_PythonMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_PythonMessageWriter_init_(t_PythonMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              PythonMessageWriter object((jobject) NULL);

              INT_CALL(object = PythonMessageWriter());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonMessageWriter_finalize(t_PythonMessageWriter *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonMessageWriter_pythonExtension(t_PythonMessageWriter *self, PyObject *args)
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

            static jobject JNICALL t_PythonMessageWriter_getFormatVersionKey0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormatVersionKey", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getFormatVersionKey", result);
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

            static jobject JNICALL t_PythonMessageWriter_getRoot1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getRoot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getRoot", result);
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

            static jdouble JNICALL t_PythonMessageWriter_getVersion2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getVersion", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getVersion", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonMessageWriter_pythonDecRef3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonMessageWriter_writeFooter4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeFooter", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeHeader5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Header::wrap_Object(::org::orekit::files::ccsds::section::Header(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeHeader", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonMessageWriter_writeSegment6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonMessageWriter::mids$[PythonMessageWriter::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::generation::t_Generator::wrap_Object(::org::orekit::files::ccsds::utils::generation::Generator(a0));
              PyObject *o1 = ::org::orekit::files::ccsds::section::t_Segment::wrap_Object(::org::orekit::files::ccsds::section::Segment(a1));
              PyObject *result = PyObject_CallMethod(obj, "writeSegment", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonMessageWriter_get__self(t_PythonMessageWriter *self, void *data)
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
            static PyObject *t_PythonMessageWriter_get__parameters_(t_PythonMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "org/orekit/utils/LagrangianPoints.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LagrangianPoints::class$ = NULL;
      jmethodID *LagrangianPoints::mids$ = NULL;
      bool LagrangianPoints::live$ = false;
      LagrangianPoints *LagrangianPoints::L1 = NULL;
      LagrangianPoints *LagrangianPoints::L2 = NULL;
      LagrangianPoints *LagrangianPoints::L3 = NULL;
      LagrangianPoints *LagrangianPoints::L4 = NULL;
      LagrangianPoints *LagrangianPoints::L5 = NULL;

      jclass LagrangianPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LagrangianPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_a66dbc0550148616] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/utils/LagrangianPoints;");
          mids$[mid_values_9e54864e4504cd8f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/utils/LagrangianPoints;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          L1 = new LagrangianPoints(env->getStaticObjectField(cls, "L1", "Lorg/orekit/utils/LagrangianPoints;"));
          L2 = new LagrangianPoints(env->getStaticObjectField(cls, "L2", "Lorg/orekit/utils/LagrangianPoints;"));
          L3 = new LagrangianPoints(env->getStaticObjectField(cls, "L3", "Lorg/orekit/utils/LagrangianPoints;"));
          L4 = new LagrangianPoints(env->getStaticObjectField(cls, "L4", "Lorg/orekit/utils/LagrangianPoints;"));
          L5 = new LagrangianPoints(env->getStaticObjectField(cls, "L5", "Lorg/orekit/utils/LagrangianPoints;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LagrangianPoints LagrangianPoints::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LagrangianPoints(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a66dbc0550148616], a0.this$));
      }

      JArray< LagrangianPoints > LagrangianPoints::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LagrangianPoints >(env->callStaticObjectMethod(cls, mids$[mid_values_9e54864e4504cd8f]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args);
      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LagrangianPoints_values(PyTypeObject *type);
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data);
      static PyGetSetDef t_LagrangianPoints__fields_[] = {
        DECLARE_GET_FIELD(t_LagrangianPoints, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LagrangianPoints__methods_[] = {
        DECLARE_METHOD(t_LagrangianPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, of_, METH_VARARGS),
        DECLARE_METHOD(t_LagrangianPoints, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LagrangianPoints, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LagrangianPoints)[] = {
        { Py_tp_methods, t_LagrangianPoints__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LagrangianPoints__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LagrangianPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LagrangianPoints, t_LagrangianPoints, LagrangianPoints);
      PyObject *t_LagrangianPoints::wrap_Object(const LagrangianPoints& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LagrangianPoints::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LagrangianPoints::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LagrangianPoints *self = (t_LagrangianPoints *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LagrangianPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(LagrangianPoints), &PY_TYPE_DEF(LagrangianPoints), module, "LagrangianPoints", 0);
      }

      void t_LagrangianPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "class_", make_descriptor(LagrangianPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "wrapfn_", make_descriptor(t_LagrangianPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "boxfn_", make_descriptor(boxObject));
        env->getClass(LagrangianPoints::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L1", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L2", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L3", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L3)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L4", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L4)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LagrangianPoints), "L5", make_descriptor(t_LagrangianPoints::wrap_Object(*LagrangianPoints::L5)));
      }

      static PyObject *t_LagrangianPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LagrangianPoints::initializeClass, 1)))
          return NULL;
        return t_LagrangianPoints::wrap_Object(LagrangianPoints(((t_LagrangianPoints *) arg)->object.this$));
      }
      static PyObject *t_LagrangianPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LagrangianPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LagrangianPoints_of_(t_LagrangianPoints *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LagrangianPoints_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LagrangianPoints result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::valueOf(a0));
          return t_LagrangianPoints::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LagrangianPoints_values(PyTypeObject *type)
      {
        JArray< LagrangianPoints > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::utils::LagrangianPoints::values());
        return JArray<jobject>(result.this$).wrap(t_LagrangianPoints::wrap_jobject);
      }
      static PyObject *t_LagrangianPoints_get__parameters_(t_LagrangianPoints *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *RungeKuttaFieldIntegrator::mids$ = NULL;
        bool RungeKuttaFieldIntegrator::live$ = false;

        jclass RungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_613c8f46c659f636] = env->getMethodID(cls, "getDefaultStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_dd582e1c9ef253c9] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_singleStep_8e3cc624cea6b4bd] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_f548ed78c2486137] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_8980964ba972ab77] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement RungeKuttaFieldIntegrator::getDefaultStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDefaultStep_613c8f46c659f636]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative RungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_dd582e1c9ef253c9], a0.this$, a1.this$, a2.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > RungeKuttaFieldIntegrator::singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_singleStep_8e3cc624cea6b4bd], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self);
        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, defaultStep),
          DECLARE_GET_FIELD(t_RungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaFieldIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaFieldIntegrator, t_RungeKuttaFieldIntegrator, RungeKuttaFieldIntegrator);
        PyObject *t_RungeKuttaFieldIntegrator::wrap_Object(const RungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RungeKuttaFieldIntegrator *self = (t_RungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaFieldIntegrator), &PY_TYPE_DEF(RungeKuttaFieldIntegrator), module, "RungeKuttaFieldIntegrator", 0);
        }

        void t_RungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "class_", make_descriptor(RungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaFieldIntegrator::wrap_Object(RungeKuttaFieldIntegrator(((t_RungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaFieldIntegrator_of_(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_getDefaultStep(t_RungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getDefaultStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_integrate(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(RungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaFieldIntegrator_singleStep(t_RungeKuttaFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, "KK[KK", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }
        static PyObject *t_RungeKuttaFieldIntegrator_get__parameters_(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RungeKuttaFieldIntegrator_get__defaultStep(t_RungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getDefaultStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Header::class$ = NULL;
              jmethodID *SsrIgm02Header::mids$ = NULL;
              bool SsrIgm02Header::live$ = false;

              jclass SsrIgm02Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Header::SsrIgm02Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm02Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Header)[] = {
                { Py_tp_methods, t_SsrIgm02Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Header, t_SsrIgm02Header, SsrIgm02Header);

              void t_SsrIgm02Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Header), &PY_TYPE_DEF(SsrIgm02Header), module, "SsrIgm02Header", 0);
              }

              void t_SsrIgm02Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "class_", make_descriptor(SsrIgm02Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "wrapfn_", make_descriptor(t_SsrIgm02Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Header::wrap_Object(SsrIgm02Header(((t_SsrIgm02Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Header_init_(t_SsrIgm02Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Header object((jobject) NULL);

                INT_CALL(object = SsrIgm02Header());
                self->object = object;

                return 0;
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
#include "java/text/DecimalFormat.h"
#include "java/text/ParsePosition.h"
#include "java/lang/Number.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/text/AttributedCharacterIterator.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Object.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "java/util/Currency.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormat::class$ = NULL;
    jmethodID *DecimalFormat::mids$ = NULL;
    bool DecimalFormat::live$ = false;

    jclass DecimalFormat::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormat");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_84c59652ea37ae90] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_applyLocalizedPattern_f5ffdf29129ef90a] = env->getMethodID(cls, "applyLocalizedPattern", "(Ljava/lang/String;)V");
        mids$[mid_applyPattern_f5ffdf29129ef90a] = env->getMethodID(cls, "applyPattern", "(Ljava/lang/String;)V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_format_12b2fbc0c0cefa8d] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_60ec49fc2ad8aa0e] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_format_d9d8c4aa92e35cdf] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
        mids$[mid_formatToCharacterIterator_67523d7667ad62e2] = env->getMethodID(cls, "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;");
        mids$[mid_getCurrency_e0e11425d6f25aed] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getDecimalFormatSymbols_42697fd6214b108c] = env->getMethodID(cls, "getDecimalFormatSymbols", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getGroupingSize_412668abc8d889e9] = env->getMethodID(cls, "getGroupingSize", "()I");
        mids$[mid_getMaximumFractionDigits_412668abc8d889e9] = env->getMethodID(cls, "getMaximumFractionDigits", "()I");
        mids$[mid_getMaximumIntegerDigits_412668abc8d889e9] = env->getMethodID(cls, "getMaximumIntegerDigits", "()I");
        mids$[mid_getMinimumFractionDigits_412668abc8d889e9] = env->getMethodID(cls, "getMinimumFractionDigits", "()I");
        mids$[mid_getMinimumIntegerDigits_412668abc8d889e9] = env->getMethodID(cls, "getMinimumIntegerDigits", "()I");
        mids$[mid_getMultiplier_412668abc8d889e9] = env->getMethodID(cls, "getMultiplier", "()I");
        mids$[mid_getNegativePrefix_3cffd47377eca18a] = env->getMethodID(cls, "getNegativePrefix", "()Ljava/lang/String;");
        mids$[mid_getNegativeSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getNegativeSuffix", "()Ljava/lang/String;");
        mids$[mid_getPositivePrefix_3cffd47377eca18a] = env->getMethodID(cls, "getPositivePrefix", "()Ljava/lang/String;");
        mids$[mid_getPositiveSuffix_3cffd47377eca18a] = env->getMethodID(cls, "getPositiveSuffix", "()Ljava/lang/String;");
        mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isDecimalSeparatorAlwaysShown_89b302893bdbe1f1] = env->getMethodID(cls, "isDecimalSeparatorAlwaysShown", "()Z");
        mids$[mid_isParseBigDecimal_89b302893bdbe1f1] = env->getMethodID(cls, "isParseBigDecimal", "()Z");
        mids$[mid_parse_5536e661c34c19f2] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;");
        mids$[mid_setCurrency_f72be4c0db9df8b9] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setDecimalFormatSymbols_b786b2c477d2681b] = env->getMethodID(cls, "setDecimalFormatSymbols", "(Ljava/text/DecimalFormatSymbols;)V");
        mids$[mid_setDecimalSeparatorAlwaysShown_ed2afdb8506b9742] = env->getMethodID(cls, "setDecimalSeparatorAlwaysShown", "(Z)V");
        mids$[mid_setGroupingSize_a3da1a935cb37f7b] = env->getMethodID(cls, "setGroupingSize", "(I)V");
        mids$[mid_setGroupingUsed_ed2afdb8506b9742] = env->getMethodID(cls, "setGroupingUsed", "(Z)V");
        mids$[mid_setMaximumFractionDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaximumFractionDigits", "(I)V");
        mids$[mid_setMaximumIntegerDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMaximumIntegerDigits", "(I)V");
        mids$[mid_setMinimumFractionDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMinimumFractionDigits", "(I)V");
        mids$[mid_setMinimumIntegerDigits_a3da1a935cb37f7b] = env->getMethodID(cls, "setMinimumIntegerDigits", "(I)V");
        mids$[mid_setMultiplier_a3da1a935cb37f7b] = env->getMethodID(cls, "setMultiplier", "(I)V");
        mids$[mid_setNegativePrefix_f5ffdf29129ef90a] = env->getMethodID(cls, "setNegativePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setNegativeSuffix_f5ffdf29129ef90a] = env->getMethodID(cls, "setNegativeSuffix", "(Ljava/lang/String;)V");
        mids$[mid_setParseBigDecimal_ed2afdb8506b9742] = env->getMethodID(cls, "setParseBigDecimal", "(Z)V");
        mids$[mid_setPositivePrefix_f5ffdf29129ef90a] = env->getMethodID(cls, "setPositivePrefix", "(Ljava/lang/String;)V");
        mids$[mid_setPositiveSuffix_f5ffdf29129ef90a] = env->getMethodID(cls, "setPositiveSuffix", "(Ljava/lang/String;)V");
        mids$[mid_toLocalizedPattern_3cffd47377eca18a] = env->getMethodID(cls, "toLocalizedPattern", "()Ljava/lang/String;");
        mids$[mid_toPattern_3cffd47377eca18a] = env->getMethodID(cls, "toPattern", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormat::DecimalFormat() : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

    DecimalFormat::DecimalFormat(const ::java::lang::String & a0, const ::java::text::DecimalFormatSymbols & a1) : ::java::text::NumberFormat(env->newObject(initializeClass, &mids$, mid_init$_84c59652ea37ae90, a0.this$, a1.this$)) {}

    void DecimalFormat::applyLocalizedPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyLocalizedPattern_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormat::applyPattern(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_applyPattern_f5ffdf29129ef90a], a0.this$);
    }

    ::java::lang::Object DecimalFormat::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean DecimalFormat::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
    }

    ::java::lang::StringBuffer DecimalFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_12b2fbc0c0cefa8d], a0, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_60ec49fc2ad8aa0e], a0.this$, a1.this$, a2.this$));
    }

    ::java::lang::StringBuffer DecimalFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
    {
      return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d9d8c4aa92e35cdf], a0, a1.this$, a2.this$));
    }

    ::java::text::AttributedCharacterIterator DecimalFormat::formatToCharacterIterator(const ::java::lang::Object & a0) const
    {
      return ::java::text::AttributedCharacterIterator(env->callObjectMethod(this$, mids$[mid_formatToCharacterIterator_67523d7667ad62e2], a0.this$));
    }

    ::java::util::Currency DecimalFormat::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e0e11425d6f25aed]));
    }

    ::java::text::DecimalFormatSymbols DecimalFormat::getDecimalFormatSymbols() const
    {
      return ::java::text::DecimalFormatSymbols(env->callObjectMethod(this$, mids$[mid_getDecimalFormatSymbols_42697fd6214b108c]));
    }

    jint DecimalFormat::getGroupingSize() const
    {
      return env->callIntMethod(this$, mids$[mid_getGroupingSize_412668abc8d889e9]);
    }

    jint DecimalFormat::getMaximumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumFractionDigits_412668abc8d889e9]);
    }

    jint DecimalFormat::getMaximumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMaximumIntegerDigits_412668abc8d889e9]);
    }

    jint DecimalFormat::getMinimumFractionDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumFractionDigits_412668abc8d889e9]);
    }

    jint DecimalFormat::getMinimumIntegerDigits() const
    {
      return env->callIntMethod(this$, mids$[mid_getMinimumIntegerDigits_412668abc8d889e9]);
    }

    jint DecimalFormat::getMultiplier() const
    {
      return env->callIntMethod(this$, mids$[mid_getMultiplier_412668abc8d889e9]);
    }

    ::java::lang::String DecimalFormat::getNegativePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativePrefix_3cffd47377eca18a]));
    }

    ::java::lang::String DecimalFormat::getNegativeSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNegativeSuffix_3cffd47377eca18a]));
    }

    ::java::lang::String DecimalFormat::getPositivePrefix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositivePrefix_3cffd47377eca18a]));
    }

    ::java::lang::String DecimalFormat::getPositiveSuffix() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPositiveSuffix_3cffd47377eca18a]));
    }

    jint DecimalFormat::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
    }

    jboolean DecimalFormat::isDecimalSeparatorAlwaysShown() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isDecimalSeparatorAlwaysShown_89b302893bdbe1f1]);
    }

    jboolean DecimalFormat::isParseBigDecimal() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isParseBigDecimal_89b302893bdbe1f1]);
    }

    ::java::lang::Number DecimalFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
    {
      return ::java::lang::Number(env->callObjectMethod(this$, mids$[mid_parse_5536e661c34c19f2], a0.this$, a1.this$));
    }

    void DecimalFormat::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_f72be4c0db9df8b9], a0.this$);
    }

    void DecimalFormat::setDecimalFormatSymbols(const ::java::text::DecimalFormatSymbols & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalFormatSymbols_b786b2c477d2681b], a0.this$);
    }

    void DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparatorAlwaysShown_ed2afdb8506b9742], a0);
    }

    void DecimalFormat::setGroupingSize(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSize_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setGroupingUsed(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingUsed_ed2afdb8506b9742], a0);
    }

    void DecimalFormat::setMaximumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumFractionDigits_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setMaximumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMaximumIntegerDigits_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setMinimumFractionDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumFractionDigits_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setMinimumIntegerDigits(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinimumIntegerDigits_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setMultiplier(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMultiplier_a3da1a935cb37f7b], a0);
    }

    void DecimalFormat::setNegativePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativePrefix_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormat::setNegativeSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNegativeSuffix_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormat::setParseBigDecimal(jboolean a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setParseBigDecimal_ed2afdb8506b9742], a0);
    }

    void DecimalFormat::setPositivePrefix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositivePrefix_f5ffdf29129ef90a], a0.this$);
    }

    void DecimalFormat::setPositiveSuffix(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPositiveSuffix_f5ffdf29129ef90a], a0.this$);
    }

    ::java::lang::String DecimalFormat::toLocalizedPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toLocalizedPattern_3cffd47377eca18a]));
    }

    ::java::lang::String DecimalFormat::toPattern() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toPattern_3cffd47377eca18a]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args);
    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg);
    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self);
    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data);
    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data);
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormat__fields_[] = {
      DECLARE_GETSET_FIELD(t_DecimalFormat, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalFormatSymbols),
      DECLARE_GETSET_FIELD(t_DecimalFormat, decimalSeparatorAlwaysShown),
      DECLARE_GETSET_FIELD(t_DecimalFormat, groupingSize),
      DECLARE_SET_FIELD(t_DecimalFormat, groupingUsed),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, maximumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumFractionDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, minimumIntegerDigits),
      DECLARE_GETSET_FIELD(t_DecimalFormat, multiplier),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, negativeSuffix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, parseBigDecimal),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positivePrefix),
      DECLARE_GETSET_FIELD(t_DecimalFormat, positiveSuffix),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormat__methods_[] = {
      DECLARE_METHOD(t_DecimalFormat, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormat, applyLocalizedPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, applyPattern, METH_O),
      DECLARE_METHOD(t_DecimalFormat, clone, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, format, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, formatToCharacterIterator, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getDecimalFormatSymbols, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getGroupingSize, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, getMultiplier, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getNegativeSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositivePrefix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, getPositiveSuffix, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, isDecimalSeparatorAlwaysShown, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, isParseBigDecimal, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, parse, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setCurrency, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setDecimalFormatSymbols, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setDecimalSeparatorAlwaysShown, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingSize, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setGroupingUsed, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMaximumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumFractionDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMinimumIntegerDigits, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormat, setMultiplier, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setNegativeSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setParseBigDecimal, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositivePrefix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, setPositiveSuffix, METH_O),
      DECLARE_METHOD(t_DecimalFormat, toLocalizedPattern, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormat, toPattern, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormat)[] = {
      { Py_tp_methods, t_DecimalFormat__methods_ },
      { Py_tp_init, (void *) t_DecimalFormat_init_ },
      { Py_tp_getset, t_DecimalFormat__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormat)[] = {
      &PY_TYPE_DEF(::java::text::NumberFormat),
      NULL
    };

    DEFINE_TYPE(DecimalFormat, t_DecimalFormat, DecimalFormat);

    void t_DecimalFormat::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormat), &PY_TYPE_DEF(DecimalFormat), module, "DecimalFormat", 0);
    }

    void t_DecimalFormat::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "class_", make_descriptor(DecimalFormat::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "wrapfn_", make_descriptor(t_DecimalFormat::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormat), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormat_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormat::initializeClass, 1)))
        return NULL;
      return t_DecimalFormat::wrap_Object(DecimalFormat(((t_DecimalFormat *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormat_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormat::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormat_init_(t_DecimalFormat *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormat object((jobject) NULL);

          INT_CALL(object = DecimalFormat());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DecimalFormat(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::text::DecimalFormatSymbols a1((jobject) NULL);
          DecimalFormat object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::text::DecimalFormatSymbols::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DecimalFormat(a0, a1));
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

    static PyObject *t_DecimalFormat_applyLocalizedPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyLocalizedPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyLocalizedPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_applyPattern(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.applyPattern(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "applyPattern", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_clone(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.clone());
        return ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "clone", args, 2);
    }

    static PyObject *t_DecimalFormat_equals(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormat_format(t_DecimalFormat *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          jdouble a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Dkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "okk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
        {
          jlong a0;
          ::java::lang::StringBuffer a1((jobject) NULL);
          ::java::text::FieldPosition a2((jobject) NULL);
          ::java::lang::StringBuffer result((jobject) NULL);

          if (!parseArgs(args, "Jkk", ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.format(a0, a1, a2));
            return ::java::lang::t_StringBuffer::wrap_Object(result);
          }
        }
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "format", args, 2);
    }

    static PyObject *t_DecimalFormat_formatToCharacterIterator(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::text::AttributedCharacterIterator result((jobject) NULL);

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.formatToCharacterIterator(a0));
        return ::java::text::t_AttributedCharacterIterator::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "formatToCharacterIterator", args, 2);
    }

    static PyObject *t_DecimalFormat_getCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getCurrency());
        return ::java::util::t_Currency::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_getDecimalFormatSymbols(t_DecimalFormat *self)
    {
      ::java::text::DecimalFormatSymbols result((jobject) NULL);
      OBJ_CALL(result = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(result);
    }

    static PyObject *t_DecimalFormat_getGroupingSize(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getGroupingSize());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMaximumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumFractionDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.getMinimumIntegerDigits());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "getMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_getMultiplier(t_DecimalFormat *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getMultiplier());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_DecimalFormat_getNegativePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getNegativeSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNegativeSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositivePrefix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositivePrefix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_getPositiveSuffix(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getPositiveSuffix());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_hashCode(t_DecimalFormat *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormat_isDecimalSeparatorAlwaysShown(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_isParseBigDecimal(t_DecimalFormat *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_DecimalFormat_parse(t_DecimalFormat *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::text::ParsePosition a1((jobject) NULL);
      ::java::lang::Number result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.parse(a0, a1));
        return ::java::lang::t_Number::wrap_Object(result);
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "parse", args, 2);
    }

    static PyObject *t_DecimalFormat_setCurrency(t_DecimalFormat *self, PyObject *args)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArgs(args, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setCurrency", args, 2);
    }

    static PyObject *t_DecimalFormat_setDecimalFormatSymbols(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::text::DecimalFormatSymbols a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setDecimalFormatSymbols(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalFormatSymbols", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setDecimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparatorAlwaysShown(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparatorAlwaysShown", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingSize(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setGroupingSize(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSize", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setGroupingUsed(t_DecimalFormat *self, PyObject *args)
    {
      jboolean a0;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(self->object.setGroupingUsed(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setGroupingUsed", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMaximumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMaximumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMaximumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumFractionDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumFractionDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumFractionDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMinimumIntegerDigits(t_DecimalFormat *self, PyObject *args)
    {
      jint a0;

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(self->object.setMinimumIntegerDigits(a0));
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(DecimalFormat), (PyObject *) self, "setMinimumIntegerDigits", args, 2);
    }

    static PyObject *t_DecimalFormat_setMultiplier(t_DecimalFormat *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.setMultiplier(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMultiplier", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setNegativeSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNegativeSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNegativeSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setParseBigDecimal(t_DecimalFormat *self, PyObject *arg)
    {
      jboolean a0;

      if (!parseArg(arg, "Z", &a0))
      {
        OBJ_CALL(self->object.setParseBigDecimal(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setParseBigDecimal", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositivePrefix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositivePrefix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositivePrefix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_setPositiveSuffix(t_DecimalFormat *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setPositiveSuffix(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPositiveSuffix", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormat_toLocalizedPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toLocalizedPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_toPattern(t_DecimalFormat *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.toPattern());
      return j2p(result);
    }

    static PyObject *t_DecimalFormat_get__currency(t_DecimalFormat *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormat_set__currency(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalFormatSymbols(t_DecimalFormat *self, void *data)
    {
      ::java::text::DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getDecimalFormatSymbols());
      return ::java::text::t_DecimalFormatSymbols::wrap_Object(value);
    }
    static int t_DecimalFormat_set__decimalFormatSymbols(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::text::DecimalFormatSymbols value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::text::DecimalFormatSymbols::initializeClass, &value))
        {
          INT_CALL(self->object.setDecimalFormatSymbols(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalFormatSymbols", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__decimalSeparatorAlwaysShown(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isDecimalSeparatorAlwaysShown());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__decimalSeparatorAlwaysShown(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setDecimalSeparatorAlwaysShown(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparatorAlwaysShown", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__groupingSize(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getGroupingSize());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__groupingSize(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setGroupingSize(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSize", arg);
      return -1;
    }

    static int t_DecimalFormat_set__groupingUsed(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setGroupingUsed(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingUsed", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__maximumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMaximumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__maximumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMaximumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "maximumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumFractionDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumFractionDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumFractionDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumFractionDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumFractionDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__minimumIntegerDigits(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMinimumIntegerDigits());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__minimumIntegerDigits(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMinimumIntegerDigits(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minimumIntegerDigits", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__multiplier(t_DecimalFormat *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getMultiplier());
      return PyLong_FromLong((long) value);
    }
    static int t_DecimalFormat_set__multiplier(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jint value;
        if (!parseArg(arg, "I", &value))
        {
          INT_CALL(self->object.setMultiplier(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "multiplier", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__negativeSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNegativeSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__negativeSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNegativeSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "negativeSuffix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__parseBigDecimal(t_DecimalFormat *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isParseBigDecimal());
      Py_RETURN_BOOL(value);
    }
    static int t_DecimalFormat_set__parseBigDecimal(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        jboolean value;
        if (!parseArg(arg, "Z", &value))
        {
          INT_CALL(self->object.setParseBigDecimal(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "parseBigDecimal", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positivePrefix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositivePrefix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positivePrefix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositivePrefix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positivePrefix", arg);
      return -1;
    }

    static PyObject *t_DecimalFormat_get__positiveSuffix(t_DecimalFormat *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getPositiveSuffix());
      return j2p(value);
    }
    static int t_DecimalFormat_set__positiveSuffix(t_DecimalFormat *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setPositiveSuffix(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "positiveSuffix", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PythonThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonThrustPropulsionModel::mids$ = NULL;
          bool PythonThrustPropulsionModel::live$ = false;

          jclass PythonThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getFlowRate_1bbf81d80c47ecdd] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4ad317f7598a10a9] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_810dcb8f9f5d191a] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b61fb59a041240c6] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_61944e27a39e8290] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonThrustPropulsionModel::PythonThrustPropulsionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          ::java::util::List PythonThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          jlong PythonThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonThrustPropulsionModel::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      namespace maneuvers {
        namespace propulsion {
          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self);
          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args);
          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data);
          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_PythonThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PythonThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonThrustPropulsionModel, t_PythonThrustPropulsionModel, PythonThrustPropulsionModel);

          void t_PythonThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonThrustPropulsionModel), &PY_TYPE_DEF(PythonThrustPropulsionModel), module, "PythonThrustPropulsionModel", 1);
          }

          void t_PythonThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "class_", make_descriptor(PythonThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;", (void *) t_PythonThrustPropulsionModel_getControl3DVectorCostType0 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D", (void *) t_PythonThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonThrustPropulsionModel_getFlowRate3 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector4 },
              { "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonThrustPropulsionModel_getThrustVector6 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonThrustPropulsionModel_init7 },
              { "pythonDecRef", "()V", (void *) t_PythonThrustPropulsionModel_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonThrustPropulsionModel::wrap_Object(PythonThrustPropulsionModel(((t_PythonThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonThrustPropulsionModel_init_(t_PythonThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            PythonThrustPropulsionModel object((jobject) NULL);

            INT_CALL(object = PythonThrustPropulsionModel());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonThrustPropulsionModel_finalize(t_PythonThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonThrustPropulsionModel_getParametersDrivers(t_PythonThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PythonThrustPropulsionModel_pythonExtension(t_PythonThrustPropulsionModel *self, PyObject *args)
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getControl3DVectorCostType0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getControl3DVectorCostType", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &value))
            {
              throwTypeError("getControl3DVectorCostType", result);
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

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector4(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonThrustPropulsionModel_init7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonThrustPropulsionModel_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonThrustPropulsionModel::mids$[PythonThrustPropulsionModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonThrustPropulsionModel_get__self(t_PythonThrustPropulsionModel *self, void *data)
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

          static PyObject *t_PythonThrustPropulsionModel_get__parametersDrivers(t_PythonThrustPropulsionModel *self, void *data)
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
#include "org/orekit/time/Month.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *Month::class$ = NULL;
      jmethodID *Month::mids$ = NULL;
      bool Month::live$ = false;
      Month *Month::APRIL = NULL;
      Month *Month::AUGUST = NULL;
      Month *Month::DECEMBER = NULL;
      Month *Month::FEBRUARY = NULL;
      Month *Month::JANUARY = NULL;
      Month *Month::JULY = NULL;
      Month *Month::JUNE = NULL;
      Month *Month::MARCH = NULL;
      Month *Month::MAY = NULL;
      Month *Month::NOVEMBER = NULL;
      Month *Month::OCTOBER = NULL;
      Month *Month::SEPTEMBER = NULL;

      jclass Month::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/Month");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCapitalizedAbbreviation_3cffd47377eca18a] = env->getMethodID(cls, "getCapitalizedAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getCapitalizedName_3cffd47377eca18a] = env->getMethodID(cls, "getCapitalizedName", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseAbbreviation_3cffd47377eca18a] = env->getMethodID(cls, "getLowerCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getLowerCaseName_3cffd47377eca18a] = env->getMethodID(cls, "getLowerCaseName", "()Ljava/lang/String;");
          mids$[mid_getMonth_27dff97b9e8029b7] = env->getStaticMethodID(cls, "getMonth", "(I)Lorg/orekit/time/Month;");
          mids$[mid_getNumber_412668abc8d889e9] = env->getMethodID(cls, "getNumber", "()I");
          mids$[mid_getUpperCaseAbbreviation_3cffd47377eca18a] = env->getMethodID(cls, "getUpperCaseAbbreviation", "()Ljava/lang/String;");
          mids$[mid_getUpperCaseName_3cffd47377eca18a] = env->getMethodID(cls, "getUpperCaseName", "()Ljava/lang/String;");
          mids$[mid_parseMonth_4137c00c97fcbc5e] = env->getStaticMethodID(cls, "parseMonth", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_valueOf_4137c00c97fcbc5e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/time/Month;");
          mids$[mid_values_967fa078b3d0ac38] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/time/Month;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          APRIL = new Month(env->getStaticObjectField(cls, "APRIL", "Lorg/orekit/time/Month;"));
          AUGUST = new Month(env->getStaticObjectField(cls, "AUGUST", "Lorg/orekit/time/Month;"));
          DECEMBER = new Month(env->getStaticObjectField(cls, "DECEMBER", "Lorg/orekit/time/Month;"));
          FEBRUARY = new Month(env->getStaticObjectField(cls, "FEBRUARY", "Lorg/orekit/time/Month;"));
          JANUARY = new Month(env->getStaticObjectField(cls, "JANUARY", "Lorg/orekit/time/Month;"));
          JULY = new Month(env->getStaticObjectField(cls, "JULY", "Lorg/orekit/time/Month;"));
          JUNE = new Month(env->getStaticObjectField(cls, "JUNE", "Lorg/orekit/time/Month;"));
          MARCH = new Month(env->getStaticObjectField(cls, "MARCH", "Lorg/orekit/time/Month;"));
          MAY = new Month(env->getStaticObjectField(cls, "MAY", "Lorg/orekit/time/Month;"));
          NOVEMBER = new Month(env->getStaticObjectField(cls, "NOVEMBER", "Lorg/orekit/time/Month;"));
          OCTOBER = new Month(env->getStaticObjectField(cls, "OCTOBER", "Lorg/orekit/time/Month;"));
          SEPTEMBER = new Month(env->getStaticObjectField(cls, "SEPTEMBER", "Lorg/orekit/time/Month;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String Month::getCapitalizedAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedAbbreviation_3cffd47377eca18a]));
      }

      ::java::lang::String Month::getCapitalizedName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCapitalizedName_3cffd47377eca18a]));
      }

      ::java::lang::String Month::getLowerCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseAbbreviation_3cffd47377eca18a]));
      }

      ::java::lang::String Month::getLowerCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLowerCaseName_3cffd47377eca18a]));
      }

      Month Month::getMonth(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_getMonth_27dff97b9e8029b7], a0));
      }

      jint Month::getNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumber_412668abc8d889e9]);
      }

      ::java::lang::String Month::getUpperCaseAbbreviation() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseAbbreviation_3cffd47377eca18a]));
      }

      ::java::lang::String Month::getUpperCaseName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getUpperCaseName_3cffd47377eca18a]));
      }

      Month Month::parseMonth(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_parseMonth_4137c00c97fcbc5e], a0.this$));
      }

      Month Month::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return Month(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4137c00c97fcbc5e], a0.this$));
      }

      JArray< Month > Month::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< Month >(env->callStaticObjectMethod(cls, mids$[mid_values_967fa078b3d0ac38]));
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
      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_of_(t_Month *self, PyObject *args);
      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self);
      static PyObject *t_Month_getCapitalizedName(t_Month *self);
      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getLowerCaseName(t_Month *self);
      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_getNumber(t_Month *self);
      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self);
      static PyObject *t_Month_getUpperCaseName(t_Month *self);
      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_Month_values(PyTypeObject *type);
      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__number(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data);
      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data);
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data);
      static PyGetSetDef t_Month__fields_[] = {
        DECLARE_GET_FIELD(t_Month, capitalizedAbbreviation),
        DECLARE_GET_FIELD(t_Month, capitalizedName),
        DECLARE_GET_FIELD(t_Month, lowerCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, lowerCaseName),
        DECLARE_GET_FIELD(t_Month, number),
        DECLARE_GET_FIELD(t_Month, upperCaseAbbreviation),
        DECLARE_GET_FIELD(t_Month, upperCaseName),
        DECLARE_GET_FIELD(t_Month, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Month__methods_[] = {
        DECLARE_METHOD(t_Month, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, of_, METH_VARARGS),
        DECLARE_METHOD(t_Month, getCapitalizedAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getCapitalizedName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getLowerCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, getMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, getNumber, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseAbbreviation, METH_NOARGS),
        DECLARE_METHOD(t_Month, getUpperCaseName, METH_NOARGS),
        DECLARE_METHOD(t_Month, parseMonth, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Month, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Month, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Month)[] = {
        { Py_tp_methods, t_Month__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Month__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Month)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(Month, t_Month, Month);
      PyObject *t_Month::wrap_Object(const Month& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Month::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Month::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Month *self = (t_Month *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Month::install(PyObject *module)
      {
        installType(&PY_TYPE(Month), &PY_TYPE_DEF(Month), module, "Month", 0);
      }

      void t_Month::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "class_", make_descriptor(Month::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "wrapfn_", make_descriptor(t_Month::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "boxfn_", make_descriptor(boxObject));
        env->getClass(Month::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "APRIL", make_descriptor(t_Month::wrap_Object(*Month::APRIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "AUGUST", make_descriptor(t_Month::wrap_Object(*Month::AUGUST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "DECEMBER", make_descriptor(t_Month::wrap_Object(*Month::DECEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "FEBRUARY", make_descriptor(t_Month::wrap_Object(*Month::FEBRUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JANUARY", make_descriptor(t_Month::wrap_Object(*Month::JANUARY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JULY", make_descriptor(t_Month::wrap_Object(*Month::JULY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "JUNE", make_descriptor(t_Month::wrap_Object(*Month::JUNE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MARCH", make_descriptor(t_Month::wrap_Object(*Month::MARCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "MAY", make_descriptor(t_Month::wrap_Object(*Month::MAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "NOVEMBER", make_descriptor(t_Month::wrap_Object(*Month::NOVEMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "OCTOBER", make_descriptor(t_Month::wrap_Object(*Month::OCTOBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Month), "SEPTEMBER", make_descriptor(t_Month::wrap_Object(*Month::SEPTEMBER)));
      }

      static PyObject *t_Month_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Month::initializeClass, 1)))
          return NULL;
        return t_Month::wrap_Object(Month(((t_Month *) arg)->object.this$));
      }
      static PyObject *t_Month_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Month::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Month_of_(t_Month *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Month_getCapitalizedAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getCapitalizedName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getCapitalizedName());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getLowerCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getLowerCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_getMonth(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        Month result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::getMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_getNumber(t_Month *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Month_getUpperCaseAbbreviation(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseAbbreviation());
        return j2p(result);
      }

      static PyObject *t_Month_getUpperCaseName(t_Month *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getUpperCaseName());
        return j2p(result);
      }

      static PyObject *t_Month_parseMonth(PyTypeObject *type, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::parseMonth(a0));
          return t_Month::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "parseMonth", arg);
        return NULL;
      }

      static PyObject *t_Month_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        Month result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::time::Month::valueOf(a0));
          return t_Month::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_Month_values(PyTypeObject *type)
      {
        JArray< Month > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::Month::values());
        return JArray<jobject>(result.this$).wrap(t_Month::wrap_jobject);
      }
      static PyObject *t_Month_get__parameters_(t_Month *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Month_get__capitalizedAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__capitalizedName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getCapitalizedName());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__lowerCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLowerCaseName());
        return j2p(value);
      }

      static PyObject *t_Month_get__number(t_Month *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Month_get__upperCaseAbbreviation(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseAbbreviation());
        return j2p(value);
      }

      static PyObject *t_Month_get__upperCaseName(t_Month *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getUpperCaseName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractSubHyperplane::class$ = NULL;
        jmethodID *AbstractSubHyperplane::mids$ = NULL;
        bool AbstractSubHyperplane::live$ = false;

        jclass AbstractSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyTransform_1c3bedd7c9795a05] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_copySelf_6232b5875bc78708] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_getHyperplane_db5d0f7cdc937b69] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getRemainingRegion_fd006079784937f2] = env->getMethodID(cls, "getRemainingRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getSize_557b8123390d8d0c] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_7e5457b34b41ca86] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_split_ae8e2bbf2389e86e] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
            mids$[mid_buildNew_0ffd07a16ed53139] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractSubHyperplane AbstractSubHyperplane::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_applyTransform_1c3bedd7c9795a05], a0.this$));
        }

        AbstractSubHyperplane AbstractSubHyperplane::copySelf() const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_6232b5875bc78708]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane AbstractSubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_db5d0f7cdc937b69]));
        }

        ::org::hipparchus::geometry::partitioning::Region AbstractSubHyperplane::getRemainingRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getRemainingRegion_fd006079784937f2]));
        }

        jdouble AbstractSubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_557b8123390d8d0c]);
        }

        jboolean AbstractSubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
        }

        AbstractSubHyperplane AbstractSubHyperplane::reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_7e5457b34b41ca86], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane AbstractSubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_ae8e2bbf2389e86e], a0.this$));
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
    namespace geometry {
      namespace partitioning {
        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args);
        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data);
        static PyGetSetDef t_AbstractSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, empty),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, remainingRegion),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, size),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_AbstractSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getRemainingRegion, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractSubHyperplane)[] = {
          { Py_tp_methods, t_AbstractSubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractSubHyperplane, t_AbstractSubHyperplane, AbstractSubHyperplane);
        PyObject *t_AbstractSubHyperplane::wrap_Object(const AbstractSubHyperplane& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractSubHyperplane), &PY_TYPE_DEF(AbstractSubHyperplane), module, "AbstractSubHyperplane", 0);
        }

        void t_AbstractSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "class_", make_descriptor(AbstractSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "wrapfn_", make_descriptor(t_AbstractSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_AbstractSubHyperplane::wrap_Object(AbstractSubHyperplane(((t_AbstractSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self)
        {
          AbstractSubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Region value((jobject) NULL);
          OBJ_CALL(value = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
