#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/gnss/Frequency.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouSatelliteType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
                mids$[mid_init$_b082c972ce0d050e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/Frequency;)V");
                mids$[mid_getADot_456d9a2f64d6b28d] = env->getMethodID(cls, "getADot", "()D");
                mids$[mid_getDeltaN0Dot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaN0Dot", "()D");
                mids$[mid_getHealth_f2f64475e4580546] = env->getMethodID(cls, "getHealth", "()I");
                mids$[mid_getIODC_f2f64475e4580546] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_f2f64475e4580546] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getIntegrityFlags_f2f64475e4580546] = env->getMethodID(cls, "getIntegrityFlags", "()I");
                mids$[mid_getIscB1CD_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscB1CD", "()D");
                mids$[mid_getIscB1CP_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscB1CP", "()D");
                mids$[mid_getIscB2AD_456d9a2f64d6b28d] = env->getMethodID(cls, "getIscB2AD", "()D");
                mids$[mid_getSatelliteType_e8e077e599f60e48] = env->getMethodID(cls, "getSatelliteType", "()Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;");
                mids$[mid_getSignal_4c8e7a9f75fb8fdd] = env->getMethodID(cls, "getSignal", "()Lorg/orekit/gnss/Frequency;");
                mids$[mid_getSisaiOc1_f2f64475e4580546] = env->getMethodID(cls, "getSisaiOc1", "()I");
                mids$[mid_getSisaiOc2_f2f64475e4580546] = env->getMethodID(cls, "getSisaiOc2", "()I");
                mids$[mid_getSisaiOcb_f2f64475e4580546] = env->getMethodID(cls, "getSisaiOcb", "()I");
                mids$[mid_getSisaiOe_f2f64475e4580546] = env->getMethodID(cls, "getSisaiOe", "()I");
                mids$[mid_getSismai_f2f64475e4580546] = env->getMethodID(cls, "getSismai", "()I");
                mids$[mid_getTgdB1Cp_456d9a2f64d6b28d] = env->getMethodID(cls, "getTgdB1Cp", "()D");
                mids$[mid_getTgdB2ap_456d9a2f64d6b28d] = env->getMethodID(cls, "getTgdB2ap", "()D");
                mids$[mid_getTgdB2bI_456d9a2f64d6b28d] = env->getMethodID(cls, "getTgdB2bI", "()D");
                mids$[mid_setADot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setADot", "(D)V");
                mids$[mid_setDeltaN0Dot_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaN0Dot", "(D)V");
                mids$[mid_setHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setHealth", "(I)V");
                mids$[mid_setIODC_0a2a1ac2721c0336] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_0a2a1ac2721c0336] = env->getMethodID(cls, "setIODE", "(I)V");
                mids$[mid_setIntegrityFlags_0a2a1ac2721c0336] = env->getMethodID(cls, "setIntegrityFlags", "(I)V");
                mids$[mid_setIscB1CD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscB1CD", "(D)V");
                mids$[mid_setIscB1CP_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscB1CP", "(D)V");
                mids$[mid_setIscB2AD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIscB2AD", "(D)V");
                mids$[mid_setSatelliteType_6feace330e17847c] = env->getMethodID(cls, "setSatelliteType", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouSatelliteType;)V");
                mids$[mid_setSisaiOc1_0a2a1ac2721c0336] = env->getMethodID(cls, "setSisaiOc1", "(I)V");
                mids$[mid_setSisaiOc2_0a2a1ac2721c0336] = env->getMethodID(cls, "setSisaiOc2", "(I)V");
                mids$[mid_setSisaiOcb_0a2a1ac2721c0336] = env->getMethodID(cls, "setSisaiOcb", "(I)V");
                mids$[mid_setSisaiOe_0a2a1ac2721c0336] = env->getMethodID(cls, "setSisaiOe", "(I)V");
                mids$[mid_setSismai_0a2a1ac2721c0336] = env->getMethodID(cls, "setSismai", "(I)V");
                mids$[mid_setTgdB1Cp_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTgdB1Cp", "(D)V");
                mids$[mid_setTgdB2ap_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTgdB2ap", "(D)V");
                mids$[mid_setTgdB2bI_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTgdB2bI", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CNV1 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV1", "Ljava/lang/String;"));
                CNV2 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV2", "Ljava/lang/String;"));
                CNV3 = new ::java::lang::String(env->getStaticObjectField(cls, "CNV3", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            BeidouCivilianNavigationMessage::BeidouCivilianNavigationMessage(const ::org::orekit::gnss::Frequency & a0) : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_b082c972ce0d050e, a0.this$)) {}

            jdouble BeidouCivilianNavigationMessage::getADot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getADot_456d9a2f64d6b28d]);
            }

            jdouble BeidouCivilianNavigationMessage::getDeltaN0Dot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaN0Dot_456d9a2f64d6b28d]);
            }

            jint BeidouCivilianNavigationMessage::getHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getHealth_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getIntegrityFlags() const
            {
              return env->callIntMethod(this$, mids$[mid_getIntegrityFlags_f2f64475e4580546]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CD_456d9a2f64d6b28d]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB1CP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB1CP_456d9a2f64d6b28d]);
            }

            jdouble BeidouCivilianNavigationMessage::getIscB2AD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getIscB2AD_456d9a2f64d6b28d]);
            }

            ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType BeidouCivilianNavigationMessage::getSatelliteType() const
            {
              return ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType(env->callObjectMethod(this$, mids$[mid_getSatelliteType_e8e077e599f60e48]));
            }

            ::org::orekit::gnss::Frequency BeidouCivilianNavigationMessage::getSignal() const
            {
              return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getSignal_4c8e7a9f75fb8fdd]));
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc1() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc1_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOc2() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOc2_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOcb() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOcb_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getSisaiOe() const
            {
              return env->callIntMethod(this$, mids$[mid_getSisaiOe_f2f64475e4580546]);
            }

            jint BeidouCivilianNavigationMessage::getSismai() const
            {
              return env->callIntMethod(this$, mids$[mid_getSismai_f2f64475e4580546]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB1Cp() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB1Cp_456d9a2f64d6b28d]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2ap() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2ap_456d9a2f64d6b28d]);
            }

            jdouble BeidouCivilianNavigationMessage::getTgdB2bI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTgdB2bI_456d9a2f64d6b28d]);
            }

            void BeidouCivilianNavigationMessage::setADot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setADot_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setDeltaN0Dot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDeltaN0Dot_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setHealth_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setIODE(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setIntegrityFlags(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIntegrityFlags_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CD_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB1CP(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB1CP_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setIscB2AD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIscB2AD_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setSatelliteType(const ::org::orekit::propagation::analytical::gnss::data::BeidouSatelliteType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSatelliteType_6feace330e17847c], a0.this$);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc1(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc1_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOc2(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOc2_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOcb(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOcb_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setSisaiOe(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisaiOe_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setSismai(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSismai_0a2a1ac2721c0336], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB1Cp(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB1Cp_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2ap(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2ap_77e0f9a1f260e2e5], a0);
            }

            void BeidouCivilianNavigationMessage::setTgdB2bI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTgdB2bI_77e0f9a1f260e2e5], a0);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeState::class$ = NULL;
              jmethodID *AttitudeState::mids$ = NULL;
              bool AttitudeState::live$ = false;

              jclass AttitudeState::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeState");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_aba7050cfb4f77b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getAttitudeType_ec3c84a694477494] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_7cdc325af0834901] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getRateElementsType_6a98691d179a0a11] = env->getMethodID(cls, "getRateElementsType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_toAngular_c59ccb47b97ee649] = env->getMethodID(cls, "toAngular", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeState::AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aba7050cfb4f77b8, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeState::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_ec3c84a694477494]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c14c1c09874639c8]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
              }

              JArray< jdouble > AttitudeState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_7cdc325af0834901]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeState::getRateElementsType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateElementsType_6a98691d179a0a11]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeState::toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_c59ccb47b97ee649], a0.this$));
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
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self);
              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self);
              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg);
              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data);
              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data);
              static PyGetSetDef t_AttitudeState__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeState, attitudeType),
                DECLARE_GET_FIELD(t_AttitudeState, availableDerivatives),
                DECLARE_GET_FIELD(t_AttitudeState, date),
                DECLARE_GET_FIELD(t_AttitudeState, elements),
                DECLARE_GET_FIELD(t_AttitudeState, rateElementsType),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeState__methods_[] = {
                DECLARE_METHOD(t_AttitudeState, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeState, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getElements, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, getRateElementsType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeState, toAngular, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeState)[] = {
                { Py_tp_methods, t_AttitudeState__methods_ },
                { Py_tp_init, (void *) t_AttitudeState_init_ },
                { Py_tp_getset, t_AttitudeState__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeState)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeState, t_AttitudeState, AttitudeState);

              void t_AttitudeState::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeState), &PY_TYPE_DEF(AttitudeState), module, "AttitudeState", 0);
              }

              void t_AttitudeState::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "class_", make_descriptor(AttitudeState::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "wrapfn_", make_descriptor(t_AttitudeState::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeState), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeState_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeState::initializeClass, 1)))
                  return NULL;
                return t_AttitudeState::wrap_Object(AttitudeState(((t_AttitudeState *) arg)->object.this$));
              }
              static PyObject *t_AttitudeState_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeState::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeState_init_(t_AttitudeState *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< ::java::lang::String > a3((jobject) NULL);
                jint a4;
                AttitudeState object((jobject) NULL);

                if (!parseArgs(args, "KKk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = AttitudeState(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeState_getAttitudeType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getAvailableDerivatives(t_AttitudeState *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getDate(t_AttitudeState *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_getElements(t_AttitudeState *self)
              {
                JArray< jdouble > result((jobject) NULL);
                OBJ_CALL(result = self->object.getElements());
                return result.wrap();
              }

              static PyObject *t_AttitudeState_getRateElementsType(t_AttitudeState *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeState_toAngular(t_AttitudeState *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(result = self->object.toAngular(a0));
                  return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "toAngular", arg);
                return NULL;
              }

              static PyObject *t_AttitudeState_get__attitudeType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__availableDerivatives(t_AttitudeState *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__date(t_AttitudeState *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeState_get__elements(t_AttitudeState *self, void *data)
              {
                JArray< jdouble > value((jobject) NULL);
                OBJ_CALL(value = self->object.getElements());
                return value.wrap();
              }

              static PyObject *t_AttitudeState_get__rateElementsType(t_AttitudeState *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateElementsType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *UnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool UnscentedKalmanEstimatorBuilder::live$ = false;

        jclass UnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_cea461a1ebefe76f] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_8d30b93df6f56200] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/UnscentedKalmanEstimator;");
            mids$[mid_decomposer_f1308289ced1998d] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_ee5ea7c14b90b0ef] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_f2950271fe7108c5] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnscentedKalmanEstimatorBuilder::UnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_cea461a1ebefe76f], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::UnscentedKalmanEstimator UnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::UnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_8d30b93df6f56200]));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_f1308289ced1998d], a0.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_ee5ea7c14b90b0ef], a0.this$, a1.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_f2950271fe7108c5], a0.this$));
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
      namespace sequential {
        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_UnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_UnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimatorBuilder, t_UnscentedKalmanEstimatorBuilder, UnscentedKalmanEstimatorBuilder);

        void t_UnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder), module, "UnscentedKalmanEstimatorBuilder", 0);
        }

        void t_UnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "class_", make_descriptor(UnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimatorBuilder::wrap_Object(UnscentedKalmanEstimatorBuilder(((t_UnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          UnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = UnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_UnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
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
            mids$[mid_init$_f0b1241ee614add6] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)V");
            mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getKnots_01c7d10e96d5cf94] = env->getMethodID(cls, "getKnots", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getN_f2f64475e4580546] = env->getMethodID(cls, "getN", "()I");
            mids$[mid_getPolynomials_e720537acd3cdf39] = env->getMethodID(cls, "getPolynomials", "()[Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_isValidPoint_1ef7539925017c56] = env->getMethodID(cls, "isValidPoint", "(Lorg/hipparchus/CalculusFieldElement;)Z");
            mids$[mid_polynomialSplineDerivative_2de249337843d9cb] = env->getMethodID(cls, "polynomialSplineDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");
            mids$[mid_value_cc0a3d6abf820939] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialSplineFunction::FieldPolynomialSplineFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0b1241ee614add6, a0.this$, a1.this$)) {}

        ::org::hipparchus::Field FieldPolynomialSplineFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialSplineFunction::getKnots() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getKnots_01c7d10e96d5cf94]));
        }

        jint FieldPolynomialSplineFunction::getN() const
        {
          return env->callIntMethod(this$, mids$[mid_getN_f2f64475e4580546]);
        }

        JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction > FieldPolynomialSplineFunction::getPolynomials() const
        {
          return JArray< ::org::hipparchus::analysis::polynomials::FieldPolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getPolynomials_e720537acd3cdf39]));
        }

        jboolean FieldPolynomialSplineFunction::isValidPoint(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_1ef7539925017c56], a0.this$);
        }

        FieldPolynomialSplineFunction FieldPolynomialSplineFunction::polynomialSplineDerivative() const
        {
          return FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_polynomialSplineDerivative_2de249337843d9cb]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_cc0a3d6abf820939], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialSplineFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
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
#include "org/orekit/time/PythonFieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeShiftable::class$ = NULL;
      jmethodID *PythonFieldTimeShiftable::mids$ = NULL;
      bool PythonFieldTimeShiftable::live$ = false;

      jclass PythonFieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_de16060cd3936e5b] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_bbd75fda8bf31e8d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_KK_bbd75fda8bf31e8d] = env->getMethodID(cls, "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeShiftable::PythonFieldTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }

      ::org::orekit::time::FieldTimeShiftable PythonFieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::time::FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_bbd75fda8bf31e8d], a0.this$));
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
      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args);
      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self);
      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args);
      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg);
      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data);
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonFieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeShiftable)[] = {
        { Py_tp_methods, t_PythonFieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeShiftable_init_ },
        { Py_tp_getset, t_PythonFieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeShiftable, t_PythonFieldTimeShiftable, PythonFieldTimeShiftable);
      PyObject *t_PythonFieldTimeShiftable::wrap_Object(const PythonFieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeShiftable), &PY_TYPE_DEF(PythonFieldTimeShiftable), module, "PythonFieldTimeShiftable", 1);
      }

      void t_PythonFieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "class_", make_descriptor(PythonFieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "wrapfn_", make_descriptor(t_PythonFieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy1 },
          { "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy_KK2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeShiftable::wrap_Object(PythonFieldTimeShiftable(((t_PythonFieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args)
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

      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy_KK", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy_KK", result);
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

      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data)
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
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm02Data::class$ = NULL;
              jmethodID *SsrIgm02Data::mids$ = NULL;
              bool SsrIgm02Data::live$ = false;

              jclass SsrIgm02Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm02Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ca1c0bf5185bdc62] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_setClockCorrection_a1424ed96e1e854b] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm02Data::SsrIgm02Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection SsrIgm02Data::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ca1c0bf5185bdc62]));
              }

              void SsrIgm02Data::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_a1424ed96e1e854b], a0.this$);
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
              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self);
              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg);
              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data);
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm02Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm02Data, clockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm02Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm02Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm02Data, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm02Data, setClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm02Data)[] = {
                { Py_tp_methods, t_SsrIgm02Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm02Data_init_ },
                { Py_tp_getset, t_SsrIgm02Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm02Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm02Data, t_SsrIgm02Data, SsrIgm02Data);

              void t_SsrIgm02Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm02Data), &PY_TYPE_DEF(SsrIgm02Data), module, "SsrIgm02Data", 0);
              }

              void t_SsrIgm02Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "class_", make_descriptor(SsrIgm02Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "wrapfn_", make_descriptor(t_SsrIgm02Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm02Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm02Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm02Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm02Data::wrap_Object(SsrIgm02Data(((t_SsrIgm02Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm02Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm02Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm02Data_init_(t_SsrIgm02Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm02Data object((jobject) NULL);

                INT_CALL(object = SsrIgm02Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm02Data_getClockCorrection(t_SsrIgm02Data *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_SsrIgm02Data_setClockCorrection(t_SsrIgm02Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm02Data_get__clockCorrection(t_SsrIgm02Data *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_SsrIgm02Data_set__clockCorrection(t_SsrIgm02Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
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
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSScale::class$ = NULL;
      jmethodID *GLONASSScale::mids$ = NULL;
      bool GLONASSScale::live$ = false;

      jclass GLONASSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLeap_e912d21057defe63] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_7bc0fd76ee915b72] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_insideLeap_ee2067c5768b6768] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_5997cf1e9de74766] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_982c9f163875e1c9] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_90583a249f651dc5] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble GLONASSScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String GLONASSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_ee2067c5768b6768], a0.this$);
      }

      jboolean GLONASSScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_5997cf1e9de74766], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_982c9f163875e1c9], a0.this$);
      }

      jint GLONASSScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_90583a249f651dc5], a0.this$);
      }

      jdouble GLONASSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GLONASSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble GLONASSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String GLONASSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self);
      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args);
      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data);
      static PyGetSetDef t_GLONASSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSScale__methods_[] = {
        DECLARE_METHOD(t_GLONASSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GLONASSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSScale)[] = {
        { Py_tp_methods, t_GLONASSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GLONASSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSScale, t_GLONASSScale, GLONASSScale);

      void t_GLONASSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSScale), &PY_TYPE_DEF(GLONASSScale), module, "GLONASSScale", 0);
      }

      void t_GLONASSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "class_", make_descriptor(GLONASSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "wrapfn_", make_descriptor(t_GLONASSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSScale::initializeClass, 1)))
          return NULL;
        return t_GLONASSScale::wrap_Object(GLONASSScale(((t_GLONASSScale *) arg)->object.this$));
      }
      static PyObject *t_GLONASSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GLONASSScale_getLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_getName(t_GLONASSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GLONASSScale_insideLeap(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_minuteDuration(t_GLONASSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_offsetFromTAI(t_GLONASSScale *self, PyObject *args)
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

      static PyObject *t_GLONASSScale_offsetToTAI(t_GLONASSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GLONASSScale_toString(t_GLONASSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GLONASSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GLONASSScale_get__name(t_GLONASSScale *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldDSSTTesseralContext::class$ = NULL;
            jmethodID *FieldDSSTTesseralContext::mids$ = NULL;
            bool FieldDSSTTesseralContext::live$ = false;

            jclass FieldDSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldDSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_e6d4d3215c30992a] = env->getMethodID(cls, "getAx2oA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoA_e6d4d3215c30992a] = env->getMethodID(cls, "getBoA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getBoABpo_e6d4d3215c30992a] = env->getMethodID(cls, "getBoABpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi_e6d4d3215c30992a] = env->getMethodID(cls, "getChi", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getChi2_e6d4d3215c30992a] = env->getMethodID(cls, "getChi2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_e6d4d3215c30992a] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getE2_e6d4d3215c30992a] = env->getMethodID(cls, "getE2", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMoa_e6d4d3215c30992a] = env->getMethodID(cls, "getMoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoAB_e6d4d3215c30992a] = env->getMethodID(cls, "getOoAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOrbitPeriod_e6d4d3215c30992a] = env->getMethodID(cls, "getOrbitPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRatio_e6d4d3215c30992a] = env->getMethodID(cls, "getRatio", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRoa_e6d4d3215c30992a] = env->getMethodID(cls, "getRoa", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTheta_e6d4d3215c30992a] = env->getMethodID(cls, "getTheta", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getAx2oA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAx2oA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getBoABpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getBoABpo_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getChi2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getChi2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getE2() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE2_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getMoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMoa_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOoAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoAB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getOrbitPeriod() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOrbitPeriod_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRatio() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRatio_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getRoa() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRoa_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldDSSTTesseralContext::getTheta() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTheta_e6d4d3215c30992a]));
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
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args);
            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self);
            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data);
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data);
            static PyGetSetDef t_FieldDSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, theta),
              DECLARE_GET_FIELD(t_FieldDSSTTesseralContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldDSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_FieldDSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_FieldDSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldDSSTTesseralContext)[] = {
              { Py_tp_methods, t_FieldDSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldDSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldDSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldDSSTTesseralContext, t_FieldDSSTTesseralContext, FieldDSSTTesseralContext);
            PyObject *t_FieldDSSTTesseralContext::wrap_Object(const FieldDSSTTesseralContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldDSSTTesseralContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldDSSTTesseralContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldDSSTTesseralContext *self = (t_FieldDSSTTesseralContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldDSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldDSSTTesseralContext), &PY_TYPE_DEF(FieldDSSTTesseralContext), module, "FieldDSSTTesseralContext", 0);
            }

            void t_FieldDSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "class_", make_descriptor(FieldDSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "wrapfn_", make_descriptor(t_FieldDSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldDSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldDSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_FieldDSSTTesseralContext::wrap_Object(FieldDSSTTesseralContext(((t_FieldDSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_FieldDSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldDSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldDSSTTesseralContext_of_(t_FieldDSSTTesseralContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldDSSTTesseralContext_getAx2oA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getAx2oA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoA(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getBoABpo(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getBoABpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getChi2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getChi2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getCo2AB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getE2(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getE2());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMeanMotion(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getMoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOoAB(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getOrbitPeriod(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRatio(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRatio());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getRoa(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoa());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldDSSTTesseralContext_getTheta(t_FieldDSSTTesseralContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTheta());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldDSSTTesseralContext_get__parameters_(t_FieldDSSTTesseralContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ax2oA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getAx2oA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boA(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__boABpo(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getBoABpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__chi2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getChi2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__co2AB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__e2(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getE2());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__meanMotion(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__moa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ooAB(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__orbitPeriod(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__ratio(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRatio());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__roa(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoa());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldDSSTTesseralContext_get__theta(t_FieldDSSTTesseralContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTheta());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationType::class$ = NULL;
      jmethodID *ObservationType::mids$ = NULL;
      bool ObservationType::live$ = false;
      ObservationType *ObservationType::C0 = NULL;
      ObservationType *ObservationType::C1 = NULL;
      ObservationType *ObservationType::C1A = NULL;
      ObservationType *ObservationType::C1B = NULL;
      ObservationType *ObservationType::C1C = NULL;
      ObservationType *ObservationType::C1D = NULL;
      ObservationType *ObservationType::C1E = NULL;
      ObservationType *ObservationType::C1I = NULL;
      ObservationType *ObservationType::C1L = NULL;
      ObservationType *ObservationType::C1M = NULL;
      ObservationType *ObservationType::C1P = NULL;
      ObservationType *ObservationType::C1Q = NULL;
      ObservationType *ObservationType::C1S = NULL;
      ObservationType *ObservationType::C1W = NULL;
      ObservationType *ObservationType::C1X = NULL;
      ObservationType *ObservationType::C1Y = NULL;
      ObservationType *ObservationType::C1Z = NULL;
      ObservationType *ObservationType::C2 = NULL;
      ObservationType *ObservationType::C2C = NULL;
      ObservationType *ObservationType::C2D = NULL;
      ObservationType *ObservationType::C2I = NULL;
      ObservationType *ObservationType::C2L = NULL;
      ObservationType *ObservationType::C2M = NULL;
      ObservationType *ObservationType::C2P = NULL;
      ObservationType *ObservationType::C2Q = NULL;
      ObservationType *ObservationType::C2S = NULL;
      ObservationType *ObservationType::C2W = NULL;
      ObservationType *ObservationType::C2X = NULL;
      ObservationType *ObservationType::C2Y = NULL;
      ObservationType *ObservationType::C3I = NULL;
      ObservationType *ObservationType::C3Q = NULL;
      ObservationType *ObservationType::C3X = NULL;
      ObservationType *ObservationType::C4A = NULL;
      ObservationType *ObservationType::C4B = NULL;
      ObservationType *ObservationType::C4X = NULL;
      ObservationType *ObservationType::C5 = NULL;
      ObservationType *ObservationType::C5A = NULL;
      ObservationType *ObservationType::C5B = NULL;
      ObservationType *ObservationType::C5C = NULL;
      ObservationType *ObservationType::C5D = NULL;
      ObservationType *ObservationType::C5I = NULL;
      ObservationType *ObservationType::C5P = NULL;
      ObservationType *ObservationType::C5Q = NULL;
      ObservationType *ObservationType::C5X = NULL;
      ObservationType *ObservationType::C5Z = NULL;
      ObservationType *ObservationType::C6 = NULL;
      ObservationType *ObservationType::C6A = NULL;
      ObservationType *ObservationType::C6B = NULL;
      ObservationType *ObservationType::C6C = NULL;
      ObservationType *ObservationType::C6D = NULL;
      ObservationType *ObservationType::C6E = NULL;
      ObservationType *ObservationType::C6I = NULL;
      ObservationType *ObservationType::C6L = NULL;
      ObservationType *ObservationType::C6P = NULL;
      ObservationType *ObservationType::C6Q = NULL;
      ObservationType *ObservationType::C6S = NULL;
      ObservationType *ObservationType::C6X = NULL;
      ObservationType *ObservationType::C6Z = NULL;
      ObservationType *ObservationType::C7 = NULL;
      ObservationType *ObservationType::C7D = NULL;
      ObservationType *ObservationType::C7I = NULL;
      ObservationType *ObservationType::C7P = NULL;
      ObservationType *ObservationType::C7Q = NULL;
      ObservationType *ObservationType::C7X = NULL;
      ObservationType *ObservationType::C7Z = NULL;
      ObservationType *ObservationType::C8 = NULL;
      ObservationType *ObservationType::C8D = NULL;
      ObservationType *ObservationType::C8I = NULL;
      ObservationType *ObservationType::C8P = NULL;
      ObservationType *ObservationType::C8Q = NULL;
      ObservationType *ObservationType::C8X = NULL;
      ObservationType *ObservationType::C9A = NULL;
      ObservationType *ObservationType::C9B = NULL;
      ObservationType *ObservationType::C9C = NULL;
      ObservationType *ObservationType::C9X = NULL;
      ObservationType *ObservationType::CA = NULL;
      ObservationType *ObservationType::CB = NULL;
      ObservationType *ObservationType::CC = NULL;
      ObservationType *ObservationType::CD = NULL;
      ObservationType *ObservationType::D0 = NULL;
      ObservationType *ObservationType::D1 = NULL;
      ObservationType *ObservationType::D1A = NULL;
      ObservationType *ObservationType::D1B = NULL;
      ObservationType *ObservationType::D1C = NULL;
      ObservationType *ObservationType::D1D = NULL;
      ObservationType *ObservationType::D1E = NULL;
      ObservationType *ObservationType::D1I = NULL;
      ObservationType *ObservationType::D1L = NULL;
      ObservationType *ObservationType::D1M = NULL;
      ObservationType *ObservationType::D1N = NULL;
      ObservationType *ObservationType::D1P = NULL;
      ObservationType *ObservationType::D1S = NULL;
      ObservationType *ObservationType::D1W = NULL;
      ObservationType *ObservationType::D1X = NULL;
      ObservationType *ObservationType::D1Y = NULL;
      ObservationType *ObservationType::D1Z = NULL;
      ObservationType *ObservationType::D2 = NULL;
      ObservationType *ObservationType::D2C = NULL;
      ObservationType *ObservationType::D2D = NULL;
      ObservationType *ObservationType::D2I = NULL;
      ObservationType *ObservationType::D2L = NULL;
      ObservationType *ObservationType::D2M = NULL;
      ObservationType *ObservationType::D2N = NULL;
      ObservationType *ObservationType::D2P = NULL;
      ObservationType *ObservationType::D2Q = NULL;
      ObservationType *ObservationType::D2S = NULL;
      ObservationType *ObservationType::D2W = NULL;
      ObservationType *ObservationType::D2X = NULL;
      ObservationType *ObservationType::D2Y = NULL;
      ObservationType *ObservationType::D3I = NULL;
      ObservationType *ObservationType::D3Q = NULL;
      ObservationType *ObservationType::D3X = NULL;
      ObservationType *ObservationType::D4A = NULL;
      ObservationType *ObservationType::D4B = NULL;
      ObservationType *ObservationType::D4X = NULL;
      ObservationType *ObservationType::D5 = NULL;
      ObservationType *ObservationType::D5A = NULL;
      ObservationType *ObservationType::D5B = NULL;
      ObservationType *ObservationType::D5C = NULL;
      ObservationType *ObservationType::D5D = NULL;
      ObservationType *ObservationType::D5I = NULL;
      ObservationType *ObservationType::D5P = NULL;
      ObservationType *ObservationType::D5Q = NULL;
      ObservationType *ObservationType::D5X = NULL;
      ObservationType *ObservationType::D5Z = NULL;
      ObservationType *ObservationType::D6 = NULL;
      ObservationType *ObservationType::D6A = NULL;
      ObservationType *ObservationType::D6B = NULL;
      ObservationType *ObservationType::D6C = NULL;
      ObservationType *ObservationType::D6D = NULL;
      ObservationType *ObservationType::D6E = NULL;
      ObservationType *ObservationType::D6I = NULL;
      ObservationType *ObservationType::D6L = NULL;
      ObservationType *ObservationType::D6P = NULL;
      ObservationType *ObservationType::D6Q = NULL;
      ObservationType *ObservationType::D6S = NULL;
      ObservationType *ObservationType::D6X = NULL;
      ObservationType *ObservationType::D6Z = NULL;
      ObservationType *ObservationType::D7 = NULL;
      ObservationType *ObservationType::D7D = NULL;
      ObservationType *ObservationType::D7I = NULL;
      ObservationType *ObservationType::D7P = NULL;
      ObservationType *ObservationType::D7Q = NULL;
      ObservationType *ObservationType::D7X = NULL;
      ObservationType *ObservationType::D7Z = NULL;
      ObservationType *ObservationType::D8 = NULL;
      ObservationType *ObservationType::D8D = NULL;
      ObservationType *ObservationType::D8I = NULL;
      ObservationType *ObservationType::D8P = NULL;
      ObservationType *ObservationType::D8Q = NULL;
      ObservationType *ObservationType::D8X = NULL;
      ObservationType *ObservationType::D9A = NULL;
      ObservationType *ObservationType::D9B = NULL;
      ObservationType *ObservationType::D9C = NULL;
      ObservationType *ObservationType::D9X = NULL;
      ObservationType *ObservationType::DA = NULL;
      ObservationType *ObservationType::DB = NULL;
      ObservationType *ObservationType::DC = NULL;
      ObservationType *ObservationType::DD = NULL;
      ObservationType *ObservationType::L0 = NULL;
      ObservationType *ObservationType::L1 = NULL;
      ObservationType *ObservationType::L1A = NULL;
      ObservationType *ObservationType::L1B = NULL;
      ObservationType *ObservationType::L1C = NULL;
      ObservationType *ObservationType::L1D = NULL;
      ObservationType *ObservationType::L1E = NULL;
      ObservationType *ObservationType::L1I = NULL;
      ObservationType *ObservationType::L1L = NULL;
      ObservationType *ObservationType::L1M = NULL;
      ObservationType *ObservationType::L1N = NULL;
      ObservationType *ObservationType::L1P = NULL;
      ObservationType *ObservationType::L1S = NULL;
      ObservationType *ObservationType::L1W = NULL;
      ObservationType *ObservationType::L1X = NULL;
      ObservationType *ObservationType::L1Y = NULL;
      ObservationType *ObservationType::L1Z = NULL;
      ObservationType *ObservationType::L2 = NULL;
      ObservationType *ObservationType::L2C = NULL;
      ObservationType *ObservationType::L2D = NULL;
      ObservationType *ObservationType::L2I = NULL;
      ObservationType *ObservationType::L2L = NULL;
      ObservationType *ObservationType::L2M = NULL;
      ObservationType *ObservationType::L2N = NULL;
      ObservationType *ObservationType::L2P = NULL;
      ObservationType *ObservationType::L2Q = NULL;
      ObservationType *ObservationType::L2S = NULL;
      ObservationType *ObservationType::L2W = NULL;
      ObservationType *ObservationType::L2X = NULL;
      ObservationType *ObservationType::L2Y = NULL;
      ObservationType *ObservationType::L3I = NULL;
      ObservationType *ObservationType::L3Q = NULL;
      ObservationType *ObservationType::L3X = NULL;
      ObservationType *ObservationType::L4A = NULL;
      ObservationType *ObservationType::L4B = NULL;
      ObservationType *ObservationType::L4X = NULL;
      ObservationType *ObservationType::L5 = NULL;
      ObservationType *ObservationType::L5A = NULL;
      ObservationType *ObservationType::L5B = NULL;
      ObservationType *ObservationType::L5C = NULL;
      ObservationType *ObservationType::L5D = NULL;
      ObservationType *ObservationType::L5I = NULL;
      ObservationType *ObservationType::L5P = NULL;
      ObservationType *ObservationType::L5Q = NULL;
      ObservationType *ObservationType::L5X = NULL;
      ObservationType *ObservationType::L5Z = NULL;
      ObservationType *ObservationType::L6 = NULL;
      ObservationType *ObservationType::L6A = NULL;
      ObservationType *ObservationType::L6B = NULL;
      ObservationType *ObservationType::L6C = NULL;
      ObservationType *ObservationType::L6D = NULL;
      ObservationType *ObservationType::L6E = NULL;
      ObservationType *ObservationType::L6I = NULL;
      ObservationType *ObservationType::L6L = NULL;
      ObservationType *ObservationType::L6P = NULL;
      ObservationType *ObservationType::L6Q = NULL;
      ObservationType *ObservationType::L6S = NULL;
      ObservationType *ObservationType::L6X = NULL;
      ObservationType *ObservationType::L6Z = NULL;
      ObservationType *ObservationType::L7 = NULL;
      ObservationType *ObservationType::L7D = NULL;
      ObservationType *ObservationType::L7I = NULL;
      ObservationType *ObservationType::L7P = NULL;
      ObservationType *ObservationType::L7Q = NULL;
      ObservationType *ObservationType::L7X = NULL;
      ObservationType *ObservationType::L7Z = NULL;
      ObservationType *ObservationType::L8 = NULL;
      ObservationType *ObservationType::L8D = NULL;
      ObservationType *ObservationType::L8I = NULL;
      ObservationType *ObservationType::L8P = NULL;
      ObservationType *ObservationType::L8Q = NULL;
      ObservationType *ObservationType::L8X = NULL;
      ObservationType *ObservationType::L9A = NULL;
      ObservationType *ObservationType::L9B = NULL;
      ObservationType *ObservationType::L9C = NULL;
      ObservationType *ObservationType::L9X = NULL;
      ObservationType *ObservationType::LA = NULL;
      ObservationType *ObservationType::LB = NULL;
      ObservationType *ObservationType::LC = NULL;
      ObservationType *ObservationType::LD = NULL;
      ObservationType *ObservationType::P1 = NULL;
      ObservationType *ObservationType::P2 = NULL;
      ObservationType *ObservationType::S0 = NULL;
      ObservationType *ObservationType::S1 = NULL;
      ObservationType *ObservationType::S1A = NULL;
      ObservationType *ObservationType::S1B = NULL;
      ObservationType *ObservationType::S1C = NULL;
      ObservationType *ObservationType::S1D = NULL;
      ObservationType *ObservationType::S1E = NULL;
      ObservationType *ObservationType::S1I = NULL;
      ObservationType *ObservationType::S1L = NULL;
      ObservationType *ObservationType::S1M = NULL;
      ObservationType *ObservationType::S1N = NULL;
      ObservationType *ObservationType::S1P = NULL;
      ObservationType *ObservationType::S1S = NULL;
      ObservationType *ObservationType::S1W = NULL;
      ObservationType *ObservationType::S1X = NULL;
      ObservationType *ObservationType::S1Y = NULL;
      ObservationType *ObservationType::S1Z = NULL;
      ObservationType *ObservationType::S2 = NULL;
      ObservationType *ObservationType::S2C = NULL;
      ObservationType *ObservationType::S2D = NULL;
      ObservationType *ObservationType::S2I = NULL;
      ObservationType *ObservationType::S2L = NULL;
      ObservationType *ObservationType::S2M = NULL;
      ObservationType *ObservationType::S2N = NULL;
      ObservationType *ObservationType::S2P = NULL;
      ObservationType *ObservationType::S2Q = NULL;
      ObservationType *ObservationType::S2S = NULL;
      ObservationType *ObservationType::S2W = NULL;
      ObservationType *ObservationType::S2X = NULL;
      ObservationType *ObservationType::S2Y = NULL;
      ObservationType *ObservationType::S3I = NULL;
      ObservationType *ObservationType::S3Q = NULL;
      ObservationType *ObservationType::S3X = NULL;
      ObservationType *ObservationType::S4A = NULL;
      ObservationType *ObservationType::S4B = NULL;
      ObservationType *ObservationType::S4X = NULL;
      ObservationType *ObservationType::S5 = NULL;
      ObservationType *ObservationType::S5A = NULL;
      ObservationType *ObservationType::S5B = NULL;
      ObservationType *ObservationType::S5C = NULL;
      ObservationType *ObservationType::S5D = NULL;
      ObservationType *ObservationType::S5I = NULL;
      ObservationType *ObservationType::S5P = NULL;
      ObservationType *ObservationType::S5Q = NULL;
      ObservationType *ObservationType::S5X = NULL;
      ObservationType *ObservationType::S5Z = NULL;
      ObservationType *ObservationType::S6 = NULL;
      ObservationType *ObservationType::S6A = NULL;
      ObservationType *ObservationType::S6B = NULL;
      ObservationType *ObservationType::S6C = NULL;
      ObservationType *ObservationType::S6D = NULL;
      ObservationType *ObservationType::S6E = NULL;
      ObservationType *ObservationType::S6I = NULL;
      ObservationType *ObservationType::S6L = NULL;
      ObservationType *ObservationType::S6P = NULL;
      ObservationType *ObservationType::S6Q = NULL;
      ObservationType *ObservationType::S6S = NULL;
      ObservationType *ObservationType::S6X = NULL;
      ObservationType *ObservationType::S6Z = NULL;
      ObservationType *ObservationType::S7 = NULL;
      ObservationType *ObservationType::S7D = NULL;
      ObservationType *ObservationType::S7I = NULL;
      ObservationType *ObservationType::S7P = NULL;
      ObservationType *ObservationType::S7Q = NULL;
      ObservationType *ObservationType::S7X = NULL;
      ObservationType *ObservationType::S7Z = NULL;
      ObservationType *ObservationType::S8 = NULL;
      ObservationType *ObservationType::S8D = NULL;
      ObservationType *ObservationType::S8I = NULL;
      ObservationType *ObservationType::S8P = NULL;
      ObservationType *ObservationType::S8Q = NULL;
      ObservationType *ObservationType::S8X = NULL;
      ObservationType *ObservationType::S9A = NULL;
      ObservationType *ObservationType::S9B = NULL;
      ObservationType *ObservationType::S9C = NULL;
      ObservationType *ObservationType::S9X = NULL;
      ObservationType *ObservationType::SA = NULL;
      ObservationType *ObservationType::SB = NULL;
      ObservationType *ObservationType::SC = NULL;
      ObservationType *ObservationType::SD = NULL;

      jclass ObservationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getFrequency_0421c368f6ad9aa1] = env->getMethodID(cls, "getFrequency", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_getMeasurementType_4399f03fd512a2dc] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_getSignalCode_f05efa4f5b7c226c] = env->getMethodID(cls, "getSignalCode", "()Lorg/orekit/gnss/SignalCode;");
          mids$[mid_valueOf_c8cc2c59b5af8afb] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationType;");
          mids$[mid_values_47f1fb0d7f04c779] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          C0 = new ObservationType(env->getStaticObjectField(cls, "C0", "Lorg/orekit/gnss/ObservationType;"));
          C1 = new ObservationType(env->getStaticObjectField(cls, "C1", "Lorg/orekit/gnss/ObservationType;"));
          C1A = new ObservationType(env->getStaticObjectField(cls, "C1A", "Lorg/orekit/gnss/ObservationType;"));
          C1B = new ObservationType(env->getStaticObjectField(cls, "C1B", "Lorg/orekit/gnss/ObservationType;"));
          C1C = new ObservationType(env->getStaticObjectField(cls, "C1C", "Lorg/orekit/gnss/ObservationType;"));
          C1D = new ObservationType(env->getStaticObjectField(cls, "C1D", "Lorg/orekit/gnss/ObservationType;"));
          C1E = new ObservationType(env->getStaticObjectField(cls, "C1E", "Lorg/orekit/gnss/ObservationType;"));
          C1I = new ObservationType(env->getStaticObjectField(cls, "C1I", "Lorg/orekit/gnss/ObservationType;"));
          C1L = new ObservationType(env->getStaticObjectField(cls, "C1L", "Lorg/orekit/gnss/ObservationType;"));
          C1M = new ObservationType(env->getStaticObjectField(cls, "C1M", "Lorg/orekit/gnss/ObservationType;"));
          C1P = new ObservationType(env->getStaticObjectField(cls, "C1P", "Lorg/orekit/gnss/ObservationType;"));
          C1Q = new ObservationType(env->getStaticObjectField(cls, "C1Q", "Lorg/orekit/gnss/ObservationType;"));
          C1S = new ObservationType(env->getStaticObjectField(cls, "C1S", "Lorg/orekit/gnss/ObservationType;"));
          C1W = new ObservationType(env->getStaticObjectField(cls, "C1W", "Lorg/orekit/gnss/ObservationType;"));
          C1X = new ObservationType(env->getStaticObjectField(cls, "C1X", "Lorg/orekit/gnss/ObservationType;"));
          C1Y = new ObservationType(env->getStaticObjectField(cls, "C1Y", "Lorg/orekit/gnss/ObservationType;"));
          C1Z = new ObservationType(env->getStaticObjectField(cls, "C1Z", "Lorg/orekit/gnss/ObservationType;"));
          C2 = new ObservationType(env->getStaticObjectField(cls, "C2", "Lorg/orekit/gnss/ObservationType;"));
          C2C = new ObservationType(env->getStaticObjectField(cls, "C2C", "Lorg/orekit/gnss/ObservationType;"));
          C2D = new ObservationType(env->getStaticObjectField(cls, "C2D", "Lorg/orekit/gnss/ObservationType;"));
          C2I = new ObservationType(env->getStaticObjectField(cls, "C2I", "Lorg/orekit/gnss/ObservationType;"));
          C2L = new ObservationType(env->getStaticObjectField(cls, "C2L", "Lorg/orekit/gnss/ObservationType;"));
          C2M = new ObservationType(env->getStaticObjectField(cls, "C2M", "Lorg/orekit/gnss/ObservationType;"));
          C2P = new ObservationType(env->getStaticObjectField(cls, "C2P", "Lorg/orekit/gnss/ObservationType;"));
          C2Q = new ObservationType(env->getStaticObjectField(cls, "C2Q", "Lorg/orekit/gnss/ObservationType;"));
          C2S = new ObservationType(env->getStaticObjectField(cls, "C2S", "Lorg/orekit/gnss/ObservationType;"));
          C2W = new ObservationType(env->getStaticObjectField(cls, "C2W", "Lorg/orekit/gnss/ObservationType;"));
          C2X = new ObservationType(env->getStaticObjectField(cls, "C2X", "Lorg/orekit/gnss/ObservationType;"));
          C2Y = new ObservationType(env->getStaticObjectField(cls, "C2Y", "Lorg/orekit/gnss/ObservationType;"));
          C3I = new ObservationType(env->getStaticObjectField(cls, "C3I", "Lorg/orekit/gnss/ObservationType;"));
          C3Q = new ObservationType(env->getStaticObjectField(cls, "C3Q", "Lorg/orekit/gnss/ObservationType;"));
          C3X = new ObservationType(env->getStaticObjectField(cls, "C3X", "Lorg/orekit/gnss/ObservationType;"));
          C4A = new ObservationType(env->getStaticObjectField(cls, "C4A", "Lorg/orekit/gnss/ObservationType;"));
          C4B = new ObservationType(env->getStaticObjectField(cls, "C4B", "Lorg/orekit/gnss/ObservationType;"));
          C4X = new ObservationType(env->getStaticObjectField(cls, "C4X", "Lorg/orekit/gnss/ObservationType;"));
          C5 = new ObservationType(env->getStaticObjectField(cls, "C5", "Lorg/orekit/gnss/ObservationType;"));
          C5A = new ObservationType(env->getStaticObjectField(cls, "C5A", "Lorg/orekit/gnss/ObservationType;"));
          C5B = new ObservationType(env->getStaticObjectField(cls, "C5B", "Lorg/orekit/gnss/ObservationType;"));
          C5C = new ObservationType(env->getStaticObjectField(cls, "C5C", "Lorg/orekit/gnss/ObservationType;"));
          C5D = new ObservationType(env->getStaticObjectField(cls, "C5D", "Lorg/orekit/gnss/ObservationType;"));
          C5I = new ObservationType(env->getStaticObjectField(cls, "C5I", "Lorg/orekit/gnss/ObservationType;"));
          C5P = new ObservationType(env->getStaticObjectField(cls, "C5P", "Lorg/orekit/gnss/ObservationType;"));
          C5Q = new ObservationType(env->getStaticObjectField(cls, "C5Q", "Lorg/orekit/gnss/ObservationType;"));
          C5X = new ObservationType(env->getStaticObjectField(cls, "C5X", "Lorg/orekit/gnss/ObservationType;"));
          C5Z = new ObservationType(env->getStaticObjectField(cls, "C5Z", "Lorg/orekit/gnss/ObservationType;"));
          C6 = new ObservationType(env->getStaticObjectField(cls, "C6", "Lorg/orekit/gnss/ObservationType;"));
          C6A = new ObservationType(env->getStaticObjectField(cls, "C6A", "Lorg/orekit/gnss/ObservationType;"));
          C6B = new ObservationType(env->getStaticObjectField(cls, "C6B", "Lorg/orekit/gnss/ObservationType;"));
          C6C = new ObservationType(env->getStaticObjectField(cls, "C6C", "Lorg/orekit/gnss/ObservationType;"));
          C6D = new ObservationType(env->getStaticObjectField(cls, "C6D", "Lorg/orekit/gnss/ObservationType;"));
          C6E = new ObservationType(env->getStaticObjectField(cls, "C6E", "Lorg/orekit/gnss/ObservationType;"));
          C6I = new ObservationType(env->getStaticObjectField(cls, "C6I", "Lorg/orekit/gnss/ObservationType;"));
          C6L = new ObservationType(env->getStaticObjectField(cls, "C6L", "Lorg/orekit/gnss/ObservationType;"));
          C6P = new ObservationType(env->getStaticObjectField(cls, "C6P", "Lorg/orekit/gnss/ObservationType;"));
          C6Q = new ObservationType(env->getStaticObjectField(cls, "C6Q", "Lorg/orekit/gnss/ObservationType;"));
          C6S = new ObservationType(env->getStaticObjectField(cls, "C6S", "Lorg/orekit/gnss/ObservationType;"));
          C6X = new ObservationType(env->getStaticObjectField(cls, "C6X", "Lorg/orekit/gnss/ObservationType;"));
          C6Z = new ObservationType(env->getStaticObjectField(cls, "C6Z", "Lorg/orekit/gnss/ObservationType;"));
          C7 = new ObservationType(env->getStaticObjectField(cls, "C7", "Lorg/orekit/gnss/ObservationType;"));
          C7D = new ObservationType(env->getStaticObjectField(cls, "C7D", "Lorg/orekit/gnss/ObservationType;"));
          C7I = new ObservationType(env->getStaticObjectField(cls, "C7I", "Lorg/orekit/gnss/ObservationType;"));
          C7P = new ObservationType(env->getStaticObjectField(cls, "C7P", "Lorg/orekit/gnss/ObservationType;"));
          C7Q = new ObservationType(env->getStaticObjectField(cls, "C7Q", "Lorg/orekit/gnss/ObservationType;"));
          C7X = new ObservationType(env->getStaticObjectField(cls, "C7X", "Lorg/orekit/gnss/ObservationType;"));
          C7Z = new ObservationType(env->getStaticObjectField(cls, "C7Z", "Lorg/orekit/gnss/ObservationType;"));
          C8 = new ObservationType(env->getStaticObjectField(cls, "C8", "Lorg/orekit/gnss/ObservationType;"));
          C8D = new ObservationType(env->getStaticObjectField(cls, "C8D", "Lorg/orekit/gnss/ObservationType;"));
          C8I = new ObservationType(env->getStaticObjectField(cls, "C8I", "Lorg/orekit/gnss/ObservationType;"));
          C8P = new ObservationType(env->getStaticObjectField(cls, "C8P", "Lorg/orekit/gnss/ObservationType;"));
          C8Q = new ObservationType(env->getStaticObjectField(cls, "C8Q", "Lorg/orekit/gnss/ObservationType;"));
          C8X = new ObservationType(env->getStaticObjectField(cls, "C8X", "Lorg/orekit/gnss/ObservationType;"));
          C9A = new ObservationType(env->getStaticObjectField(cls, "C9A", "Lorg/orekit/gnss/ObservationType;"));
          C9B = new ObservationType(env->getStaticObjectField(cls, "C9B", "Lorg/orekit/gnss/ObservationType;"));
          C9C = new ObservationType(env->getStaticObjectField(cls, "C9C", "Lorg/orekit/gnss/ObservationType;"));
          C9X = new ObservationType(env->getStaticObjectField(cls, "C9X", "Lorg/orekit/gnss/ObservationType;"));
          CA = new ObservationType(env->getStaticObjectField(cls, "CA", "Lorg/orekit/gnss/ObservationType;"));
          CB = new ObservationType(env->getStaticObjectField(cls, "CB", "Lorg/orekit/gnss/ObservationType;"));
          CC = new ObservationType(env->getStaticObjectField(cls, "CC", "Lorg/orekit/gnss/ObservationType;"));
          CD = new ObservationType(env->getStaticObjectField(cls, "CD", "Lorg/orekit/gnss/ObservationType;"));
          D0 = new ObservationType(env->getStaticObjectField(cls, "D0", "Lorg/orekit/gnss/ObservationType;"));
          D1 = new ObservationType(env->getStaticObjectField(cls, "D1", "Lorg/orekit/gnss/ObservationType;"));
          D1A = new ObservationType(env->getStaticObjectField(cls, "D1A", "Lorg/orekit/gnss/ObservationType;"));
          D1B = new ObservationType(env->getStaticObjectField(cls, "D1B", "Lorg/orekit/gnss/ObservationType;"));
          D1C = new ObservationType(env->getStaticObjectField(cls, "D1C", "Lorg/orekit/gnss/ObservationType;"));
          D1D = new ObservationType(env->getStaticObjectField(cls, "D1D", "Lorg/orekit/gnss/ObservationType;"));
          D1E = new ObservationType(env->getStaticObjectField(cls, "D1E", "Lorg/orekit/gnss/ObservationType;"));
          D1I = new ObservationType(env->getStaticObjectField(cls, "D1I", "Lorg/orekit/gnss/ObservationType;"));
          D1L = new ObservationType(env->getStaticObjectField(cls, "D1L", "Lorg/orekit/gnss/ObservationType;"));
          D1M = new ObservationType(env->getStaticObjectField(cls, "D1M", "Lorg/orekit/gnss/ObservationType;"));
          D1N = new ObservationType(env->getStaticObjectField(cls, "D1N", "Lorg/orekit/gnss/ObservationType;"));
          D1P = new ObservationType(env->getStaticObjectField(cls, "D1P", "Lorg/orekit/gnss/ObservationType;"));
          D1S = new ObservationType(env->getStaticObjectField(cls, "D1S", "Lorg/orekit/gnss/ObservationType;"));
          D1W = new ObservationType(env->getStaticObjectField(cls, "D1W", "Lorg/orekit/gnss/ObservationType;"));
          D1X = new ObservationType(env->getStaticObjectField(cls, "D1X", "Lorg/orekit/gnss/ObservationType;"));
          D1Y = new ObservationType(env->getStaticObjectField(cls, "D1Y", "Lorg/orekit/gnss/ObservationType;"));
          D1Z = new ObservationType(env->getStaticObjectField(cls, "D1Z", "Lorg/orekit/gnss/ObservationType;"));
          D2 = new ObservationType(env->getStaticObjectField(cls, "D2", "Lorg/orekit/gnss/ObservationType;"));
          D2C = new ObservationType(env->getStaticObjectField(cls, "D2C", "Lorg/orekit/gnss/ObservationType;"));
          D2D = new ObservationType(env->getStaticObjectField(cls, "D2D", "Lorg/orekit/gnss/ObservationType;"));
          D2I = new ObservationType(env->getStaticObjectField(cls, "D2I", "Lorg/orekit/gnss/ObservationType;"));
          D2L = new ObservationType(env->getStaticObjectField(cls, "D2L", "Lorg/orekit/gnss/ObservationType;"));
          D2M = new ObservationType(env->getStaticObjectField(cls, "D2M", "Lorg/orekit/gnss/ObservationType;"));
          D2N = new ObservationType(env->getStaticObjectField(cls, "D2N", "Lorg/orekit/gnss/ObservationType;"));
          D2P = new ObservationType(env->getStaticObjectField(cls, "D2P", "Lorg/orekit/gnss/ObservationType;"));
          D2Q = new ObservationType(env->getStaticObjectField(cls, "D2Q", "Lorg/orekit/gnss/ObservationType;"));
          D2S = new ObservationType(env->getStaticObjectField(cls, "D2S", "Lorg/orekit/gnss/ObservationType;"));
          D2W = new ObservationType(env->getStaticObjectField(cls, "D2W", "Lorg/orekit/gnss/ObservationType;"));
          D2X = new ObservationType(env->getStaticObjectField(cls, "D2X", "Lorg/orekit/gnss/ObservationType;"));
          D2Y = new ObservationType(env->getStaticObjectField(cls, "D2Y", "Lorg/orekit/gnss/ObservationType;"));
          D3I = new ObservationType(env->getStaticObjectField(cls, "D3I", "Lorg/orekit/gnss/ObservationType;"));
          D3Q = new ObservationType(env->getStaticObjectField(cls, "D3Q", "Lorg/orekit/gnss/ObservationType;"));
          D3X = new ObservationType(env->getStaticObjectField(cls, "D3X", "Lorg/orekit/gnss/ObservationType;"));
          D4A = new ObservationType(env->getStaticObjectField(cls, "D4A", "Lorg/orekit/gnss/ObservationType;"));
          D4B = new ObservationType(env->getStaticObjectField(cls, "D4B", "Lorg/orekit/gnss/ObservationType;"));
          D4X = new ObservationType(env->getStaticObjectField(cls, "D4X", "Lorg/orekit/gnss/ObservationType;"));
          D5 = new ObservationType(env->getStaticObjectField(cls, "D5", "Lorg/orekit/gnss/ObservationType;"));
          D5A = new ObservationType(env->getStaticObjectField(cls, "D5A", "Lorg/orekit/gnss/ObservationType;"));
          D5B = new ObservationType(env->getStaticObjectField(cls, "D5B", "Lorg/orekit/gnss/ObservationType;"));
          D5C = new ObservationType(env->getStaticObjectField(cls, "D5C", "Lorg/orekit/gnss/ObservationType;"));
          D5D = new ObservationType(env->getStaticObjectField(cls, "D5D", "Lorg/orekit/gnss/ObservationType;"));
          D5I = new ObservationType(env->getStaticObjectField(cls, "D5I", "Lorg/orekit/gnss/ObservationType;"));
          D5P = new ObservationType(env->getStaticObjectField(cls, "D5P", "Lorg/orekit/gnss/ObservationType;"));
          D5Q = new ObservationType(env->getStaticObjectField(cls, "D5Q", "Lorg/orekit/gnss/ObservationType;"));
          D5X = new ObservationType(env->getStaticObjectField(cls, "D5X", "Lorg/orekit/gnss/ObservationType;"));
          D5Z = new ObservationType(env->getStaticObjectField(cls, "D5Z", "Lorg/orekit/gnss/ObservationType;"));
          D6 = new ObservationType(env->getStaticObjectField(cls, "D6", "Lorg/orekit/gnss/ObservationType;"));
          D6A = new ObservationType(env->getStaticObjectField(cls, "D6A", "Lorg/orekit/gnss/ObservationType;"));
          D6B = new ObservationType(env->getStaticObjectField(cls, "D6B", "Lorg/orekit/gnss/ObservationType;"));
          D6C = new ObservationType(env->getStaticObjectField(cls, "D6C", "Lorg/orekit/gnss/ObservationType;"));
          D6D = new ObservationType(env->getStaticObjectField(cls, "D6D", "Lorg/orekit/gnss/ObservationType;"));
          D6E = new ObservationType(env->getStaticObjectField(cls, "D6E", "Lorg/orekit/gnss/ObservationType;"));
          D6I = new ObservationType(env->getStaticObjectField(cls, "D6I", "Lorg/orekit/gnss/ObservationType;"));
          D6L = new ObservationType(env->getStaticObjectField(cls, "D6L", "Lorg/orekit/gnss/ObservationType;"));
          D6P = new ObservationType(env->getStaticObjectField(cls, "D6P", "Lorg/orekit/gnss/ObservationType;"));
          D6Q = new ObservationType(env->getStaticObjectField(cls, "D6Q", "Lorg/orekit/gnss/ObservationType;"));
          D6S = new ObservationType(env->getStaticObjectField(cls, "D6S", "Lorg/orekit/gnss/ObservationType;"));
          D6X = new ObservationType(env->getStaticObjectField(cls, "D6X", "Lorg/orekit/gnss/ObservationType;"));
          D6Z = new ObservationType(env->getStaticObjectField(cls, "D6Z", "Lorg/orekit/gnss/ObservationType;"));
          D7 = new ObservationType(env->getStaticObjectField(cls, "D7", "Lorg/orekit/gnss/ObservationType;"));
          D7D = new ObservationType(env->getStaticObjectField(cls, "D7D", "Lorg/orekit/gnss/ObservationType;"));
          D7I = new ObservationType(env->getStaticObjectField(cls, "D7I", "Lorg/orekit/gnss/ObservationType;"));
          D7P = new ObservationType(env->getStaticObjectField(cls, "D7P", "Lorg/orekit/gnss/ObservationType;"));
          D7Q = new ObservationType(env->getStaticObjectField(cls, "D7Q", "Lorg/orekit/gnss/ObservationType;"));
          D7X = new ObservationType(env->getStaticObjectField(cls, "D7X", "Lorg/orekit/gnss/ObservationType;"));
          D7Z = new ObservationType(env->getStaticObjectField(cls, "D7Z", "Lorg/orekit/gnss/ObservationType;"));
          D8 = new ObservationType(env->getStaticObjectField(cls, "D8", "Lorg/orekit/gnss/ObservationType;"));
          D8D = new ObservationType(env->getStaticObjectField(cls, "D8D", "Lorg/orekit/gnss/ObservationType;"));
          D8I = new ObservationType(env->getStaticObjectField(cls, "D8I", "Lorg/orekit/gnss/ObservationType;"));
          D8P = new ObservationType(env->getStaticObjectField(cls, "D8P", "Lorg/orekit/gnss/ObservationType;"));
          D8Q = new ObservationType(env->getStaticObjectField(cls, "D8Q", "Lorg/orekit/gnss/ObservationType;"));
          D8X = new ObservationType(env->getStaticObjectField(cls, "D8X", "Lorg/orekit/gnss/ObservationType;"));
          D9A = new ObservationType(env->getStaticObjectField(cls, "D9A", "Lorg/orekit/gnss/ObservationType;"));
          D9B = new ObservationType(env->getStaticObjectField(cls, "D9B", "Lorg/orekit/gnss/ObservationType;"));
          D9C = new ObservationType(env->getStaticObjectField(cls, "D9C", "Lorg/orekit/gnss/ObservationType;"));
          D9X = new ObservationType(env->getStaticObjectField(cls, "D9X", "Lorg/orekit/gnss/ObservationType;"));
          DA = new ObservationType(env->getStaticObjectField(cls, "DA", "Lorg/orekit/gnss/ObservationType;"));
          DB = new ObservationType(env->getStaticObjectField(cls, "DB", "Lorg/orekit/gnss/ObservationType;"));
          DC = new ObservationType(env->getStaticObjectField(cls, "DC", "Lorg/orekit/gnss/ObservationType;"));
          DD = new ObservationType(env->getStaticObjectField(cls, "DD", "Lorg/orekit/gnss/ObservationType;"));
          L0 = new ObservationType(env->getStaticObjectField(cls, "L0", "Lorg/orekit/gnss/ObservationType;"));
          L1 = new ObservationType(env->getStaticObjectField(cls, "L1", "Lorg/orekit/gnss/ObservationType;"));
          L1A = new ObservationType(env->getStaticObjectField(cls, "L1A", "Lorg/orekit/gnss/ObservationType;"));
          L1B = new ObservationType(env->getStaticObjectField(cls, "L1B", "Lorg/orekit/gnss/ObservationType;"));
          L1C = new ObservationType(env->getStaticObjectField(cls, "L1C", "Lorg/orekit/gnss/ObservationType;"));
          L1D = new ObservationType(env->getStaticObjectField(cls, "L1D", "Lorg/orekit/gnss/ObservationType;"));
          L1E = new ObservationType(env->getStaticObjectField(cls, "L1E", "Lorg/orekit/gnss/ObservationType;"));
          L1I = new ObservationType(env->getStaticObjectField(cls, "L1I", "Lorg/orekit/gnss/ObservationType;"));
          L1L = new ObservationType(env->getStaticObjectField(cls, "L1L", "Lorg/orekit/gnss/ObservationType;"));
          L1M = new ObservationType(env->getStaticObjectField(cls, "L1M", "Lorg/orekit/gnss/ObservationType;"));
          L1N = new ObservationType(env->getStaticObjectField(cls, "L1N", "Lorg/orekit/gnss/ObservationType;"));
          L1P = new ObservationType(env->getStaticObjectField(cls, "L1P", "Lorg/orekit/gnss/ObservationType;"));
          L1S = new ObservationType(env->getStaticObjectField(cls, "L1S", "Lorg/orekit/gnss/ObservationType;"));
          L1W = new ObservationType(env->getStaticObjectField(cls, "L1W", "Lorg/orekit/gnss/ObservationType;"));
          L1X = new ObservationType(env->getStaticObjectField(cls, "L1X", "Lorg/orekit/gnss/ObservationType;"));
          L1Y = new ObservationType(env->getStaticObjectField(cls, "L1Y", "Lorg/orekit/gnss/ObservationType;"));
          L1Z = new ObservationType(env->getStaticObjectField(cls, "L1Z", "Lorg/orekit/gnss/ObservationType;"));
          L2 = new ObservationType(env->getStaticObjectField(cls, "L2", "Lorg/orekit/gnss/ObservationType;"));
          L2C = new ObservationType(env->getStaticObjectField(cls, "L2C", "Lorg/orekit/gnss/ObservationType;"));
          L2D = new ObservationType(env->getStaticObjectField(cls, "L2D", "Lorg/orekit/gnss/ObservationType;"));
          L2I = new ObservationType(env->getStaticObjectField(cls, "L2I", "Lorg/orekit/gnss/ObservationType;"));
          L2L = new ObservationType(env->getStaticObjectField(cls, "L2L", "Lorg/orekit/gnss/ObservationType;"));
          L2M = new ObservationType(env->getStaticObjectField(cls, "L2M", "Lorg/orekit/gnss/ObservationType;"));
          L2N = new ObservationType(env->getStaticObjectField(cls, "L2N", "Lorg/orekit/gnss/ObservationType;"));
          L2P = new ObservationType(env->getStaticObjectField(cls, "L2P", "Lorg/orekit/gnss/ObservationType;"));
          L2Q = new ObservationType(env->getStaticObjectField(cls, "L2Q", "Lorg/orekit/gnss/ObservationType;"));
          L2S = new ObservationType(env->getStaticObjectField(cls, "L2S", "Lorg/orekit/gnss/ObservationType;"));
          L2W = new ObservationType(env->getStaticObjectField(cls, "L2W", "Lorg/orekit/gnss/ObservationType;"));
          L2X = new ObservationType(env->getStaticObjectField(cls, "L2X", "Lorg/orekit/gnss/ObservationType;"));
          L2Y = new ObservationType(env->getStaticObjectField(cls, "L2Y", "Lorg/orekit/gnss/ObservationType;"));
          L3I = new ObservationType(env->getStaticObjectField(cls, "L3I", "Lorg/orekit/gnss/ObservationType;"));
          L3Q = new ObservationType(env->getStaticObjectField(cls, "L3Q", "Lorg/orekit/gnss/ObservationType;"));
          L3X = new ObservationType(env->getStaticObjectField(cls, "L3X", "Lorg/orekit/gnss/ObservationType;"));
          L4A = new ObservationType(env->getStaticObjectField(cls, "L4A", "Lorg/orekit/gnss/ObservationType;"));
          L4B = new ObservationType(env->getStaticObjectField(cls, "L4B", "Lorg/orekit/gnss/ObservationType;"));
          L4X = new ObservationType(env->getStaticObjectField(cls, "L4X", "Lorg/orekit/gnss/ObservationType;"));
          L5 = new ObservationType(env->getStaticObjectField(cls, "L5", "Lorg/orekit/gnss/ObservationType;"));
          L5A = new ObservationType(env->getStaticObjectField(cls, "L5A", "Lorg/orekit/gnss/ObservationType;"));
          L5B = new ObservationType(env->getStaticObjectField(cls, "L5B", "Lorg/orekit/gnss/ObservationType;"));
          L5C = new ObservationType(env->getStaticObjectField(cls, "L5C", "Lorg/orekit/gnss/ObservationType;"));
          L5D = new ObservationType(env->getStaticObjectField(cls, "L5D", "Lorg/orekit/gnss/ObservationType;"));
          L5I = new ObservationType(env->getStaticObjectField(cls, "L5I", "Lorg/orekit/gnss/ObservationType;"));
          L5P = new ObservationType(env->getStaticObjectField(cls, "L5P", "Lorg/orekit/gnss/ObservationType;"));
          L5Q = new ObservationType(env->getStaticObjectField(cls, "L5Q", "Lorg/orekit/gnss/ObservationType;"));
          L5X = new ObservationType(env->getStaticObjectField(cls, "L5X", "Lorg/orekit/gnss/ObservationType;"));
          L5Z = new ObservationType(env->getStaticObjectField(cls, "L5Z", "Lorg/orekit/gnss/ObservationType;"));
          L6 = new ObservationType(env->getStaticObjectField(cls, "L6", "Lorg/orekit/gnss/ObservationType;"));
          L6A = new ObservationType(env->getStaticObjectField(cls, "L6A", "Lorg/orekit/gnss/ObservationType;"));
          L6B = new ObservationType(env->getStaticObjectField(cls, "L6B", "Lorg/orekit/gnss/ObservationType;"));
          L6C = new ObservationType(env->getStaticObjectField(cls, "L6C", "Lorg/orekit/gnss/ObservationType;"));
          L6D = new ObservationType(env->getStaticObjectField(cls, "L6D", "Lorg/orekit/gnss/ObservationType;"));
          L6E = new ObservationType(env->getStaticObjectField(cls, "L6E", "Lorg/orekit/gnss/ObservationType;"));
          L6I = new ObservationType(env->getStaticObjectField(cls, "L6I", "Lorg/orekit/gnss/ObservationType;"));
          L6L = new ObservationType(env->getStaticObjectField(cls, "L6L", "Lorg/orekit/gnss/ObservationType;"));
          L6P = new ObservationType(env->getStaticObjectField(cls, "L6P", "Lorg/orekit/gnss/ObservationType;"));
          L6Q = new ObservationType(env->getStaticObjectField(cls, "L6Q", "Lorg/orekit/gnss/ObservationType;"));
          L6S = new ObservationType(env->getStaticObjectField(cls, "L6S", "Lorg/orekit/gnss/ObservationType;"));
          L6X = new ObservationType(env->getStaticObjectField(cls, "L6X", "Lorg/orekit/gnss/ObservationType;"));
          L6Z = new ObservationType(env->getStaticObjectField(cls, "L6Z", "Lorg/orekit/gnss/ObservationType;"));
          L7 = new ObservationType(env->getStaticObjectField(cls, "L7", "Lorg/orekit/gnss/ObservationType;"));
          L7D = new ObservationType(env->getStaticObjectField(cls, "L7D", "Lorg/orekit/gnss/ObservationType;"));
          L7I = new ObservationType(env->getStaticObjectField(cls, "L7I", "Lorg/orekit/gnss/ObservationType;"));
          L7P = new ObservationType(env->getStaticObjectField(cls, "L7P", "Lorg/orekit/gnss/ObservationType;"));
          L7Q = new ObservationType(env->getStaticObjectField(cls, "L7Q", "Lorg/orekit/gnss/ObservationType;"));
          L7X = new ObservationType(env->getStaticObjectField(cls, "L7X", "Lorg/orekit/gnss/ObservationType;"));
          L7Z = new ObservationType(env->getStaticObjectField(cls, "L7Z", "Lorg/orekit/gnss/ObservationType;"));
          L8 = new ObservationType(env->getStaticObjectField(cls, "L8", "Lorg/orekit/gnss/ObservationType;"));
          L8D = new ObservationType(env->getStaticObjectField(cls, "L8D", "Lorg/orekit/gnss/ObservationType;"));
          L8I = new ObservationType(env->getStaticObjectField(cls, "L8I", "Lorg/orekit/gnss/ObservationType;"));
          L8P = new ObservationType(env->getStaticObjectField(cls, "L8P", "Lorg/orekit/gnss/ObservationType;"));
          L8Q = new ObservationType(env->getStaticObjectField(cls, "L8Q", "Lorg/orekit/gnss/ObservationType;"));
          L8X = new ObservationType(env->getStaticObjectField(cls, "L8X", "Lorg/orekit/gnss/ObservationType;"));
          L9A = new ObservationType(env->getStaticObjectField(cls, "L9A", "Lorg/orekit/gnss/ObservationType;"));
          L9B = new ObservationType(env->getStaticObjectField(cls, "L9B", "Lorg/orekit/gnss/ObservationType;"));
          L9C = new ObservationType(env->getStaticObjectField(cls, "L9C", "Lorg/orekit/gnss/ObservationType;"));
          L9X = new ObservationType(env->getStaticObjectField(cls, "L9X", "Lorg/orekit/gnss/ObservationType;"));
          LA = new ObservationType(env->getStaticObjectField(cls, "LA", "Lorg/orekit/gnss/ObservationType;"));
          LB = new ObservationType(env->getStaticObjectField(cls, "LB", "Lorg/orekit/gnss/ObservationType;"));
          LC = new ObservationType(env->getStaticObjectField(cls, "LC", "Lorg/orekit/gnss/ObservationType;"));
          LD = new ObservationType(env->getStaticObjectField(cls, "LD", "Lorg/orekit/gnss/ObservationType;"));
          P1 = new ObservationType(env->getStaticObjectField(cls, "P1", "Lorg/orekit/gnss/ObservationType;"));
          P2 = new ObservationType(env->getStaticObjectField(cls, "P2", "Lorg/orekit/gnss/ObservationType;"));
          S0 = new ObservationType(env->getStaticObjectField(cls, "S0", "Lorg/orekit/gnss/ObservationType;"));
          S1 = new ObservationType(env->getStaticObjectField(cls, "S1", "Lorg/orekit/gnss/ObservationType;"));
          S1A = new ObservationType(env->getStaticObjectField(cls, "S1A", "Lorg/orekit/gnss/ObservationType;"));
          S1B = new ObservationType(env->getStaticObjectField(cls, "S1B", "Lorg/orekit/gnss/ObservationType;"));
          S1C = new ObservationType(env->getStaticObjectField(cls, "S1C", "Lorg/orekit/gnss/ObservationType;"));
          S1D = new ObservationType(env->getStaticObjectField(cls, "S1D", "Lorg/orekit/gnss/ObservationType;"));
          S1E = new ObservationType(env->getStaticObjectField(cls, "S1E", "Lorg/orekit/gnss/ObservationType;"));
          S1I = new ObservationType(env->getStaticObjectField(cls, "S1I", "Lorg/orekit/gnss/ObservationType;"));
          S1L = new ObservationType(env->getStaticObjectField(cls, "S1L", "Lorg/orekit/gnss/ObservationType;"));
          S1M = new ObservationType(env->getStaticObjectField(cls, "S1M", "Lorg/orekit/gnss/ObservationType;"));
          S1N = new ObservationType(env->getStaticObjectField(cls, "S1N", "Lorg/orekit/gnss/ObservationType;"));
          S1P = new ObservationType(env->getStaticObjectField(cls, "S1P", "Lorg/orekit/gnss/ObservationType;"));
          S1S = new ObservationType(env->getStaticObjectField(cls, "S1S", "Lorg/orekit/gnss/ObservationType;"));
          S1W = new ObservationType(env->getStaticObjectField(cls, "S1W", "Lorg/orekit/gnss/ObservationType;"));
          S1X = new ObservationType(env->getStaticObjectField(cls, "S1X", "Lorg/orekit/gnss/ObservationType;"));
          S1Y = new ObservationType(env->getStaticObjectField(cls, "S1Y", "Lorg/orekit/gnss/ObservationType;"));
          S1Z = new ObservationType(env->getStaticObjectField(cls, "S1Z", "Lorg/orekit/gnss/ObservationType;"));
          S2 = new ObservationType(env->getStaticObjectField(cls, "S2", "Lorg/orekit/gnss/ObservationType;"));
          S2C = new ObservationType(env->getStaticObjectField(cls, "S2C", "Lorg/orekit/gnss/ObservationType;"));
          S2D = new ObservationType(env->getStaticObjectField(cls, "S2D", "Lorg/orekit/gnss/ObservationType;"));
          S2I = new ObservationType(env->getStaticObjectField(cls, "S2I", "Lorg/orekit/gnss/ObservationType;"));
          S2L = new ObservationType(env->getStaticObjectField(cls, "S2L", "Lorg/orekit/gnss/ObservationType;"));
          S2M = new ObservationType(env->getStaticObjectField(cls, "S2M", "Lorg/orekit/gnss/ObservationType;"));
          S2N = new ObservationType(env->getStaticObjectField(cls, "S2N", "Lorg/orekit/gnss/ObservationType;"));
          S2P = new ObservationType(env->getStaticObjectField(cls, "S2P", "Lorg/orekit/gnss/ObservationType;"));
          S2Q = new ObservationType(env->getStaticObjectField(cls, "S2Q", "Lorg/orekit/gnss/ObservationType;"));
          S2S = new ObservationType(env->getStaticObjectField(cls, "S2S", "Lorg/orekit/gnss/ObservationType;"));
          S2W = new ObservationType(env->getStaticObjectField(cls, "S2W", "Lorg/orekit/gnss/ObservationType;"));
          S2X = new ObservationType(env->getStaticObjectField(cls, "S2X", "Lorg/orekit/gnss/ObservationType;"));
          S2Y = new ObservationType(env->getStaticObjectField(cls, "S2Y", "Lorg/orekit/gnss/ObservationType;"));
          S3I = new ObservationType(env->getStaticObjectField(cls, "S3I", "Lorg/orekit/gnss/ObservationType;"));
          S3Q = new ObservationType(env->getStaticObjectField(cls, "S3Q", "Lorg/orekit/gnss/ObservationType;"));
          S3X = new ObservationType(env->getStaticObjectField(cls, "S3X", "Lorg/orekit/gnss/ObservationType;"));
          S4A = new ObservationType(env->getStaticObjectField(cls, "S4A", "Lorg/orekit/gnss/ObservationType;"));
          S4B = new ObservationType(env->getStaticObjectField(cls, "S4B", "Lorg/orekit/gnss/ObservationType;"));
          S4X = new ObservationType(env->getStaticObjectField(cls, "S4X", "Lorg/orekit/gnss/ObservationType;"));
          S5 = new ObservationType(env->getStaticObjectField(cls, "S5", "Lorg/orekit/gnss/ObservationType;"));
          S5A = new ObservationType(env->getStaticObjectField(cls, "S5A", "Lorg/orekit/gnss/ObservationType;"));
          S5B = new ObservationType(env->getStaticObjectField(cls, "S5B", "Lorg/orekit/gnss/ObservationType;"));
          S5C = new ObservationType(env->getStaticObjectField(cls, "S5C", "Lorg/orekit/gnss/ObservationType;"));
          S5D = new ObservationType(env->getStaticObjectField(cls, "S5D", "Lorg/orekit/gnss/ObservationType;"));
          S5I = new ObservationType(env->getStaticObjectField(cls, "S5I", "Lorg/orekit/gnss/ObservationType;"));
          S5P = new ObservationType(env->getStaticObjectField(cls, "S5P", "Lorg/orekit/gnss/ObservationType;"));
          S5Q = new ObservationType(env->getStaticObjectField(cls, "S5Q", "Lorg/orekit/gnss/ObservationType;"));
          S5X = new ObservationType(env->getStaticObjectField(cls, "S5X", "Lorg/orekit/gnss/ObservationType;"));
          S5Z = new ObservationType(env->getStaticObjectField(cls, "S5Z", "Lorg/orekit/gnss/ObservationType;"));
          S6 = new ObservationType(env->getStaticObjectField(cls, "S6", "Lorg/orekit/gnss/ObservationType;"));
          S6A = new ObservationType(env->getStaticObjectField(cls, "S6A", "Lorg/orekit/gnss/ObservationType;"));
          S6B = new ObservationType(env->getStaticObjectField(cls, "S6B", "Lorg/orekit/gnss/ObservationType;"));
          S6C = new ObservationType(env->getStaticObjectField(cls, "S6C", "Lorg/orekit/gnss/ObservationType;"));
          S6D = new ObservationType(env->getStaticObjectField(cls, "S6D", "Lorg/orekit/gnss/ObservationType;"));
          S6E = new ObservationType(env->getStaticObjectField(cls, "S6E", "Lorg/orekit/gnss/ObservationType;"));
          S6I = new ObservationType(env->getStaticObjectField(cls, "S6I", "Lorg/orekit/gnss/ObservationType;"));
          S6L = new ObservationType(env->getStaticObjectField(cls, "S6L", "Lorg/orekit/gnss/ObservationType;"));
          S6P = new ObservationType(env->getStaticObjectField(cls, "S6P", "Lorg/orekit/gnss/ObservationType;"));
          S6Q = new ObservationType(env->getStaticObjectField(cls, "S6Q", "Lorg/orekit/gnss/ObservationType;"));
          S6S = new ObservationType(env->getStaticObjectField(cls, "S6S", "Lorg/orekit/gnss/ObservationType;"));
          S6X = new ObservationType(env->getStaticObjectField(cls, "S6X", "Lorg/orekit/gnss/ObservationType;"));
          S6Z = new ObservationType(env->getStaticObjectField(cls, "S6Z", "Lorg/orekit/gnss/ObservationType;"));
          S7 = new ObservationType(env->getStaticObjectField(cls, "S7", "Lorg/orekit/gnss/ObservationType;"));
          S7D = new ObservationType(env->getStaticObjectField(cls, "S7D", "Lorg/orekit/gnss/ObservationType;"));
          S7I = new ObservationType(env->getStaticObjectField(cls, "S7I", "Lorg/orekit/gnss/ObservationType;"));
          S7P = new ObservationType(env->getStaticObjectField(cls, "S7P", "Lorg/orekit/gnss/ObservationType;"));
          S7Q = new ObservationType(env->getStaticObjectField(cls, "S7Q", "Lorg/orekit/gnss/ObservationType;"));
          S7X = new ObservationType(env->getStaticObjectField(cls, "S7X", "Lorg/orekit/gnss/ObservationType;"));
          S7Z = new ObservationType(env->getStaticObjectField(cls, "S7Z", "Lorg/orekit/gnss/ObservationType;"));
          S8 = new ObservationType(env->getStaticObjectField(cls, "S8", "Lorg/orekit/gnss/ObservationType;"));
          S8D = new ObservationType(env->getStaticObjectField(cls, "S8D", "Lorg/orekit/gnss/ObservationType;"));
          S8I = new ObservationType(env->getStaticObjectField(cls, "S8I", "Lorg/orekit/gnss/ObservationType;"));
          S8P = new ObservationType(env->getStaticObjectField(cls, "S8P", "Lorg/orekit/gnss/ObservationType;"));
          S8Q = new ObservationType(env->getStaticObjectField(cls, "S8Q", "Lorg/orekit/gnss/ObservationType;"));
          S8X = new ObservationType(env->getStaticObjectField(cls, "S8X", "Lorg/orekit/gnss/ObservationType;"));
          S9A = new ObservationType(env->getStaticObjectField(cls, "S9A", "Lorg/orekit/gnss/ObservationType;"));
          S9B = new ObservationType(env->getStaticObjectField(cls, "S9B", "Lorg/orekit/gnss/ObservationType;"));
          S9C = new ObservationType(env->getStaticObjectField(cls, "S9C", "Lorg/orekit/gnss/ObservationType;"));
          S9X = new ObservationType(env->getStaticObjectField(cls, "S9X", "Lorg/orekit/gnss/ObservationType;"));
          SA = new ObservationType(env->getStaticObjectField(cls, "SA", "Lorg/orekit/gnss/ObservationType;"));
          SB = new ObservationType(env->getStaticObjectField(cls, "SB", "Lorg/orekit/gnss/ObservationType;"));
          SC = new ObservationType(env->getStaticObjectField(cls, "SC", "Lorg/orekit/gnss/ObservationType;"));
          SD = new ObservationType(env->getStaticObjectField(cls, "SD", "Lorg/orekit/gnss/ObservationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::Frequency ObservationType::getFrequency(const ::org::orekit::gnss::SatelliteSystem & a0) const
      {
        return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getFrequency_0421c368f6ad9aa1], a0.this$));
      }

      ::org::orekit::gnss::MeasurementType ObservationType::getMeasurementType() const
      {
        return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_4399f03fd512a2dc]));
      }

      ::org::orekit::gnss::SignalCode ObservationType::getSignalCode() const
      {
        return ::org::orekit::gnss::SignalCode(env->callObjectMethod(this$, mids$[mid_getSignalCode_f05efa4f5b7c226c]));
      }

      ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8cc2c59b5af8afb], a0.this$));
      }

      JArray< ObservationType > ObservationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_47f1fb0d7f04c779]));
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
      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args);
      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg);
      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self);
      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self);
      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationType_values(PyTypeObject *type);
      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data);
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data);
      static PyGetSetDef t_ObservationType__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationType, measurementType),
        DECLARE_GET_FIELD(t_ObservationType, signalCode),
        DECLARE_GET_FIELD(t_ObservationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationType__methods_[] = {
        DECLARE_METHOD(t_ObservationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationType, getFrequency, METH_O),
        DECLARE_METHOD(t_ObservationType, getMeasurementType, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, getSignalCode, METH_NOARGS),
        DECLARE_METHOD(t_ObservationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationType)[] = {
        { Py_tp_methods, t_ObservationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationType, t_ObservationType, ObservationType);
      PyObject *t_ObservationType::wrap_Object(const ObservationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationType *self = (t_ObservationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationType::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationType), &PY_TYPE_DEF(ObservationType), module, "ObservationType", 0);
      }

      void t_ObservationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "class_", make_descriptor(ObservationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "wrapfn_", make_descriptor(t_ObservationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "C9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::C9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "CD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::CD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "D9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::D9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "DD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::DD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "L9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::L9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "LD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::LD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "P2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::P2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S0", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S0)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S1Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S1Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2M", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2N", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2W", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S2Y", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S2Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S3X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S3X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S4X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S4X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S5Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S5Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6E", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6L", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6S", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S6Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S6Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S7Z", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S7Z)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8D", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8I", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8P", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8Q", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S8X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S8X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9A", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9B", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9C", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "S9X", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::S9X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SA", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SB", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SB)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SC", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationType), "SD", make_descriptor(t_ObservationType::wrap_Object(*ObservationType::SD)));
      }

      static PyObject *t_ObservationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationType::initializeClass, 1)))
          return NULL;
        return t_ObservationType::wrap_Object(ObservationType(((t_ObservationType *) arg)->object.this$));
      }
      static PyObject *t_ObservationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationType_of_(t_ObservationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationType_getFrequency(t_ObservationType *self, PyObject *arg)
      {
        ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::gnss::Frequency result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
        {
          OBJ_CALL(result = self->object.getFrequency(a0));
          return ::org::orekit::gnss::t_Frequency::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getFrequency", arg);
        return NULL;
      }

      static PyObject *t_ObservationType_getMeasurementType(t_ObservationType *self)
      {
        ::org::orekit::gnss::MeasurementType result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
      }

      static PyObject *t_ObservationType_getSignalCode(t_ObservationType *self)
      {
        ::org::orekit::gnss::SignalCode result((jobject) NULL);
        OBJ_CALL(result = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(result);
      }

      static PyObject *t_ObservationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationType::valueOf(a0));
          return t_ObservationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationType_values(PyTypeObject *type)
      {
        JArray< ObservationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationType::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationType::wrap_jobject);
      }
      static PyObject *t_ObservationType_get__parameters_(t_ObservationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ObservationType_get__measurementType(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::MeasurementType value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeasurementType());
        return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
      }

      static PyObject *t_ObservationType_get__signalCode(t_ObservationType *self, void *data)
      {
        ::org::orekit::gnss::SignalCode value((jobject) NULL);
        OBJ_CALL(value = self->object.getSignalCode());
        return ::org::orekit::gnss::t_SignalCode::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyLoader::class$ = NULL;
      jmethodID *CelestialBodyLoader::mids$ = NULL;
      bool CelestialBodyLoader::live$ = false;

      jclass CelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadCelestialBody_29f199e59c05cc68] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_29f199e59c05cc68], a0.this$));
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
      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg);

      static PyMethodDef t_CelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyLoader)[] = {
        { Py_tp_methods, t_CelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyLoader, t_CelestialBodyLoader, CelestialBodyLoader);

      void t_CelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyLoader), &PY_TYPE_DEF(CelestialBodyLoader), module, "CelestialBodyLoader", 0);
      }

      void t_CelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "class_", make_descriptor(CelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "wrapfn_", make_descriptor(t_CelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyLoader::wrap_Object(CelestialBodyLoader(((t_CelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/AbstractMessageWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/files/ccsds/utils/generation/MessageWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *AbstractMessageWriter::class$ = NULL;
            jmethodID *AbstractMessageWriter::mids$ = NULL;
            bool AbstractMessageWriter::live$ = false;
            ::java::lang::String *AbstractMessageWriter::DEFAULT_ORIGINATOR = NULL;

            jclass AbstractMessageWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/AbstractMessageWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_478a9a59660d41ab] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DLorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_getContext_21a51eed276d81e3] = env->getMethodID(cls, "getContext", "()Lorg/orekit/files/ccsds/utils/ContextBinding;");
                mids$[mid_getDefaultVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getDefaultVersion", "()D");
                mids$[mid_getFormatVersionKey_0090f7797e403f43] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getRoot_0090f7797e403f43] = env->getMethodID(cls, "getRoot", "()Ljava/lang/String;");
                mids$[mid_getTimeConverter_131aec6eeceff57f] = env->getMethodID(cls, "getTimeConverter", "()Lorg/orekit/files/ccsds/definitions/TimeConverter;");
                mids$[mid_getVersion_456d9a2f64d6b28d] = env->getMethodID(cls, "getVersion", "()D");
                mids$[mid_setContext_b23a8b8e76c44cd4] = env->getMethodID(cls, "setContext", "(Lorg/orekit/files/ccsds/utils/ContextBinding;)V");
                mids$[mid_writeFooter_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeFooter", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");
                mids$[mid_writeHeader_31a4dd6b0c8635b6] = env->getMethodID(cls, "writeHeader", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Header;)V");
                mids$[mid_writeSegment_412320e9d7a2723d] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/section/Segment;)V");
                mids$[mid_writeSegmentContent_17bd99da1e106002] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_ORIGINATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ORIGINATOR", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AbstractMessageWriter::AbstractMessageWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, const ::org::orekit::files::ccsds::utils::ContextBinding & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_478a9a59660d41ab, a0.this$, a1.this$, a2, a3.this$)) {}

            ::org::orekit::files::ccsds::utils::ContextBinding AbstractMessageWriter::getContext() const
            {
              return ::org::orekit::files::ccsds::utils::ContextBinding(env->callObjectMethod(this$, mids$[mid_getContext_21a51eed276d81e3]));
            }

            jdouble AbstractMessageWriter::getDefaultVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDefaultVersion_456d9a2f64d6b28d]);
            }

            ::java::lang::String AbstractMessageWriter::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_0090f7797e403f43]));
            }

            ::java::lang::String AbstractMessageWriter::getRoot() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRoot_0090f7797e403f43]));
            }

            ::org::orekit::files::ccsds::definitions::TimeConverter AbstractMessageWriter::getTimeConverter() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeConverter(env->callObjectMethod(this$, mids$[mid_getTimeConverter_131aec6eeceff57f]));
            }

            jdouble AbstractMessageWriter::getVersion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getVersion_456d9a2f64d6b28d]);
            }

            void AbstractMessageWriter::setContext(const ::org::orekit::files::ccsds::utils::ContextBinding & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setContext_b23a8b8e76c44cd4], a0.this$);
            }

            void AbstractMessageWriter::writeFooter(const ::org::orekit::files::ccsds::utils::generation::Generator & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_writeFooter_fb36c2e4ae059ab9], a0.this$);
            }

            void AbstractMessageWriter::writeHeader(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Header & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeHeader_31a4dd6b0c8635b6], a0.this$, a1.this$);
            }

            void AbstractMessageWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::section::Segment & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_writeSegment_412320e9d7a2723d], a0.this$, a1.this$);
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
            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args);
            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self);
            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg);
            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args);
            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data);
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data);
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data);
            static PyGetSetDef t_AbstractMessageWriter__fields_[] = {
              DECLARE_GETSET_FIELD(t_AbstractMessageWriter, context),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, defaultVersion),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, root),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, timeConverter),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, version),
              DECLARE_GET_FIELD(t_AbstractMessageWriter, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageWriter__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageWriter, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getDefaultVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getRoot, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getTimeConverter, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, getVersion, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, setContext, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeFooter, METH_O),
              DECLARE_METHOD(t_AbstractMessageWriter, writeHeader, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageWriter, writeSegment, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageWriter)[] = {
              { Py_tp_methods, t_AbstractMessageWriter__methods_ },
              { Py_tp_init, (void *) t_AbstractMessageWriter_init_ },
              { Py_tp_getset, t_AbstractMessageWriter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageWriter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageWriter, t_AbstractMessageWriter, AbstractMessageWriter);
            PyObject *t_AbstractMessageWriter::wrap_Object(const AbstractMessageWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractMessageWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractMessageWriter::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageWriter *self = (t_AbstractMessageWriter *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractMessageWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageWriter), &PY_TYPE_DEF(AbstractMessageWriter), module, "AbstractMessageWriter", 0);
            }

            void t_AbstractMessageWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "class_", make_descriptor(AbstractMessageWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "wrapfn_", make_descriptor(t_AbstractMessageWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "boxfn_", make_descriptor(boxObject));
              env->getClass(AbstractMessageWriter::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageWriter), "DEFAULT_ORIGINATOR", make_descriptor(j2p(*AbstractMessageWriter::DEFAULT_ORIGINATOR)));
            }

            static PyObject *t_AbstractMessageWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageWriter::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageWriter::wrap_Object(AbstractMessageWriter(((t_AbstractMessageWriter *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageWriter_of_(t_AbstractMessageWriter *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_AbstractMessageWriter_init_(t_AbstractMessageWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::files::ccsds::utils::ContextBinding a3((jobject) NULL);
              AbstractMessageWriter object((jobject) NULL);

              if (!parseArgs(args, "ssDk", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AbstractMessageWriter(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AbstractMessageWriter_getContext(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding result((jobject) NULL);
              OBJ_CALL(result = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getDefaultVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_getFormatVersionKey(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getRoot(t_AbstractMessageWriter *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getRoot());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageWriter_getTimeConverter(t_AbstractMessageWriter *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageWriter_getVersion(t_AbstractMessageWriter *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getVersion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractMessageWriter_setContext(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setContext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setContext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeFooter(t_AbstractMessageWriter *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0))
              {
                OBJ_CALL(self->object.writeFooter(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeFooter", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeHeader(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Header a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Header::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.writeHeader(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeHeader", args);
              return NULL;
            }

            static PyObject *t_AbstractMessageWriter_writeSegment(t_AbstractMessageWriter *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
              ::org::orekit::files::ccsds::section::Segment a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::section::Segment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::section::t_Segment::parameters_))
              {
                OBJ_CALL(self->object.writeSegment(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
              return NULL;
            }
            static PyObject *t_AbstractMessageWriter_get__parameters_(t_AbstractMessageWriter *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageWriter_get__context(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
              OBJ_CALL(value = self->object.getContext());
              return ::org::orekit::files::ccsds::utils::t_ContextBinding::wrap_Object(value);
            }
            static int t_AbstractMessageWriter_set__context(t_AbstractMessageWriter *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::ContextBinding value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, &value))
                {
                  INT_CALL(self->object.setContext(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "context", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageWriter_get__defaultVersion(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDefaultVersion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AbstractMessageWriter_get__formatVersionKey(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__root(t_AbstractMessageWriter *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getRoot());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageWriter_get__timeConverter(t_AbstractMessageWriter *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeConverter value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeConverter());
              return ::org::orekit::files::ccsds::definitions::t_TimeConverter::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageWriter_get__version(t_AbstractMessageWriter *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getVersion());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod.h"
#include "java/lang/Throwable.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/String.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::class$ = NULL;
              jmethodID *PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$ = NULL;
              bool PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::live$ = false;

              jclass PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonAbstractShortTermEncounter1DNumerical2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_c8304237aa5fe2ea] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/analysis/integration/UnivariateIntegrator;I)V");
                  mids$[mid_compute_61ec0633a7b37601] = env->getMethodID(cls, "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_ddd31c5991d1fe60] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getType_830fb81b25fc6619] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(const ::java::lang::String & a0, const ::org::hipparchus::analysis::integration::UnivariateIntegrator & a1, jint a2) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_c8304237aa5fe2ea, a0.this$, a1.this$, a2)) {}

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
              }

              jlong PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
              }

              void PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6);
              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter1DNumerical2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod);

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), &PY_TYPE_DEF(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), module, "PythonAbstractShortTermEncounter1DNumerical2DPOCMethod", 1);
              }

              void t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "class_", make_descriptor(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "wrapfn_", make_descriptor(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;I)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0 },
                  { "compute", "(DDDDDLorg/hipparchus/analysis/integration/UnivariateIntegrator;I)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2 },
                  { "pythonDecRef", "()V", (void *) t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3 },
                };
                env->registerNatives(cls, methods, 4);
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::wrap_Object(PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(((t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_init_(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::analysis::integration::UnivariateIntegrator a1((jobject) NULL);
                jint a2;
                PythonAbstractShortTermEncounter1DNumerical2DPOCMethod object((jobject) NULL);

                if (!parseArgs(args, "skI", ::org::hipparchus::analysis::integration::UnivariateIntegrator::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonAbstractShortTermEncounter1DNumerical2DPOCMethod(a0, a1, a2));
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

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_finalize(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonExtension(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::FieldUnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOOi", o0, o1, o2, o3, o4, o5, (int) a6);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jobject a5, jint a6)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o5 = ::org::hipparchus::analysis::integration::t_UnivariateIntegrator::wrap_Object(::org::hipparchus::analysis::integration::UnivariateIntegrator(a5));
                PyObject *result = PyObject_CallMethod(obj, "compute", "dddddOi", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4, o5, (int) a6);
                Py_DECREF(o5);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_getType2(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static void JNICALL t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_pythonDecRef3(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_a27fc9afd27e559d]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mids$[PythonAbstractShortTermEncounter1DNumerical2DPOCMethod::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod_get__self(t_PythonAbstractShortTermEncounter1DNumerical2DPOCMethod *self, void *data)
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParameters::class$ = NULL;
            jmethodID *SpacecraftParameters::mids$ = NULL;
            bool SpacecraftParameters::live$ = false;

            jclass SpacecraftParameters::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParameters");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDragArea_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragArea", "()D");
                mids$[mid_getDragCoeff_456d9a2f64d6b28d] = env->getMethodID(cls, "getDragCoeff", "()D");
                mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
                mids$[mid_getSolarRadArea_456d9a2f64d6b28d] = env->getMethodID(cls, "getSolarRadArea", "()D");
                mids$[mid_getSolarRadCoeff_456d9a2f64d6b28d] = env->getMethodID(cls, "getSolarRadCoeff", "()D");
                mids$[mid_setDragArea_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragArea", "(D)V");
                mids$[mid_setDragCoeff_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDragCoeff", "(D)V");
                mids$[mid_setMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMass", "(D)V");
                mids$[mid_setSolarRadArea_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSolarRadArea", "(D)V");
                mids$[mid_setSolarRadCoeff_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSolarRadCoeff", "(D)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParameters::SpacecraftParameters() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            jdouble SpacecraftParameters::getDragArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragArea_456d9a2f64d6b28d]);
            }

            jdouble SpacecraftParameters::getDragCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDragCoeff_456d9a2f64d6b28d]);
            }

            jdouble SpacecraftParameters::getMass() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
            }

            jdouble SpacecraftParameters::getSolarRadArea() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadArea_456d9a2f64d6b28d]);
            }

            jdouble SpacecraftParameters::getSolarRadCoeff() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSolarRadCoeff_456d9a2f64d6b28d]);
            }

            void SpacecraftParameters::setDragArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragArea_77e0f9a1f260e2e5], a0);
            }

            void SpacecraftParameters::setDragCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDragCoeff_77e0f9a1f260e2e5], a0);
            }

            void SpacecraftParameters::setMass(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMass_77e0f9a1f260e2e5], a0);
            }

            void SpacecraftParameters::setSolarRadArea(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadArea_77e0f9a1f260e2e5], a0);
            }

            void SpacecraftParameters::setSolarRadCoeff(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSolarRadCoeff_77e0f9a1f260e2e5], a0);
            }

            void SpacecraftParameters::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self);
            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg);
            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args);
            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data);
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data);
            static PyGetSetDef t_SpacecraftParameters__fields_[] = {
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, dragCoeff),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, mass),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadArea),
              DECLARE_GETSET_FIELD(t_SpacecraftParameters, solarRadCoeff),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParameters__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParameters, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getDragCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getMass, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadArea, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, getSolarRadCoeff, METH_NOARGS),
              DECLARE_METHOD(t_SpacecraftParameters, setDragArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setDragCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setMass, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadArea, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, setSolarRadCoeff, METH_O),
              DECLARE_METHOD(t_SpacecraftParameters, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParameters)[] = {
              { Py_tp_methods, t_SpacecraftParameters__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParameters_init_ },
              { Py_tp_getset, t_SpacecraftParameters__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParameters)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(SpacecraftParameters, t_SpacecraftParameters, SpacecraftParameters);

            void t_SpacecraftParameters::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParameters), &PY_TYPE_DEF(SpacecraftParameters), module, "SpacecraftParameters", 0);
            }

            void t_SpacecraftParameters::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "class_", make_descriptor(SpacecraftParameters::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "wrapfn_", make_descriptor(t_SpacecraftParameters::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParameters), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParameters_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParameters::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParameters::wrap_Object(SpacecraftParameters(((t_SpacecraftParameters *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParameters_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParameters::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParameters_init_(t_SpacecraftParameters *self, PyObject *args, PyObject *kwds)
            {
              SpacecraftParameters object((jobject) NULL);

              INT_CALL(object = SpacecraftParameters());
              self->object = object;

              return 0;
            }

            static PyObject *t_SpacecraftParameters_getDragArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getDragCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getMass(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMass());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadArea(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_getSolarRadCoeff(t_SpacecraftParameters *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SpacecraftParameters_setDragArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setDragCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDragCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDragCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setMass(t_SpacecraftParameters *self, PyObject *arg)
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

            static PyObject *t_SpacecraftParameters_setSolarRadArea(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadArea(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadArea", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_setSolarRadCoeff(t_SpacecraftParameters *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSolarRadCoeff(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSolarRadCoeff", arg);
              return NULL;
            }

            static PyObject *t_SpacecraftParameters_validate(t_SpacecraftParameters *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(SpacecraftParameters), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_SpacecraftParameters_get__dragArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__dragCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDragCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__dragCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDragCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dragCoeff", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__mass(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMass());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__mass(t_SpacecraftParameters *self, PyObject *arg, void *data)
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

            static PyObject *t_SpacecraftParameters_get__solarRadArea(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadArea());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadArea(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadArea(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadArea", arg);
              return -1;
            }

            static PyObject *t_SpacecraftParameters_get__solarRadCoeff(t_SpacecraftParameters *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSolarRadCoeff());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SpacecraftParameters_set__solarRadCoeff(t_SpacecraftParameters *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSolarRadCoeff(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "solarRadCoeff", arg);
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
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldDerivative::class$ = NULL;
        jmethodID *FieldDerivative::mids$ = NULL;
        bool FieldDerivative::live$ = false;

        jclass FieldDerivative::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldDerivative");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_f622835d869c0081] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint FieldDerivative::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jint FieldDerivative::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_f622835d869c0081], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldDerivative::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
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
      namespace differentiation {
        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args);
        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg);
        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self);
        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data);
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data);
        static PyGetSetDef t_FieldDerivative__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDerivative, freeParameters),
          DECLARE_GET_FIELD(t_FieldDerivative, order),
          DECLARE_GET_FIELD(t_FieldDerivative, value),
          DECLARE_GET_FIELD(t_FieldDerivative, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDerivative__methods_[] = {
          DECLARE_METHOD(t_FieldDerivative, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDerivative, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDerivative, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldDerivative, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_FieldDerivative, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDerivative)[] = {
          { Py_tp_methods, t_FieldDerivative__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldDerivative__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDerivative)[] = {
          &PY_TYPE_DEF(::org::hipparchus::CalculusFieldElement),
          NULL
        };

        DEFINE_TYPE(FieldDerivative, t_FieldDerivative, FieldDerivative);
        PyObject *t_FieldDerivative::wrap_Object(const FieldDerivative& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldDerivative::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldDerivative::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDerivative *self = (t_FieldDerivative *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldDerivative::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDerivative), &PY_TYPE_DEF(FieldDerivative), module, "FieldDerivative", 0);
        }

        void t_FieldDerivative::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "class_", make_descriptor(FieldDerivative::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "wrapfn_", make_descriptor(t_FieldDerivative::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDerivative), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDerivative_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDerivative::initializeClass, 1)))
            return NULL;
          return t_FieldDerivative::wrap_Object(FieldDerivative(((t_FieldDerivative *) arg)->object.this$));
        }
        static PyObject *t_FieldDerivative_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDerivative::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDerivative_of_(t_FieldDerivative *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldDerivative_getFreeParameters(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getOrder(t_FieldDerivative *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldDerivative_getPartialDerivative(t_FieldDerivative *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldDerivative_getValue(t_FieldDerivative *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }
        static PyObject *t_FieldDerivative_get__parameters_(t_FieldDerivative *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDerivative_get__freeParameters(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__order(t_FieldDerivative *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldDerivative_get__value(t_FieldDerivative *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/IgnoreDEMAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IgnoreDEMAlgorithm::class$ = NULL;
        jmethodID *IgnoreDEMAlgorithm::mids$ = NULL;
        bool IgnoreDEMAlgorithm::live$ = false;

        jclass IgnoreDEMAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IgnoreDEMAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_824133ce4aec3505] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_465c95e4cb53bef3] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_0b100883a4ceff82] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IgnoreDEMAlgorithm::IgnoreDEMAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::orekit::rugged::api::AlgorithmId IgnoreDEMAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
        }

        jdouble IgnoreDEMAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_824133ce4aec3505], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_465c95e4cb53bef3], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IgnoreDEMAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_0b100883a4ceff82], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self);
        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args);
        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data);
        static PyGetSetDef t_IgnoreDEMAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IgnoreDEMAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IgnoreDEMAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IgnoreDEMAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IgnoreDEMAlgorithm)[] = {
          { Py_tp_methods, t_IgnoreDEMAlgorithm__methods_ },
          { Py_tp_init, (void *) t_IgnoreDEMAlgorithm_init_ },
          { Py_tp_getset, t_IgnoreDEMAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IgnoreDEMAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IgnoreDEMAlgorithm, t_IgnoreDEMAlgorithm, IgnoreDEMAlgorithm);

        void t_IgnoreDEMAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IgnoreDEMAlgorithm), &PY_TYPE_DEF(IgnoreDEMAlgorithm), module, "IgnoreDEMAlgorithm", 0);
        }

        void t_IgnoreDEMAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "class_", make_descriptor(IgnoreDEMAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "wrapfn_", make_descriptor(t_IgnoreDEMAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IgnoreDEMAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IgnoreDEMAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IgnoreDEMAlgorithm::wrap_Object(IgnoreDEMAlgorithm(((t_IgnoreDEMAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IgnoreDEMAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IgnoreDEMAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IgnoreDEMAlgorithm_init_(t_IgnoreDEMAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          IgnoreDEMAlgorithm object((jobject) NULL);

          INT_CALL(object = IgnoreDEMAlgorithm());
          self->object = object;

          return 0;
        }

        static PyObject *t_IgnoreDEMAlgorithm_getAlgorithmId(t_IgnoreDEMAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IgnoreDEMAlgorithm_getElevation(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_intersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_refineIntersection(t_IgnoreDEMAlgorithm *self, PyObject *args)
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

        static PyObject *t_IgnoreDEMAlgorithm_get__algorithmId(t_IgnoreDEMAlgorithm *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/lang/Enum.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeEndpoints::class$ = NULL;
            jmethodID *AttitudeEndpoints::mids$ = NULL;
            bool AttitudeEndpoints::live$ = false;
            ::java::lang::String *AttitudeEndpoints::A2B = NULL;
            ::java::lang::String *AttitudeEndpoints::B2A = NULL;

            jclass AttitudeEndpoints::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_46e50d643ce38532] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
                mids$[mid_build_d2838fa0adea33de] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
                mids$[mid_checkExternalFrame_54f8b33237256597] = env->getMethodID(cls, "checkExternalFrame", "(Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_checkMandatoryEntriesExceptExternalFrame_31cc8d94746b3642] = env->getMethodID(cls, "checkMandatoryEntriesExceptExternalFrame", "(DLjava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_getExternalFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getExternalFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameA_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrameA", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameB_aa70fdb14ae9305f] = env->getMethodID(cls, "getFrameB", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getSpacecraftBodyFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_isA2b_e470b6d9e0d979db] = env->getMethodID(cls, "isA2b", "()Z");
                mids$[mid_isCompatibleWith_734f05c752609c53] = env->getMethodID(cls, "isCompatibleWith", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;)Z");
                mids$[mid_isExternal2SpacecraftBody_e470b6d9e0d979db] = env->getMethodID(cls, "isExternal2SpacecraftBody", "()Z");
                mids$[mid_setA2b_50a2e0b139e80a58] = env->getMethodID(cls, "setA2b", "(Z)V");
                mids$[mid_setFrameA_a455f3ff24eb0b47] = env->getMethodID(cls, "setFrameA", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setFrameB_a455f3ff24eb0b47] = env->getMethodID(cls, "setFrameB", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                A2B = new ::java::lang::String(env->getStaticObjectField(cls, "A2B", "Ljava/lang/String;"));
                B2A = new ::java::lang::String(env->getStaticObjectField(cls, "B2A", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AttitudeEndpoints::AttitudeEndpoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::org::orekit::attitudes::FieldAttitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_46e50d643ce38532], a0.this$, a1.this$, a2.this$));
            }

            ::org::orekit::attitudes::Attitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_d2838fa0adea33de], a0.this$, a1.this$, a2.this$));
            }

            void AttitudeEndpoints::checkExternalFrame(const ::java::lang::Enum & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkExternalFrame_54f8b33237256597], a0.this$, a1.this$);
            }

            void AttitudeEndpoints::checkMandatoryEntriesExceptExternalFrame(jdouble a0, const ::java::lang::Enum & a1, const ::java::lang::Enum & a2, const ::java::lang::Enum & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_checkMandatoryEntriesExceptExternalFrame_31cc8d94746b3642], a0, a1.this$, a2.this$, a3.this$);
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getExternalFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getExternalFrame_aa70fdb14ae9305f]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameA() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameA_aa70fdb14ae9305f]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameB() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameB_aa70fdb14ae9305f]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getSpacecraftBodyFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getSpacecraftBodyFrame_aa70fdb14ae9305f]));
            }

            jboolean AttitudeEndpoints::isA2b() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isA2b_e470b6d9e0d979db]);
            }

            jboolean AttitudeEndpoints::isCompatibleWith(const AttitudeEndpoints & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_734f05c752609c53], a0.this$);
            }

            jboolean AttitudeEndpoints::isExternal2SpacecraftBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isExternal2SpacecraftBody_e470b6d9e0d979db]);
            }

            void AttitudeEndpoints::setA2b(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA2b_50a2e0b139e80a58], a0);
            }

            void AttitudeEndpoints::setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameA_a455f3ff24eb0b47], a0.this$);
            }

            void AttitudeEndpoints::setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameB_a455f3ff24eb0b47], a0.this$);
            }

            ::java::lang::String AttitudeEndpoints::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
          namespace adm {
            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data);
            static PyGetSetDef t_AttitudeEndpoints__fields_[] = {
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, a2b),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, external2SpacecraftBody),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, externalFrame),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameA),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameB),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, spacecraftBodyFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeEndpoints__methods_[] = {
              DECLARE_METHOD(t_AttitudeEndpoints, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkMandatoryEntriesExceptExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getExternalFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameA, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameB, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getSpacecraftBodyFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isA2b, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isCompatibleWith, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, isExternal2SpacecraftBody, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, setA2b, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameA, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameB, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, toString, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeEndpoints)[] = {
              { Py_tp_methods, t_AttitudeEndpoints__methods_ },
              { Py_tp_init, (void *) t_AttitudeEndpoints_init_ },
              { Py_tp_getset, t_AttitudeEndpoints__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeEndpoints)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AttitudeEndpoints, t_AttitudeEndpoints, AttitudeEndpoints);

            void t_AttitudeEndpoints::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeEndpoints), &PY_TYPE_DEF(AttitudeEndpoints), module, "AttitudeEndpoints", 0);
            }

            void t_AttitudeEndpoints::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "class_", make_descriptor(AttitudeEndpoints::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "wrapfn_", make_descriptor(t_AttitudeEndpoints::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeEndpoints::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "A2B", make_descriptor(j2p(*AttitudeEndpoints::A2B)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "B2A", make_descriptor(j2p(*AttitudeEndpoints::B2A)));
            }

            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeEndpoints::initializeClass, 1)))
                return NULL;
              return t_AttitudeEndpoints::wrap_Object(AttitudeEndpoints(((t_AttitudeEndpoints *) arg)->object.this$));
            }
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeEndpoints::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds)
            {
              AttitudeEndpoints object((jobject) NULL);

              INT_CALL(object = AttitudeEndpoints());
              self->object = object;

              return 0;
            }

            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                  ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
                  ::org::orekit::attitudes::Attitude result((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                  if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkExternalFrame(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              jdouble a0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::lang::Enum a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Enum a3((jobject) NULL);
              PyTypeObject **p3;

              if (!parseArgs(args, "DKKK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2, &p2, ::java::lang::t_Enum::parameters_, &a3, &p3, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkMandatoryEntriesExceptExternalFrame(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkMandatoryEntriesExceptExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isA2b());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg)
            {
              AttitudeEndpoints a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", AttitudeEndpoints::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isCompatibleWith(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setA2b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA2b", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameA", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameB(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameB", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeEndpoints), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isA2b());
              Py_RETURN_BOOL(value);
            }
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setA2b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a2b", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }

            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameA", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameB(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameB", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/AbstractMatricesHarvester.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *AbstractMatricesHarvester::class$ = NULL;
      jmethodID *AbstractMatricesHarvester::mids$ = NULL;
      bool AbstractMatricesHarvester::live$ = false;
      jint AbstractMatricesHarvester::STATE_DIMENSION = (jint) 0;

      jclass AbstractMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/AbstractMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_freezeColumnsNames_7ae3461a92a43152] = env->getMethodID(cls, "freezeColumnsNames", "()V");
          mids$[mid_getInitialJacobianColumn_5fc57a69c973af17] = env->getMethodID(cls, "getInitialJacobianColumn", "(Ljava/lang/String;)[D");
          mids$[mid_getInitialStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getInitialStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getParametersJacobian_63aee3ce1e412e46] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getStmName_0090f7797e403f43] = env->getMethodID(cls, "getStmName", "()Ljava/lang/String;");
          mids$[mid_setReferenceState_2b88003f931f70a7] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_getConversionJacobian_2f2af053a5858dd9] = env->getMethodID(cls, "getConversionJacobian", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractMatricesHarvester::freezeColumnsNames() const
      {
        env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_7ae3461a92a43152]);
      }

      JArray< jdouble > AbstractMatricesHarvester::getInitialJacobianColumn(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getInitialJacobianColumn_5fc57a69c973af17], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getInitialStateTransitionMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialStateTransitionMatrix_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_63aee3ce1e412e46], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix AbstractMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46], a0.this$));
      }

      ::java::lang::String AbstractMatricesHarvester::getStmName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStmName_0090f7797e403f43]));
      }

      void AbstractMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceState_2b88003f931f70a7], a0.this$);
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
      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self);
      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg);
      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data);
      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data);
      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data);
      static PyGetSetDef t_AbstractMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, initialStateTransitionMatrix),
        DECLARE_SET_FIELD(t_AbstractMatricesHarvester, referenceState),
        DECLARE_GET_FIELD(t_AbstractMatricesHarvester, stmName),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_AbstractMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, freezeColumnsNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialJacobianColumn, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getInitialStateTransitionMatrix, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getParametersJacobian, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStateTransitionMatrix, METH_O),
        DECLARE_METHOD(t_AbstractMatricesHarvester, getStmName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractMatricesHarvester, setReferenceState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractMatricesHarvester)[] = {
        { Py_tp_methods, t_AbstractMatricesHarvester__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractMatricesHarvester, t_AbstractMatricesHarvester, AbstractMatricesHarvester);

      void t_AbstractMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractMatricesHarvester), &PY_TYPE_DEF(AbstractMatricesHarvester), module, "AbstractMatricesHarvester", 0);
      }

      void t_AbstractMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "class_", make_descriptor(AbstractMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractMatricesHarvester::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMatricesHarvester), "STATE_DIMENSION", make_descriptor(AbstractMatricesHarvester::STATE_DIMENSION));
      }

      static PyObject *t_AbstractMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_AbstractMatricesHarvester::wrap_Object(AbstractMatricesHarvester(((t_AbstractMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_AbstractMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractMatricesHarvester_freezeColumnsNames(t_AbstractMatricesHarvester *self)
      {
        OBJ_CALL(self->object.freezeColumnsNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialJacobianColumn(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getInitialJacobianColumn(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "getInitialJacobianColumn", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getInitialStateTransitionMatrix(t_AbstractMatricesHarvester *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_AbstractMatricesHarvester_getParametersJacobian(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getParametersJacobian(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersJacobian", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStateTransitionMatrix(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_getStmName(t_AbstractMatricesHarvester *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getStmName());
        return j2p(result);
      }

      static PyObject *t_AbstractMatricesHarvester_setReferenceState(t_AbstractMatricesHarvester *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceState", arg);
        return NULL;
      }

      static PyObject *t_AbstractMatricesHarvester_get__initialStateTransitionMatrix(t_AbstractMatricesHarvester *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialStateTransitionMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static int t_AbstractMatricesHarvester_set__referenceState(t_AbstractMatricesHarvester *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
        return -1;
      }

      static PyObject *t_AbstractMatricesHarvester_get__stmName(t_AbstractMatricesHarvester *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getStmName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Ephemeris::class$ = NULL;
        jmethodID *SP3Ephemeris::mids$ = NULL;
        bool SP3Ephemeris::live$ = false;

        jclass SP3Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4d7d7a5112178df2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_33ee0b398b1c8e71] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;D)V");
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Ephemeris::SP3Ephemeris(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jint a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d7d7a5112178df2, a0.this$, a1, a2.this$, a3, a4.this$)) {}

        void SP3Ephemeris::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_33ee0b398b1c8e71], a0.this$, a1);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Ephemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::org::orekit::frames::Frame SP3Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::java::lang::String SP3Ephemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        jint SP3Ephemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble SP3Ephemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::java::util::List SP3Ephemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
      namespace sp3 {
        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args);
        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data);
        static PyGetSetDef t_SP3Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Ephemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Ephemeris, frame),
          DECLARE_GET_FIELD(t_SP3Ephemeris, id),
          DECLARE_GET_FIELD(t_SP3Ephemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Ephemeris, mu),
          DECLARE_GET_FIELD(t_SP3Ephemeris, segments),
          DECLARE_GET_FIELD(t_SP3Ephemeris, start),
          DECLARE_GET_FIELD(t_SP3Ephemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Ephemeris__methods_[] = {
          DECLARE_METHOD(t_SP3Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, addCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Ephemeris)[] = {
          { Py_tp_methods, t_SP3Ephemeris__methods_ },
          { Py_tp_init, (void *) t_SP3Ephemeris_init_ },
          { Py_tp_getset, t_SP3Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Ephemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Ephemeris, t_SP3Ephemeris, SP3Ephemeris);

        void t_SP3Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Ephemeris), &PY_TYPE_DEF(SP3Ephemeris), module, "SP3Ephemeris", 0);
        }

        void t_SP3Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "class_", make_descriptor(SP3Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "wrapfn_", make_descriptor(t_SP3Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Ephemeris::initializeClass, 1)))
            return NULL;
          return t_SP3Ephemeris::wrap_Object(SP3Ephemeris(((t_SP3Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jint a3;
          ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          SP3Ephemeris object((jobject) NULL);

          if (!parseArgs(args, "sDkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Ephemeris(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", args);
          return NULL;
        }

        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Segment));
        }

        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *MidpointFieldIntegratorBuilder::class$ = NULL;
        jmethodID *MidpointFieldIntegratorBuilder::mids$ = NULL;
        bool MidpointFieldIntegratorBuilder::live$ = false;

        jclass MidpointFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/MidpointFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        MidpointFieldIntegratorBuilder::MidpointFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator MidpointFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_MidpointFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_MidpointFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MidpointFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_MidpointFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MidpointFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_MidpointFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_MidpointFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_MidpointFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MidpointFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(MidpointFieldIntegratorBuilder, t_MidpointFieldIntegratorBuilder, MidpointFieldIntegratorBuilder);
        PyObject *t_MidpointFieldIntegratorBuilder::wrap_Object(const MidpointFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MidpointFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MidpointFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MidpointFieldIntegratorBuilder *self = (t_MidpointFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MidpointFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(MidpointFieldIntegratorBuilder), &PY_TYPE_DEF(MidpointFieldIntegratorBuilder), module, "MidpointFieldIntegratorBuilder", 0);
        }

        void t_MidpointFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "class_", make_descriptor(MidpointFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_MidpointFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MidpointFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_MidpointFieldIntegratorBuilder::wrap_Object(MidpointFieldIntegratorBuilder(((t_MidpointFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MidpointFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MidpointFieldIntegratorBuilder_of_(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MidpointFieldIntegratorBuilder_init_(t_MidpointFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              MidpointFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = MidpointFieldIntegratorBuilder(a0));
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

        static PyObject *t_MidpointFieldIntegratorBuilder_buildIntegrator(t_MidpointFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(MidpointFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_MidpointFieldIntegratorBuilder_get__parameters_(t_MidpointFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/BetaDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *BetaDistribution::class$ = NULL;
        jmethodID *BetaDistribution::mids$ = NULL;
        bool BetaDistribution::live$ = false;

        jclass BetaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/BetaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlpha", "()D");
            mids$[mid_getBeta_456d9a2f64d6b28d] = env->getMethodID(cls, "getBeta", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        BetaDistribution::BetaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble BetaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble BetaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble BetaDistribution::getAlpha() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlpha_456d9a2f64d6b28d]);
        }

        jdouble BetaDistribution::getBeta() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBeta_456d9a2f64d6b28d]);
        }

        jdouble BetaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble BetaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble BetaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble BetaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean BetaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble BetaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self);
        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args);
        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data);
        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data);
        static PyGetSetDef t_BetaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BetaDistribution, alpha),
          DECLARE_GET_FIELD(t_BetaDistribution, beta),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BetaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BetaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BetaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BetaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BetaDistribution__methods_[] = {
          DECLARE_METHOD(t_BetaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BetaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getAlpha, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getBeta, METH_NOARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BetaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BetaDistribution)[] = {
          { Py_tp_methods, t_BetaDistribution__methods_ },
          { Py_tp_init, (void *) t_BetaDistribution_init_ },
          { Py_tp_getset, t_BetaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BetaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(BetaDistribution, t_BetaDistribution, BetaDistribution);

        void t_BetaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BetaDistribution), &PY_TYPE_DEF(BetaDistribution), module, "BetaDistribution", 0);
        }

        void t_BetaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "class_", make_descriptor(BetaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "wrapfn_", make_descriptor(t_BetaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BetaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BetaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BetaDistribution::initializeClass, 1)))
            return NULL;
          return t_BetaDistribution::wrap_Object(BetaDistribution(((t_BetaDistribution *) arg)->object.this$));
        }
        static PyObject *t_BetaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BetaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BetaDistribution_init_(t_BetaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = BetaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              BetaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = BetaDistribution(a0, a1, a2));
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

        static PyObject *t_BetaDistribution_cumulativeProbability(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BetaDistribution_density(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_BetaDistribution_getAlpha(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlpha());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getBeta(t_BetaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBeta());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BetaDistribution_getNumericalMean(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BetaDistribution_getNumericalVariance(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportLowerBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BetaDistribution_getSupportUpperBound(t_BetaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BetaDistribution_isSupportConnected(t_BetaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BetaDistribution_logDensity(t_BetaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BetaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_BetaDistribution_get__alpha(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlpha());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__beta(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBeta());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalMean(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__numericalVariance(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportConnected(t_BetaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BetaDistribution_get__supportLowerBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BetaDistribution_get__supportUpperBound(t_BetaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmDataField::class$ = NULL;
          jmethodID *RtcmDataField::mids$ = NULL;
          bool RtcmDataField::live$ = false;
          RtcmDataField *RtcmDataField::DF002 = NULL;
          RtcmDataField *RtcmDataField::DF009 = NULL;
          RtcmDataField *RtcmDataField::DF038 = NULL;
          RtcmDataField *RtcmDataField::DF040 = NULL;
          RtcmDataField *RtcmDataField::DF068 = NULL;
          RtcmDataField *RtcmDataField::DF071 = NULL;
          RtcmDataField *RtcmDataField::DF076 = NULL;
          RtcmDataField *RtcmDataField::DF077 = NULL;
          RtcmDataField *RtcmDataField::DF078 = NULL;
          RtcmDataField *RtcmDataField::DF079 = NULL;
          RtcmDataField *RtcmDataField::DF081 = NULL;
          RtcmDataField *RtcmDataField::DF082 = NULL;
          RtcmDataField *RtcmDataField::DF083 = NULL;
          RtcmDataField *RtcmDataField::DF084 = NULL;
          RtcmDataField *RtcmDataField::DF085 = NULL;
          RtcmDataField *RtcmDataField::DF086 = NULL;
          RtcmDataField *RtcmDataField::DF087 = NULL;
          RtcmDataField *RtcmDataField::DF088 = NULL;
          RtcmDataField *RtcmDataField::DF089 = NULL;
          RtcmDataField *RtcmDataField::DF090 = NULL;
          RtcmDataField *RtcmDataField::DF091 = NULL;
          RtcmDataField *RtcmDataField::DF092 = NULL;
          RtcmDataField *RtcmDataField::DF093 = NULL;
          RtcmDataField *RtcmDataField::DF094 = NULL;
          RtcmDataField *RtcmDataField::DF095 = NULL;
          RtcmDataField *RtcmDataField::DF096 = NULL;
          RtcmDataField *RtcmDataField::DF097 = NULL;
          RtcmDataField *RtcmDataField::DF098 = NULL;
          RtcmDataField *RtcmDataField::DF099 = NULL;
          RtcmDataField *RtcmDataField::DF100 = NULL;
          RtcmDataField *RtcmDataField::DF101 = NULL;
          RtcmDataField *RtcmDataField::DF102 = NULL;
          RtcmDataField *RtcmDataField::DF103 = NULL;
          RtcmDataField *RtcmDataField::DF104 = NULL;
          RtcmDataField *RtcmDataField::DF105 = NULL;
          RtcmDataField *RtcmDataField::DF106 = NULL;
          RtcmDataField *RtcmDataField::DF107 = NULL;
          RtcmDataField *RtcmDataField::DF108 = NULL;
          RtcmDataField *RtcmDataField::DF109 = NULL;
          RtcmDataField *RtcmDataField::DF110 = NULL;
          RtcmDataField *RtcmDataField::DF111 = NULL;
          RtcmDataField *RtcmDataField::DF112 = NULL;
          RtcmDataField *RtcmDataField::DF113 = NULL;
          RtcmDataField *RtcmDataField::DF114 = NULL;
          RtcmDataField *RtcmDataField::DF115 = NULL;
          RtcmDataField *RtcmDataField::DF116 = NULL;
          RtcmDataField *RtcmDataField::DF117 = NULL;
          RtcmDataField *RtcmDataField::DF118 = NULL;
          RtcmDataField *RtcmDataField::DF119 = NULL;
          RtcmDataField *RtcmDataField::DF120 = NULL;
          RtcmDataField *RtcmDataField::DF121 = NULL;
          RtcmDataField *RtcmDataField::DF122 = NULL;
          RtcmDataField *RtcmDataField::DF123 = NULL;
          RtcmDataField *RtcmDataField::DF124 = NULL;
          RtcmDataField *RtcmDataField::DF125 = NULL;
          RtcmDataField *RtcmDataField::DF126 = NULL;
          RtcmDataField *RtcmDataField::DF127 = NULL;
          RtcmDataField *RtcmDataField::DF128 = NULL;
          RtcmDataField *RtcmDataField::DF129 = NULL;
          RtcmDataField *RtcmDataField::DF130 = NULL;
          RtcmDataField *RtcmDataField::DF131 = NULL;
          RtcmDataField *RtcmDataField::DF132 = NULL;
          RtcmDataField *RtcmDataField::DF133 = NULL;
          RtcmDataField *RtcmDataField::DF134 = NULL;
          RtcmDataField *RtcmDataField::DF135 = NULL;
          RtcmDataField *RtcmDataField::DF136 = NULL;
          RtcmDataField *RtcmDataField::DF137 = NULL;
          RtcmDataField *RtcmDataField::DF252 = NULL;
          RtcmDataField *RtcmDataField::DF289 = NULL;
          RtcmDataField *RtcmDataField::DF290 = NULL;
          RtcmDataField *RtcmDataField::DF291 = NULL;
          RtcmDataField *RtcmDataField::DF292 = NULL;
          RtcmDataField *RtcmDataField::DF293 = NULL;
          RtcmDataField *RtcmDataField::DF294 = NULL;
          RtcmDataField *RtcmDataField::DF295 = NULL;
          RtcmDataField *RtcmDataField::DF296 = NULL;
          RtcmDataField *RtcmDataField::DF297 = NULL;
          RtcmDataField *RtcmDataField::DF298 = NULL;
          RtcmDataField *RtcmDataField::DF299 = NULL;
          RtcmDataField *RtcmDataField::DF300 = NULL;
          RtcmDataField *RtcmDataField::DF301 = NULL;
          RtcmDataField *RtcmDataField::DF302 = NULL;
          RtcmDataField *RtcmDataField::DF303 = NULL;
          RtcmDataField *RtcmDataField::DF304 = NULL;
          RtcmDataField *RtcmDataField::DF305 = NULL;
          RtcmDataField *RtcmDataField::DF306 = NULL;
          RtcmDataField *RtcmDataField::DF307 = NULL;
          RtcmDataField *RtcmDataField::DF308 = NULL;
          RtcmDataField *RtcmDataField::DF309 = NULL;
          RtcmDataField *RtcmDataField::DF310 = NULL;
          RtcmDataField *RtcmDataField::DF311 = NULL;
          RtcmDataField *RtcmDataField::DF312 = NULL;
          RtcmDataField *RtcmDataField::DF313 = NULL;
          RtcmDataField *RtcmDataField::DF314 = NULL;
          RtcmDataField *RtcmDataField::DF315 = NULL;
          RtcmDataField *RtcmDataField::DF316 = NULL;
          RtcmDataField *RtcmDataField::DF317 = NULL;
          RtcmDataField *RtcmDataField::DF365 = NULL;
          RtcmDataField *RtcmDataField::DF366 = NULL;
          RtcmDataField *RtcmDataField::DF367 = NULL;
          RtcmDataField *RtcmDataField::DF368 = NULL;
          RtcmDataField *RtcmDataField::DF369 = NULL;
          RtcmDataField *RtcmDataField::DF370 = NULL;
          RtcmDataField *RtcmDataField::DF375 = NULL;
          RtcmDataField *RtcmDataField::DF376 = NULL;
          RtcmDataField *RtcmDataField::DF377 = NULL;
          RtcmDataField *RtcmDataField::DF378 = NULL;
          RtcmDataField *RtcmDataField::DF384 = NULL;
          RtcmDataField *RtcmDataField::DF385 = NULL;
          RtcmDataField *RtcmDataField::DF386 = NULL;
          RtcmDataField *RtcmDataField::DF387 = NULL;
          RtcmDataField *RtcmDataField::DF388 = NULL;
          RtcmDataField *RtcmDataField::DF391 = NULL;
          RtcmDataField *RtcmDataField::DF392 = NULL;
          RtcmDataField *RtcmDataField::DF413 = NULL;
          RtcmDataField *RtcmDataField::DF414 = NULL;
          RtcmDataField *RtcmDataField::DF415 = NULL;
          RtcmDataField *RtcmDataField::DF429 = NULL;
          RtcmDataField *RtcmDataField::DF430 = NULL;
          RtcmDataField *RtcmDataField::DF431 = NULL;
          RtcmDataField *RtcmDataField::DF432 = NULL;
          RtcmDataField *RtcmDataField::DF433 = NULL;
          RtcmDataField *RtcmDataField::DF434 = NULL;
          RtcmDataField *RtcmDataField::DF435 = NULL;
          RtcmDataField *RtcmDataField::DF436 = NULL;
          RtcmDataField *RtcmDataField::DF437 = NULL;
          RtcmDataField *RtcmDataField::DF438 = NULL;
          RtcmDataField *RtcmDataField::DF439 = NULL;
          RtcmDataField *RtcmDataField::DF440 = NULL;
          RtcmDataField *RtcmDataField::DF441 = NULL;
          RtcmDataField *RtcmDataField::DF442 = NULL;
          RtcmDataField *RtcmDataField::DF443 = NULL;
          RtcmDataField *RtcmDataField::DF444 = NULL;
          RtcmDataField *RtcmDataField::DF445 = NULL;
          RtcmDataField *RtcmDataField::DF446 = NULL;
          RtcmDataField *RtcmDataField::DF447 = NULL;
          RtcmDataField *RtcmDataField::DF448 = NULL;
          RtcmDataField *RtcmDataField::DF449 = NULL;
          RtcmDataField *RtcmDataField::DF450 = NULL;
          RtcmDataField *RtcmDataField::DF451 = NULL;
          RtcmDataField *RtcmDataField::DF452 = NULL;
          RtcmDataField *RtcmDataField::DF453 = NULL;
          RtcmDataField *RtcmDataField::DF454 = NULL;
          RtcmDataField *RtcmDataField::DF455 = NULL;
          RtcmDataField *RtcmDataField::DF456 = NULL;
          RtcmDataField *RtcmDataField::DF457 = NULL;
          RtcmDataField *RtcmDataField::DF458 = NULL;
          RtcmDataField *RtcmDataField::DF488 = NULL;
          RtcmDataField *RtcmDataField::DF489 = NULL;
          RtcmDataField *RtcmDataField::DF490 = NULL;
          RtcmDataField *RtcmDataField::DF491 = NULL;
          RtcmDataField *RtcmDataField::DF492 = NULL;
          RtcmDataField *RtcmDataField::DF493 = NULL;
          RtcmDataField *RtcmDataField::DF494 = NULL;
          RtcmDataField *RtcmDataField::DF495 = NULL;
          RtcmDataField *RtcmDataField::DF496 = NULL;
          RtcmDataField *RtcmDataField::DF497 = NULL;
          RtcmDataField *RtcmDataField::DF498 = NULL;
          RtcmDataField *RtcmDataField::DF499 = NULL;
          RtcmDataField *RtcmDataField::DF500 = NULL;
          RtcmDataField *RtcmDataField::DF501 = NULL;
          RtcmDataField *RtcmDataField::DF502 = NULL;
          RtcmDataField *RtcmDataField::DF503 = NULL;
          RtcmDataField *RtcmDataField::DF504 = NULL;
          RtcmDataField *RtcmDataField::DF505 = NULL;
          RtcmDataField *RtcmDataField::DF506 = NULL;
          RtcmDataField *RtcmDataField::DF507 = NULL;
          RtcmDataField *RtcmDataField::DF508 = NULL;
          RtcmDataField *RtcmDataField::DF509 = NULL;
          RtcmDataField *RtcmDataField::DF510 = NULL;
          RtcmDataField *RtcmDataField::DF511 = NULL;
          RtcmDataField *RtcmDataField::DF512 = NULL;
          RtcmDataField *RtcmDataField::DF513 = NULL;
          RtcmDataField *RtcmDataField::DF514 = NULL;
          RtcmDataField *RtcmDataField::DF515 = NULL;

          jclass RtcmDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_f47a0aee8b0994e9] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmDataField;");
              mids$[mid_values_07cfe4883c1fd236] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DF002 = new RtcmDataField(env->getStaticObjectField(cls, "DF002", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF009 = new RtcmDataField(env->getStaticObjectField(cls, "DF009", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF038 = new RtcmDataField(env->getStaticObjectField(cls, "DF038", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF040 = new RtcmDataField(env->getStaticObjectField(cls, "DF040", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF068 = new RtcmDataField(env->getStaticObjectField(cls, "DF068", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF071 = new RtcmDataField(env->getStaticObjectField(cls, "DF071", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF076 = new RtcmDataField(env->getStaticObjectField(cls, "DF076", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF077 = new RtcmDataField(env->getStaticObjectField(cls, "DF077", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF078 = new RtcmDataField(env->getStaticObjectField(cls, "DF078", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF079 = new RtcmDataField(env->getStaticObjectField(cls, "DF079", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF081 = new RtcmDataField(env->getStaticObjectField(cls, "DF081", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF082 = new RtcmDataField(env->getStaticObjectField(cls, "DF082", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF083 = new RtcmDataField(env->getStaticObjectField(cls, "DF083", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF084 = new RtcmDataField(env->getStaticObjectField(cls, "DF084", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF085 = new RtcmDataField(env->getStaticObjectField(cls, "DF085", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF086 = new RtcmDataField(env->getStaticObjectField(cls, "DF086", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF087 = new RtcmDataField(env->getStaticObjectField(cls, "DF087", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF088 = new RtcmDataField(env->getStaticObjectField(cls, "DF088", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF089 = new RtcmDataField(env->getStaticObjectField(cls, "DF089", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF090 = new RtcmDataField(env->getStaticObjectField(cls, "DF090", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF091 = new RtcmDataField(env->getStaticObjectField(cls, "DF091", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF092 = new RtcmDataField(env->getStaticObjectField(cls, "DF092", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF093 = new RtcmDataField(env->getStaticObjectField(cls, "DF093", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF094 = new RtcmDataField(env->getStaticObjectField(cls, "DF094", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF095 = new RtcmDataField(env->getStaticObjectField(cls, "DF095", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF096 = new RtcmDataField(env->getStaticObjectField(cls, "DF096", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF097 = new RtcmDataField(env->getStaticObjectField(cls, "DF097", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF098 = new RtcmDataField(env->getStaticObjectField(cls, "DF098", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF099 = new RtcmDataField(env->getStaticObjectField(cls, "DF099", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF100 = new RtcmDataField(env->getStaticObjectField(cls, "DF100", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF101 = new RtcmDataField(env->getStaticObjectField(cls, "DF101", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF102 = new RtcmDataField(env->getStaticObjectField(cls, "DF102", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF103 = new RtcmDataField(env->getStaticObjectField(cls, "DF103", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF104 = new RtcmDataField(env->getStaticObjectField(cls, "DF104", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF105 = new RtcmDataField(env->getStaticObjectField(cls, "DF105", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF106 = new RtcmDataField(env->getStaticObjectField(cls, "DF106", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF107 = new RtcmDataField(env->getStaticObjectField(cls, "DF107", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF108 = new RtcmDataField(env->getStaticObjectField(cls, "DF108", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF109 = new RtcmDataField(env->getStaticObjectField(cls, "DF109", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF110 = new RtcmDataField(env->getStaticObjectField(cls, "DF110", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF111 = new RtcmDataField(env->getStaticObjectField(cls, "DF111", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF112 = new RtcmDataField(env->getStaticObjectField(cls, "DF112", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF113 = new RtcmDataField(env->getStaticObjectField(cls, "DF113", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF114 = new RtcmDataField(env->getStaticObjectField(cls, "DF114", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF115 = new RtcmDataField(env->getStaticObjectField(cls, "DF115", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF116 = new RtcmDataField(env->getStaticObjectField(cls, "DF116", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF117 = new RtcmDataField(env->getStaticObjectField(cls, "DF117", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF118 = new RtcmDataField(env->getStaticObjectField(cls, "DF118", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF119 = new RtcmDataField(env->getStaticObjectField(cls, "DF119", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF120 = new RtcmDataField(env->getStaticObjectField(cls, "DF120", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF121 = new RtcmDataField(env->getStaticObjectField(cls, "DF121", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF122 = new RtcmDataField(env->getStaticObjectField(cls, "DF122", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF123 = new RtcmDataField(env->getStaticObjectField(cls, "DF123", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF124 = new RtcmDataField(env->getStaticObjectField(cls, "DF124", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF125 = new RtcmDataField(env->getStaticObjectField(cls, "DF125", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF126 = new RtcmDataField(env->getStaticObjectField(cls, "DF126", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF127 = new RtcmDataField(env->getStaticObjectField(cls, "DF127", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF128 = new RtcmDataField(env->getStaticObjectField(cls, "DF128", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF129 = new RtcmDataField(env->getStaticObjectField(cls, "DF129", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF130 = new RtcmDataField(env->getStaticObjectField(cls, "DF130", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF131 = new RtcmDataField(env->getStaticObjectField(cls, "DF131", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF132 = new RtcmDataField(env->getStaticObjectField(cls, "DF132", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF133 = new RtcmDataField(env->getStaticObjectField(cls, "DF133", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF134 = new RtcmDataField(env->getStaticObjectField(cls, "DF134", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF135 = new RtcmDataField(env->getStaticObjectField(cls, "DF135", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF136 = new RtcmDataField(env->getStaticObjectField(cls, "DF136", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF137 = new RtcmDataField(env->getStaticObjectField(cls, "DF137", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF252 = new RtcmDataField(env->getStaticObjectField(cls, "DF252", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF289 = new RtcmDataField(env->getStaticObjectField(cls, "DF289", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF290 = new RtcmDataField(env->getStaticObjectField(cls, "DF290", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF291 = new RtcmDataField(env->getStaticObjectField(cls, "DF291", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF292 = new RtcmDataField(env->getStaticObjectField(cls, "DF292", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF293 = new RtcmDataField(env->getStaticObjectField(cls, "DF293", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF294 = new RtcmDataField(env->getStaticObjectField(cls, "DF294", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF295 = new RtcmDataField(env->getStaticObjectField(cls, "DF295", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF296 = new RtcmDataField(env->getStaticObjectField(cls, "DF296", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF297 = new RtcmDataField(env->getStaticObjectField(cls, "DF297", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF298 = new RtcmDataField(env->getStaticObjectField(cls, "DF298", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF299 = new RtcmDataField(env->getStaticObjectField(cls, "DF299", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF300 = new RtcmDataField(env->getStaticObjectField(cls, "DF300", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF301 = new RtcmDataField(env->getStaticObjectField(cls, "DF301", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF302 = new RtcmDataField(env->getStaticObjectField(cls, "DF302", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF303 = new RtcmDataField(env->getStaticObjectField(cls, "DF303", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF304 = new RtcmDataField(env->getStaticObjectField(cls, "DF304", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF305 = new RtcmDataField(env->getStaticObjectField(cls, "DF305", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF306 = new RtcmDataField(env->getStaticObjectField(cls, "DF306", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF307 = new RtcmDataField(env->getStaticObjectField(cls, "DF307", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF308 = new RtcmDataField(env->getStaticObjectField(cls, "DF308", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF309 = new RtcmDataField(env->getStaticObjectField(cls, "DF309", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF310 = new RtcmDataField(env->getStaticObjectField(cls, "DF310", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF311 = new RtcmDataField(env->getStaticObjectField(cls, "DF311", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF312 = new RtcmDataField(env->getStaticObjectField(cls, "DF312", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF313 = new RtcmDataField(env->getStaticObjectField(cls, "DF313", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF314 = new RtcmDataField(env->getStaticObjectField(cls, "DF314", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF315 = new RtcmDataField(env->getStaticObjectField(cls, "DF315", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF316 = new RtcmDataField(env->getStaticObjectField(cls, "DF316", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF317 = new RtcmDataField(env->getStaticObjectField(cls, "DF317", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF365 = new RtcmDataField(env->getStaticObjectField(cls, "DF365", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF366 = new RtcmDataField(env->getStaticObjectField(cls, "DF366", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF367 = new RtcmDataField(env->getStaticObjectField(cls, "DF367", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF368 = new RtcmDataField(env->getStaticObjectField(cls, "DF368", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF369 = new RtcmDataField(env->getStaticObjectField(cls, "DF369", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF370 = new RtcmDataField(env->getStaticObjectField(cls, "DF370", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF375 = new RtcmDataField(env->getStaticObjectField(cls, "DF375", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF376 = new RtcmDataField(env->getStaticObjectField(cls, "DF376", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF377 = new RtcmDataField(env->getStaticObjectField(cls, "DF377", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF378 = new RtcmDataField(env->getStaticObjectField(cls, "DF378", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF384 = new RtcmDataField(env->getStaticObjectField(cls, "DF384", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF385 = new RtcmDataField(env->getStaticObjectField(cls, "DF385", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF386 = new RtcmDataField(env->getStaticObjectField(cls, "DF386", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF387 = new RtcmDataField(env->getStaticObjectField(cls, "DF387", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF388 = new RtcmDataField(env->getStaticObjectField(cls, "DF388", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF391 = new RtcmDataField(env->getStaticObjectField(cls, "DF391", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF392 = new RtcmDataField(env->getStaticObjectField(cls, "DF392", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF413 = new RtcmDataField(env->getStaticObjectField(cls, "DF413", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF414 = new RtcmDataField(env->getStaticObjectField(cls, "DF414", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF415 = new RtcmDataField(env->getStaticObjectField(cls, "DF415", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF429 = new RtcmDataField(env->getStaticObjectField(cls, "DF429", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF430 = new RtcmDataField(env->getStaticObjectField(cls, "DF430", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF431 = new RtcmDataField(env->getStaticObjectField(cls, "DF431", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF432 = new RtcmDataField(env->getStaticObjectField(cls, "DF432", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF433 = new RtcmDataField(env->getStaticObjectField(cls, "DF433", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF434 = new RtcmDataField(env->getStaticObjectField(cls, "DF434", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF435 = new RtcmDataField(env->getStaticObjectField(cls, "DF435", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF436 = new RtcmDataField(env->getStaticObjectField(cls, "DF436", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF437 = new RtcmDataField(env->getStaticObjectField(cls, "DF437", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF438 = new RtcmDataField(env->getStaticObjectField(cls, "DF438", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF439 = new RtcmDataField(env->getStaticObjectField(cls, "DF439", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF440 = new RtcmDataField(env->getStaticObjectField(cls, "DF440", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF441 = new RtcmDataField(env->getStaticObjectField(cls, "DF441", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF442 = new RtcmDataField(env->getStaticObjectField(cls, "DF442", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF443 = new RtcmDataField(env->getStaticObjectField(cls, "DF443", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF444 = new RtcmDataField(env->getStaticObjectField(cls, "DF444", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF445 = new RtcmDataField(env->getStaticObjectField(cls, "DF445", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF446 = new RtcmDataField(env->getStaticObjectField(cls, "DF446", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF447 = new RtcmDataField(env->getStaticObjectField(cls, "DF447", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF448 = new RtcmDataField(env->getStaticObjectField(cls, "DF448", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF449 = new RtcmDataField(env->getStaticObjectField(cls, "DF449", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF450 = new RtcmDataField(env->getStaticObjectField(cls, "DF450", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF451 = new RtcmDataField(env->getStaticObjectField(cls, "DF451", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF452 = new RtcmDataField(env->getStaticObjectField(cls, "DF452", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF453 = new RtcmDataField(env->getStaticObjectField(cls, "DF453", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF454 = new RtcmDataField(env->getStaticObjectField(cls, "DF454", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF455 = new RtcmDataField(env->getStaticObjectField(cls, "DF455", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF456 = new RtcmDataField(env->getStaticObjectField(cls, "DF456", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF457 = new RtcmDataField(env->getStaticObjectField(cls, "DF457", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF458 = new RtcmDataField(env->getStaticObjectField(cls, "DF458", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF488 = new RtcmDataField(env->getStaticObjectField(cls, "DF488", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF489 = new RtcmDataField(env->getStaticObjectField(cls, "DF489", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF490 = new RtcmDataField(env->getStaticObjectField(cls, "DF490", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF491 = new RtcmDataField(env->getStaticObjectField(cls, "DF491", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF492 = new RtcmDataField(env->getStaticObjectField(cls, "DF492", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF493 = new RtcmDataField(env->getStaticObjectField(cls, "DF493", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF494 = new RtcmDataField(env->getStaticObjectField(cls, "DF494", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF495 = new RtcmDataField(env->getStaticObjectField(cls, "DF495", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF496 = new RtcmDataField(env->getStaticObjectField(cls, "DF496", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF497 = new RtcmDataField(env->getStaticObjectField(cls, "DF497", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF498 = new RtcmDataField(env->getStaticObjectField(cls, "DF498", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF499 = new RtcmDataField(env->getStaticObjectField(cls, "DF499", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF500 = new RtcmDataField(env->getStaticObjectField(cls, "DF500", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF501 = new RtcmDataField(env->getStaticObjectField(cls, "DF501", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF502 = new RtcmDataField(env->getStaticObjectField(cls, "DF502", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF503 = new RtcmDataField(env->getStaticObjectField(cls, "DF503", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF504 = new RtcmDataField(env->getStaticObjectField(cls, "DF504", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF505 = new RtcmDataField(env->getStaticObjectField(cls, "DF505", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF506 = new RtcmDataField(env->getStaticObjectField(cls, "DF506", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF507 = new RtcmDataField(env->getStaticObjectField(cls, "DF507", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF508 = new RtcmDataField(env->getStaticObjectField(cls, "DF508", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF509 = new RtcmDataField(env->getStaticObjectField(cls, "DF509", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF510 = new RtcmDataField(env->getStaticObjectField(cls, "DF510", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF511 = new RtcmDataField(env->getStaticObjectField(cls, "DF511", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF512 = new RtcmDataField(env->getStaticObjectField(cls, "DF512", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF513 = new RtcmDataField(env->getStaticObjectField(cls, "DF513", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF514 = new RtcmDataField(env->getStaticObjectField(cls, "DF514", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF515 = new RtcmDataField(env->getStaticObjectField(cls, "DF515", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmDataField RtcmDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f47a0aee8b0994e9], a0.this$));
          }

          JArray< RtcmDataField > RtcmDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_07cfe4883c1fd236]));
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
        namespace parser {
          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args);
          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmDataField_values(PyTypeObject *type);
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data);
          static PyGetSetDef t_RtcmDataField__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmDataField__methods_[] = {
            DECLARE_METHOD(t_RtcmDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmDataField)[] = {
            { Py_tp_methods, t_RtcmDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmDataField, t_RtcmDataField, RtcmDataField);
          PyObject *t_RtcmDataField::wrap_Object(const RtcmDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmDataField), &PY_TYPE_DEF(RtcmDataField), module, "RtcmDataField", 0);
          }

          void t_RtcmDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "class_", make_descriptor(RtcmDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "wrapfn_", make_descriptor(t_RtcmDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF002", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF009", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF038", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF040", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF068", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF068)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF071", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF071)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF076", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF076)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF077", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF077)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF078", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF078)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF079", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF079)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF081", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF081)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF082", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF082)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF083", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF083)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF084", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF084)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF085", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF085)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF086", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF086)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF087", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF087)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF088", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF088)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF089", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF089)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF090", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF090)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF091", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF091)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF092", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF092)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF093", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF093)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF094", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF094)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF095", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF095)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF096", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF096)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF097", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF097)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF098", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF098)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF099", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF099)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF100", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF100)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF101", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF101)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF102", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF102)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF103", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF103)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF104", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF104)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF105", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF105)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF106", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF106)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF107", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF107)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF108", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF108)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF109", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF109)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF110", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF110)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF111", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF111)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF112", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF112)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF113", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF113)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF114", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF114)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF115", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF115)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF116", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF116)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF117", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF117)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF118", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF118)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF119", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF119)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF120", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF120)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF121", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF121)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF122", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF122)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF123", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF123)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF124", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF124)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF125", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF125)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF126", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF126)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF127", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF127)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF128", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF128)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF129", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF129)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF130", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF130)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF131", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF131)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF132", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF132)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF133", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF133)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF134", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF134)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF135", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF135)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF136", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF136)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF137", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF137)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF252", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF252)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF289", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF289)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF290", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF290)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF291", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF291)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF292", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF292)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF293", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF293)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF294", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF294)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF295", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF295)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF296", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF296)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF297", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF297)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF298", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF298)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF299", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF299)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF300", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF300)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF301", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF301)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF302", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF302)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF303", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF303)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF304", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF304)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF305", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF305)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF306", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF306)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF307", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF307)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF308", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF308)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF309", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF309)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF310", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF310)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF311", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF311)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF312", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF312)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF313", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF313)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF314", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF314)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF315", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF315)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF316", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF316)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF317", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF317)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF365", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF365)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF366", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF366)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF367", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF367)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF368", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF368)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF369", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF369)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF370", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF370)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF375", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF375)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF376", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF376)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF377", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF377)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF378", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF378)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF384", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF384)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF385", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF385)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF386", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF386)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF387", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF387)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF388", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF388)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF391", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF391)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF392", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF392)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF413", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF413)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF414", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF414)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF415", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF415)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF429", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF429)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF430", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF430)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF431", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF431)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF432", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF432)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF433", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF433)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF434", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF434)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF435", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF435)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF436", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF436)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF437", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF437)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF438", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF438)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF439", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF439)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF440", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF440)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF441", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF441)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF442", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF442)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF443", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF443)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF444", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF444)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF445", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF445)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF446", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF446)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF447", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF447)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF448", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF448)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF449", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF449)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF450", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF450)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF451", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF451)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF452", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF452)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF453", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF453)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF454", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF454)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF455", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF455)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF456", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF456)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF457", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF457)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF458", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF458)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF488", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF488)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF489", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF489)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF490", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF490)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF491", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF491)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF492", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF492)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF493", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF493)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF494", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF494)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF495", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF495)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF496", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF496)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF497", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF497)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF498", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF498)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF499", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF499)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF500", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF500)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF501", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF501)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF502", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF502)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF503", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF503)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF504", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF504)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF505", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF505)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF506", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF506)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF507", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF507)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF508", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF508)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF509", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF509)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF510", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF510)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF511", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF511)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF512", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF512)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF513", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF513)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF514", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF514)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF515", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF515)));
          }

          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmDataField::initializeClass, 1)))
              return NULL;
            return t_RtcmDataField::wrap_Object(RtcmDataField(((t_RtcmDataField *) arg)->object.this$));
          }
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::valueOf(a0));
              return t_RtcmDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmDataField_values(PyTypeObject *type)
          {
            JArray< RtcmDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmDataField::wrap_jobject);
          }
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data)
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
#include "org/orekit/frames/EOPFittedModel.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFittedModel::class$ = NULL;
      jmethodID *EOPFittedModel::mids$ = NULL;
      bool EOPFittedModel::live$ = false;

      jclass EOPFittedModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFittedModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5ee6fde45bfd4ac4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;)V");
          mids$[mid_getDUT1_f6883e86d6d06fa8] = env->getMethodID(cls, "getDUT1", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDx_f6883e86d6d06fa8] = env->getMethodID(cls, "getDx", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDy_f6883e86d6d06fa8] = env->getMethodID(cls, "getDy", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getXp_f6883e86d6d06fa8] = env->getMethodID(cls, "getXp", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getYp_f6883e86d6d06fa8] = env->getMethodID(cls, "getYp", "()Lorg/orekit/utils/SecularAndHarmonic;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFittedModel::EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic & a0, const ::org::orekit::utils::SecularAndHarmonic & a1, const ::org::orekit::utils::SecularAndHarmonic & a2, const ::org::orekit::utils::SecularAndHarmonic & a3, const ::org::orekit::utils::SecularAndHarmonic & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ee6fde45bfd4ac4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDUT1() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDUT1_f6883e86d6d06fa8]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDx() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDx_f6883e86d6d06fa8]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDy() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDy_f6883e86d6d06fa8]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getXp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getXp_f6883e86d6d06fa8]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getYp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getYp_f6883e86d6d06fa8]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data);
      static PyGetSetDef t_EOPFittedModel__fields_[] = {
        DECLARE_GET_FIELD(t_EOPFittedModel, dUT1),
        DECLARE_GET_FIELD(t_EOPFittedModel, dx),
        DECLARE_GET_FIELD(t_EOPFittedModel, dy),
        DECLARE_GET_FIELD(t_EOPFittedModel, xp),
        DECLARE_GET_FIELD(t_EOPFittedModel, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPFittedModel__methods_[] = {
        DECLARE_METHOD(t_EOPFittedModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, getDUT1, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getXp, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFittedModel)[] = {
        { Py_tp_methods, t_EOPFittedModel__methods_ },
        { Py_tp_init, (void *) t_EOPFittedModel_init_ },
        { Py_tp_getset, t_EOPFittedModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFittedModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFittedModel, t_EOPFittedModel, EOPFittedModel);

      void t_EOPFittedModel::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFittedModel), &PY_TYPE_DEF(EOPFittedModel), module, "EOPFittedModel", 0);
      }

      void t_EOPFittedModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "class_", make_descriptor(EOPFittedModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "wrapfn_", make_descriptor(t_EOPFittedModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFittedModel::initializeClass, 1)))
          return NULL;
        return t_EOPFittedModel::wrap_Object(EOPFittedModel(((t_EOPFittedModel *) arg)->object.this$));
      }
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFittedModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::SecularAndHarmonic a0((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a1((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a2((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a3((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a4((jobject) NULL);
        EOPFittedModel object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFittedModel(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *ConfidenceInterval::class$ = NULL;
        jmethodID *ConfidenceInterval::mids$ = NULL;
        bool ConfidenceInterval::live$ = false;

        jclass ConfidenceInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/ConfidenceInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getConfidenceLevel_456d9a2f64d6b28d] = env->getMethodID(cls, "getConfidenceLevel", "()D");
            mids$[mid_getLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getLowerBound", "()D");
            mids$[mid_getUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getUpperBound", "()D");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfidenceInterval::ConfidenceInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble ConfidenceInterval::getConfidenceLevel() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConfidenceLevel_456d9a2f64d6b28d]);
        }

        jdouble ConfidenceInterval::getLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerBound_456d9a2f64d6b28d]);
        }

        jdouble ConfidenceInterval::getUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperBound_456d9a2f64d6b28d]);
        }

        ::java::lang::String ConfidenceInterval::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
    namespace stat {
      namespace interval {
        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args);
        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data);
        static PyGetSetDef t_ConfidenceInterval__fields_[] = {
          DECLARE_GET_FIELD(t_ConfidenceInterval, confidenceLevel),
          DECLARE_GET_FIELD(t_ConfidenceInterval, lowerBound),
          DECLARE_GET_FIELD(t_ConfidenceInterval, upperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfidenceInterval__methods_[] = {
          DECLARE_METHOD(t_ConfidenceInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, getConfidenceLevel, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getLowerBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getUpperBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfidenceInterval)[] = {
          { Py_tp_methods, t_ConfidenceInterval__methods_ },
          { Py_tp_init, (void *) t_ConfidenceInterval_init_ },
          { Py_tp_getset, t_ConfidenceInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfidenceInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConfidenceInterval, t_ConfidenceInterval, ConfidenceInterval);

        void t_ConfidenceInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfidenceInterval), &PY_TYPE_DEF(ConfidenceInterval), module, "ConfidenceInterval", 0);
        }

        void t_ConfidenceInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "class_", make_descriptor(ConfidenceInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "wrapfn_", make_descriptor(t_ConfidenceInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfidenceInterval::initializeClass, 1)))
            return NULL;
          return t_ConfidenceInterval::wrap_Object(ConfidenceInterval(((t_ConfidenceInterval *) arg)->object.this$));
        }
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfidenceInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ConfidenceInterval object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = ConfidenceInterval(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ConfidenceInterval), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencySmoother::class$ = NULL;
          jmethodID *DualFrequencySmoother::mids$ = NULL;
          bool DualFrequencySmoother::live$ = false;

          jclass DualFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_18b1ce6f78e2ded3] = env->getMethodID(cls, "<init>", "(DI)V");
              mids$[mid_copyObservationData_325a244031154856] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_811682d61b4254a6] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter;");
              mids$[mid_filterDataSet_b64808e57d8cd029] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_33636af8c0b8305c] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_33636af8c0b8305c] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencySmoother::DualFrequencySmoother(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_18b1ce6f78e2ded3, a0, a1)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_325a244031154856], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter DualFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, const ::org::orekit::gnss::SatelliteSystem & a3) const
          {
            return ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_811682d61b4254a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          void DualFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3, const ::org::orekit::gnss::ObservationType & a4) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_b64808e57d8cd029], a0.this$, a1.this$, a2, a3.this$, a4.this$);
          }

          ::java::util::HashMap DualFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_33636af8c0b8305c]));
          }

          ::java::util::HashMap DualFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_33636af8c0b8305c]));
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
          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data);
          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data);
          static PyGetSetDef t_DualFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_DualFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_DualFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_DualFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencySmoother)[] = {
            { Py_tp_methods, t_DualFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_DualFrequencySmoother_init_ },
            { Py_tp_getset, t_DualFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DualFrequencySmoother, t_DualFrequencySmoother, DualFrequencySmoother);

          void t_DualFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencySmoother), &PY_TYPE_DEF(DualFrequencySmoother), module, "DualFrequencySmoother", 0);
          }

          void t_DualFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "class_", make_descriptor(DualFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "wrapfn_", make_descriptor(t_DualFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_DualFrequencySmoother::wrap_Object(DualFrequencySmoother(((t_DualFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jint a1;
            DualFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = DualFrequencySmoother(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::filtering::t_DualFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::gnss::ObservationType a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "KKIKK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_, &a4, &p4, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(DualFrequencyHatchFilter));
          }

          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockPhaseModifier::mids$ = NULL;
          bool RelativisticClockPhaseModifier::live$ = false;

          jclass RelativisticClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockPhaseModifier::RelativisticClockPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::java::util::List RelativisticClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self);
          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockPhaseModifier, t_RelativisticClockPhaseModifier, RelativisticClockPhaseModifier);

          void t_RelativisticClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockPhaseModifier), &PY_TYPE_DEF(RelativisticClockPhaseModifier), module, "RelativisticClockPhaseModifier", 0);
          }

          void t_RelativisticClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "class_", make_descriptor(RelativisticClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockPhaseModifier::wrap_Object(RelativisticClockPhaseModifier(((t_RelativisticClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/LineSearch.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
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
              mids$[mid_init$_f6cb361db3026531] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/scalar/MultivariateOptimizer;DDD)V");
              mids$[mid_search_406006cd5debc153] = env->getMethodID(cls, "search", "([D[D)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LineSearch::LineSearch(const ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6cb361db3026531, a0.this$, a1, a2, a3)) {}

          ::org::hipparchus::optim::univariate::UnivariatePointValuePair LineSearch::search(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_search_406006cd5debc153], a0.this$, a1.this$));
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
#include "org/hipparchus/analysis/function/Divide.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Divide::class$ = NULL;
        jmethodID *Divide::mids$ = NULL;
        bool Divide::live$ = false;

        jclass Divide::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Divide");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_824133ce4aec3505] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Divide::Divide() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Divide::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_824133ce4aec3505], a0, a1);
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
      namespace function {
        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Divide_value(t_Divide *self, PyObject *args);

        static PyMethodDef t_Divide__methods_[] = {
          DECLARE_METHOD(t_Divide, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Divide, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Divide)[] = {
          { Py_tp_methods, t_Divide__methods_ },
          { Py_tp_init, (void *) t_Divide_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Divide)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Divide, t_Divide, Divide);

        void t_Divide::install(PyObject *module)
        {
          installType(&PY_TYPE(Divide), &PY_TYPE_DEF(Divide), module, "Divide", 0);
        }

        void t_Divide::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "class_", make_descriptor(Divide::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "wrapfn_", make_descriptor(t_Divide::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Divide), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Divide_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Divide::initializeClass, 1)))
            return NULL;
          return t_Divide::wrap_Object(Divide(((t_Divide *) arg)->object.this$));
        }
        static PyObject *t_Divide_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Divide::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Divide_init_(t_Divide *self, PyObject *args, PyObject *kwds)
        {
          Divide object((jobject) NULL);

          INT_CALL(object = Divide());
          self->object = object;

          return 0;
        }

        static PyObject *t_Divide_value(t_Divide *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D$NoSubSpaceException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Sphere1D::class$ = NULL;
          jmethodID *Sphere1D::mids$ = NULL;
          bool Sphere1D::live$ = false;
          jdouble Sphere1D::SMALLEST_TOLERANCE = (jdouble) 0;

          jclass Sphere1D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Sphere1D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_checkTolerance_77e0f9a1f260e2e5] = env->getStaticMethodID(cls, "checkTolerance", "(D)V");
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getInstance_5912521fb294e3a6] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/geometry/spherical/oned/Sphere1D;");
              mids$[mid_getSubSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSubSpace", "()Lorg/hipparchus/geometry/Space;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              SMALLEST_TOLERANCE = env->getStaticDoubleField(cls, "SMALLEST_TOLERANCE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Sphere1D::checkTolerance(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            env->callStaticVoidMethod(cls, mids$[mid_checkTolerance_77e0f9a1f260e2e5], a0);
          }

          jint Sphere1D::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          Sphere1D Sphere1D::getInstance()
          {
            jclass cls = env->getClass(initializeClass);
            return Sphere1D(env->callStaticObjectMethod(cls, mids$[mid_getInstance_5912521fb294e3a6]));
          }

          ::org::hipparchus::geometry::Space Sphere1D::getSubSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSubSpace_0438ef5f9a5edb53]));
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
        namespace oned {
          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self);
          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type);
          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self);
          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data);
          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data);
          static PyGetSetDef t_Sphere1D__fields_[] = {
            DECLARE_GET_FIELD(t_Sphere1D, dimension),
            DECLARE_GET_FIELD(t_Sphere1D, instance),
            DECLARE_GET_FIELD(t_Sphere1D, subSpace),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Sphere1D__methods_[] = {
            DECLARE_METHOD(t_Sphere1D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, checkTolerance, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_Sphere1D, getInstance, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_Sphere1D, getSubSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Sphere1D)[] = {
            { Py_tp_methods, t_Sphere1D__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Sphere1D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Sphere1D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Sphere1D, t_Sphere1D, Sphere1D);

          void t_Sphere1D::install(PyObject *module)
          {
            installType(&PY_TYPE(Sphere1D), &PY_TYPE_DEF(Sphere1D), module, "Sphere1D", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "NoSubSpaceException", make_descriptor(&PY_TYPE_DEF(Sphere1D$NoSubSpaceException)));
          }

          void t_Sphere1D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "class_", make_descriptor(Sphere1D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "wrapfn_", make_descriptor(t_Sphere1D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Sphere1D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Sphere1D), "SMALLEST_TOLERANCE", make_descriptor(Sphere1D::SMALLEST_TOLERANCE));
          }

          static PyObject *t_Sphere1D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Sphere1D::initializeClass, 1)))
              return NULL;
            return t_Sphere1D::wrap_Object(Sphere1D(((t_Sphere1D *) arg)->object.this$));
          }
          static PyObject *t_Sphere1D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Sphere1D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Sphere1D_checkTolerance(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::geometry::spherical::oned::Sphere1D::checkTolerance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError(type, "checkTolerance", arg);
            return NULL;
          }

          static PyObject *t_Sphere1D_getDimension(t_Sphere1D *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_Sphere1D_getInstance(PyTypeObject *type)
          {
            Sphere1D result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::geometry::spherical::oned::Sphere1D::getInstance());
            return t_Sphere1D::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_getSubSpace(t_Sphere1D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Sphere1D_get__dimension(t_Sphere1D *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_Sphere1D_get__instance(t_Sphere1D *self, void *data)
          {
            Sphere1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getInstance());
            return t_Sphere1D::wrap_Object(value);
          }

          static PyObject *t_Sphere1D_get__subSpace(t_Sphere1D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSubSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemMetadata::class$ = NULL;
              jmethodID *OemMetadata::mids$ = NULL;
              bool OemMetadata::live$ = false;

              jclass OemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getInterpolationDegree_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_2bc2530179f8bab2] = env->getMethodID(cls, "getInterpolationMethod", "()Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;");
                  mids$[mid_getStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_aaa854c403487cf3] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_setInterpolationDegree_0a2a1ac2721c0336] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_db94d5019ae505d8] = env->getMethodID(cls, "setInterpolationMethod", "(Lorg/orekit/files/ccsds/ndm/odm/oem/InterpolationMethod;)V");
                  mids$[mid_setStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_e82d68cd9f886886] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemMetadata::OemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

              jint OemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_f2f64475e4580546]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod OemMetadata::getInterpolationMethod() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_2bc2530179f8bab2]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate OemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_aaa854c403487cf3]));
              }

              void OemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_0a2a1ac2721c0336], a0);
              }

              void OemMetadata::setInterpolationMethod(const ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_db94d5019ae505d8], a0.this$);
              }

              void OemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_e82d68cd9f886886], a0.this$);
              }

              void OemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_e82d68cd9f886886], a0.this$);
              }

              void OemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_e82d68cd9f886886], a0.this$);
              }

              void OemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_e82d68cd9f886886], a0.this$);
              }

              void OemMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
            namespace oem {
              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self);
              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg);
              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args);
              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data);
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OemMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_OemMetadata, interpolationMethod),
                DECLARE_GETSET_FIELD(t_OemMetadata, startTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_OemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemMetadata__methods_[] = {
                DECLARE_METHOD(t_OemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_OemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_OemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_OemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemMetadata)[] = {
                { Py_tp_methods, t_OemMetadata__methods_ },
                { Py_tp_init, (void *) t_OemMetadata_init_ },
                { Py_tp_getset, t_OemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OemMetadata, t_OemMetadata, OemMetadata);

              void t_OemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OemMetadata), &PY_TYPE_DEF(OemMetadata), module, "OemMetadata", 0);
              }

              void t_OemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "class_", make_descriptor(OemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "wrapfn_", make_descriptor(t_OemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemMetadata::initializeClass, 1)))
                  return NULL;
                return t_OemMetadata::wrap_Object(OemMetadata(((t_OemMetadata *) arg)->object.this$));
              }
              static PyObject *t_OemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OemMetadata_init_(t_OemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                OemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = OemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OemMetadata_getInterpolationDegree(t_OemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OemMetadata_getInterpolationMethod(t_OemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStartTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_getUseableStopTime(t_OemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OemMetadata_setInterpolationDegree(t_OemMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setInterpolationDegree(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationDegree", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setInterpolationMethod(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::parameters_))
                {
                  OBJ_CALL(self->object.setInterpolationMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInterpolationMethod", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStartTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_setUseableStopTime(t_OemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_OemMetadata_validate(t_OemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OemMetadata_get__interpolationDegree(t_OemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_OemMetadata_set__interpolationDegree(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setInterpolationDegree(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationDegree", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__interpolationMethod(t_OemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return ::org::orekit::files::ccsds::ndm::odm::oem::t_InterpolationMethod::wrap_Object(value);
              }
              static int t_OemMetadata_set__interpolationMethod(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::oem::InterpolationMethod::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInterpolationMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "interpolationMethod", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__startTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__startTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "startTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__stopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__stopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "stopTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStartTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStartTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_OemMetadata_get__useableStopTime(t_OemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OemMetadata_set__useableStopTime(t_OemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
