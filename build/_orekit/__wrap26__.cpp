#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoubleArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$DoubleArrayConsumer::mids$ = NULL;
            bool ParseToken$DoubleArrayConsumer::live$ = false;

            jclass ParseToken$DoubleArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoubleArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_fa9d415d19f69361] = env->getMethodID(cls, "accept", "([D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoubleArrayConsumer::accept(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_fa9d415d19f69361], a0.this$);
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
          namespace lexical {
            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DoubleArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoubleArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoubleArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoubleArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoubleArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoubleArrayConsumer, t_ParseToken$DoubleArrayConsumer, ParseToken$DoubleArrayConsumer);

            void t_ParseToken$DoubleArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoubleArrayConsumer), &PY_TYPE_DEF(ParseToken$DoubleArrayConsumer), module, "ParseToken$DoubleArrayConsumer", 0);
            }

            void t_ParseToken$DoubleArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "class_", make_descriptor(ParseToken$DoubleArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoubleArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoubleArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoubleArrayConsumer::wrap_Object(ParseToken$DoubleArrayConsumer(((t_ParseToken$DoubleArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoubleArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoubleArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoubleArrayConsumer_accept(t_ParseToken$DoubleArrayConsumer *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader::class$ = NULL;
        jmethodID *CRDHeader::mids$ = NULL;
        bool CRDHeader::live$ = false;

        jclass CRDHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDataReleaseFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getDataReleaseFlag", "()I");
            mids$[mid_getDataType_570ce0828f81a2c1] = env->getMethodID(cls, "getDataType", "()I");
            mids$[mid_getDateAndTime_11b109bd155ca898] = env->getMethodID(cls, "getDateAndTime", "()Ljava/lang/String;");
            mids$[mid_getEpochIdentifier_570ce0828f81a2c1] = env->getMethodID(cls, "getEpochIdentifier", "()I");
            mids$[mid_getH1CrdString_11b109bd155ca898] = env->getMethodID(cls, "getH1CrdString", "()Ljava/lang/String;");
            mids$[mid_getH2CrdString_11b109bd155ca898] = env->getMethodID(cls, "getH2CrdString", "()Ljava/lang/String;");
            mids$[mid_getH3CrdString_11b109bd155ca898] = env->getMethodID(cls, "getH3CrdString", "()Ljava/lang/String;");
            mids$[mid_getH4CrdString_11b109bd155ca898] = env->getMethodID(cls, "getH4CrdString", "()Ljava/lang/String;");
            mids$[mid_getH5CrdString_11b109bd155ca898] = env->getMethodID(cls, "getH5CrdString", "()Ljava/lang/String;");
            mids$[mid_getPredictionProvider_11b109bd155ca898] = env->getMethodID(cls, "getPredictionProvider", "()Ljava/lang/String;");
            mids$[mid_getPredictionType_570ce0828f81a2c1] = env->getMethodID(cls, "getPredictionType", "()I");
            mids$[mid_getQualityIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getQualityIndicator", "()I");
            mids$[mid_getRangeType_a6440c37074837d9] = env->getMethodID(cls, "getRangeType", "()Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_getSpacecraftEpochTimeScale_570ce0828f81a2c1] = env->getMethodID(cls, "getSpacecraftEpochTimeScale", "()I");
            mids$[mid_getStationName_11b109bd155ca898] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
            mids$[mid_getStationNetword_11b109bd155ca898] = env->getMethodID(cls, "getStationNetword", "()Ljava/lang/String;");
            mids$[mid_getSystemIdentifier_570ce0828f81a2c1] = env->getMethodID(cls, "getSystemIdentifier", "()I");
            mids$[mid_getSystemNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSystemNumber", "()I");
            mids$[mid_getSystemOccupancy_570ce0828f81a2c1] = env->getMethodID(cls, "getSystemOccupancy", "()I");
            mids$[mid_getYearOfCentury_570ce0828f81a2c1] = env->getMethodID(cls, "getYearOfCentury", "()I");
            mids$[mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isReceiveAmplitudeCorrectionApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isReceiveAmplitudeCorrectionApplied", "()Z");
            mids$[mid_isStationSystemDelayApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isStationSystemDelayApplied", "()Z");
            mids$[mid_isTransponderDelayApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isTransponderDelayApplied", "()Z");
            mids$[mid_isTroposphericRefractionApplied_b108b35ef48e27bd] = env->getMethodID(cls, "isTroposphericRefractionApplied", "()Z");
            mids$[mid_setDataReleaseFlag_99803b0791f320ff] = env->getMethodID(cls, "setDataReleaseFlag", "(I)V");
            mids$[mid_setDataType_99803b0791f320ff] = env->getMethodID(cls, "setDataType", "(I)V");
            mids$[mid_setDateAndTime_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDateAndTime", "(Ljava/lang/String;)V");
            mids$[mid_setEpochIdentifier_99803b0791f320ff] = env->getMethodID(cls, "setEpochIdentifier", "(I)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsReceiveAmplitudeCorrectionApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsReceiveAmplitudeCorrectionApplied", "(Z)V");
            mids$[mid_setIsStationSystemDelayApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsStationSystemDelayApplied", "(Z)V");
            mids$[mid_setIsTransponderDelayApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsTransponderDelayApplied", "(Z)V");
            mids$[mid_setIsTroposphericRefractionApplied_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsTroposphericRefractionApplied", "(Z)V");
            mids$[mid_setPredictionProvider_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPredictionProvider", "(Ljava/lang/String;)V");
            mids$[mid_setPredictionType_99803b0791f320ff] = env->getMethodID(cls, "setPredictionType", "(I)V");
            mids$[mid_setQualityIndicator_99803b0791f320ff] = env->getMethodID(cls, "setQualityIndicator", "(I)V");
            mids$[mid_setRangeType_99803b0791f320ff] = env->getMethodID(cls, "setRangeType", "(I)V");
            mids$[mid_setSpacecraftEpochTimeScale_99803b0791f320ff] = env->getMethodID(cls, "setSpacecraftEpochTimeScale", "(I)V");
            mids$[mid_setStationName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
            mids$[mid_setStationNetword_d0bc48d5b00dc40c] = env->getMethodID(cls, "setStationNetword", "(Ljava/lang/String;)V");
            mids$[mid_setSystemIdentifier_99803b0791f320ff] = env->getMethodID(cls, "setSystemIdentifier", "(I)V");
            mids$[mid_setSystemNumber_99803b0791f320ff] = env->getMethodID(cls, "setSystemNumber", "(I)V");
            mids$[mid_setSystemOccupancy_99803b0791f320ff] = env->getMethodID(cls, "setSystemOccupancy", "(I)V");
            mids$[mid_setYearOfCentury_99803b0791f320ff] = env->getMethodID(cls, "setYearOfCentury", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader::CRDHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jint CRDHeader::getDataReleaseFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataReleaseFlag_570ce0828f81a2c1]);
        }

        jint CRDHeader::getDataType() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataType_570ce0828f81a2c1]);
        }

        ::java::lang::String CRDHeader::getDateAndTime() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDateAndTime_11b109bd155ca898]));
        }

        jint CRDHeader::getEpochIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochIdentifier_570ce0828f81a2c1]);
        }

        ::java::lang::String CRDHeader::getH1CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH1CrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getH2CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH2CrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getH3CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH3CrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getH4CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH4CrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getH5CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH5CrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getPredictionProvider() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPredictionProvider_11b109bd155ca898]));
        }

        jint CRDHeader::getPredictionType() const
        {
          return env->callIntMethod(this$, mids$[mid_getPredictionType_570ce0828f81a2c1]);
        }

        jint CRDHeader::getQualityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getQualityIndicator_570ce0828f81a2c1]);
        }

        ::org::orekit::files::ilrs::CRDHeader$RangeType CRDHeader::getRangeType() const
        {
          return ::org::orekit::files::ilrs::CRDHeader$RangeType(env->callObjectMethod(this$, mids$[mid_getRangeType_a6440c37074837d9]));
        }

        jint CRDHeader::getSpacecraftEpochTimeScale() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftEpochTimeScale_570ce0828f81a2c1]);
        }

        ::java::lang::String CRDHeader::getStationName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_11b109bd155ca898]));
        }

        ::java::lang::String CRDHeader::getStationNetword() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationNetword_11b109bd155ca898]));
        }

        jint CRDHeader::getSystemIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemIdentifier_570ce0828f81a2c1]);
        }

        jint CRDHeader::getSystemNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemNumber_570ce0828f81a2c1]);
        }

        jint CRDHeader::getSystemOccupancy() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemOccupancy_570ce0828f81a2c1]);
        }

        jint CRDHeader::getYearOfCentury() const
        {
          return env->callIntMethod(this$, mids$[mid_getYearOfCentury_570ce0828f81a2c1]);
        }

        jboolean CRDHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_b108b35ef48e27bd]);
        }

        jboolean CRDHeader::isReceiveAmplitudeCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isReceiveAmplitudeCorrectionApplied_b108b35ef48e27bd]);
        }

        jboolean CRDHeader::isStationSystemDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isStationSystemDelayApplied_b108b35ef48e27bd]);
        }

        jboolean CRDHeader::isTransponderDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTransponderDelayApplied_b108b35ef48e27bd]);
        }

        jboolean CRDHeader::isTroposphericRefractionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTroposphericRefractionApplied_b108b35ef48e27bd]);
        }

        void CRDHeader::setDataReleaseFlag(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataReleaseFlag_99803b0791f320ff], a0);
        }

        void CRDHeader::setDataType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataType_99803b0791f320ff], a0);
        }

        void CRDHeader::setDateAndTime(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDateAndTime_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDHeader::setEpochIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochIdentifier_99803b0791f320ff], a0);
        }

        void CRDHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_bd04c9335fb9e4cf], a0);
        }

        void CRDHeader::setIsReceiveAmplitudeCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsReceiveAmplitudeCorrectionApplied_bd04c9335fb9e4cf], a0);
        }

        void CRDHeader::setIsStationSystemDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsStationSystemDelayApplied_bd04c9335fb9e4cf], a0);
        }

        void CRDHeader::setIsTransponderDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTransponderDelayApplied_bd04c9335fb9e4cf], a0);
        }

        void CRDHeader::setIsTroposphericRefractionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTroposphericRefractionApplied_bd04c9335fb9e4cf], a0);
        }

        void CRDHeader::setPredictionProvider(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionProvider_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDHeader::setPredictionType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionType_99803b0791f320ff], a0);
        }

        void CRDHeader::setQualityIndicator(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQualityIndicator_99803b0791f320ff], a0);
        }

        void CRDHeader::setRangeType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRangeType_99803b0791f320ff], a0);
        }

        void CRDHeader::setSpacecraftEpochTimeScale(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftEpochTimeScale_99803b0791f320ff], a0);
        }

        void CRDHeader::setStationName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationName_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDHeader::setStationNetword(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationNetword_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDHeader::setSystemIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemIdentifier_99803b0791f320ff], a0);
        }

        void CRDHeader::setSystemNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemNumber_99803b0791f320ff], a0);
        }

        void CRDHeader::setSystemOccupancy(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemOccupancy_99803b0791f320ff], a0);
        }

        void CRDHeader::setYearOfCentury(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setYearOfCentury_99803b0791f320ff], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataReleaseFlag),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataType),
          DECLARE_GETSET_FIELD(t_CRDHeader, dateAndTime),
          DECLARE_GETSET_FIELD(t_CRDHeader, epochIdentifier),
          DECLARE_GET_FIELD(t_CRDHeader, h1CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h2CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h3CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h4CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h5CrdString),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionProvider),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionType),
          DECLARE_GETSET_FIELD(t_CRDHeader, qualityIndicator),
          DECLARE_GETSET_FIELD(t_CRDHeader, rangeType),
          DECLARE_GET_FIELD(t_CRDHeader, receiveAmplitudeCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, spacecraftEpochTimeScale),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationName),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationNetword),
          DECLARE_GET_FIELD(t_CRDHeader, stationSystemDelayApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemIdentifier),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemNumber),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemOccupancy),
          DECLARE_GET_FIELD(t_CRDHeader, transponderDelayApplied),
          DECLARE_GET_FIELD(t_CRDHeader, troposphericRefractionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, yearOfCentury),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader__methods_[] = {
          DECLARE_METHOD(t_CRDHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, getDataReleaseFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDataType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDateAndTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getEpochIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH1CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH2CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH3CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH4CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH5CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionProvider, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getQualityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getRangeType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSpacecraftEpochTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationName, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationNetword, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemOccupancy, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getYearOfCentury, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isReceiveAmplitudeCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isStationSystemDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTransponderDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTroposphericRefractionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, setDataReleaseFlag, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDataType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDateAndTime, METH_O),
          DECLARE_METHOD(t_CRDHeader, setEpochIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsReceiveAmplitudeCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsStationSystemDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTransponderDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTroposphericRefractionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionProvider, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setQualityIndicator, METH_O),
          DECLARE_METHOD(t_CRDHeader, setRangeType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSpacecraftEpochTimeScale, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationName, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationNetword, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemNumber, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemOccupancy, METH_O),
          DECLARE_METHOD(t_CRDHeader, setYearOfCentury, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader)[] = {
          { Py_tp_methods, t_CRDHeader__methods_ },
          { Py_tp_init, (void *) t_CRDHeader_init_ },
          { Py_tp_getset, t_CRDHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CRDHeader, t_CRDHeader, CRDHeader);

        void t_CRDHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader), &PY_TYPE_DEF(CRDHeader), module, "CRDHeader", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "RangeType", make_descriptor(&PY_TYPE_DEF(CRDHeader$RangeType)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "DataType", make_descriptor(&PY_TYPE_DEF(CRDHeader$DataType)));
        }

        void t_CRDHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "class_", make_descriptor(CRDHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "wrapfn_", make_descriptor(t_CRDHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader::initializeClass, 1)))
            return NULL;
          return t_CRDHeader::wrap_Object(CRDHeader(((t_CRDHeader *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds)
        {
          CRDHeader object((jobject) NULL);

          INT_CALL(object = CRDHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDateAndTime());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH1CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH2CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH3CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH4CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH5CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictionProvider());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPredictionType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getQualityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(result);
        }

        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationName());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationNetword());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getYearOfCentury());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataReleaseFlag(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataReleaseFlag", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDateAndTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDateAndTime", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setEpochIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsReceiveAmplitudeCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsReceiveAmplitudeCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsStationSystemDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsStationSystemDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTransponderDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTransponderDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTroposphericRefractionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTroposphericRefractionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPredictionProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionProvider", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPredictionType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setQualityIndicator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQualityIndicator", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRangeType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftEpochTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftEpochTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationNetword(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationNetword", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemOccupancy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemOccupancy", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setYearOfCentury(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setYearOfCentury", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataReleaseFlag(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataReleaseFlag", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDateAndTime());
          return j2p(value);
        }
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDateAndTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dateAndTime", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setEpochIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH1CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH2CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH3CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH4CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH5CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictionProvider());
          return j2p(value);
        }
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPredictionProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionProvider", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPredictionType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPredictionType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getQualityIndicator());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setQualityIndicator(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "qualityIndicator", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(value);
        }
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRangeType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rangeType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftEpochTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftEpochTimeScale", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationName());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationName", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationNetword());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationNetword(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationNetword", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemNumber", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemOccupancy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemOccupancy", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getYearOfCentury());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setYearOfCentury(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yearOfCentury", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractFieldUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractFieldUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractFieldUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractFieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_9be354262fab8bf3] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_doIntegrate_eba8e72a22c984ac] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMin_eba8e72a22c984ac] = env->getMethodID(cls, "getMin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMax_eba8e72a22c984ac] = env->getMethodID(cls, "getMax", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_computeObjectiveValue_a4b1871f4d29e58b] = env->getMethodID(cls, "computeObjectiveValue", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setup_056be52d6b5c3df2] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        ::org::hipparchus::Field BaseAbstractFieldUnivariateIntegrator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        jint BaseAbstractFieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_570ce0828f81a2c1]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_570ce0828f81a2c1]);
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        ::org::hipparchus::CalculusFieldElement BaseAbstractFieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_9be354262fab8bf3], a0, a1.this$, a2.this$, a3.this$));
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
      namespace integration {
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractFieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, field),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractFieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getField, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractFieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractFieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractFieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractFieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractFieldUnivariateIntegrator, t_BaseAbstractFieldUnivariateIntegrator, BaseAbstractFieldUnivariateIntegrator);
        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(const BaseAbstractFieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractFieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractFieldUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator), module, "BaseAbstractFieldUnivariateIntegrator", 0);
        }

        void t_BaseAbstractFieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "class_", make_descriptor(BaseAbstractFieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractFieldUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(BaseAbstractFieldUnivariateIntegrator(((t_BaseAbstractFieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonShortPeriodTerms::class$ = NULL;
            jmethodID *PythonShortPeriodTerms::mids$ = NULL;
            bool PythonShortPeriodTerms::live$ = false;

            jclass PythonShortPeriodTerms::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonShortPeriodTerms");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getCoefficients_64003844027bb6c4] = env->getMethodID(cls, "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;");
                mids$[mid_getCoefficientsKeyPrefix_11b109bd155ca898] = env->getMethodID(cls, "getCoefficientsKeyPrefix", "()Ljava/lang/String;");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_value_2ab179738ea066bf] = env->getMethodID(cls, "value", "(Lorg/orekit/orbits/Orbit;)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonShortPeriodTerms::PythonShortPeriodTerms() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonShortPeriodTerms::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonShortPeriodTerms::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonShortPeriodTerms::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self);
            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data);
            static PyGetSetDef t_PythonShortPeriodTerms__fields_[] = {
              DECLARE_GET_FIELD(t_PythonShortPeriodTerms, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonShortPeriodTerms__methods_[] = {
              DECLARE_METHOD(t_PythonShortPeriodTerms, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonShortPeriodTerms, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonShortPeriodTerms)[] = {
              { Py_tp_methods, t_PythonShortPeriodTerms__methods_ },
              { Py_tp_init, (void *) t_PythonShortPeriodTerms_init_ },
              { Py_tp_getset, t_PythonShortPeriodTerms__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonShortPeriodTerms)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonShortPeriodTerms, t_PythonShortPeriodTerms, PythonShortPeriodTerms);

            void t_PythonShortPeriodTerms::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonShortPeriodTerms), &PY_TYPE_DEF(PythonShortPeriodTerms), module, "PythonShortPeriodTerms", 1);
            }

            void t_PythonShortPeriodTerms::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "class_", make_descriptor(PythonShortPeriodTerms::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "wrapfn_", make_descriptor(t_PythonShortPeriodTerms::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortPeriodTerms), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonShortPeriodTerms::initializeClass);
              JNINativeMethod methods[] = {
                { "getCoefficients", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Set;)Ljava/util/Map;", (void *) t_PythonShortPeriodTerms_getCoefficients0 },
                { "getCoefficientsKeyPrefix", "()Ljava/lang/String;", (void *) t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1 },
                { "pythonDecRef", "()V", (void *) t_PythonShortPeriodTerms_pythonDecRef2 },
                { "value", "(Lorg/orekit/orbits/Orbit;)[D", (void *) t_PythonShortPeriodTerms_value3 },
              };
              env->registerNatives(cls, methods, 4);
            }

            static PyObject *t_PythonShortPeriodTerms_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonShortPeriodTerms::initializeClass, 1)))
                return NULL;
              return t_PythonShortPeriodTerms::wrap_Object(PythonShortPeriodTerms(((t_PythonShortPeriodTerms *) arg)->object.this$));
            }
            static PyObject *t_PythonShortPeriodTerms_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonShortPeriodTerms::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonShortPeriodTerms_init_(t_PythonShortPeriodTerms *self, PyObject *args, PyObject *kwds)
            {
              PythonShortPeriodTerms object((jobject) NULL);

              INT_CALL(object = PythonShortPeriodTerms());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonShortPeriodTerms_finalize(t_PythonShortPeriodTerms *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonShortPeriodTerms_pythonExtension(t_PythonShortPeriodTerms *self, PyObject *args)
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficients0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::Map value((jobject) NULL);
              PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
              PyObject *o1 = ::java::util::t_Set::wrap_Object(::java::util::Set(a1));
              PyObject *result = PyObject_CallMethod(obj, "getCoefficients", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
              {
                throwTypeError("getCoefficients", result);
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

            static jobject JNICALL t_PythonShortPeriodTerms_getCoefficientsKeyPrefix1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::String value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getCoefficientsKeyPrefix", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "s", &value))
              {
                throwTypeError("getCoefficientsKeyPrefix", result);
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

            static void JNICALL t_PythonShortPeriodTerms_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static jobject JNICALL t_PythonShortPeriodTerms_value3(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonShortPeriodTerms::mids$[PythonShortPeriodTerms::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
              PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("value", result);
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

            static PyObject *t_PythonShortPeriodTerms_get__self(t_PythonShortPeriodTerms *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *FixedPointTleGenerationAlgorithm::class$ = NULL;
            jmethodID *FixedPointTleGenerationAlgorithm::mids$ = NULL;
            bool FixedPointTleGenerationAlgorithm::live$ = false;
            jdouble FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT = (jdouble) 0;
            jint FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT = (jint) 0;
            jdouble FixedPointTleGenerationAlgorithm::SCALE_DEFAULT = (jdouble) 0;

            jclass FixedPointTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/FixedPointTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_98483f586918b5b8] = env->getMethodID(cls, "<init>", "(DID)V");
                mids$[mid_init$_75ee9c8f641aa332] = env->getMethodID(cls, "<init>", "(DIDLorg/orekit/time/TimeScale;Lorg/orekit/frames/Frame;)V");
                mids$[mid_generate_bce44986dbf601d6] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_34f09d826252bcec] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                EPSILON_DEFAULT = env->getStaticDoubleField(cls, "EPSILON_DEFAULT");
                MAX_ITERATIONS_DEFAULT = env->getStaticIntField(cls, "MAX_ITERATIONS_DEFAULT");
                SCALE_DEFAULT = env->getStaticDoubleField(cls, "SCALE_DEFAULT");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_98483f586918b5b8, a0, a1, a2)) {}

            FixedPointTleGenerationAlgorithm::FixedPointTleGenerationAlgorithm(jdouble a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frame & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75ee9c8f641aa332, a0, a1, a2, a3.this$, a4.this$)) {}

            ::org::orekit::propagation::analytical::tle::FieldTLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_bce44986dbf601d6], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE FixedPointTleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_34f09d826252bcec], a0.this$, a1.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_FixedPointTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FixedPointTleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FixedPointTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_FixedPointTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_FixedPointTleGenerationAlgorithm_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FixedPointTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FixedPointTleGenerationAlgorithm, t_FixedPointTleGenerationAlgorithm, FixedPointTleGenerationAlgorithm);

            void t_FixedPointTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(FixedPointTleGenerationAlgorithm), &PY_TYPE_DEF(FixedPointTleGenerationAlgorithm), module, "FixedPointTleGenerationAlgorithm", 0);
            }

            void t_FixedPointTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "class_", make_descriptor(FixedPointTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_FixedPointTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              env->getClass(FixedPointTleGenerationAlgorithm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "EPSILON_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::EPSILON_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "MAX_ITERATIONS_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::MAX_ITERATIONS_DEFAULT));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FixedPointTleGenerationAlgorithm), "SCALE_DEFAULT", make_descriptor(FixedPointTleGenerationAlgorithm::SCALE_DEFAULT));
            }

            static PyObject *t_FixedPointTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_FixedPointTleGenerationAlgorithm::wrap_Object(FixedPointTleGenerationAlgorithm(((t_FixedPointTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_FixedPointTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FixedPointTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_FixedPointTleGenerationAlgorithm_init_(t_FixedPointTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  INT_CALL(object = FixedPointTleGenerationAlgorithm());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DID", &a0, &a1, &a2))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 5:
                {
                  jdouble a0;
                  jint a1;
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::frames::Frame a4((jobject) NULL);
                  FixedPointTleGenerationAlgorithm object((jobject) NULL);

                  if (!parseArgs(args, "DIDkk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = FixedPointTleGenerationAlgorithm(a0, a1, a2, a3, a4));
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

            static PyObject *t_FixedPointTleGenerationAlgorithm_generate(t_FixedPointTleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldLegendrePolynomials.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldLegendrePolynomials::class$ = NULL;
      jmethodID *FieldLegendrePolynomials::mids$ = NULL;
      bool FieldLegendrePolynomials::live$ = false;

      jclass FieldLegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldLegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bfc682017c34e802] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getPnm_d0525157bc3abb83] = env->getMethodID(cls, "getPnm", "(II)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLegendrePolynomials::FieldLegendrePolynomials(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bfc682017c34e802, a0, a1, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldLegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPnm_d0525157bc3abb83], a0, a1));
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
      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args);
      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args);
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data);
      static PyGetSetDef t_FieldLegendrePolynomials__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLegendrePolynomials, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_FieldLegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLegendrePolynomials)[] = {
        { Py_tp_methods, t_FieldLegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_FieldLegendrePolynomials_init_ },
        { Py_tp_getset, t_FieldLegendrePolynomials__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLegendrePolynomials, t_FieldLegendrePolynomials, FieldLegendrePolynomials);
      PyObject *t_FieldLegendrePolynomials::wrap_Object(const FieldLegendrePolynomials& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLegendrePolynomials::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLegendrePolynomials::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLegendrePolynomials *self = (t_FieldLegendrePolynomials *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLegendrePolynomials), &PY_TYPE_DEF(FieldLegendrePolynomials), module, "FieldLegendrePolynomials", 0);
      }

      void t_FieldLegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "class_", make_descriptor(FieldLegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "wrapfn_", make_descriptor(t_FieldLegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_FieldLegendrePolynomials::wrap_Object(FieldLegendrePolynomials(((t_FieldLegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_FieldLegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLegendrePolynomials_of_(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLegendrePolynomials_init_(t_FieldLegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldLegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldLegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLegendrePolynomials_getPnm(t_FieldLegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
      static PyObject *t_FieldLegendrePolynomials_get__parameters_(t_FieldLegendrePolynomials *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/exception/LocalizedCoreFormats.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *LocalizedCoreFormats::class$ = NULL;
      jmethodID *LocalizedCoreFormats::mids$ = NULL;
      bool LocalizedCoreFormats::live$ = false;
      LocalizedCoreFormats *LocalizedCoreFormats::ARITHMETIC_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::AT_LEAST_ONE_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BANDWIDTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BASE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COLUMN_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONSTRAINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CONVERGENCE_FAILED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DEGREES_OF_FREEDOM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DENOMINATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIGEST_NOT_INITIALIZED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2 = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EVALUATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_BRACKETING = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_DECOMPOSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FAILED_FRACTION_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::FUNCTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::GCD_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILLEGAL_STATE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::IMAGINARY_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_LARGER_THAN_MAX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INDEX_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INFINITE_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_DIMENSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INTERNAL_ERROR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::INVALID_MAX_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_32_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LCM_OVERFLOW_64_BITS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LENGTH = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MAX_COUNT_EXCEEDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::MEAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NAN_VALUE_CONVERSION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SQUARE_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NON_SYMMETRIC_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_INFINITE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NORMALIZE_NAN = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_BRACKETING_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_FINITE_NUMBER = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_EXPONENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_DATA$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NULL_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SAMPLES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESSES = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_OF_TRIALS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_LEFT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW$ = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_ADDITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_EXCEEDS_N = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::PERMUTATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POLYNOMIAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::REAL_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROBUSTNESS_ITERATIONS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ROW_INDEX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SCALE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SHAPE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SIMPLE_MESSAGE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_MATRIX = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SINGULAR_OPERATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::STANDARD_DEVIATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::START_POSITION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNKNOWN_MODE = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::UNSUPPORTED_OPERATION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::URL_CONTAINS_NO_DATA = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::USER_EXCEPTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WHOLE_FORMAT = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NORM = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_NOT_ALLOWED = NULL;
      LocalizedCoreFormats *LocalizedCoreFormats::ZERO_STATE_SIZE = NULL;

      jclass LocalizedCoreFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/LocalizedCoreFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_566d4571f998d93d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/exception/LocalizedCoreFormats;");
          mids$[mid_values_4255748a3b687039] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/exception/LocalizedCoreFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARITHMETIC_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARITHMETIC_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SIZE_EXCEEDS_MAX_VARIABLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_SUMS_TO_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_SUMS_TO_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          AT_LEAST_ONE_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "AT_LEAST_ONE_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BANDWIDTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BANDWIDTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BASE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BASE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_BAD_ARGUMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_BAD_ARGUMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BESSEL_FUNCTION_FAILED_CONVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BESSEL_FUNCTION_FAILED_CONVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_INVALID_PARAMETERS_ORDER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_INVALID_PARAMETERS_ORDER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          BINOMIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "BINOMIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_0TH_ROOT_OF_UNITY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_INSTANCE_AS_COMPLEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_FORMAT_OBJECT_TO_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_FORMAT_OBJECT_TO_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_PARSE_AS_TYPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_PARSE_AS_TYPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COLUMN_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COLUMN_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONSTRAINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONSTRAINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_INFINITY_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_INFINITY_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTINUED_FRACTION_NAN_DIVERGENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTINUED_FRACTION_NAN_DIVERGENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONTRACTION_CRITERIA_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CONVERGENCE_FAILED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CONVERGENCE_FAILED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DEGREES_OF_FREEDOM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DEGREES_OF_FREEDOM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DENOMINATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DENOMINATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DERIVATION_ORDER_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DERIVATION_ORDER_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIFFERENT_ROWS_LENGTHS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIFFERENT_ROWS_LENGTHS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIGEST_NOT_INITIALIZED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIGEST_NOT_INITIALIZED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DIMENSIONS_MISMATCH_2x2 = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DIMENSIONS_MISMATCH_2x2", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DISTRIBUTION_NOT_LOADED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DISTRIBUTION_NOT_LOADED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          DUPLICATED_ABSCISSA_DIVISION_BY_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_INTERPOLATION_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_INTERPOLATION_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_COLUMN_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EMPTY_SELECTED_ROW_INDEX_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EMPTY_SELECTED_ROW_INDEX_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ENDPOINTS_NOT_AN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ENDPOINTS_NOT_AN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EVALUATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EVALUATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPANSION_FACTOR_SMALLER_THAN_ONE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPANSION_FACTOR_SMALLER_THAN_ONE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FACTORIAL_NEGATIVE_PARAMETER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FACTORIAL_NEGATIVE_PARAMETER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_BRACKETING = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_BRACKETING", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_DECOMPOSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_DECOMPOSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FAILED_FRACTION_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FAILED_FRACTION_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_COLUMNS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_COLUMNS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FIRST_ROWS_NOT_INITIALIZED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FIRST_ROWS_NOT_INITIALIZED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FRACTION_CONVERSION_OVERFLOW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FRACTION_CONVERSION_OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          FUNCTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "FUNCTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          GCD_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "GCD_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILLEGAL_STATE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ILL_CONDITIONED_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ILL_CONDITIONED_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          IMAGINARY_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "IMAGINARY_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_LARGER_THAN_MAX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_LARGER_THAN_MAX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INDEX_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INDEX_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_ARRAY_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_ARRAY_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INFINITE_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INFINITE_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_CAPACITY_NOT_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_CAPACITY_NOT_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_COLUMN_AFTER_FINAL_COLUMN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_COLUMN_AFTER_FINAL_COLUMN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INITIAL_ROW_AFTER_FINAL_ROW = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INITIAL_ROW_AFTER_FINAL_ROW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_DIMENSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DIMENSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INSUFFICIENT_ROWS_AND_COLUMNS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INSUFFICIENT_ROWS_AND_COLUMNS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INTERNAL_ERROR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          INVALID_MAX_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "INVALID_MAX_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_32_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_32_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LCM_OVERFLOW_64_BITS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LCM_OVERFLOW_64_BITS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LENGTH = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LENGTH", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_BOUND_NOT_BELOW_UPPER_BOUND = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MAX_COUNT_EXCEEDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MAX_COUNT_EXCEEDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          MEAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "MEAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NAN_VALUE_CONVERSION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NAN_VALUE_CONVERSION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_COMPLEX_MODULE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_COMPLEX_MODULE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NEGATIVE_ELEMENT_AT_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NEGATIVE_ELEMENT_AT_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_CONVERGENT_CONTINUED_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_CONVERGENT_CONTINUED_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_POSITIVE_DEFINITE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_POSITIVE_DEFINITE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SELF_ADJOINT_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SELF_ADJOINT_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SQUARE_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SQUARE_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NON_SYMMETRIC_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NON_SYMMETRIC_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_INFINITE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_INFINITE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NORMALIZE_NAN = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NORMALIZE_NAN", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_BRACKETING_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_BRACKETING_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_FINITE_NUMBER = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_FINITE_NUMBER", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_DEFINITE_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_DEFINITE_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_EXPONENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_EXPONENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_POSITIVE_WINDOW_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_POSITIVE_WINDOW_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_DECREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_DECREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NOT_STRICTLY_INCREASING_SEQUENCE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NOT_STRICTLY_INCREASING_SEQUENCE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_CONVERGENCE_WITH_ANY_START_POINT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_CONVERGENCE_WITH_ANY_START_POINT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_DATA$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NO_OPTIMUM_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NO_OPTIMUM_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NULL_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NULL_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_INTERPOLATION_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_INTERPOLATION_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SAMPLES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SAMPLES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESSES = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESSES", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_OF_TRIALS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_OF_TRIALS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_LARGE_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_LARGE_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMBER_TOO_SMALL_BOUND_EXCLUDED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMBER_TOO_SMALL_BOUND_EXCLUDED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          NUMERATOR_OVERFLOW_AFTER_MULTIPLY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_LEFT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_LEFT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_ROOT_OF_UNITY_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OUT_OF_RANGE_SIMPLE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OUT_OF_RANGE_SIMPLE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW$ = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_ADDITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_ADDITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_MULTIPLICATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_MULTIPLICATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          OVERFLOW_IN_SUBTRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "OVERFLOW_IN_SUBTRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_EXCEEDS_N = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_EXCEEDS_N", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          PERMUTATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "PERMUTATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POLYNOMIAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POLYNOMIAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          REAL_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "REAL_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          RIGHT_EDGE_GREATER_THAN_LEFT_EDGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROBUSTNESS_ITERATIONS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROBUSTNESS_ITERATIONS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROOTS_OF_UNITY_NOT_COMPUTED_YET = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROOTS_OF_UNITY_NOT_COMPUTED_YET", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ROW_INDEX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ROW_INDEX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SCALE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SCALE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SHAPE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SHAPE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SIMPLE_MESSAGE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SIMPLE_MESSAGE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_MATRIX = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_MATRIX", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SINGULAR_OPERATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SINGULAR_OPERATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          STANDARD_DEVIATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "STANDARD_DEVIATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POINT_NOT_IN_INTERVAL = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POINT_NOT_IN_INTERVAL", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          START_POSITION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "START_POSITION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          SUBARRAY_ENDS_AFTER_ARRAY_END = new LocalizedCoreFormats(env->getStaticObjectField(cls, "SUBARRAY_ENDS_AFTER_ARRAY_END", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_LARGE_CUTOFF_SINGULAR_VALUE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_LARGE_CUTOFF_SINGULAR_VALUE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNKNOWN_MODE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNKNOWN_MODE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          UNSUPPORTED_OPERATION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "UNSUPPORTED_OPERATION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          URL_CONTAINS_NO_DATA = new LocalizedCoreFormats(env->getStaticObjectField(cls, "URL_CONTAINS_NO_DATA", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          USER_EXCEPTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "USER_EXCEPTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WEIGHT_AT_LEAST_ONE_NON_ZERO = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WEIGHT_AT_LEAST_ONE_NON_ZERO", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WHOLE_FORMAT = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WHOLE_FORMAT", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          WRONG_NUMBER_OF_POINTS = new LocalizedCoreFormats(env->getStaticObjectField(cls, "WRONG_NUMBER_OF_POINTS", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_DENOMINATOR_IN_FRACTION = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_DENOMINATOR_IN_FRACTION", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_FRACTION_TO_DIVIDE_BY = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_FRACTION_TO_DIVIDE_BY", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NORM = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NORM", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_NOT_ALLOWED = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_NOT_ALLOWED", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          ZERO_STATE_SIZE = new LocalizedCoreFormats(env->getStaticObjectField(cls, "ZERO_STATE_SIZE", "Lorg/hipparchus/exception/LocalizedCoreFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedCoreFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String LocalizedCoreFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      LocalizedCoreFormats LocalizedCoreFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedCoreFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_566d4571f998d93d], a0.this$));
      }

      JArray< LocalizedCoreFormats > LocalizedCoreFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedCoreFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_4255748a3b687039]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg);
      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self);
      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data);
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data);
      static PyGetSetDef t_LocalizedCoreFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedCoreFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedCoreFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedCoreFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedCoreFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedCoreFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedCoreFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedCoreFormats)[] = {
        { Py_tp_methods, t_LocalizedCoreFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedCoreFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedCoreFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedCoreFormats, t_LocalizedCoreFormats, LocalizedCoreFormats);
      PyObject *t_LocalizedCoreFormats::wrap_Object(const LocalizedCoreFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedCoreFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedCoreFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedCoreFormats *self = (t_LocalizedCoreFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedCoreFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedCoreFormats), &PY_TYPE_DEF(LocalizedCoreFormats), module, "LocalizedCoreFormats", 0);
      }

      void t_LocalizedCoreFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "class_", make_descriptor(LocalizedCoreFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "wrapfn_", make_descriptor(t_LocalizedCoreFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedCoreFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARITHMETIC_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARITHMETIC_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZES_SHOULD_HAVE_DIFFERENCE_1)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SIZE_EXCEEDS_MAX_VARIABLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SIZE_EXCEEDS_MAX_VARIABLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_SUMS_TO_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_SUMS_TO_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ARRAY_ZERO_LENGTH_OR_NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "AT_LEAST_ONE_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::AT_LEAST_ONE_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BANDWIDTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BANDWIDTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BASE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BASE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_BAD_ARGUMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_BAD_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BESSEL_FUNCTION_FAILED_CONVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BESSEL_FUNCTION_FAILED_CONVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_INVALID_PARAMETERS_ORDER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_INVALID_PARAMETERS_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "BINOMIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::BINOMIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_0TH_ROOT_OF_UNITY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_0TH_ROOT_OF_UNITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_0_FOR_SOME_ALPHA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_BETA_DENSITY_AT_1_FOR_SOME_BETA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_COMPUTE_NTH_ROOT_FOR_NEGATIVE_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_DISCARD_NEGATIVE_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_INSTANCE_AS_COMPLEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_INSTANCE_AS_COMPLEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_FORMAT_OBJECT_TO_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_FORMAT_OBJECT_TO_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_PARSE_AS_TYPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_PARSE_AS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CANNOT_SUBSTITUTE_ELEMENT_FROM_EMPTY_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COLUMN_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COLUMN_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::COMPLEX_CANNOT_BE_CONSIDERED_A_REAL_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONSTRAINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONSTRAINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_INFINITY_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_INFINITY_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTINUED_FRACTION_NAN_DIVERGENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTINUED_FRACTION_NAN_DIVERGENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_EXPANSION_FACTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONTRACTION_CRITERIA_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONTRACTION_CRITERIA_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CONVERGENCE_FAILED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CONVERGENCE_FAILED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DEGREES_OF_FREEDOM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DEGREES_OF_FREEDOM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DENOMINATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DENOMINATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DERIVATION_ORDER_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DERIVATION_ORDER_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIFFERENT_ROWS_LENGTHS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIFFERENT_ROWS_LENGTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIGEST_NOT_INITIALIZED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIGEST_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DIMENSIONS_MISMATCH_2x2", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DIMENSIONS_MISMATCH_2x2)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISCRETE_CUMULATIVE_PROBABILITY_RETURNED_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DISTRIBUTION_NOT_LOADED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DISTRIBUTION_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "DUPLICATED_ABSCISSA_DIVISION_BY_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::DUPLICATED_ABSCISSA_DIVISION_BY_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_INTERPOLATION_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_INTERPOLATION_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_POLYNOMIALS_COEFFICIENTS_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_COLUMN_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_COLUMN_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EMPTY_SELECTED_ROW_INDEX_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EMPTY_SELECTED_ROW_INDEX_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ENDPOINTS_NOT_AN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ENDPOINTS_NOT_AN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EVALUATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EVALUATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPANSION_FACTOR_SMALLER_THAN_ONE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPANSION_FACTOR_SMALLER_THAN_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FACTORIAL_NEGATIVE_PARAMETER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FACTORIAL_NEGATIVE_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_BRACKETING", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_BRACKETING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_DECOMPOSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_DECOMPOSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FAILED_FRACTION_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FAILED_FRACTION_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_COLUMNS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_COLUMNS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FIRST_ROWS_NOT_INITIALIZED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FIRST_ROWS_NOT_INITIALIZED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FRACTION_CONVERSION_OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FRACTION_CONVERSION_OVERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "FUNCTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "GCD_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::GCD_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILLEGAL_STATE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILLEGAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ILL_CONDITIONED_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ILL_CONDITIONED_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "IMAGINARY_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::IMAGINARY_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_LARGER_THAN_MAX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_LARGER_THAN_MAX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INDEX_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INDEX_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_ARRAY_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_ARRAY_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INFINITE_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INFINITE_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_CAPACITY_NOT_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_CAPACITY_NOT_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_COLUMN_AFTER_FINAL_COLUMN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_COLUMN_AFTER_FINAL_COLUMN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INITIAL_ROW_AFTER_FINAL_ROW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INITIAL_ROW_AFTER_FINAL_ROW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INPUT_EXPECTED_BETWEEN_ZERO_AND_ONE_INCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_DIMENSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_DIMENSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_OBSERVED_POINTS_IN_SAMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INSUFFICIENT_ROWS_AND_COLUMNS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INSUFFICIENT_ROWS_AND_COLUMNS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INTERNAL_ERROR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "INVALID_MAX_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::INVALID_MAX_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_32_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_32_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LCM_OVERFLOW_64_BITS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LCM_OVERFLOW_64_BITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LENGTH", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LENGTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_BOUND_NOT_BELOW_UPPER_BOUND", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_BOUND_NOT_BELOW_UPPER_BOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::LOWER_ENDPOINT_ABOVE_UPPER_ENDPOINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MAX_COUNT_EXCEEDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MAX_COUNT_EXCEEDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "MEAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NAN_VALUE_CONVERSION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NAN_VALUE_CONVERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_COMPLEX_MODULE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_COMPLEX_MODULE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NEGATIVE_ELEMENT_AT_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NEGATIVE_ELEMENT_AT_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_CONVERGENT_CONTINUED_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_CONVERGENT_CONTINUED_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_POSITIVE_DEFINITE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_POSITIVE_DEFINITE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SELF_ADJOINT_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SELF_ADJOINT_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SQUARE_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SQUARE_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NON_SYMMETRIC_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NON_SYMMETRIC_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_INFINITE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_INFINITE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NORMALIZE_NAN", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NORMALIZE_NAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_BRACKETING_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_BRACKETING_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_ENOUGH_POINTS_IN_SPLINE_PARTITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_FINITE_NUMBER", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_FINITE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_DEFINITE_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_DEFINITE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_EXPONENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_EXPONENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_POSITIVE_WINDOW_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_POSITIVE_WINDOW_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_DECREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_DECREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NOT_STRICTLY_INCREASING_SEQUENCE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NOT_STRICTLY_INCREASING_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_CONVERGENCE_WITH_ANY_START_POINT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_CONVERGENCE_WITH_ANY_START_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_DATA$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NO_OPTIMUM_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NO_OPTIMUM_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NULL_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NULL_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_ELEMENTS_SHOULD_BE_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_INTERPOLATION_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_INTERPOLATION_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SAMPLES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SAMPLES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESSES", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESSES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_SUCCESS_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_OF_TRIALS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_OF_TRIALS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_LARGE_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_LARGE_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMBER_TOO_SMALL_BOUND_EXCLUDED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMBER_TOO_SMALL_BOUND_EXCLUDED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "NUMERATOR_OVERFLOW_AFTER_MULTIPLY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::NUMERATOR_OVERFLOW_AFTER_MULTIPLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OBSERVED_COUNTS_BOTTH_ZERO_FOR_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_LEFT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_LEFT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_ROOT_OF_UNITY_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_ROOT_OF_UNITY_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OUT_OF_RANGE_SIMPLE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OUT_OF_RANGE_SIMPLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW$)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_ADDITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_ADDITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_MULTIPLICATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_MULTIPLICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "OVERFLOW_IN_SUBTRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::OVERFLOW_IN_SUBTRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_EXCEEDS_N", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_EXCEEDS_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "PERMUTATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::PERMUTATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POLYNOMIAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POLYNOMIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "REAL_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::REAL_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "RIGHT_EDGE_GREATER_THAN_LEFT_EDGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::RIGHT_EDGE_GREATER_THAN_LEFT_EDGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROBUSTNESS_ITERATIONS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROBUSTNESS_ITERATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROOTS_OF_UNITY_NOT_COMPUTED_YET", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROOTS_OF_UNITY_NOT_COMPUTED_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ROW_INDEX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ROW_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_EXCEEDS_COLLECTION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SAMPLE_SIZE_LARGER_THAN_POPULATION_SIZE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SCALE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SCALE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SHAPE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SHAPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SIMPLE_MESSAGE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SIMPLE_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_MATRIX", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SINGULAR_OPERATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SINGULAR_OPERATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "STANDARD_DEVIATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::STANDARD_DEVIATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POINT_NOT_IN_INTERVAL", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POINT_NOT_IN_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "START_POSITION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::START_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "SUBARRAY_ENDS_AFTER_ARRAY_END", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::SUBARRAY_ENDS_AFTER_ARRAY_END)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_LARGE_CUTOFF_SINGULAR_VALUE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_LARGE_CUTOFF_SINGULAR_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::TOO_MANY_ELEMENTS_TO_DISCARD_FROM_ARRAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNKNOWN_MODE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNKNOWN_MODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "UNSUPPORTED_OPERATION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::UNSUPPORTED_OPERATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "URL_CONTAINS_NO_DATA", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::URL_CONTAINS_NO_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "USER_EXCEPTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::USER_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::VECTOR_MUST_HAVE_AT_LEAST_ONE_ELEMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WEIGHT_AT_LEAST_ONE_NON_ZERO", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WEIGHT_AT_LEAST_ONE_NON_ZERO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WHOLE_FORMAT", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WHOLE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "WRONG_NUMBER_OF_POINTS", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::WRONG_NUMBER_OF_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_DENOMINATOR_IN_FRACTION", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_DENOMINATOR_IN_FRACTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_FRACTION_TO_DIVIDE_BY", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_FRACTION_TO_DIVIDE_BY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NORM", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_NOT_ALLOWED", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedCoreFormats), "ZERO_STATE_SIZE", make_descriptor(t_LocalizedCoreFormats::wrap_Object(*LocalizedCoreFormats::ZERO_STATE_SIZE)));
      }

      static PyObject *t_LocalizedCoreFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedCoreFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedCoreFormats::wrap_Object(LocalizedCoreFormats(((t_LocalizedCoreFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedCoreFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedCoreFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedCoreFormats_of_(t_LocalizedCoreFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedCoreFormats_getLocalizedString(t_LocalizedCoreFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedCoreFormats_getSourceString(t_LocalizedCoreFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedCoreFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedCoreFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::valueOf(a0));
          return t_LocalizedCoreFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedCoreFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedCoreFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::exception::LocalizedCoreFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedCoreFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedCoreFormats_get__parameters_(t_LocalizedCoreFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedCoreFormats_get__sourceString(t_LocalizedCoreFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/IsotropicRadiationClassicalConvention.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace radiation {

        ::java::lang::Class *IsotropicRadiationClassicalConvention::class$ = NULL;
        jmethodID *IsotropicRadiationClassicalConvention::mids$ = NULL;
        bool IsotropicRadiationClassicalConvention::live$ = false;

        jclass IsotropicRadiationClassicalConvention::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/IsotropicRadiationClassicalConvention");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getRadiationParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getRadiationParametersDrivers", "()Ljava/util/List;");
            mids$[mid_radiationPressureAcceleration_c01594a6748cab78] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86] = env->getMethodID(cls, "radiationPressureAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IsotropicRadiationClassicalConvention::IsotropicRadiationClassicalConvention(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::java::util::List IsotropicRadiationClassicalConvention::getRadiationParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRadiationParametersDrivers_2afa36052df4765d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_c01594a6748cab78], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IsotropicRadiationClassicalConvention::radiationPressureAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_radiationPressureAcceleration_70d4c57af2df1a86], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self);
        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args);
        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data);
        static PyGetSetDef t_IsotropicRadiationClassicalConvention__fields_[] = {
          DECLARE_GET_FIELD(t_IsotropicRadiationClassicalConvention, radiationParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IsotropicRadiationClassicalConvention__methods_[] = {
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, getRadiationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_IsotropicRadiationClassicalConvention, radiationPressureAcceleration, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IsotropicRadiationClassicalConvention)[] = {
          { Py_tp_methods, t_IsotropicRadiationClassicalConvention__methods_ },
          { Py_tp_init, (void *) t_IsotropicRadiationClassicalConvention_init_ },
          { Py_tp_getset, t_IsotropicRadiationClassicalConvention__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IsotropicRadiationClassicalConvention)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IsotropicRadiationClassicalConvention, t_IsotropicRadiationClassicalConvention, IsotropicRadiationClassicalConvention);

        void t_IsotropicRadiationClassicalConvention::install(PyObject *module)
        {
          installType(&PY_TYPE(IsotropicRadiationClassicalConvention), &PY_TYPE_DEF(IsotropicRadiationClassicalConvention), module, "IsotropicRadiationClassicalConvention", 0);
        }

        void t_IsotropicRadiationClassicalConvention::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "class_", make_descriptor(IsotropicRadiationClassicalConvention::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "wrapfn_", make_descriptor(t_IsotropicRadiationClassicalConvention::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IsotropicRadiationClassicalConvention), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 1)))
            return NULL;
          return t_IsotropicRadiationClassicalConvention::wrap_Object(IsotropicRadiationClassicalConvention(((t_IsotropicRadiationClassicalConvention *) arg)->object.this$));
        }
        static PyObject *t_IsotropicRadiationClassicalConvention_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IsotropicRadiationClassicalConvention::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IsotropicRadiationClassicalConvention_init_(t_IsotropicRadiationClassicalConvention *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          IsotropicRadiationClassicalConvention object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = IsotropicRadiationClassicalConvention(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_getRadiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_radiationPressureAcceleration(t_IsotropicRadiationClassicalConvention *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.radiationPressureAcceleration(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "radiationPressureAcceleration", args);
          return NULL;
        }

        static PyObject *t_IsotropicRadiationClassicalConvention_get__radiationParametersDrivers(t_IsotropicRadiationClassicalConvention *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getRadiationParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1019::class$ = NULL;
              jmethodID *Rtcm1019::mids$ = NULL;
              bool Rtcm1019::live$ = false;

              jclass Rtcm1019::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8a23d3d6d152d182] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1019Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1019::Rtcm1019(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_8a23d3d6d152d182, a0, a1.this$)) {}
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
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args);
              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data);
              static PyGetSetDef t_Rtcm1019__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1019, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1019__methods_[] = {
                DECLARE_METHOD(t_Rtcm1019, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1019, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1019)[] = {
                { Py_tp_methods, t_Rtcm1019__methods_ },
                { Py_tp_init, (void *) t_Rtcm1019_init_ },
                { Py_tp_getset, t_Rtcm1019__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1019)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1019, t_Rtcm1019, Rtcm1019);
              PyObject *t_Rtcm1019::wrap_Object(const Rtcm1019& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1019::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1019::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1019 *self = (t_Rtcm1019 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1019::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1019), &PY_TYPE_DEF(Rtcm1019), module, "Rtcm1019", 0);
              }

              void t_Rtcm1019::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "class_", make_descriptor(Rtcm1019::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "wrapfn_", make_descriptor(t_Rtcm1019::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1019), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1019_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1019::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1019::wrap_Object(Rtcm1019(((t_Rtcm1019 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1019_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1019::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1019_of_(t_Rtcm1019 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1019_init_(t_Rtcm1019 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data a1((jobject) NULL);
                Rtcm1019 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1019Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1019(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1019Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1019_get__parameters_(t_Rtcm1019 *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree::class$ = NULL;
        jmethodID *BSPTree::mids$ = NULL;
        bool BSPTree::live$ = false;

        jclass BSPTree::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_2990946c992aafed] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
            mids$[mid_init$_a6616e5a16388e97] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Ljava/lang/Object;)V");
            mids$[mid_copySelf_5bcc186ed7144178] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getAttribute_4d26fd885228c716] = env->getMethodID(cls, "getAttribute", "()Ljava/lang/Object;");
            mids$[mid_getCell_090f24d48d539012] = env->getMethodID(cls, "getCell", "(Lorg/hipparchus/geometry/Point;D)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getCloseCuts_fdcaf1bcc15bca5f] = env->getMethodID(cls, "getCloseCuts", "(Lorg/hipparchus/geometry/Point;D)Ljava/util/List;");
            mids$[mid_getCut_6e34449919366687] = env->getMethodID(cls, "getCut", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getMinus_5bcc186ed7144178] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getParent_5bcc186ed7144178] = env->getMethodID(cls, "getParent", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_getPlus_5bcc186ed7144178] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_insertCut_5bc340c02d9ac484] = env->getMethodID(cls, "insertCut", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_insertInTree_0daf8859736f87dd] = env->getMethodID(cls, "insertInTree", "(Lorg/hipparchus/geometry/partitioning/BSPTree;ZLorg/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler;)V");
            mids$[mid_merge_dfbabc273fbcf8e1] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree$LeafMerger;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_pruneAroundConvexCell_eef8f25b38372685] = env->getMethodID(cls, "pruneAroundConvexCell", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_setAttribute_2990946c992aafed] = env->getMethodID(cls, "setAttribute", "(Ljava/lang/Object;)V");
            mids$[mid_split_a6b6b20f5441afbd] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_visit_f87f01e6869287b2] = env->getMethodID(cls, "visit", "(Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTree::BSPTree() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        BSPTree::BSPTree(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2990946c992aafed, a0.this$)) {}

        BSPTree::BSPTree(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const BSPTree & a1, const BSPTree & a2, const ::java::lang::Object & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6616e5a16388e97, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        BSPTree BSPTree::copySelf() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_copySelf_5bcc186ed7144178]));
        }

        ::java::lang::Object BSPTree::getAttribute() const
        {
          return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getAttribute_4d26fd885228c716]));
        }

        BSPTree BSPTree::getCell(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getCell_090f24d48d539012], a0.this$, a1));
        }

        ::java::util::List BSPTree::getCloseCuts(const ::org::hipparchus::geometry::Point & a0, jdouble a1) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCloseCuts_fdcaf1bcc15bca5f], a0.this$, a1));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane BSPTree::getCut() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getCut_6e34449919366687]));
        }

        BSPTree BSPTree::getMinus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getMinus_5bcc186ed7144178]));
        }

        BSPTree BSPTree::getParent() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getParent_5bcc186ed7144178]));
        }

        BSPTree BSPTree::getPlus() const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_getPlus_5bcc186ed7144178]));
        }

        jboolean BSPTree::insertCut(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_insertCut_5bc340c02d9ac484], a0.this$);
        }

        void BSPTree::insertInTree(const BSPTree & a0, jboolean a1, const ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_insertInTree_0daf8859736f87dd], a0.this$, a1, a2.this$);
        }

        BSPTree BSPTree::merge(const BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger & a1) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_merge_dfbabc273fbcf8e1], a0.this$, a1.this$));
        }

        BSPTree BSPTree::pruneAroundConvexCell(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_pruneAroundConvexCell_eef8f25b38372685], a0.this$, a1.this$, a2.this$));
        }

        void BSPTree::setAttribute(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttribute_2990946c992aafed], a0.this$);
        }

        BSPTree BSPTree::split(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return BSPTree(env->callObjectMethod(this$, mids$[mid_split_a6b6b20f5441afbd], a0.this$));
        }

        void BSPTree::visit(const ::org::hipparchus::geometry::partitioning::BSPTreeVisitor & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visit_f87f01e6869287b2], a0.this$);
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
        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args);
        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BSPTree_copySelf(t_BSPTree *self);
        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self);
        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_getCut(t_BSPTree *self);
        static PyObject *t_BSPTree_getMinus(t_BSPTree *self);
        static PyObject *t_BSPTree_getParent(t_BSPTree *self);
        static PyObject *t_BSPTree_getPlus(t_BSPTree *self);
        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args);
        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg);
        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data);
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data);
        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data);
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data);
        static PyGetSetDef t_BSPTree__fields_[] = {
          DECLARE_GETSET_FIELD(t_BSPTree, attribute),
          DECLARE_GET_FIELD(t_BSPTree, cut),
          DECLARE_GET_FIELD(t_BSPTree, minus),
          DECLARE_GET_FIELD(t_BSPTree, parent),
          DECLARE_GET_FIELD(t_BSPTree, plus),
          DECLARE_GET_FIELD(t_BSPTree, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree__methods_[] = {
          DECLARE_METHOD(t_BSPTree, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getAttribute, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCloseCuts, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, getCut, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getParent, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_BSPTree, insertCut, METH_O),
          DECLARE_METHOD(t_BSPTree, insertInTree, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, merge, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, pruneAroundConvexCell, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree, setAttribute, METH_O),
          DECLARE_METHOD(t_BSPTree, split, METH_O),
          DECLARE_METHOD(t_BSPTree, visit, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree)[] = {
          { Py_tp_methods, t_BSPTree__methods_ },
          { Py_tp_init, (void *) t_BSPTree_init_ },
          { Py_tp_getset, t_BSPTree__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree, t_BSPTree, BSPTree);
        PyObject *t_BSPTree::wrap_Object(const BSPTree& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree *self = (t_BSPTree *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree), &PY_TYPE_DEF(BSPTree), module, "BSPTree", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "VanishingCutHandler", make_descriptor(&PY_TYPE_DEF(BSPTree$VanishingCutHandler)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "LeafMerger", make_descriptor(&PY_TYPE_DEF(BSPTree$LeafMerger)));
        }

        void t_BSPTree::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "class_", make_descriptor(BSPTree::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "wrapfn_", make_descriptor(t_BSPTree::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree::initializeClass, 1)))
            return NULL;
          return t_BSPTree::wrap_Object(BSPTree(((t_BSPTree *) arg)->object.this$));
        }
        static PyObject *t_BSPTree_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree_of_(t_BSPTree *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BSPTree_init_(t_BSPTree *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BSPTree object((jobject) NULL);

              INT_CALL(object = BSPTree());
              self->object = object;
              break;
            }
           case 1:
            {
              ::java::lang::Object a0((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "o", &a0))
              {
                INT_CALL(object = BSPTree(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              BSPTree a1((jobject) NULL);
              PyTypeObject **p1;
              BSPTree a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Object a3((jobject) NULL);
              BSPTree object((jobject) NULL);

              if (!parseArgs(args, "KKKo", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, BSPTree::initializeClass, BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, t_BSPTree::parameters_, &a2, &p2, t_BSPTree::parameters_, &a3))
              {
                INT_CALL(object = BSPTree(a0, a1, a2, a3));
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

        static PyObject *t_BSPTree_copySelf(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getAttribute(t_BSPTree *self)
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(result);
        }

        static PyObject *t_BSPTree_getCell(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCell(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCloseCuts(t_BSPTree *self, PyObject *args)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getCloseCuts(a0, a1));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getCloseCuts", args);
          return NULL;
        }

        static PyObject *t_BSPTree_getCut(t_BSPTree *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getMinus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getParent(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getParent());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_getPlus(t_BSPTree *self)
        {
          BSPTree result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return t_BSPTree::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BSPTree_insertCut(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.insertCut(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "insertCut", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_insertInTree(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean a1;
          ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KZK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$VanishingCutHandler::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree$VanishingCutHandler::parameters_))
          {
            OBJ_CALL(self->object.insertInTree(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "insertInTree", args);
          return NULL;
        }

        static PyObject *t_BSPTree_merge(t_BSPTree *self, PyObject *args)
        {
          BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger a1((jobject) NULL);
          PyTypeObject **p1;
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KK", BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree$LeafMerger::initializeClass, &a0, &p0, t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree$LeafMerger::parameters_))
          {
            OBJ_CALL(result = self->object.merge(a0, a1));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }

        static PyObject *t_BSPTree_pruneAroundConvexCell(t_BSPTree *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          BSPTree result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pruneAroundConvexCell(a0, a1, a2));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "pruneAroundConvexCell", args);
          return NULL;
        }

        static PyObject *t_BSPTree_setAttribute(t_BSPTree *self, PyObject *arg)
        {
          ::java::lang::Object a0((jobject) NULL);

          if (!parseArg(arg, "o", &a0))
          {
            OBJ_CALL(self->object.setAttribute(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttribute", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_split(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }

        static PyObject *t_BSPTree_visit(t_BSPTree *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTreeVisitor::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor::parameters_))
          {
            OBJ_CALL(self->object.visit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visit", arg);
          return NULL;
        }
        static PyObject *t_BSPTree_get__parameters_(t_BSPTree *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BSPTree_get__attribute(t_BSPTree *self, void *data)
        {
          ::java::lang::Object value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttribute());
          return ::java::lang::t_Object::wrap_Object(value);
        }
        static int t_BSPTree_set__attribute(t_BSPTree *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::Object value((jobject) NULL);
            if (!parseArg(arg, "o", &value))
            {
              INT_CALL(self->object.setAttribute(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attribute", arg);
          return -1;
        }

        static PyObject *t_BSPTree_get__cut(t_BSPTree *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getCut());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__minus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__parent(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getParent());
          return t_BSPTree::wrap_Object(value);
        }

        static PyObject *t_BSPTree_get__plus(t_BSPTree *self, void *data)
        {
          BSPTree value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return t_BSPTree::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *CachedNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *CachedNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool CachedNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass CachedNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b7e79a1d0b13bbb3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;DIIDD)V");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_58c777cdeb3bd479] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CachedNormalizedSphericalHarmonicsProvider::CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, jdouble a1, jint a2, jint a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7e79a1d0b13bbb3, a0.this$, a1, a2, a3, a4, a5)) {}

          jdouble CachedNormalizedSphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_dff5885c2c873297]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_570ce0828f81a2c1]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_570ce0828f81a2c1]);
          }

          jdouble CachedNormalizedSphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
          }

          ::org::orekit::time::AbsoluteDate CachedNormalizedSphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
          }

          ::org::orekit::forces::gravity::potential::TideSystem CachedNormalizedSphericalHarmonicsProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_c68abf1ca1fc273e]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics CachedNormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_58c777cdeb3bd479], a0.this$));
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
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_CachedNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, referenceDate),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CachedNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getTideSystem, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CachedNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_CachedNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_CachedNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_CachedNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CachedNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CachedNormalizedSphericalHarmonicsProvider, t_CachedNormalizedSphericalHarmonicsProvider, CachedNormalizedSphericalHarmonicsProvider);

          void t_CachedNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider), module, "CachedNormalizedSphericalHarmonicsProvider", 0);
          }

          void t_CachedNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_CachedNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_CachedNormalizedSphericalHarmonicsProvider::wrap_Object(CachedNormalizedSphericalHarmonicsProvider(((t_CachedNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble a4;
            jdouble a5;
            CachedNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            if (!parseArgs(args, "kDIIDD", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = CachedNormalizedSphericalHarmonicsProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg)
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

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IntegerLeastSquareSolver::class$ = NULL;
          jmethodID *IntegerLeastSquareSolver::mids$ = NULL;
          bool IntegerLeastSquareSolver::live$ = false;

          jclass IntegerLeastSquareSolver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_solveILS_191219eb4c75acaf] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > IntegerLeastSquareSolver::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_191219eb4c75acaf], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args);

          static PyMethodDef t_IntegerLeastSquareSolver__methods_[] = {
            DECLARE_METHOD(t_IntegerLeastSquareSolver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntegerLeastSquareSolver, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntegerLeastSquareSolver)[] = {
            { Py_tp_methods, t_IntegerLeastSquareSolver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntegerLeastSquareSolver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(IntegerLeastSquareSolver, t_IntegerLeastSquareSolver, IntegerLeastSquareSolver);

          void t_IntegerLeastSquareSolver::install(PyObject *module)
          {
            installType(&PY_TYPE(IntegerLeastSquareSolver), &PY_TYPE_DEF(IntegerLeastSquareSolver), module, "IntegerLeastSquareSolver", 0);
          }

          void t_IntegerLeastSquareSolver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "class_", make_descriptor(IntegerLeastSquareSolver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "wrapfn_", make_descriptor(t_IntegerLeastSquareSolver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerLeastSquareSolver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntegerLeastSquareSolver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntegerLeastSquareSolver::initializeClass, 1)))
              return NULL;
            return t_IntegerLeastSquareSolver::wrap_Object(IntegerLeastSquareSolver(((t_IntegerLeastSquareSolver *) arg)->object.this$));
          }
          static PyObject *t_IntegerLeastSquareSolver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntegerLeastSquareSolver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntegerLeastSquareSolver_solveILS(t_IntegerLeastSquareSolver *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54Integrator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54Integrator::class$ = NULL;
        jmethodID *DormandPrince54Integrator::mids$ = NULL;
        bool DormandPrince54Integrator::live$ = false;

        jclass DormandPrince54Integrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54Integrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e977212374ff6b] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getA_0358d8ea02f2cdb1] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_60c7040667a7dc5c] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_60c7040667a7dc5c] = env->getMethodID(cls, "getC", "()[D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_78c1246bcb083384] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54StateInterpolator;");
            mids$[mid_estimateError_c892cfaf07a4634f] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_36e977212374ff6b, a0, a1, a2.this$, a3.this$)) {}

        DormandPrince54Integrator::DormandPrince54Integrator(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        JArray< JArray< jdouble > > DormandPrince54Integrator::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_0358d8ea02f2cdb1]));
        }

        JArray< jdouble > DormandPrince54Integrator::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_60c7040667a7dc5c]));
        }

        JArray< jdouble > DormandPrince54Integrator::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_60c7040667a7dc5c]));
        }

        jint DormandPrince54Integrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
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
        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args);
        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data);
        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data);
        static PyGetSetDef t_DormandPrince54Integrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54Integrator, order),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54Integrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54Integrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54Integrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54Integrator)[] = {
          { Py_tp_methods, t_DormandPrince54Integrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54Integrator_init_ },
          { Py_tp_getset, t_DormandPrince54Integrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54Integrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54Integrator, t_DormandPrince54Integrator, DormandPrince54Integrator);

        void t_DormandPrince54Integrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54Integrator), &PY_TYPE_DEF(DormandPrince54Integrator), module, "DormandPrince54Integrator", 0);
        }

        void t_DormandPrince54Integrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "class_", make_descriptor(DormandPrince54Integrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "wrapfn_", make_descriptor(t_DormandPrince54Integrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54Integrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54Integrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54Integrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54Integrator::wrap_Object(DormandPrince54Integrator(((t_DormandPrince54Integrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54Integrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54Integrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DormandPrince54Integrator_init_(t_DormandPrince54Integrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              DormandPrince54Integrator object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DormandPrince54Integrator(a0, a1, a2, a3));
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

        static PyObject *t_DormandPrince54Integrator_getA(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getB(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getC(t_DormandPrince54Integrator *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return result.wrap();
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_getOrder(t_DormandPrince54Integrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54Integrator), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_DormandPrince54Integrator_get__a(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54Integrator_get__b(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__c(t_DormandPrince54Integrator *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }

        static PyObject *t_DormandPrince54Integrator_get__order(t_DormandPrince54Integrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/AbstractFieldOfView.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *AbstractFieldOfView::class$ = NULL;
        jmethodID *AbstractFieldOfView::mids$ = NULL;
        bool AbstractFieldOfView::live$ = false;

        jclass AbstractFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/AbstractFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMargin_dff5885c2c873297] = env->getMethodID(cls, "getMargin", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractFieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_dff5885c2c873297]);
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
    namespace geometry {
      namespace fov {
        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self);
        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data);
        static PyGetSetDef t_AbstractFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldOfView__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldOfView, getMargin, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldOfView)[] = {
          { Py_tp_methods, t_AbstractFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldOfView, t_AbstractFieldOfView, AbstractFieldOfView);

        void t_AbstractFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldOfView), &PY_TYPE_DEF(AbstractFieldOfView), module, "AbstractFieldOfView", 0);
        }

        void t_AbstractFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "class_", make_descriptor(AbstractFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "wrapfn_", make_descriptor(t_AbstractFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldOfView::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldOfView::wrap_Object(AbstractFieldOfView(((t_AbstractFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldOfView_getMargin(t_AbstractFieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractFieldOfView_get__margin(t_AbstractFieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGauss::class$ = NULL;
        jmethodID *IodGauss::mids$ = NULL;
        bool IodGauss::live$ = false;

        jclass IodGauss::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGauss");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_12719eba39e9d7d3] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e5fb064d6de252af] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_bba28df4d6850362] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGauss::IodGauss(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_12719eba39e9d7d3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e5fb064d6de252af], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a9) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_bba28df4d6850362], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
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
      namespace iod {
        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args);

        static PyMethodDef t_IodGauss__methods_[] = {
          DECLARE_METHOD(t_IodGauss, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGauss, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGauss)[] = {
          { Py_tp_methods, t_IodGauss__methods_ },
          { Py_tp_init, (void *) t_IodGauss_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGauss)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGauss, t_IodGauss, IodGauss);

        void t_IodGauss::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGauss), &PY_TYPE_DEF(IodGauss), module, "IodGauss", 0);
        }

        void t_IodGauss::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "class_", make_descriptor(IodGauss::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "wrapfn_", make_descriptor(t_IodGauss::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGauss), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGauss_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGauss::initializeClass, 1)))
            return NULL;
          return t_IodGauss::wrap_Object(IodGauss(((t_IodGauss *) arg)->object.this$));
        }
        static PyObject *t_IodGauss_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGauss::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGauss_init_(t_IodGauss *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGauss object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGauss(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGauss_estimate(t_IodGauss *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a9((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateFunction::mids$ = NULL;
      bool CalculusFieldMultivariateFunction::live$ = false;

      jclass CalculusFieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_f2dc4f0d2f87d390] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement CalculusFieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_f2dc4f0d2f87d390], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateFunction, t_CalculusFieldMultivariateFunction, CalculusFieldMultivariateFunction);
      PyObject *t_CalculusFieldMultivariateFunction::wrap_Object(const CalculusFieldMultivariateFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateFunction *self = (t_CalculusFieldMultivariateFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateFunction), &PY_TYPE_DEF(CalculusFieldMultivariateFunction), module, "CalculusFieldMultivariateFunction", 0);
      }

      void t_CalculusFieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "class_", make_descriptor(CalculusFieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateFunction::wrap_Object(CalculusFieldMultivariateFunction(((t_CalculusFieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateFunction_of_(t_CalculusFieldMultivariateFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateFunction_value(t_CalculusFieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateFunction_get__parameters_(t_CalculusFieldMultivariateFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKCoordinateSystem::class$ = NULL;
        jmethodID *STKEphemerisFile$STKCoordinateSystem::mids$ = NULL;
        bool STKEphemerisFile$STKCoordinateSystem::live$ = false;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::FIXED = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::ICRF = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::INERTIAL = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::J2000 = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE = NULL;
        STKEphemerisFile$STKCoordinateSystem *STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE = NULL;

        jclass STKEphemerisFile$STKCoordinateSystem::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_6bb8ad188765d66f] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_valueOf_6bb8ad188765d66f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");
            mids$[mid_values_b2e10462e755d0fa] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            FIXED = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "FIXED", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            ICRF = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            INERTIAL = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "INERTIAL", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            J2000 = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            MEAN_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "MEAN_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TEME_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TEME_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            TRUE_OF_DATE = new STKEphemerisFile$STKCoordinateSystem(env->getStaticObjectField(cls, "TRUE_OF_DATE", "Lorg/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_parse_6bb8ad188765d66f], a0.this$));
        }

        STKEphemerisFile$STKCoordinateSystem STKEphemerisFile$STKCoordinateSystem::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return STKEphemerisFile$STKCoordinateSystem(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6bb8ad188765d66f], a0.this$));
        }

        JArray< STKEphemerisFile$STKCoordinateSystem > STKEphemerisFile$STKCoordinateSystem::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< STKEphemerisFile$STKCoordinateSystem >(env->callStaticObjectMethod(cls, mids$[mid_values_b2e10462e755d0fa]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type);
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKCoordinateSystem__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKCoordinateSystem, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKCoordinateSystem__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, of_, METH_VARARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKCoordinateSystem, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKCoordinateSystem)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKCoordinateSystem__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_STKEphemerisFile$STKCoordinateSystem__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKCoordinateSystem)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKCoordinateSystem, t_STKEphemerisFile$STKCoordinateSystem, STKEphemerisFile$STKCoordinateSystem);
        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(const STKEphemerisFile$STKCoordinateSystem& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_STKEphemerisFile$STKCoordinateSystem *self = (t_STKEphemerisFile$STKCoordinateSystem *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_STKEphemerisFile$STKCoordinateSystem::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKCoordinateSystem), &PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem), module, "STKEphemerisFile$STKCoordinateSystem", 0);
        }

        void t_STKEphemerisFile$STKCoordinateSystem::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "class_", make_descriptor(STKEphemerisFile$STKCoordinateSystem::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "boxfn_", make_descriptor(boxObject));
          env->getClass(STKEphemerisFile$STKCoordinateSystem::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "FIXED", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::FIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "ICRF", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::ICRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "INERTIAL", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::INERTIAL)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "J2000", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::J2000)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "MEAN_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::MEAN_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TEME_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TEME_OF_DATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKCoordinateSystem), "TRUE_OF_DATE", make_descriptor(t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(*STKEphemerisFile$STKCoordinateSystem::TRUE_OF_DATE)));
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(STKEphemerisFile$STKCoordinateSystem(((t_STKEphemerisFile$STKCoordinateSystem *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKCoordinateSystem::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_of_(t_STKEphemerisFile$STKCoordinateSystem *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::parse(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          STKEphemerisFile$STKCoordinateSystem result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::valueOf(a0));
            return t_STKEphemerisFile$STKCoordinateSystem::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_values(PyTypeObject *type)
        {
          JArray< STKEphemerisFile$STKCoordinateSystem > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::stk::STKEphemerisFile$STKCoordinateSystem::values());
          return JArray<jobject>(result.this$).wrap(t_STKEphemerisFile$STKCoordinateSystem::wrap_jobject);
        }
        static PyObject *t_STKEphemerisFile$STKCoordinateSystem_get__parameters_(t_STKEphemerisFile$STKCoordinateSystem *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalarFunction::class$ = NULL;
      jmethodID *TimeScalarFunction::mids$ = NULL;
      bool TimeScalarFunction::live$ = false;

      jclass TimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_bf1d7732f1acb697] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_2a5f05be83ff251d] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeScalarFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TimeScalarFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_2a5f05be83ff251d], a0.this$));
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
      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args);

      static PyMethodDef t_TimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_TimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalarFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalarFunction)[] = {
        { Py_tp_methods, t_TimeScalarFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalarFunction, t_TimeScalarFunction, TimeScalarFunction);

      void t_TimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalarFunction), &PY_TYPE_DEF(TimeScalarFunction), module, "TimeScalarFunction", 0);
      }

      void t_TimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "class_", make_descriptor(TimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "wrapfn_", make_descriptor(t_TimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalarFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_TimeScalarFunction::wrap_Object(TimeScalarFunction(((t_TimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalarFunction_value(t_TimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/SecantSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *SecantSolver::class$ = NULL;
        jmethodID *SecantSolver::mids$ = NULL;
        bool SecantSolver::live$ = false;

        jclass SecantSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/SecantSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_doSolve_dff5885c2c873297] = env->getMethodID(cls, "doSolve", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SecantSolver::SecantSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SecantSolver::SecantSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        SecantSolver::SecantSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}
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
      namespace solvers {
        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args);
        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data);
        static PyGetSetDef t_SecantSolver__fields_[] = {
          DECLARE_GET_FIELD(t_SecantSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SecantSolver__methods_[] = {
          DECLARE_METHOD(t_SecantSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SecantSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SecantSolver)[] = {
          { Py_tp_methods, t_SecantSolver__methods_ },
          { Py_tp_init, (void *) t_SecantSolver_init_ },
          { Py_tp_getset, t_SecantSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SecantSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(SecantSolver, t_SecantSolver, SecantSolver);
        PyObject *t_SecantSolver::wrap_Object(const SecantSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SecantSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SecantSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SecantSolver *self = (t_SecantSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SecantSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(SecantSolver), &PY_TYPE_DEF(SecantSolver), module, "SecantSolver", 0);
        }

        void t_SecantSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "class_", make_descriptor(SecantSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "wrapfn_", make_descriptor(t_SecantSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SecantSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SecantSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SecantSolver::initializeClass, 1)))
            return NULL;
          return t_SecantSolver::wrap_Object(SecantSolver(((t_SecantSolver *) arg)->object.this$));
        }
        static PyObject *t_SecantSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SecantSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SecantSolver_of_(t_SecantSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SecantSolver_init_(t_SecantSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SecantSolver object((jobject) NULL);

              INT_CALL(object = SecantSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = SecantSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SecantSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SecantSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
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
        static PyObject *t_SecantSolver_get__parameters_(t_SecantSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/StreamedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamedMessage::class$ = NULL;
          jmethodID *StreamedMessage::mids$ = NULL;
          bool StreamedMessage::live$ = false;

          jclass StreamedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
              mids$[mid_getRate_570ce0828f81a2c1] = env->getMethodID(cls, "getRate", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String StreamedMessage::getId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
          }

          jint StreamedMessage::getRate() const
          {
            return env->callIntMethod(this$, mids$[mid_getRate_570ce0828f81a2c1]);
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
        namespace ntrip {
          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self);
          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data);
          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data);
          static PyGetSetDef t_StreamedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_StreamedMessage, id),
            DECLARE_GET_FIELD(t_StreamedMessage, rate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamedMessage__methods_[] = {
            DECLARE_METHOD(t_StreamedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamedMessage, getId, METH_NOARGS),
            DECLARE_METHOD(t_StreamedMessage, getRate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamedMessage)[] = {
            { Py_tp_methods, t_StreamedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StreamedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StreamedMessage, t_StreamedMessage, StreamedMessage);

          void t_StreamedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamedMessage), &PY_TYPE_DEF(StreamedMessage), module, "StreamedMessage", 0);
          }

          void t_StreamedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "class_", make_descriptor(StreamedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "wrapfn_", make_descriptor(t_StreamedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamedMessage::initializeClass, 1)))
              return NULL;
            return t_StreamedMessage::wrap_Object(StreamedMessage(((t_StreamedMessage *) arg)->object.this$));
          }
          static PyObject *t_StreamedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StreamedMessage_getId(t_StreamedMessage *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getId());
            return j2p(result);
          }

          static PyObject *t_StreamedMessage_getRate(t_StreamedMessage *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRate());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_StreamedMessage_get__id(t_StreamedMessage *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getId());
            return j2p(value);
          }

          static PyObject *t_StreamedMessage_get__rate(t_StreamedMessage *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRate());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalMeasurementHandler::class$ = NULL;
        jmethodID *SemiAnalyticalMeasurementHandler::mids$ = NULL;
        bool SemiAnalyticalMeasurementHandler::live$ = false;

        jclass SemiAnalyticalMeasurementHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2f5c48307ae3f24f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_699981b9b0125762] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;Z)V");
            mids$[mid_handleStep_aa75aa80a734fb3b] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2f5c48307ae3f24f, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_699981b9b0125762, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        void SemiAnalyticalMeasurementHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_aa75aa80a734fb3b], a0.this$);
        }

        void SemiAnalyticalMeasurementHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args);

        static PyMethodDef t_SemiAnalyticalMeasurementHandler__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, handleStep, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalMeasurementHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalMeasurementHandler)[] = {
          { Py_tp_methods, t_SemiAnalyticalMeasurementHandler__methods_ },
          { Py_tp_init, (void *) t_SemiAnalyticalMeasurementHandler_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalMeasurementHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalMeasurementHandler, t_SemiAnalyticalMeasurementHandler, SemiAnalyticalMeasurementHandler);

        void t_SemiAnalyticalMeasurementHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalMeasurementHandler), &PY_TYPE_DEF(SemiAnalyticalMeasurementHandler), module, "SemiAnalyticalMeasurementHandler", 0);
        }

        void t_SemiAnalyticalMeasurementHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "class_", make_descriptor(SemiAnalyticalMeasurementHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "wrapfn_", make_descriptor(t_SemiAnalyticalMeasurementHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalMeasurementHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalMeasurementHandler::wrap_Object(SemiAnalyticalMeasurementHandler(((t_SemiAnalyticalMeasurementHandler *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalMeasurementHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalMeasurementHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SemiAnalyticalMeasurementHandler_init_(t_SemiAnalyticalMeasurementHandler *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::estimation::sequential::SemiAnalyticalProcess a0((jobject) NULL);
              ::org::hipparchus::filtering::kalman::KalmanFilter a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
              jboolean a4;
              SemiAnalyticalMeasurementHandler object((jobject) NULL);

              if (!parseArgs(args, "kKKkZ", ::org::orekit::estimation::sequential::SemiAnalyticalProcess::initializeClass, ::org::hipparchus::filtering::kalman::KalmanFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::t_KalmanFilter::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
              {
                INT_CALL(object = SemiAnalyticalMeasurementHandler(a0, a1, a2, a3, a4));
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

        static PyObject *t_SemiAnalyticalMeasurementHandler_handleStep(t_SemiAnalyticalMeasurementHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalMeasurementHandler_init(t_SemiAnalyticalMeasurementHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationKey::class$ = NULL;
              jmethodID *AttitudeDeterminationKey::mids$ = NULL;
              bool AttitudeDeterminationKey::live$ = false;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_METHOD = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_PREV_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_SOURCE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COMMENT = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COV_TYPE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::EULER_ROT_SEQ = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::NUMBER_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_A = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_B = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SENSOR = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_U = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_V = NULL;

              jclass AttitudeDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_34dbc793aacbfa8b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;)Z");
                  mids$[mid_valueOf_e3d6ea63ba9ee177] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");
                  mids$[mid_values_b33701ce494f5d3b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_METHOD = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_PREV_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_SOURCE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_SOURCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COMMENT = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COV_TYPE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  EULER_ROT_SEQ = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  NUMBER_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_PROCESS_NOISE_STDDEV = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_PROCESS_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_A = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_B = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SENSOR = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_U = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_U", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_V = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_V", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1, const ::org::orekit::files::ccsds::utils::ContextBinding & a2, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_34dbc793aacbfa8b], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              AttitudeDeterminationKey AttitudeDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e3d6ea63ba9ee177], a0.this$));
              }

              JArray< AttitudeDeterminationKey > AttitudeDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b33701ce494f5d3b]));
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
              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationKey, t_AttitudeDeterminationKey, AttitudeDeterminationKey);
              PyObject *t_AttitudeDeterminationKey::wrap_Object(const AttitudeDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationKey), &PY_TYPE_DEF(AttitudeDeterminationKey), module, "AttitudeDeterminationKey", 0);
              }

              void t_AttitudeDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "class_", make_descriptor(AttitudeDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_METHOD", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_PREV_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_SOURCE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COMMENT", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COV_TYPE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "NUMBER_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_PROCESS_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_A", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_B", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SENSOR", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SENSOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_U", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_U)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_V", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_V)));
              }

              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationKey::wrap_Object(AttitudeDeterminationKey(((t_AttitudeDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::utils::ContextBinding a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::valueOf(a0));
                  return t_AttitudeDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data)
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
#include "org/hipparchus/distribution/discrete/PoissonDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PoissonDistribution::class$ = NULL;
        jmethodID *PoissonDistribution::mids$ = NULL;
        bool PoissonDistribution::live$ = false;
        jdouble PoissonDistribution::DEFAULT_EPSILON = (jdouble) 0;
        jint PoissonDistribution::DEFAULT_MAX_ITERATIONS = (jint) 0;

        jclass PoissonDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PoissonDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_normalApproximateProbability_46f85b53d9aedd96] = env->getMethodID(cls, "normalApproximateProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
            DEFAULT_MAX_ITERATIONS = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PoissonDistribution::PoissonDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

        PoissonDistribution::PoissonDistribution(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

        jdouble PoissonDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jdouble PoissonDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble PoissonDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble PoissonDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jint PoissonDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint PoissonDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean PoissonDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble PoissonDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble PoissonDistribution::normalApproximateProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_normalApproximateProbability_46f85b53d9aedd96], a0);
        }

        jdouble PoissonDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
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
      namespace discrete {
        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self);
        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg);
        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args);
        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data);
        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data);
        static PyGetSetDef t_PoissonDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PoissonDistribution, mean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PoissonDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PoissonDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PoissonDistribution__methods_[] = {
          DECLARE_METHOD(t_PoissonDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PoissonDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PoissonDistribution, normalApproximateProbability, METH_O),
          DECLARE_METHOD(t_PoissonDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PoissonDistribution)[] = {
          { Py_tp_methods, t_PoissonDistribution__methods_ },
          { Py_tp_init, (void *) t_PoissonDistribution_init_ },
          { Py_tp_getset, t_PoissonDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PoissonDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PoissonDistribution, t_PoissonDistribution, PoissonDistribution);

        void t_PoissonDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PoissonDistribution), &PY_TYPE_DEF(PoissonDistribution), module, "PoissonDistribution", 0);
        }

        void t_PoissonDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "class_", make_descriptor(PoissonDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "wrapfn_", make_descriptor(t_PoissonDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "boxfn_", make_descriptor(boxObject));
          env->getClass(PoissonDistribution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_EPSILON", make_descriptor(PoissonDistribution::DEFAULT_EPSILON));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonDistribution), "DEFAULT_MAX_ITERATIONS", make_descriptor(PoissonDistribution::DEFAULT_MAX_ITERATIONS));
        }

        static PyObject *t_PoissonDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PoissonDistribution::initializeClass, 1)))
            return NULL;
          return t_PoissonDistribution::wrap_Object(PoissonDistribution(((t_PoissonDistribution *) arg)->object.this$));
        }
        static PyObject *t_PoissonDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PoissonDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PoissonDistribution_init_(t_PoissonDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = PoissonDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jint a1;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = PoissonDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              PoissonDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = PoissonDistribution(a0, a1, a2));
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

        static PyObject *t_PoissonDistribution_cumulativeProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_getMean(t_PoissonDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PoissonDistribution_getNumericalMean(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PoissonDistribution_getNumericalVariance(t_PoissonDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportLowerBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_getSupportUpperBound(t_PoissonDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PoissonDistribution_isSupportConnected(t_PoissonDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PoissonDistribution_logProbability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PoissonDistribution_normalApproximateProbability(t_PoissonDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.normalApproximateProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "normalApproximateProbability", arg);
          return NULL;
        }

        static PyObject *t_PoissonDistribution_probability(t_PoissonDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PoissonDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PoissonDistribution_get__mean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalMean(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__numericalVariance(t_PoissonDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PoissonDistribution_get__supportConnected(t_PoissonDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PoissonDistribution_get__supportLowerBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PoissonDistribution_get__supportUpperBound(t_PoissonDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *NonLinearProcess::class$ = NULL;
          jmethodID *NonLinearProcess::mids$ = NULL;
          bool NonLinearProcess::live$ = false;

          jclass NonLinearProcess::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/NonLinearProcess");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEvolution_892f202f3cb65eb1] = env->getMethodID(cls, "getEvolution", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;");
              mids$[mid_getInnovation_b7c667ec5a07ed5f] = env->getMethodID(cls, "getInnovation", "(Lorg/hipparchus/filtering/kalman/Measurement;Lorg/hipparchus/filtering/kalman/extended/NonLinearEvolution;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution NonLinearProcess::getEvolution(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::filtering::kalman::Measurement & a2) const
          {
            return ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_892f202f3cb65eb1], a0, a1.this$, a2.this$));
          }

          ::org::hipparchus::linear::RealVector NonLinearProcess::getInnovation(const ::org::hipparchus::filtering::kalman::Measurement & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution & a1, const ::org::hipparchus::linear::RealMatrix & a2) const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_b7c667ec5a07ed5f], a0.this$, a1.this$, a2.this$));
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
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args);
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data);
          static PyGetSetDef t_NonLinearProcess__fields_[] = {
            DECLARE_GET_FIELD(t_NonLinearProcess, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NonLinearProcess__methods_[] = {
            DECLARE_METHOD(t_NonLinearProcess, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NonLinearProcess, of_, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getEvolution, METH_VARARGS),
            DECLARE_METHOD(t_NonLinearProcess, getInnovation, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NonLinearProcess)[] = {
            { Py_tp_methods, t_NonLinearProcess__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NonLinearProcess__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NonLinearProcess)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NonLinearProcess, t_NonLinearProcess, NonLinearProcess);
          PyObject *t_NonLinearProcess::wrap_Object(const NonLinearProcess& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NonLinearProcess::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NonLinearProcess::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NonLinearProcess *self = (t_NonLinearProcess *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NonLinearProcess::install(PyObject *module)
          {
            installType(&PY_TYPE(NonLinearProcess), &PY_TYPE_DEF(NonLinearProcess), module, "NonLinearProcess", 0);
          }

          void t_NonLinearProcess::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "class_", make_descriptor(NonLinearProcess::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "wrapfn_", make_descriptor(t_NonLinearProcess::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearProcess), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NonLinearProcess_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NonLinearProcess::initializeClass, 1)))
              return NULL;
            return t_NonLinearProcess::wrap_Object(NonLinearProcess(((t_NonLinearProcess *) arg)->object.this$));
          }
          static PyObject *t_NonLinearProcess_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NonLinearProcess::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NonLinearProcess_of_(t_NonLinearProcess *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NonLinearProcess_getEvolution(t_NonLinearProcess *self, PyObject *args)
          {
            jdouble a0;
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::filtering::kalman::Measurement a2((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution result((jobject) NULL);

            if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
              return ::org::hipparchus::filtering::kalman::extended::t_NonLinearEvolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
            return NULL;
          }

          static PyObject *t_NonLinearProcess_getInnovation(t_NonLinearProcess *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution a1((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearEvolution::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getInnovation(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
            return NULL;
          }
          static PyObject *t_NonLinearProcess_get__parameters_(t_NonLinearProcess *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *NonLinearConjugateGradientOptimizer$Formula::class$ = NULL;
            jmethodID *NonLinearConjugateGradientOptimizer$Formula::mids$ = NULL;
            bool NonLinearConjugateGradientOptimizer$Formula::live$ = false;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES = NULL;
            NonLinearConjugateGradientOptimizer$Formula *NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE = NULL;

            jclass NonLinearConjugateGradientOptimizer$Formula::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ae25b8b4e8d7c84a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");
                mids$[mid_values_f6e3985d7fdc4051] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FLETCHER_REEVES = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "FLETCHER_REEVES", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                POLAK_RIBIERE = new NonLinearConjugateGradientOptimizer$Formula(env->getStaticObjectField(cls, "POLAK_RIBIERE", "Lorg/hipparchus/optim/nonlinear/scalar/gradient/NonLinearConjugateGradientOptimizer$Formula;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            NonLinearConjugateGradientOptimizer$Formula NonLinearConjugateGradientOptimizer$Formula::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return NonLinearConjugateGradientOptimizer$Formula(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ae25b8b4e8d7c84a], a0.this$));
            }

            JArray< NonLinearConjugateGradientOptimizer$Formula > NonLinearConjugateGradientOptimizer$Formula::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< NonLinearConjugateGradientOptimizer$Formula >(env->callStaticObjectMethod(cls, mids$[mid_values_f6e3985d7fdc4051]));
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
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type);
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data);
            static PyGetSetDef t_NonLinearConjugateGradientOptimizer$Formula__fields_[] = {
              DECLARE_GET_FIELD(t_NonLinearConjugateGradientOptimizer$Formula, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_NonLinearConjugateGradientOptimizer$Formula__methods_[] = {
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, of_, METH_VARARGS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_NonLinearConjugateGradientOptimizer$Formula, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NonLinearConjugateGradientOptimizer$Formula)[] = {
              { Py_tp_methods, t_NonLinearConjugateGradientOptimizer$Formula__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_NonLinearConjugateGradientOptimizer$Formula__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NonLinearConjugateGradientOptimizer$Formula)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(NonLinearConjugateGradientOptimizer$Formula, t_NonLinearConjugateGradientOptimizer$Formula, NonLinearConjugateGradientOptimizer$Formula);
            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(const NonLinearConjugateGradientOptimizer$Formula& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_NonLinearConjugateGradientOptimizer$Formula *self = (t_NonLinearConjugateGradientOptimizer$Formula *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::install(PyObject *module)
            {
              installType(&PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), &PY_TYPE_DEF(NonLinearConjugateGradientOptimizer$Formula), module, "NonLinearConjugateGradientOptimizer$Formula", 0);
            }

            void t_NonLinearConjugateGradientOptimizer$Formula::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "class_", make_descriptor(NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "wrapfn_", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "boxfn_", make_descriptor(boxObject));
              env->getClass(NonLinearConjugateGradientOptimizer$Formula::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "FLETCHER_REEVES", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::FLETCHER_REEVES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NonLinearConjugateGradientOptimizer$Formula), "POLAK_RIBIERE", make_descriptor(t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(*NonLinearConjugateGradientOptimizer$Formula::POLAK_RIBIERE)));
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 1)))
                return NULL;
              return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(NonLinearConjugateGradientOptimizer$Formula(((t_NonLinearConjugateGradientOptimizer$Formula *) arg)->object.this$));
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NonLinearConjugateGradientOptimizer$Formula::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_of_(t_NonLinearConjugateGradientOptimizer$Formula *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              NonLinearConjugateGradientOptimizer$Formula result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::valueOf(a0));
                return t_NonLinearConjugateGradientOptimizer$Formula::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_values(PyTypeObject *type)
            {
              JArray< NonLinearConjugateGradientOptimizer$Formula > result((jobject) NULL);
              OBJ_CALL(result = ::org::hipparchus::optim::nonlinear::scalar::gradient::NonLinearConjugateGradientOptimizer$Formula::values());
              return JArray<jobject>(result.this$).wrap(t_NonLinearConjugateGradientOptimizer$Formula::wrap_jobject);
            }
            static PyObject *t_NonLinearConjugateGradientOptimizer$Formula_get__parameters_(t_NonLinearConjugateGradientOptimizer$Formula *self, void *data)
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
#include "org/hipparchus/ode/MultistepFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepFieldIntegrator::class$ = NULL;
      jmethodID *MultistepFieldIntegrator::mids$ = NULL;
      bool MultistepFieldIntegrator::live$ = false;

      jclass MultistepFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_dff5885c2c873297] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_dff5885c2c873297] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_570ce0828f81a2c1] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_dff5885c2c873297] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_64366de6ee97364a] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/FieldODEIntegrator;");
          mids$[mid_setMaxGrowth_17db3a65980d3441] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_17db3a65980d3441] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_17db3a65980d3441] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_b912abd7b84ac44c] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/FieldODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_8a387f2c5f491083] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_dcbc7ce2902fa136] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_072c8635f2164db9] = env->getMethodID(cls, "rescale", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_start_2983f8f6ad2f6b4a] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepFieldIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_dff5885c2c873297]);
      }

      jdouble MultistepFieldIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_dff5885c2c873297]);
      }

      jint MultistepFieldIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_570ce0828f81a2c1]);
      }

      jdouble MultistepFieldIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_dff5885c2c873297]);
      }

      ::org::hipparchus::ode::FieldODEIntegrator MultistepFieldIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::FieldODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_64366de6ee97364a]));
      }

      void MultistepFieldIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_17db3a65980d3441], a0);
      }

      void MultistepFieldIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_17db3a65980d3441], a0);
      }

      void MultistepFieldIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_17db3a65980d3441], a0);
      }

      void MultistepFieldIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::FieldODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_b912abd7b84ac44c], a0.this$);
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
      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args);
      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self);
      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data);
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data);
      static PyGetSetDef t_MultistepFieldIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepFieldIntegrator, starterIntegrator),
        DECLARE_GET_FIELD(t_MultistepFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepFieldIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepFieldIntegrator)[] = {
        { Py_tp_methods, t_MultistepFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepFieldIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepFieldIntegrator, t_MultistepFieldIntegrator, MultistepFieldIntegrator);
      PyObject *t_MultistepFieldIntegrator::wrap_Object(const MultistepFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_MultistepFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_MultistepFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_MultistepFieldIntegrator *self = (t_MultistepFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_MultistepFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepFieldIntegrator), &PY_TYPE_DEF(MultistepFieldIntegrator), module, "MultistepFieldIntegrator", 0);
      }

      void t_MultistepFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "class_", make_descriptor(MultistepFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "wrapfn_", make_descriptor(t_MultistepFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepFieldIntegrator::wrap_Object(MultistepFieldIntegrator(((t_MultistepFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepFieldIntegrator_of_(t_MultistepFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_MultistepFieldIntegrator_getMaxGrowth(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getMinReduction(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getNSteps(t_MultistepFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getSafety(t_MultistepFieldIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepFieldIntegrator_getStarterIntegrator(t_MultistepFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_MultistepFieldIntegrator_setMaxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxGrowth(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setMinReduction(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinReduction(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setSafety(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setSafety(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
        return NULL;
      }

      static PyObject *t_MultistepFieldIntegrator_setStarterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEIntegrator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }
      static PyObject *t_MultistepFieldIntegrator_get__parameters_(t_MultistepFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_MultistepFieldIntegrator_get__maxGrowth(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__maxGrowth(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxGrowth(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__minReduction(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__minReduction(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinReduction(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__nSteps(t_MultistepFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepFieldIntegrator_get__safety(t_MultistepFieldIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepFieldIntegrator_set__safety(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setSafety(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "safety", arg);
        return -1;
      }

      static PyObject *t_MultistepFieldIntegrator_get__starterIntegrator(t_MultistepFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepFieldIntegrator_set__starterIntegrator(t_MultistepFieldIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::FieldODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonODEIntegratorBuilder::class$ = NULL;
        jmethodID *PythonODEIntegratorBuilder::mids$ = NULL;
        bool PythonODEIntegratorBuilder::live$ = false;

        jclass PythonODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonODEIntegratorBuilder::PythonODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonODEIntegratorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self);
        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data);
        static PyGetSetDef t_PythonODEIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonODEIntegratorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonODEIntegratorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_PythonODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonODEIntegratorBuilder_init_ },
          { Py_tp_getset, t_PythonODEIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonODEIntegratorBuilder, t_PythonODEIntegratorBuilder, PythonODEIntegratorBuilder);

        void t_PythonODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonODEIntegratorBuilder), &PY_TYPE_DEF(PythonODEIntegratorBuilder), module, "PythonODEIntegratorBuilder", 1);
        }

        void t_PythonODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "class_", make_descriptor(PythonODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "wrapfn_", make_descriptor(t_PythonODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonODEIntegratorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;", (void *) t_PythonODEIntegratorBuilder_buildIntegrator0 },
            { "pythonDecRef", "()V", (void *) t_PythonODEIntegratorBuilder_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonODEIntegratorBuilder::wrap_Object(PythonODEIntegratorBuilder(((t_PythonODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonODEIntegratorBuilder_init_(t_PythonODEIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonODEIntegratorBuilder object((jobject) NULL);

          INT_CALL(object = PythonODEIntegratorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonODEIntegratorBuilder_finalize(t_PythonODEIntegratorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonODEIntegratorBuilder_pythonExtension(t_PythonODEIntegratorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonODEIntegratorBuilder_buildIntegrator0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::ode::AbstractIntegrator value((jobject) NULL);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *o1 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a1));
          PyObject *result = PyObject_CallMethod(obj, "buildIntegrator", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::ode::AbstractIntegrator::initializeClass, &value))
          {
            throwTypeError("buildIntegrator", result);
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

        static void JNICALL t_PythonODEIntegratorBuilder_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonODEIntegratorBuilder_get__self(t_PythonODEIntegratorBuilder *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ExponentialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ExponentialDistribution::class$ = NULL;
        jmethodID *ExponentialDistribution::mids$ = NULL;
        bool ExponentialDistribution::live$ = false;

        jclass ExponentialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ExponentialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_dcbc7ce2902fa136] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExponentialDistribution::ExponentialDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble ExponentialDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble ExponentialDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble ExponentialDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble ExponentialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble ExponentialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble ExponentialDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble ExponentialDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jdouble ExponentialDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jboolean ExponentialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble ExponentialDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_dcbc7ce2902fa136], a0);
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
        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self);
        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args);
        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data);
        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data);
        static PyGetSetDef t_ExponentialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ExponentialDistribution, mean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ExponentialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ExponentialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExponentialDistribution__methods_[] = {
          DECLARE_METHOD(t_ExponentialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExponentialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ExponentialDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExponentialDistribution)[] = {
          { Py_tp_methods, t_ExponentialDistribution__methods_ },
          { Py_tp_init, (void *) t_ExponentialDistribution_init_ },
          { Py_tp_getset, t_ExponentialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExponentialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ExponentialDistribution, t_ExponentialDistribution, ExponentialDistribution);

        void t_ExponentialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ExponentialDistribution), &PY_TYPE_DEF(ExponentialDistribution), module, "ExponentialDistribution", 0);
        }

        void t_ExponentialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "class_", make_descriptor(ExponentialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "wrapfn_", make_descriptor(t_ExponentialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExponentialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExponentialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExponentialDistribution::initializeClass, 1)))
            return NULL;
          return t_ExponentialDistribution::wrap_Object(ExponentialDistribution(((t_ExponentialDistribution *) arg)->object.this$));
        }
        static PyObject *t_ExponentialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExponentialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExponentialDistribution_init_(t_ExponentialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ExponentialDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ExponentialDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExponentialDistribution_cumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_density(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getMean(t_ExponentialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ExponentialDistribution_getNumericalMean(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getNumericalVariance(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportLowerBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_getSupportUpperBound(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ExponentialDistribution_inverseCumulativeProbability(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_ExponentialDistribution_isSupportConnected(t_ExponentialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ExponentialDistribution_logDensity(t_ExponentialDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExponentialDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ExponentialDistribution_get__mean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalMean(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__numericalVariance(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportConnected(t_ExponentialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ExponentialDistribution_get__supportLowerBound(t_ExponentialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ExponentialDistribution_get__supportUpperBound(t_ExponentialDistribution *self, void *data)
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
#include "org/orekit/time/GLONASSDate.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GLONASSDate::class$ = NULL;
      jmethodID *GLONASSDate::mids$ = NULL;
      bool GLONASSDate::live$ = false;

      jclass GLONASSDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GLONASSDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_83d5b0065691b874] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_1506189166690b5e] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_init$_9e28ee401d3a2b1f] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDayNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getDayNumber", "()I");
          mids$[mid_getGMST_dff5885c2c873297] = env->getMethodID(cls, "getGMST", "()D");
          mids$[mid_getIntervalNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getIntervalNumber", "()I");
          mids$[mid_getJD0_dff5885c2c873297] = env->getMethodID(cls, "getJD0", "()D");
          mids$[mid_getSecInDay_dff5885c2c873297] = env->getMethodID(cls, "getSecInDay", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

      GLONASSDate::GLONASSDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_83d5b0065691b874, a0.this$, a1.this$)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1506189166690b5e, a0, a1, a2)) {}

      GLONASSDate::GLONASSDate(jint a0, jint a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e28ee401d3a2b1f, a0, a1, a2, a3.this$)) {}

      ::org::orekit::time::AbsoluteDate GLONASSDate::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jint GLONASSDate::getDayNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getDayNumber_570ce0828f81a2c1]);
      }

      jdouble GLONASSDate::getGMST() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGMST_dff5885c2c873297]);
      }

      jint GLONASSDate::getIntervalNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getIntervalNumber_570ce0828f81a2c1]);
      }

      jdouble GLONASSDate::getJD0() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getJD0_dff5885c2c873297]);
      }

      jdouble GLONASSDate::getSecInDay() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSecInDay_dff5885c2c873297]);
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
      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self);
      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data);
      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data);
      static PyGetSetDef t_GLONASSDate__fields_[] = {
        DECLARE_GET_FIELD(t_GLONASSDate, date),
        DECLARE_GET_FIELD(t_GLONASSDate, dayNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, gMST),
        DECLARE_GET_FIELD(t_GLONASSDate, intervalNumber),
        DECLARE_GET_FIELD(t_GLONASSDate, jD0),
        DECLARE_GET_FIELD(t_GLONASSDate, secInDay),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GLONASSDate__methods_[] = {
        DECLARE_METHOD(t_GLONASSDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GLONASSDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getDayNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getGMST, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getIntervalNumber, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getJD0, METH_NOARGS),
        DECLARE_METHOD(t_GLONASSDate, getSecInDay, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GLONASSDate)[] = {
        { Py_tp_methods, t_GLONASSDate__methods_ },
        { Py_tp_init, (void *) t_GLONASSDate_init_ },
        { Py_tp_getset, t_GLONASSDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GLONASSDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GLONASSDate, t_GLONASSDate, GLONASSDate);

      void t_GLONASSDate::install(PyObject *module)
      {
        installType(&PY_TYPE(GLONASSDate), &PY_TYPE_DEF(GLONASSDate), module, "GLONASSDate", 0);
      }

      void t_GLONASSDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "class_", make_descriptor(GLONASSDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "wrapfn_", make_descriptor(t_GLONASSDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GLONASSDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GLONASSDate::initializeClass, 1)))
          return NULL;
        return t_GLONASSDate::wrap_Object(GLONASSDate(((t_GLONASSDate *) arg)->object.this$));
      }
      static PyObject *t_GLONASSDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GLONASSDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GLONASSDate_init_(t_GLONASSDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              INT_CALL(object = GLONASSDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GLONASSDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jint a1;
            jdouble a2;
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IID", &a0, &a1, &a2))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jint a1;
            jdouble a2;
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            GLONASSDate object((jobject) NULL);

            if (!parseArgs(args, "IIDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = GLONASSDate(a0, a1, a2, a3));
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

      static PyObject *t_GLONASSDate_getDate(t_GLONASSDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_GLONASSDate_getDayNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDayNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getGMST(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGMST());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getIntervalNumber(t_GLONASSDate *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIntervalNumber());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_GLONASSDate_getJD0(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getJD0());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_getSecInDay(t_GLONASSDate *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSecInDay());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_GLONASSDate_get__date(t_GLONASSDate *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_GLONASSDate_get__dayNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDayNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__gMST(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGMST());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__intervalNumber(t_GLONASSDate *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIntervalNumber());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_GLONASSDate_get__jD0(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getJD0());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_GLONASSDate_get__secInDay(t_GLONASSDate *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSecInDay());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
