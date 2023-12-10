#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *RuntimeException::class$ = NULL;
    jmethodID *RuntimeException::mids$ = NULL;
    bool RuntimeException::live$ = false;

    jclass RuntimeException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/RuntimeException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    RuntimeException::RuntimeException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_RuntimeException__methods_[] = {
      DECLARE_METHOD(t_RuntimeException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RuntimeException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RuntimeException)[] = {
      { Py_tp_methods, t_RuntimeException__methods_ },
      { Py_tp_init, (void *) t_RuntimeException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RuntimeException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(RuntimeException, t_RuntimeException, RuntimeException);

    void t_RuntimeException::install(PyObject *module)
    {
      installType(&PY_TYPE(RuntimeException), &PY_TYPE_DEF(RuntimeException), module, "RuntimeException", 0);
    }

    void t_RuntimeException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "class_", make_descriptor(RuntimeException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "wrapfn_", make_descriptor(t_RuntimeException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RuntimeException::initializeClass, 1)))
        return NULL;
      return t_RuntimeException::wrap_Object(RuntimeException(((t_RuntimeException *) arg)->object.this$));
    }
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RuntimeException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          RuntimeException object((jobject) NULL);

          INT_CALL(object = RuntimeException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = RuntimeException(a0, a1));
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
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDataReleaseFlag_f2f64475e4580546] = env->getMethodID(cls, "getDataReleaseFlag", "()I");
            mids$[mid_getDataType_f2f64475e4580546] = env->getMethodID(cls, "getDataType", "()I");
            mids$[mid_getDateAndTime_0090f7797e403f43] = env->getMethodID(cls, "getDateAndTime", "()Ljava/lang/String;");
            mids$[mid_getEpochIdentifier_f2f64475e4580546] = env->getMethodID(cls, "getEpochIdentifier", "()I");
            mids$[mid_getH1CrdString_0090f7797e403f43] = env->getMethodID(cls, "getH1CrdString", "()Ljava/lang/String;");
            mids$[mid_getH2CrdString_0090f7797e403f43] = env->getMethodID(cls, "getH2CrdString", "()Ljava/lang/String;");
            mids$[mid_getH3CrdString_0090f7797e403f43] = env->getMethodID(cls, "getH3CrdString", "()Ljava/lang/String;");
            mids$[mid_getH4CrdString_0090f7797e403f43] = env->getMethodID(cls, "getH4CrdString", "()Ljava/lang/String;");
            mids$[mid_getH5CrdString_0090f7797e403f43] = env->getMethodID(cls, "getH5CrdString", "()Ljava/lang/String;");
            mids$[mid_getPredictionProvider_0090f7797e403f43] = env->getMethodID(cls, "getPredictionProvider", "()Ljava/lang/String;");
            mids$[mid_getPredictionType_f2f64475e4580546] = env->getMethodID(cls, "getPredictionType", "()I");
            mids$[mid_getQualityIndicator_f2f64475e4580546] = env->getMethodID(cls, "getQualityIndicator", "()I");
            mids$[mid_getRangeType_45572137f73e2f07] = env->getMethodID(cls, "getRangeType", "()Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_getSpacecraftEpochTimeScale_f2f64475e4580546] = env->getMethodID(cls, "getSpacecraftEpochTimeScale", "()I");
            mids$[mid_getStationName_0090f7797e403f43] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
            mids$[mid_getStationNetword_0090f7797e403f43] = env->getMethodID(cls, "getStationNetword", "()Ljava/lang/String;");
            mids$[mid_getSystemIdentifier_f2f64475e4580546] = env->getMethodID(cls, "getSystemIdentifier", "()I");
            mids$[mid_getSystemNumber_f2f64475e4580546] = env->getMethodID(cls, "getSystemNumber", "()I");
            mids$[mid_getSystemOccupancy_f2f64475e4580546] = env->getMethodID(cls, "getSystemOccupancy", "()I");
            mids$[mid_getYearOfCentury_f2f64475e4580546] = env->getMethodID(cls, "getYearOfCentury", "()I");
            mids$[mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isReceiveAmplitudeCorrectionApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isReceiveAmplitudeCorrectionApplied", "()Z");
            mids$[mid_isStationSystemDelayApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isStationSystemDelayApplied", "()Z");
            mids$[mid_isTransponderDelayApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isTransponderDelayApplied", "()Z");
            mids$[mid_isTroposphericRefractionApplied_e470b6d9e0d979db] = env->getMethodID(cls, "isTroposphericRefractionApplied", "()Z");
            mids$[mid_setDataReleaseFlag_0a2a1ac2721c0336] = env->getMethodID(cls, "setDataReleaseFlag", "(I)V");
            mids$[mid_setDataType_0a2a1ac2721c0336] = env->getMethodID(cls, "setDataType", "(I)V");
            mids$[mid_setDateAndTime_e939c6558ae8d313] = env->getMethodID(cls, "setDateAndTime", "(Ljava/lang/String;)V");
            mids$[mid_setEpochIdentifier_0a2a1ac2721c0336] = env->getMethodID(cls, "setEpochIdentifier", "(I)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsReceiveAmplitudeCorrectionApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsReceiveAmplitudeCorrectionApplied", "(Z)V");
            mids$[mid_setIsStationSystemDelayApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsStationSystemDelayApplied", "(Z)V");
            mids$[mid_setIsTransponderDelayApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsTransponderDelayApplied", "(Z)V");
            mids$[mid_setIsTroposphericRefractionApplied_50a2e0b139e80a58] = env->getMethodID(cls, "setIsTroposphericRefractionApplied", "(Z)V");
            mids$[mid_setPredictionProvider_e939c6558ae8d313] = env->getMethodID(cls, "setPredictionProvider", "(Ljava/lang/String;)V");
            mids$[mid_setPredictionType_0a2a1ac2721c0336] = env->getMethodID(cls, "setPredictionType", "(I)V");
            mids$[mid_setQualityIndicator_0a2a1ac2721c0336] = env->getMethodID(cls, "setQualityIndicator", "(I)V");
            mids$[mid_setRangeType_0a2a1ac2721c0336] = env->getMethodID(cls, "setRangeType", "(I)V");
            mids$[mid_setSpacecraftEpochTimeScale_0a2a1ac2721c0336] = env->getMethodID(cls, "setSpacecraftEpochTimeScale", "(I)V");
            mids$[mid_setStationName_e939c6558ae8d313] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
            mids$[mid_setStationNetword_e939c6558ae8d313] = env->getMethodID(cls, "setStationNetword", "(Ljava/lang/String;)V");
            mids$[mid_setSystemIdentifier_0a2a1ac2721c0336] = env->getMethodID(cls, "setSystemIdentifier", "(I)V");
            mids$[mid_setSystemNumber_0a2a1ac2721c0336] = env->getMethodID(cls, "setSystemNumber", "(I)V");
            mids$[mid_setSystemOccupancy_0a2a1ac2721c0336] = env->getMethodID(cls, "setSystemOccupancy", "(I)V");
            mids$[mid_setYearOfCentury_0a2a1ac2721c0336] = env->getMethodID(cls, "setYearOfCentury", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader::CRDHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jint CRDHeader::getDataReleaseFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataReleaseFlag_f2f64475e4580546]);
        }

        jint CRDHeader::getDataType() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataType_f2f64475e4580546]);
        }

        ::java::lang::String CRDHeader::getDateAndTime() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDateAndTime_0090f7797e403f43]));
        }

        jint CRDHeader::getEpochIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochIdentifier_f2f64475e4580546]);
        }

        ::java::lang::String CRDHeader::getH1CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH1CrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getH2CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH2CrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getH3CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH3CrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getH4CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH4CrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getH5CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH5CrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getPredictionProvider() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPredictionProvider_0090f7797e403f43]));
        }

        jint CRDHeader::getPredictionType() const
        {
          return env->callIntMethod(this$, mids$[mid_getPredictionType_f2f64475e4580546]);
        }

        jint CRDHeader::getQualityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getQualityIndicator_f2f64475e4580546]);
        }

        ::org::orekit::files::ilrs::CRDHeader$RangeType CRDHeader::getRangeType() const
        {
          return ::org::orekit::files::ilrs::CRDHeader$RangeType(env->callObjectMethod(this$, mids$[mid_getRangeType_45572137f73e2f07]));
        }

        jint CRDHeader::getSpacecraftEpochTimeScale() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftEpochTimeScale_f2f64475e4580546]);
        }

        ::java::lang::String CRDHeader::getStationName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_0090f7797e403f43]));
        }

        ::java::lang::String CRDHeader::getStationNetword() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationNetword_0090f7797e403f43]));
        }

        jint CRDHeader::getSystemIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemIdentifier_f2f64475e4580546]);
        }

        jint CRDHeader::getSystemNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemNumber_f2f64475e4580546]);
        }

        jint CRDHeader::getSystemOccupancy() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemOccupancy_f2f64475e4580546]);
        }

        jint CRDHeader::getYearOfCentury() const
        {
          return env->callIntMethod(this$, mids$[mid_getYearOfCentury_f2f64475e4580546]);
        }

        jboolean CRDHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_e470b6d9e0d979db]);
        }

        jboolean CRDHeader::isReceiveAmplitudeCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isReceiveAmplitudeCorrectionApplied_e470b6d9e0d979db]);
        }

        jboolean CRDHeader::isStationSystemDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isStationSystemDelayApplied_e470b6d9e0d979db]);
        }

        jboolean CRDHeader::isTransponderDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTransponderDelayApplied_e470b6d9e0d979db]);
        }

        jboolean CRDHeader::isTroposphericRefractionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTroposphericRefractionApplied_e470b6d9e0d979db]);
        }

        void CRDHeader::setDataReleaseFlag(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataReleaseFlag_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setDataType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataType_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setDateAndTime(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDateAndTime_e939c6558ae8d313], a0.this$);
        }

        void CRDHeader::setEpochIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochIdentifier_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_50a2e0b139e80a58], a0);
        }

        void CRDHeader::setIsReceiveAmplitudeCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsReceiveAmplitudeCorrectionApplied_50a2e0b139e80a58], a0);
        }

        void CRDHeader::setIsStationSystemDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsStationSystemDelayApplied_50a2e0b139e80a58], a0);
        }

        void CRDHeader::setIsTransponderDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTransponderDelayApplied_50a2e0b139e80a58], a0);
        }

        void CRDHeader::setIsTroposphericRefractionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTroposphericRefractionApplied_50a2e0b139e80a58], a0);
        }

        void CRDHeader::setPredictionProvider(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionProvider_e939c6558ae8d313], a0.this$);
        }

        void CRDHeader::setPredictionType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionType_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setQualityIndicator(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQualityIndicator_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setRangeType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRangeType_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setSpacecraftEpochTimeScale(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftEpochTimeScale_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setStationName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationName_e939c6558ae8d313], a0.this$);
        }

        void CRDHeader::setStationNetword(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationNetword_e939c6558ae8d313], a0.this$);
        }

        void CRDHeader::setSystemIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemIdentifier_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setSystemNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemNumber_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setSystemOccupancy(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemOccupancy_0a2a1ac2721c0336], a0);
        }

        void CRDHeader::setYearOfCentury(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setYearOfCentury_0a2a1ac2721c0336], a0);
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
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "DataType", make_descriptor(&PY_TYPE_DEF(CRDHeader$DataType)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "RangeType", make_descriptor(&PY_TYPE_DEF(CRDHeader$RangeType)));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenTesseralLinear::class$ = NULL;
              jmethodID *FieldHansenTesseralLinear::mids$ = NULL;
              bool FieldHansenTesseralLinear::live$ = false;

              jclass FieldHansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8cf3408a191b737e] = env->getMethodID(cls, "<init>", "(IIIIILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_5b191078c5a85105] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_ee7db4b2ec7048ce] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_ee7db4b2ec7048ce] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenTesseralLinear::FieldHansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cf3408a191b737e, a0, a1, a2, a3, a4, a5.this$)) {}

              void FieldHansenTesseralLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_5b191078c5a85105], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_ee7db4b2ec7048ce], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenTesseralLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_ee7db4b2ec7048ce], a0, a1.this$));
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args);
              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args);
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data);
              static PyGetSetDef t_FieldHansenTesseralLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenTesseralLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenTesseralLinear)[] = {
                { Py_tp_methods, t_FieldHansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenTesseralLinear_init_ },
                { Py_tp_getset, t_FieldHansenTesseralLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenTesseralLinear, t_FieldHansenTesseralLinear, FieldHansenTesseralLinear);
              PyObject *t_FieldHansenTesseralLinear::wrap_Object(const FieldHansenTesseralLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenTesseralLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenTesseralLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenTesseralLinear *self = (t_FieldHansenTesseralLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenTesseralLinear), &PY_TYPE_DEF(FieldHansenTesseralLinear), module, "FieldHansenTesseralLinear", 0);
              }

              void t_FieldHansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "class_", make_descriptor(FieldHansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "wrapfn_", make_descriptor(t_FieldHansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenTesseralLinear::wrap_Object(FieldHansenTesseralLinear(((t_FieldHansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenTesseralLinear_of_(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenTesseralLinear_init_(t_FieldHansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                ::org::hipparchus::Field a5((jobject) NULL);
                PyTypeObject **p5;
                FieldHansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIIIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenTesseralLinear(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenTesseralLinear_computeInitValues(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getDerivative(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenTesseralLinear_getValue(t_FieldHansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenTesseralLinear_get__parameters_(t_FieldHansenTesseralLinear *self, void *data)
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::live$ = false;

        jclass OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ae669fdf8f568652] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/frames/Frame;Lorg/orekit/utils/AngularDerivativesFilter;)V");
            mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
            mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getAvailableDerivatives_c14c1c09874639c8] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getInterpolationMethod_0090f7797e403f43] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::frames::Frame & a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae669fdf8f568652, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAngularCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_a6156df500549a58]));
        }

        ::org::orekit::attitudes::BoundedAttitudeProvider OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_05a2839e8fecde67]));
        }

        ::org::orekit::utils::AngularDerivativesFilter OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c14c1c09874639c8]));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationMethod() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_0090f7797e403f43]));
        }

        jint OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        ::org::orekit::frames::Frame OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getReferenceFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::getStop() const
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, angularCoordinates),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, attitudeProvider),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationMethod),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, referenceFrame),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAngularCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationMethod, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getReferenceFrame, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment);

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), module, "OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(((t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_init_(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::frames::Frame a3((jobject) NULL);
          ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "KsIkK", ::java::util::List::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAngularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAttitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getAvailableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getInterpolationMethod());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getInterpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getReferenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStart(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_getStop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__angularCoordinates(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAngularCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__attitudeProvider(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__availableDerivatives(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationMethod(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getInterpolationMethod());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__interpolationSamples(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__referenceFrame(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__start(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment_get__stop(t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment *self, void *data)
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
#include "java/lang/IllegalStateException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *IllegalStateException::class$ = NULL;
    jmethodID *IllegalStateException::mids$ = NULL;
    bool IllegalStateException::live$ = false;

    jclass IllegalStateException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/IllegalStateException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_ea7f4d04e27238a7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_fd4c96defa578a22] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    IllegalStateException::IllegalStateException() : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    IllegalStateException::IllegalStateException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_IllegalStateException__methods_[] = {
      DECLARE_METHOD(t_IllegalStateException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_IllegalStateException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(IllegalStateException)[] = {
      { Py_tp_methods, t_IllegalStateException__methods_ },
      { Py_tp_init, (void *) t_IllegalStateException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(IllegalStateException)[] = {
      &PY_TYPE_DEF(::java::lang::RuntimeException),
      NULL
    };

    DEFINE_TYPE(IllegalStateException, t_IllegalStateException, IllegalStateException);

    void t_IllegalStateException::install(PyObject *module)
    {
      installType(&PY_TYPE(IllegalStateException), &PY_TYPE_DEF(IllegalStateException), module, "IllegalStateException", 0);
    }

    void t_IllegalStateException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "class_", make_descriptor(IllegalStateException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "wrapfn_", make_descriptor(t_IllegalStateException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(IllegalStateException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_IllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, IllegalStateException::initializeClass, 1)))
        return NULL;
      return t_IllegalStateException::wrap_Object(IllegalStateException(((t_IllegalStateException *) arg)->object.this$));
    }
    static PyObject *t_IllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, IllegalStateException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_IllegalStateException_init_(t_IllegalStateException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          IllegalStateException object((jobject) NULL);

          INT_CALL(object = IllegalStateException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = IllegalStateException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          IllegalStateException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = IllegalStateException(a0, a1));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *SimplexOptimizer::class$ = NULL;
            jmethodID *SimplexOptimizer::mids$ = NULL;
            bool SimplexOptimizer::live$ = false;

            jclass SimplexOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/SimplexOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_762e7504cd26f616] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_optimize_02ecb87ce66bcfc1] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_doOptimize_f3368328259a5468] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_a5cd04a701a45f77] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SimplexOptimizer::SimplexOptimizer(const ::org::hipparchus::optim::ConvergenceChecker & a0) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_762e7504cd26f616, a0.this$)) {}

            SimplexOptimizer::SimplexOptimizer(jdouble a0, jdouble a1) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

            ::org::hipparchus::optim::PointValuePair SimplexOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_02ecb87ce66bcfc1], a0.this$));
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
          namespace noderiv {
            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args);
            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args);
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data);
            static PyGetSetDef t_SimplexOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SimplexOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SimplexOptimizer__methods_[] = {
              DECLARE_METHOD(t_SimplexOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SimplexOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_SimplexOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SimplexOptimizer)[] = {
              { Py_tp_methods, t_SimplexOptimizer__methods_ },
              { Py_tp_init, (void *) t_SimplexOptimizer_init_ },
              { Py_tp_getset, t_SimplexOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SimplexOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(SimplexOptimizer, t_SimplexOptimizer, SimplexOptimizer);
            PyObject *t_SimplexOptimizer::wrap_Object(const SimplexOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SimplexOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SimplexOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SimplexOptimizer *self = (t_SimplexOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SimplexOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SimplexOptimizer), &PY_TYPE_DEF(SimplexOptimizer), module, "SimplexOptimizer", 0);
            }

            void t_SimplexOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "class_", make_descriptor(SimplexOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "wrapfn_", make_descriptor(t_SimplexOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SimplexOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SimplexOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SimplexOptimizer::initializeClass, 1)))
                return NULL;
              return t_SimplexOptimizer::wrap_Object(SimplexOptimizer(((t_SimplexOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SimplexOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SimplexOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SimplexOptimizer_of_(t_SimplexOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SimplexOptimizer_init_(t_SimplexOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
                  PyTypeObject **p0;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
                  {
                    INT_CALL(object = SimplexOptimizer(a0));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  SimplexOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = SimplexOptimizer(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
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

            static PyObject *t_SimplexOptimizer_optimize(t_SimplexOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(SimplexOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_SimplexOptimizer_get__parameters_(t_SimplexOptimizer *self, void *data)
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
#include "org/hipparchus/optim/linear/NonNegativeConstraint.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *NonNegativeConstraint::class$ = NULL;
        jmethodID *NonNegativeConstraint::mids$ = NULL;
        bool NonNegativeConstraint::live$ = false;

        jclass NonNegativeConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/NonNegativeConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_isRestrictedToNonNegative_e470b6d9e0d979db] = env->getMethodID(cls, "isRestrictedToNonNegative", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NonNegativeConstraint::NonNegativeConstraint(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

        jboolean NonNegativeConstraint::isRestrictedToNonNegative() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRestrictedToNonNegative_e470b6d9e0d979db]);
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
      namespace linear {
        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self);
        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data);
        static PyGetSetDef t_NonNegativeConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_NonNegativeConstraint, restrictedToNonNegative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NonNegativeConstraint__methods_[] = {
          DECLARE_METHOD(t_NonNegativeConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NonNegativeConstraint, isRestrictedToNonNegative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NonNegativeConstraint)[] = {
          { Py_tp_methods, t_NonNegativeConstraint__methods_ },
          { Py_tp_init, (void *) t_NonNegativeConstraint_init_ },
          { Py_tp_getset, t_NonNegativeConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NonNegativeConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NonNegativeConstraint, t_NonNegativeConstraint, NonNegativeConstraint);

        void t_NonNegativeConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(NonNegativeConstraint), &PY_TYPE_DEF(NonNegativeConstraint), module, "NonNegativeConstraint", 0);
        }

        void t_NonNegativeConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "class_", make_descriptor(NonNegativeConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "wrapfn_", make_descriptor(t_NonNegativeConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NonNegativeConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NonNegativeConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NonNegativeConstraint::initializeClass, 1)))
            return NULL;
          return t_NonNegativeConstraint::wrap_Object(NonNegativeConstraint(((t_NonNegativeConstraint *) arg)->object.this$));
        }
        static PyObject *t_NonNegativeConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NonNegativeConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NonNegativeConstraint_init_(t_NonNegativeConstraint *self, PyObject *args, PyObject *kwds)
        {
          jboolean a0;
          NonNegativeConstraint object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = NonNegativeConstraint(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NonNegativeConstraint_isRestrictedToNonNegative(t_NonNegativeConstraint *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NonNegativeConstraint_get__restrictedToNonNegative(t_NonNegativeConstraint *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRestrictedToNonNegative());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/fraction/BigFractionFormat.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFractionFormat::class$ = NULL;
      jmethodID *BigFractionFormat::mids$ = NULL;
      bool BigFractionFormat::live$ = false;

      jclass BigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_695a782f9c7823f6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_4c0f990589d379b7] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_42dd4f61513ad308] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_e231795b026d93db] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_formatBigFraction_f763fdb4539794ce] = env->getStaticMethodID(cls, "formatBigFraction", "(Lorg/hipparchus/fraction/BigFraction;)Ljava/lang/String;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getImproperInstance_0a94ffafb1c3bf54] = env->getStaticMethodID(cls, "getImproperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getImproperInstance_1069ad73f49e7f07] = env->getStaticMethodID(cls, "getImproperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_0a94ffafb1c3bf54] = env->getStaticMethodID(cls, "getProperInstance", "()Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_getProperInstance_1069ad73f49e7f07] = env->getStaticMethodID(cls, "getProperInstance", "(Ljava/util/Locale;)Lorg/hipparchus/fraction/BigFractionFormat;");
          mids$[mid_parse_7616b22aac27e6c3] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parse_3123fd67840e701b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_parseNextBigInteger_a8bef70e92826704] = env->getMethodID(cls, "parseNextBigInteger", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/math/BigInteger;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFractionFormat::BigFractionFormat() : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_695a782f9c7823f6, a0.this$)) {}

      BigFractionFormat::BigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::org::hipparchus::fraction::AbstractFormat(env->newObject(initializeClass, &mids$, mid_init$_4c0f990589d379b7, a0.this$, a1.this$)) {}

      ::java::lang::StringBuffer BigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_42dd4f61513ad308], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer BigFractionFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_e231795b026d93db], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::String BigFractionFormat::formatBigFraction(const ::org::hipparchus::fraction::BigFraction & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatBigFraction_f763fdb4539794ce], a0.this$));
      }

      JArray< ::java::util::Locale > BigFractionFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_0a94ffafb1c3bf54]));
      }

      BigFractionFormat BigFractionFormat::getImproperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getImproperInstance_1069ad73f49e7f07], a0.this$));
      }

      BigFractionFormat BigFractionFormat::getProperInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_0a94ffafb1c3bf54]));
      }

      BigFractionFormat BigFractionFormat::getProperInstance(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFractionFormat(env->callStaticObjectMethod(cls, mids$[mid_getProperInstance_1069ad73f49e7f07], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_7616b22aac27e6c3], a0.this$));
      }

      ::org::hipparchus::fraction::BigFraction BigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_3123fd67840e701b], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args);
      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data);
      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data);
      static PyGetSetDef t_BigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_BigFractionFormat, availableLocales),
        DECLARE_GET_FIELD(t_BigFractionFormat, improperInstance),
        DECLARE_GET_FIELD(t_BigFractionFormat, properInstance),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_BigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_BigFractionFormat, formatBigFraction, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getAvailableLocales, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getImproperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, getProperInstance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFractionFormat)[] = {
        { Py_tp_methods, t_BigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_BigFractionFormat_init_ },
        { Py_tp_getset, t_BigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::AbstractFormat),
        NULL
      };

      DEFINE_TYPE(BigFractionFormat, t_BigFractionFormat, BigFractionFormat);

      void t_BigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFractionFormat), &PY_TYPE_DEF(BigFractionFormat), module, "BigFractionFormat", 0);
      }

      void t_BigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "class_", make_descriptor(BigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "wrapfn_", make_descriptor(t_BigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_BigFractionFormat::wrap_Object(BigFractionFormat(((t_BigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_BigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFractionFormat_init_(t_BigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat object((jobject) NULL);

            INT_CALL(object = BigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = BigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            BigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BigFractionFormat(a0, a1));
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

      static PyObject *t_BigFractionFormat_format(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_BigFractionFormat_formatBigFraction(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::fraction::BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::formatBigFraction(a0));
          return j2p(result);
        }

        PyErr_SetArgsError(type, "formatBigFraction", arg);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getAvailableLocales(PyTypeObject *type, PyObject *args)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getAvailableLocales());
          return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
        }

        return callSuper(type, "getAvailableLocales", args, 2);
      }

      static PyObject *t_BigFractionFormat_getImproperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getImproperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getImproperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_getProperInstance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            BigFractionFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance());
            return t_BigFractionFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            BigFractionFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::fraction::BigFractionFormat::getProperInstance(a0));
              return t_BigFractionFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getProperInstance", args);
        return NULL;
      }

      static PyObject *t_BigFractionFormat_parse(t_BigFractionFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(BigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_BigFractionFormat_get__availableLocales(t_BigFractionFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_BigFractionFormat_get__improperInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImproperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }

      static PyObject *t_BigFractionFormat_get__properInstance(t_BigFractionFormat *self, void *data)
      {
        BigFractionFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getProperInstance());
        return t_BigFractionFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince54FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegrator::mids$ = NULL;
        bool DormandPrince54FieldIntegrator::live$ = false;

        jclass DormandPrince54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f7a36558ff3a2d8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_348f4c168cbaf312] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_1da7dbb52d5e63e0] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince54FieldStateInterpolator;");
            mids$[mid_estimateError_681c74af7b6fa1aa] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f7a36558ff3a2d8e, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince54FieldIntegrator::DormandPrince54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_348f4c168cbaf312, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
        }

        jint DormandPrince54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegrator, t_DormandPrince54FieldIntegrator, DormandPrince54FieldIntegrator);
        PyObject *t_DormandPrince54FieldIntegrator::wrap_Object(const DormandPrince54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegrator *self = (t_DormandPrince54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegrator), &PY_TYPE_DEF(DormandPrince54FieldIntegrator), module, "DormandPrince54FieldIntegrator", 0);
        }

        void t_DormandPrince54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "class_", make_descriptor(DormandPrince54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegrator::wrap_Object(DormandPrince54FieldIntegrator(((t_DormandPrince54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegrator_of_(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegrator_init_(t_DormandPrince54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince54FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince54FieldIntegrator_getA(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getB(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getC(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_getOrder(t_DormandPrince54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegrator_get__parameters_(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__a(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__b(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__c(t_DormandPrince54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince54FieldIntegrator_get__order(t_DormandPrince54FieldIntegrator *self, void *data)
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
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *MeasurementDecorator::class$ = NULL;
        jmethodID *MeasurementDecorator::mids$ = NULL;
        bool MeasurementDecorator::live$ = false;

        jclass MeasurementDecorator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/MeasurementDecorator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a86c3ee887fbc68f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCovariance_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getObservedMeasurement_cad4d6aea977e795] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_6d9adf1d5b463928] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MeasurementDecorator::MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a86c3ee887fbc68f, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::linear::RealMatrix MeasurementDecorator::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_7116bbecdd8ceb21]));
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementDecorator::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_cad4d6aea977e795]));
        }

        jdouble MeasurementDecorator::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::linear::RealVector MeasurementDecorator::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_6d9adf1d5b463928]));
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
        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data);
        static PyGetSetDef t_MeasurementDecorator__fields_[] = {
          DECLARE_GET_FIELD(t_MeasurementDecorator, covariance),
          DECLARE_GET_FIELD(t_MeasurementDecorator, observedMeasurement),
          DECLARE_GET_FIELD(t_MeasurementDecorator, time),
          DECLARE_GET_FIELD(t_MeasurementDecorator, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MeasurementDecorator__methods_[] = {
          DECLARE_METHOD(t_MeasurementDecorator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getTime, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MeasurementDecorator)[] = {
          { Py_tp_methods, t_MeasurementDecorator__methods_ },
          { Py_tp_init, (void *) t_MeasurementDecorator_init_ },
          { Py_tp_getset, t_MeasurementDecorator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MeasurementDecorator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MeasurementDecorator, t_MeasurementDecorator, MeasurementDecorator);

        void t_MeasurementDecorator::install(PyObject *module)
        {
          installType(&PY_TYPE(MeasurementDecorator), &PY_TYPE_DEF(MeasurementDecorator), module, "MeasurementDecorator", 0);
        }

        void t_MeasurementDecorator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "class_", make_descriptor(MeasurementDecorator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "wrapfn_", make_descriptor(t_MeasurementDecorator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MeasurementDecorator::initializeClass, 1)))
            return NULL;
          return t_MeasurementDecorator::wrap_Object(MeasurementDecorator(((t_MeasurementDecorator *) arg)->object.this$));
        }
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MeasurementDecorator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          MeasurementDecorator object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2))
          {
            INT_CALL(object = MeasurementDecorator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldRotation::class$ = NULL;
          jmethodID *FieldRotation::mids$ = NULL;
          bool FieldRotation::live$ = false;

          jclass FieldRotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldRotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d35296e3a83f651e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_34d501d44c817ec2] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/CalculusFieldElement;D)V");
              mids$[mid_init$_a7e278938f05de5f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
              mids$[mid_init$_d6d5bacbc27f25c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_ce1254023c8acdf4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_9955e36472134364] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_7793ae77d5892991] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Z)V");
              mids$[mid_applyInverseTo_7780b180520e4093] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_8ff2edc0ecba4b6e] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_dce949c5c7f1be52] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_89718cf054290f11] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_7bd097adab3a6fd8] = env->getMethodID(cls, "applyInverseTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_44f58eee1ec38a36] = env->getMethodID(cls, "applyInverseTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_ecb7c4116ea96bbc] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_71fdc303b3a884ec] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_7780b180520e4093] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_8ff2edc0ecba4b6e] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_dce949c5c7f1be52] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_89718cf054290f11] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_7bd097adab3a6fd8] = env->getMethodID(cls, "applyTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_44f58eee1ec38a36] = env->getMethodID(cls, "applyTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_ecb7c4116ea96bbc] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_71fdc303b3a884ec] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_compose_2e891f0ba92656ce] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_compose_148c6c34e651184a] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_2e891f0ba92656ce] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_148c6c34e651184a] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_distance_8778d6edba1e4c81] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngle_e6d4d3215c30992a] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngles_79c0b7a5665e5fa5] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAxis_cd6bb24193486c18] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getIdentity_cb81d904ebed2a63] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_getMatrix_dd8485a0eb2e2903] = env->getMethodID(cls, "getMatrix", "()[[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ0_e6d4d3215c30992a] = env->getMethodID(cls, "getQ0", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ1_e6d4d3215c30992a] = env->getMethodID(cls, "getQ1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ2_e6d4d3215c30992a] = env->getMethodID(cls, "getQ2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ3_e6d4d3215c30992a] = env->getMethodID(cls, "getQ3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_revert_ac4489fdef1c3aef] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_toRotation_24d2e432e376f9a0] = env->getMethodID(cls, "toRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d35296e3a83f651e, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_34d501d44c817ec2, a0.this$, a1)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7e278938f05de5f, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d6d5bacbc27f25c0, a0.this$, a1.this$, a2.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ce1254023c8acdf4, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9955e36472134364, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7793ae77d5892991, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          FieldRotation FieldRotation::applyInverseTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_7780b180520e4093], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_8ff2edc0ecba4b6e], a0.this$));
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_dce949c5c7f1be52], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_89718cf054290f11], a0.this$));
          }

          void FieldRotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_7bd097adab3a6fd8], a0.this$, a1.this$);
          }

          void FieldRotation::applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_44f58eee1ec38a36], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_ecb7c4116ea96bbc], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_71fdc303b3a884ec], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::applyTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_7780b180520e4093], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_8ff2edc0ecba4b6e], a0.this$));
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_dce949c5c7f1be52], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_89718cf054290f11], a0.this$));
          }

          void FieldRotation::applyTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_7bd097adab3a6fd8], a0.this$, a1.this$);
          }

          void FieldRotation::applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_44f58eee1ec38a36], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyTo_ecb7c4116ea96bbc], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyTo_71fdc303b3a884ec], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_2e891f0ba92656ce], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_148c6c34e651184a], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_2e891f0ba92656ce], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_148c6c34e651184a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::distance(const FieldRotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_8778d6edba1e4c81], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getAngle() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAngle_e6d4d3215c30992a]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldRotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAngles_79c0b7a5665e5fa5], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxis_cd6bb24193486c18], a0.this$));
          }

          FieldRotation FieldRotation::getIdentity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_cb81d904ebed2a63], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldRotation::getMatrix() const
          {
            return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getMatrix_dd8485a0eb2e2903]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ0() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ0_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ1_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ2_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ3_e6d4d3215c30992a]));
          }

          FieldRotation FieldRotation::revert() const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_revert_ac4489fdef1c3aef]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Rotation FieldRotation::toRotation() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_24d2e432e376f9a0]));
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
      namespace euclidean {
        namespace threed {
          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args);
          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg);
          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self);
          static PyObject *t_FieldRotation_revert(t_FieldRotation *self);
          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self);
          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data);
          static PyGetSetDef t_FieldRotation__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRotation, angle),
            DECLARE_GET_FIELD(t_FieldRotation, matrix),
            DECLARE_GET_FIELD(t_FieldRotation, q0),
            DECLARE_GET_FIELD(t_FieldRotation, q1),
            DECLARE_GET_FIELD(t_FieldRotation, q2),
            DECLARE_GET_FIELD(t_FieldRotation, q3),
            DECLARE_GET_FIELD(t_FieldRotation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRotation__methods_[] = {
            DECLARE_METHOD(t_FieldRotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, getAxis, METH_O),
            DECLARE_METHOD(t_FieldRotation, getIdentity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, revert, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, toRotation, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRotation)[] = {
            { Py_tp_methods, t_FieldRotation__methods_ },
            { Py_tp_init, (void *) t_FieldRotation_init_ },
            { Py_tp_getset, t_FieldRotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRotation, t_FieldRotation, FieldRotation);
          PyObject *t_FieldRotation::wrap_Object(const FieldRotation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRotation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRotation::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRotation), &PY_TYPE_DEF(FieldRotation), module, "FieldRotation", 0);
          }

          void t_FieldRotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "class_", make_descriptor(FieldRotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "wrapfn_", make_descriptor(t_FieldRotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRotation::initializeClass, 1)))
              return NULL;
            return t_FieldRotation::wrap_Object(FieldRotation(((t_FieldRotation *) arg)->object.this$));
          }
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "[[KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jboolean a4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyInverseTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args)
          {
            FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldRotation::initializeClass, FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::distance(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAngle());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::getIdentity(a0));
              return t_FieldRotation::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIdentity", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ0());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_revert(t_FieldRotation *self)
          {
            FieldRotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldRotation::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.toRotation());
            return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
          }
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAngle());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ0());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ2());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ3());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockRangeModifier::live$ = false;

          jclass RelativisticJ2ClockRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockRangeModifier::RelativisticJ2ClockRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void RelativisticJ2ClockRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockRangeModifier, t_RelativisticJ2ClockRangeModifier, RelativisticJ2ClockRangeModifier);

          void t_RelativisticJ2ClockRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockRangeModifier), module, "RelativisticJ2ClockRangeModifier", 0);
          }

          void t_RelativisticJ2ClockRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "class_", make_descriptor(RelativisticJ2ClockRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockRangeModifier::wrap_Object(RelativisticJ2ClockRangeModifier(((t_RelativisticJ2ClockRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockRangeModifier_init_(t_RelativisticJ2ClockRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_getParametersDrivers(t_RelativisticJ2ClockRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockRangeModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockRangeModifier *self, void *data)
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
#include "org/orekit/estimation/iod/IodLaplace.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLaplace::class$ = NULL;
        jmethodID *IodLaplace::mids$ = NULL;
        bool IodLaplace::live$ = false;

        jclass IodLaplace::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLaplace");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_a883c21ba904ff29] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_304f33cbf7512082] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a3bf1578f9a86bfd] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLaplace::IodLaplace(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a883c21ba904ff29], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_304f33cbf7512082], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a3bf1578f9a86bfd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
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
        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args);

        static PyMethodDef t_IodLaplace__methods_[] = {
          DECLARE_METHOD(t_IodLaplace, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLaplace, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLaplace)[] = {
          { Py_tp_methods, t_IodLaplace__methods_ },
          { Py_tp_init, (void *) t_IodLaplace_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLaplace)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLaplace, t_IodLaplace, IodLaplace);

        void t_IodLaplace::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLaplace), &PY_TYPE_DEF(IodLaplace), module, "IodLaplace", 0);
        }

        void t_IodLaplace::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "class_", make_descriptor(IodLaplace::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "wrapfn_", make_descriptor(t_IodLaplace::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLaplace), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLaplace_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLaplace::initializeClass, 1)))
            return NULL;
          return t_IodLaplace::wrap_Object(IodLaplace(((t_IodLaplace *) arg)->object.this$));
        }
        static PyObject *t_IodLaplace_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLaplace::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLaplace_init_(t_IodLaplace *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLaplace object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLaplace(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLaplace_estimate(t_IodLaplace *self, PyObject *args)
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
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
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
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *FieldOrdinaryDifferentialEquation::mids$ = NULL;
      bool FieldOrdinaryDifferentialEquation::live$ = false;

      jclass FieldOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_ea2fed402e730f9f] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_d000a2ae6993fd7f] = env->getMethodID(cls, "init", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldOrdinaryDifferentialEquation::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_ea2fed402e730f9f], a0.this$, a1.this$));
      }

      jint FieldOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
      }

      void FieldOrdinaryDifferentialEquation::init(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_d000a2ae6993fd7f], a0.this$, a1.this$, a2.this$);
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
      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self);
      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_FieldOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, dimension),
        DECLARE_GET_FIELD(t_FieldOrdinaryDifferentialEquation, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_FieldOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldOrdinaryDifferentialEquation, t_FieldOrdinaryDifferentialEquation, FieldOrdinaryDifferentialEquation);
      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_Object(const FieldOrdinaryDifferentialEquation& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrdinaryDifferentialEquation::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrdinaryDifferentialEquation::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrdinaryDifferentialEquation *self = (t_FieldOrdinaryDifferentialEquation *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrdinaryDifferentialEquation), &PY_TYPE_DEF(FieldOrdinaryDifferentialEquation), module, "FieldOrdinaryDifferentialEquation", 0);
      }

      void t_FieldOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "class_", make_descriptor(FieldOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_FieldOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_FieldOrdinaryDifferentialEquation::wrap_Object(FieldOrdinaryDifferentialEquation(((t_FieldOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_of_(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_computeDerivatives(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_getDimension(t_FieldOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_init(t_FieldOrdinaryDifferentialEquation *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldOrdinaryDifferentialEquation_get__parameters_(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrdinaryDifferentialEquation_get__dimension(t_FieldOrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/Antenna.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *Antenna::class$ = NULL;
        jmethodID *Antenna::mids$ = NULL;
        bool Antenna::live$ = false;

        jclass Antenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/Antenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccentricities_0592875d77498bab] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/gnss/Frequency;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFrequencies_a6156df500549a58] = env->getMethodID(cls, "getFrequencies", "()Ljava/util/List;");
            mids$[mid_getPattern_05d30d5d4e353670] = env->getMethodID(cls, "getPattern", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/gnss/antenna/FrequencyPattern;");
            mids$[mid_getPhaseCenterVariation_3c66d8751ce3e01a] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/orekit/gnss/Frequency;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getSinexCode_0090f7797e403f43] = env->getMethodID(cls, "getSinexCode", "()Ljava/lang/String;");
            mids$[mid_getType_0090f7797e403f43] = env->getMethodID(cls, "getType", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Antenna::getEccentricities(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_0592875d77498bab], a0.this$));
        }

        ::java::util::List Antenna::getFrequencies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFrequencies_a6156df500549a58]));
        }

        ::org::orekit::gnss::antenna::FrequencyPattern Antenna::getPattern(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::orekit::gnss::antenna::FrequencyPattern(env->callObjectMethod(this$, mids$[mid_getPattern_05d30d5d4e353670], a0.this$));
        }

        jdouble Antenna::getPhaseCenterVariation(const ::org::orekit::gnss::Frequency & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_3c66d8751ce3e01a], a0.this$, a1.this$);
        }

        ::java::lang::String Antenna::getSinexCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSinexCode_0090f7797e403f43]));
        }

        ::java::lang::String Antenna::getType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getType_0090f7797e403f43]));
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
      namespace antenna {
        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getFrequencies(t_Antenna *self);
        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args);
        static PyObject *t_Antenna_getSinexCode(t_Antenna *self);
        static PyObject *t_Antenna_getType(t_Antenna *self);
        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data);
        static PyGetSetDef t_Antenna__fields_[] = {
          DECLARE_GET_FIELD(t_Antenna, frequencies),
          DECLARE_GET_FIELD(t_Antenna, sinexCode),
          DECLARE_GET_FIELD(t_Antenna, type),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Antenna__methods_[] = {
          DECLARE_METHOD(t_Antenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, getEccentricities, METH_O),
          DECLARE_METHOD(t_Antenna, getFrequencies, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getPattern, METH_O),
          DECLARE_METHOD(t_Antenna, getPhaseCenterVariation, METH_VARARGS),
          DECLARE_METHOD(t_Antenna, getSinexCode, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Antenna)[] = {
          { Py_tp_methods, t_Antenna__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Antenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Antenna)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Antenna, t_Antenna, Antenna);

        void t_Antenna::install(PyObject *module)
        {
          installType(&PY_TYPE(Antenna), &PY_TYPE_DEF(Antenna), module, "Antenna", 0);
        }

        void t_Antenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "class_", make_descriptor(Antenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "wrapfn_", make_descriptor(t_Antenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Antenna::initializeClass, 1)))
            return NULL;
          return t_Antenna::wrap_Object(Antenna(((t_Antenna *) arg)->object.this$));
        }
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Antenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getFrequencies(t_Antenna *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(Frequency));
        }

        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::gnss::antenna::FrequencyPattern result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getPattern(a0));
            return ::org::orekit::gnss::antenna::t_FrequencyPattern::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPattern", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::Frequency::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", args);
          return NULL;
        }

        static PyObject *t_Antenna_getSinexCode(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSinexCode());
          return j2p(result);
        }

        static PyObject *t_Antenna_getType(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return j2p(result);
        }

        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSinexCode());
          return j2p(value);
        }

        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader$ITRFVersionConfiguration::class$ = NULL;
      jmethodID *ITRFVersionLoader$ITRFVersionConfiguration::mids$ = NULL;
      bool ITRFVersionLoader$ITRFVersionConfiguration::live$ = false;

      jclass ITRFVersionLoader$ITRFVersionConfiguration::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bca572b1bdd698a6] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/frames/ITRFVersion;II)V");
          mids$[mid_appliesTo_6b161f495ea569b8] = env->getMethodID(cls, "appliesTo", "(Ljava/lang/String;)Z");
          mids$[mid_getVersion_f157e1cf87d45e2d] = env->getMethodID(cls, "getVersion", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_isValid_e95e4c7cd3dd17ff] = env->getMethodID(cls, "isValid", "(I)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader$ITRFVersionConfiguration::ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String & a0, const ::org::orekit::frames::ITRFVersion & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bca572b1bdd698a6, a0.this$, a1.this$, a2, a3)) {}

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::appliesTo(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_appliesTo_6b161f495ea569b8], a0.this$);
      }

      ::org::orekit::frames::ITRFVersion ITRFVersionLoader$ITRFVersionConfiguration::getVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getVersion_f157e1cf87d45e2d]));
      }

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::isValid(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isValid_e95e4c7cd3dd17ff], a0);
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
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg);
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data);
      static PyGetSetDef t_ITRFVersionLoader$ITRFVersionConfiguration__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersionLoader$ITRFVersionConfiguration, version),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersionLoader$ITRFVersionConfiguration__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, appliesTo, METH_O),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, getVersion, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersionLoader$ITRFVersionConfiguration, isValid, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        { Py_tp_methods, t_ITRFVersionLoader$ITRFVersionConfiguration__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader$ITRFVersionConfiguration_init_ },
        { Py_tp_getset, t_ITRFVersionLoader$ITRFVersionConfiguration__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader$ITRFVersionConfiguration)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader$ITRFVersionConfiguration, t_ITRFVersionLoader$ITRFVersionConfiguration, ITRFVersionLoader$ITRFVersionConfiguration);

      void t_ITRFVersionLoader$ITRFVersionConfiguration::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), &PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration), module, "ITRFVersionLoader$ITRFVersionConfiguration", 0);
      }

      void t_ITRFVersionLoader$ITRFVersionConfiguration::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "class_", make_descriptor(ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "wrapfn_", make_descriptor(t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader$ITRFVersionConfiguration), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(ITRFVersionLoader$ITRFVersionConfiguration(((t_ITRFVersionLoader$ITRFVersionConfiguration *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader$ITRFVersionConfiguration::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader$ITRFVersionConfiguration_init_(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::frames::ITRFVersion a1((jobject) NULL);
        PyTypeObject **p1;
        jint a2;
        jint a3;
        ITRFVersionLoader$ITRFVersionConfiguration object((jobject) NULL);

        if (!parseArgs(args, "sKII", ::org::orekit::frames::ITRFVersion::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_ITRFVersion::parameters_, &a2, &a3))
        {
          INT_CALL(object = ITRFVersionLoader$ITRFVersionConfiguration(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_appliesTo(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.appliesTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "appliesTo", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_getVersion(t_ITRFVersionLoader$ITRFVersionConfiguration *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_isValid(t_ITRFVersionLoader$ITRFVersionConfiguration *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.isValid(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isValid", arg);
        return NULL;
      }

      static PyObject *t_ITRFVersionLoader$ITRFVersionConfiguration_get__version(t_ITRFVersionLoader$ITRFVersionConfiguration *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getVersion());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04::class$ = NULL;
              jmethodID *SsrIgm04::mids$ = NULL;
              bool SsrIgm04::live$ = false;

              jclass SsrIgm04::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_606de8223f59f5bd] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm04Data_d6753b7055940a54] = env->getMethodID(cls, "getSsrIgm04Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04::SsrIgm04(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_606de8223f59f5bd, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm04::getSsrIgm04Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm04Data_d6753b7055940a54]));
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
              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args);
              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self);
              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data);
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data);
              static PyGetSetDef t_SsrIgm04__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm04, ssrIgm04Data),
                DECLARE_GET_FIELD(t_SsrIgm04, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm04, getSsrIgm04Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04)[] = {
                { Py_tp_methods, t_SsrIgm04__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04_init_ },
                { Py_tp_getset, t_SsrIgm04__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm04, t_SsrIgm04, SsrIgm04);
              PyObject *t_SsrIgm04::wrap_Object(const SsrIgm04& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm04::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm04::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm04 *self = (t_SsrIgm04 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm04::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04), &PY_TYPE_DEF(SsrIgm04), module, "SsrIgm04", 0);
              }

              void t_SsrIgm04::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "class_", make_descriptor(SsrIgm04::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "wrapfn_", make_descriptor(t_SsrIgm04::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04::wrap_Object(SsrIgm04(((t_SsrIgm04 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm04_of_(t_SsrIgm04 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm04_init_(t_SsrIgm04 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm04 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm04Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm04(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm04Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm04_getSsrIgm04Data(t_SsrIgm04 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm04Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm04_get__parameters_(t_SsrIgm04 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm04_get__ssrIgm04Data(t_SsrIgm04 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm04Data());
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
#include "org/orekit/files/rinex/observation/GlonassSatelliteChannel.h"
#include "org/orekit/gnss/SatInSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *GlonassSatelliteChannel::class$ = NULL;
          jmethodID *GlonassSatelliteChannel::mids$ = NULL;
          bool GlonassSatelliteChannel::live$ = false;

          jclass GlonassSatelliteChannel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/GlonassSatelliteChannel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0863c744a4ea688e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatInSystem;I)V");
              mids$[mid_getK_f2f64475e4580546] = env->getMethodID(cls, "getK", "()I");
              mids$[mid_getSatellite_2d9e00e3b80c70c8] = env->getMethodID(cls, "getSatellite", "()Lorg/orekit/gnss/SatInSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlonassSatelliteChannel::GlonassSatelliteChannel(const ::org::orekit::gnss::SatInSystem & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0863c744a4ea688e, a0.this$, a1)) {}

          jint GlonassSatelliteChannel::getK() const
          {
            return env->callIntMethod(this$, mids$[mid_getK_f2f64475e4580546]);
          }

          ::org::orekit::gnss::SatInSystem GlonassSatelliteChannel::getSatellite() const
          {
            return ::org::orekit::gnss::SatInSystem(env->callObjectMethod(this$, mids$[mid_getSatellite_2d9e00e3b80c70c8]));
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
          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self);
          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data);
          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data);
          static PyGetSetDef t_GlonassSatelliteChannel__fields_[] = {
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, k),
            DECLARE_GET_FIELD(t_GlonassSatelliteChannel, satellite),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlonassSatelliteChannel__methods_[] = {
            DECLARE_METHOD(t_GlonassSatelliteChannel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getK, METH_NOARGS),
            DECLARE_METHOD(t_GlonassSatelliteChannel, getSatellite, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlonassSatelliteChannel)[] = {
            { Py_tp_methods, t_GlonassSatelliteChannel__methods_ },
            { Py_tp_init, (void *) t_GlonassSatelliteChannel_init_ },
            { Py_tp_getset, t_GlonassSatelliteChannel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlonassSatelliteChannel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlonassSatelliteChannel, t_GlonassSatelliteChannel, GlonassSatelliteChannel);

          void t_GlonassSatelliteChannel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlonassSatelliteChannel), &PY_TYPE_DEF(GlonassSatelliteChannel), module, "GlonassSatelliteChannel", 0);
          }

          void t_GlonassSatelliteChannel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "class_", make_descriptor(GlonassSatelliteChannel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "wrapfn_", make_descriptor(t_GlonassSatelliteChannel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlonassSatelliteChannel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlonassSatelliteChannel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlonassSatelliteChannel::initializeClass, 1)))
              return NULL;
            return t_GlonassSatelliteChannel::wrap_Object(GlonassSatelliteChannel(((t_GlonassSatelliteChannel *) arg)->object.this$));
          }
          static PyObject *t_GlonassSatelliteChannel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlonassSatelliteChannel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlonassSatelliteChannel_init_(t_GlonassSatelliteChannel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatInSystem a0((jobject) NULL);
            jint a1;
            GlonassSatelliteChannel object((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::SatInSystem::initializeClass, &a0, &a1))
            {
              INT_CALL(object = GlonassSatelliteChannel(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GlonassSatelliteChannel_getK(t_GlonassSatelliteChannel *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getK());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_GlonassSatelliteChannel_getSatellite(t_GlonassSatelliteChannel *self)
          {
            ::org::orekit::gnss::SatInSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(result);
          }

          static PyObject *t_GlonassSatelliteChannel_get__k(t_GlonassSatelliteChannel *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getK());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_GlonassSatelliteChannel_get__satellite(t_GlonassSatelliteChannel *self, void *data)
          {
            ::org::orekit::gnss::SatInSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellite());
            return ::org::orekit::gnss::t_SatInSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TroposphericModelUtils::class$ = NULL;
          jmethodID *TroposphericModelUtils::mids$ = NULL;
          bool TroposphericModelUtils::live$ = false;

          jclass TroposphericModelUtils::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TroposphericModelUtils");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeHeightCorrection_824133ce4aec3505] = env->getStaticMethodID(cls, "computeHeightCorrection", "(DD)D");
              mids$[mid_computeHeightCorrection_5ee9d1f095449c1a] = env->getStaticMethodID(cls, "computeHeightCorrection", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFunction_04175aacb25dae17] = env->getStaticMethodID(cls, "mappingFunction", "(DDDD)D");
              mids$[mid_mappingFunction_0062d53dab8088fa] = env->getStaticMethodID(cls, "mappingFunction", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble TroposphericModelUtils::computeHeightCorrection(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_computeHeightCorrection_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeHeightCorrection_5ee9d1f095449c1a], a0.this$, a1.this$, a2.this$));
          }

          jdouble TroposphericModelUtils::mappingFunction(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_mappingFunction_04175aacb25dae17], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::mappingFunction(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_mappingFunction_0062d53dab8088fa], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args);
          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_TroposphericModelUtils__methods_[] = {
            DECLARE_METHOD(t_TroposphericModelUtils, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, computeHeightCorrection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, mappingFunction, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TroposphericModelUtils)[] = {
            { Py_tp_methods, t_TroposphericModelUtils__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TroposphericModelUtils)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TroposphericModelUtils, t_TroposphericModelUtils, TroposphericModelUtils);

          void t_TroposphericModelUtils::install(PyObject *module)
          {
            installType(&PY_TYPE(TroposphericModelUtils), &PY_TYPE_DEF(TroposphericModelUtils), module, "TroposphericModelUtils", 0);
          }

          void t_TroposphericModelUtils::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "class_", make_descriptor(TroposphericModelUtils::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "wrapfn_", make_descriptor(t_TroposphericModelUtils::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TroposphericModelUtils::initializeClass, 1)))
              return NULL;
            return t_TroposphericModelUtils::wrap_Object(TroposphericModelUtils(((t_TroposphericModelUtils *) arg)->object.this$));
          }
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TroposphericModelUtils::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeHeightCorrection", args);
            return NULL;
          }

          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "mappingFunction", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadataKey::class$ = NULL;
            jmethodID *AdmMetadataKey::mids$ = NULL;
            bool AdmMetadataKey::live$ = false;
            AdmMetadataKey *AdmMetadataKey::CENTER_NAME = NULL;
            AdmMetadataKey *AdmMetadataKey::OBJECT_NAME = NULL;

            jclass AdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_386dab8b480d1d49] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_c080f4a005e1a50a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");
                mids$[mid_values_89d5796d5bab69db] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                OBJECT_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_386dab8b480d1d49], a0.this$, a1.this$, a2.this$);
            }

            AdmMetadataKey AdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c080f4a005e1a50a], a0.this$));
            }

            JArray< AdmMetadataKey > AdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_89d5796d5bab69db]));
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
            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data);
            static PyGetSetDef t_AdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadataKey)[] = {
              { Py_tp_methods, t_AdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmMetadataKey, t_AdmMetadataKey, AdmMetadataKey);
            PyObject *t_AdmMetadataKey::wrap_Object(const AdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadataKey), &PY_TYPE_DEF(AdmMetadataKey), module, "AdmMetadataKey", 0);
            }

            void t_AdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "class_", make_descriptor(AdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "wrapfn_", make_descriptor(t_AdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "CENTER_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "OBJECT_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmMetadataKey::wrap_Object(AdmMetadataKey(((t_AdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::valueOf(a0));
                return t_AdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data)
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
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPBasedTransformProvider::class$ = NULL;
      jmethodID *EOPBasedTransformProvider::mids$ = NULL;
      bool EOPBasedTransformProvider::live$ = false;

      jclass EOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_1266c6198e5d43dd] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_4e3921e6b145757e] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory EOPBasedTransformProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_1266c6198e5d43dd]));
      }

      EOPBasedTransformProvider EOPBasedTransformProvider::getNonInterpolatingProvider() const
      {
        return EOPBasedTransformProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_4e3921e6b145757e]));
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
      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data);
      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_EOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, eOPHistory),
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_EOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getNonInterpolatingProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_EOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::TransformProvider),
        NULL
      };

      DEFINE_TYPE(EOPBasedTransformProvider, t_EOPBasedTransformProvider, EOPBasedTransformProvider);

      void t_EOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPBasedTransformProvider), &PY_TYPE_DEF(EOPBasedTransformProvider), module, "EOPBasedTransformProvider", 0);
      }

      void t_EOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "class_", make_descriptor(EOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "wrapfn_", make_descriptor(t_EOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_EOPBasedTransformProvider::wrap_Object(EOPBasedTransformProvider(((t_EOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self)
      {
        EOPBasedTransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data)
      {
        EOPBasedTransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeIonosphericDelayModifier::live$ = false;

          jclass BaseRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorIonosphericModel_452a588415b00924] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeErrorIonosphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getIonoModel_a6521fb5ddb54669] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeIonosphericDelayModifier, t_BaseRangeIonosphericDelayModifier, BaseRangeIonosphericDelayModifier);

          void t_BaseRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeIonosphericDelayModifier), module, "BaseRangeIonosphericDelayModifier", 0);
          }

          void t_BaseRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "class_", make_descriptor(BaseRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeIonosphericDelayModifier::wrap_Object(BaseRangeIonosphericDelayModifier(((t_BaseRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_getParametersDrivers(t_BaseRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/random/Well19937c.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well19937c::class$ = NULL;
      jmethodID *Well19937c::mids$ = NULL;
      bool Well19937c::live$ = false;

      jclass Well19937c::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well19937c");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well19937c::Well19937c() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well19937c::Well19937c(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well19937c::Well19937c(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well19937c::Well19937c(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well19937c::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args);

      static PyMethodDef t_Well19937c__methods_[] = {
        DECLARE_METHOD(t_Well19937c, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well19937c, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well19937c)[] = {
        { Py_tp_methods, t_Well19937c__methods_ },
        { Py_tp_init, (void *) t_Well19937c_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well19937c)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well19937c, t_Well19937c, Well19937c);

      void t_Well19937c::install(PyObject *module)
      {
        installType(&PY_TYPE(Well19937c), &PY_TYPE_DEF(Well19937c), module, "Well19937c", 0);
      }

      void t_Well19937c::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "class_", make_descriptor(Well19937c::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "wrapfn_", make_descriptor(t_Well19937c::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well19937c), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well19937c_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well19937c::initializeClass, 1)))
          return NULL;
        return t_Well19937c::wrap_Object(Well19937c(((t_Well19937c *) arg)->object.this$));
      }
      static PyObject *t_Well19937c_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well19937c::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well19937c_init_(t_Well19937c *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well19937c object((jobject) NULL);

            INT_CALL(object = Well19937c());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well19937c(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well19937c object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well19937c(a0));
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

      static PyObject *t_Well19937c_nextInt(t_Well19937c *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well19937c), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *DTM2000::class$ = NULL;
          jmethodID *DTM2000::mids$ = NULL;
          bool DTM2000::live$ = false;

          jclass DTM2000::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_678bd395a429449e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_7b1e93ecc13cdcd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_e3f5c4474b151066] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_ee5ac6667b0d4b90] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_1c189ae3dfeda23c] = env->getMethodID(cls, "getDensity", "(IDDDDDDDD)D");
              mids$[mid_getDensity_a56c9f22c00d48b9] = env->getMethodID(cls, "getDensity", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_678bd395a429449e, a0.this$, a1.this$, a2.this$)) {}

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b1e93ecc13cdcd9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_e3f5c4474b151066], a0.this$, a1.this$, a2.this$));
          }

          jdouble DTM2000::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_ee5ac6667b0d4b90], a0.this$, a1.this$, a2.this$);
          }

          jdouble DTM2000::getDensity(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_1c189ae3dfeda23c], a0, a1, a2, a3, a4, a5, a6, a7, a8);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_a56c9f22c00d48b9], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8));
          }

          ::org::orekit::frames::Frame DTM2000::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
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
        namespace atmosphere {
          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args);
          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self);
          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data);
          static PyGetSetDef t_DTM2000__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000__methods_[] = {
            DECLARE_METHOD(t_DTM2000, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_DTM2000, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000)[] = {
            { Py_tp_methods, t_DTM2000__methods_ },
            { Py_tp_init, (void *) t_DTM2000_init_ },
            { Py_tp_getset, t_DTM2000__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DTM2000, t_DTM2000, DTM2000);

          void t_DTM2000::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000), &PY_TYPE_DEF(DTM2000), module, "DTM2000", 0);
          }

          void t_DTM2000::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "class_", make_descriptor(DTM2000::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "wrapfn_", make_descriptor(t_DTM2000::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000::initializeClass, 1)))
              return NULL;
            return t_DTM2000::wrap_Object(DTM2000(((t_DTM2000 *) arg)->object.this$));
          }
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2, a3));
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

          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::orekit::frames::Frame a2((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 9:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble result;

                if (!parseArgs(args, "IDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IKKKKDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractIntegrator::class$ = NULL;
      jmethodID *AbstractIntegrator::mids$ = NULL;
      bool AbstractIntegrator::live$ = false;

      jclass AbstractIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_95ad63d6e12b665a] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_d6f7dd010125fe2a] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_e242ed1b39c6a814] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_7b8ea6f669f90156] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getCurrentSignedStepsize_456d9a2f64d6b28d] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_a6156df500549a58] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_ced1effea9e5e5d4] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_d60bc5812a8e442c] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/ODEState;D)V");
          mids$[mid_initIntegration_7efcd57267e426c3] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setStepStart_100c57fd45963f6d] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
          mids$[mid_setStepSize_77e0f9a1f260e2e5] = env->getMethodID(cls, "setStepSize", "(D)V");
          mids$[mid_setIsLastStep_50a2e0b139e80a58] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_getStepSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getStepSize", "()D");
          mids$[mid_acceptStep_448755d73abb80dd] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractODEStateInterpolator;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_isLastStep_e470b6d9e0d979db] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_e470b6d9e0d979db] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_412d9555fb4d6ddf] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/ExpandableODE;");
          mids$[mid_getEvaluationsCounter_745ef02916e2d8db] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_50a2e0b139e80a58] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_95ad63d6e12b665a], a0.this$);
      }

      void AbstractIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_d6f7dd010125fe2a], a0.this$);
      }

      void AbstractIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_e242ed1b39c6a814], a0.this$);
      }

      void AbstractIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_7ae3461a92a43152]);
      }

      void AbstractIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_7ae3461a92a43152]);
      }

      void AbstractIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      JArray< jdouble > AbstractIntegrator::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_7b8ea6f669f90156], a0, a1.this$));
      }

      jdouble AbstractIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_456d9a2f64d6b28d]);
      }

      jint AbstractIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      ::java::util::List AbstractIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a6156df500549a58]));
      }

      jint AbstractIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
      }

      ::java::lang::String AbstractIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::util::List AbstractIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_a6156df500549a58]));
      }

      ::java::util::List AbstractIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_a6156df500549a58]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative AbstractIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_ced1effea9e5e5d4]));
      }

      void AbstractIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_0a2a1ac2721c0336], a0);
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
      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args);
      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self);
      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data);
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data);
      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data);
      static PyGetSetDef t_AbstractIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_AbstractIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractIntegrator)[] = {
        { Py_tp_methods, t_AbstractIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractIntegrator, t_AbstractIntegrator, AbstractIntegrator);

      void t_AbstractIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractIntegrator), &PY_TYPE_DEF(AbstractIntegrator), module, "AbstractIntegrator", 0);
      }

      void t_AbstractIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "class_", make_descriptor(AbstractIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "wrapfn_", make_descriptor(t_AbstractIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractIntegrator::wrap_Object(AbstractIntegrator(((t_AbstractIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractIntegrator_addEventDetector(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepEndHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_addStepHandler(t_AbstractIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_clearEventDetectors(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepEndHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_clearStepHandlers(t_AbstractIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractIntegrator_computeDerivatives(t_AbstractIntegrator *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D", &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_getCurrentSignedStepsize(t_AbstractIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractIntegrator_getEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getEventDetectors(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_AbstractIntegrator_getMaxEvaluations(t_AbstractIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractIntegrator_getName(t_AbstractIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractIntegrator_getStepEndHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepHandlers(t_AbstractIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_AbstractIntegrator_getStepStart(t_AbstractIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_AbstractIntegrator_setMaxEvaluations(t_AbstractIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }

      static PyObject *t_AbstractIntegrator_get__currentSignedStepsize(t_AbstractIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractIntegrator_get__evaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractIntegrator_get__eventDetectors(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__maxEvaluations(t_AbstractIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractIntegrator_set__maxEvaluations(t_AbstractIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_AbstractIntegrator_get__name(t_AbstractIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepEndHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepHandlers(t_AbstractIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractIntegrator_get__stepStart(t_AbstractIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldNumericalPropagator::class$ = NULL;
        jmethodID *FieldNumericalPropagator::mids$ = NULL;
        bool FieldNumericalPropagator::live$ = false;

        jclass FieldNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_272d3b6a3360c8cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
            mids$[mid_init$_f6f035abb558a5c0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_beaeb16a38eea9d3] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_0e277b7d6a64b75a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_7ae3461a92a43152] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_52154b94d63e10ed] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_50a2e0b139e80a58] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_52154b94d63e10ed] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setMu_03a16642f77779e7] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setOrbitType_bbd02639b41d4055] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_07350e8db766ef51] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_bf5c278e5b478505] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_90835be83898efac] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createMapper_b12e4020688f2d3a] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_9199626b9ad748bb] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_272d3b6a3360c8cc, a0.this$, a1.this$)) {}

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_f6f035abb558a5c0, a0.this$, a1.this$, a2.this$)) {}

        void FieldNumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_beaeb16a38eea9d3], a0.this$);
        }

        ::java::util::List FieldNumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
        }

        ::org::orekit::orbits::OrbitType FieldNumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldNumericalPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_0e277b7d6a64b75a], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType FieldNumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        void FieldNumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_7ae3461a92a43152]);
        }

        void FieldNumericalPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_52154b94d63e10ed], a0.this$);
        }

        void FieldNumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_50a2e0b139e80a58], a0);
        }

        void FieldNumericalPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_52154b94d63e10ed], a0.this$);
        }

        void FieldNumericalPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_03a16642f77779e7], a0.this$);
        }

        void FieldNumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_bbd02639b41d4055], a0.this$);
        }

        void FieldNumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_07350e8db766ef51], a0.this$);
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_bf5c278e5b478505], a0.this$, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_90835be83898efac], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace numerical {
        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args);
        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data);
        static PyGetSetDef t_FieldNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, positionAngleType),
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNumericalPropagator)[] = {
          { Py_tp_methods, t_FieldNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldNumericalPropagator_init_ },
          { Py_tp_getset, t_FieldNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(FieldNumericalPropagator, t_FieldNumericalPropagator, FieldNumericalPropagator);
        PyObject *t_FieldNumericalPropagator::wrap_Object(const FieldNumericalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNumericalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNumericalPropagator), &PY_TYPE_DEF(FieldNumericalPropagator), module, "FieldNumericalPropagator", 0);
        }

        void t_FieldNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "class_", make_descriptor(FieldNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "wrapfn_", make_descriptor(t_FieldNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldNumericalPropagator::wrap_Object(FieldNumericalPropagator(((t_FieldNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1, a2));
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

        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg)
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

        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator::mids$ = NULL;
      bool AbstractFieldTimeInterpolator::live$ = false;
      jdouble AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_6ed33a86b884cfa4] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/FieldTimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_d78a42ee414691f7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_ad7e298cf9f2b0c8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_f183a108779aaab8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_7c4e08321b466f75] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/FieldTimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_ab8669e24b09b830] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractFieldTimeInterpolator::AbstractFieldTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

      void AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::FieldTimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_6ed33a86b884cfa4], a0.this$, a1);
      }

      jdouble AbstractFieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d]);
      }

      jint AbstractFieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::List AbstractFieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_d78a42ee414691f7], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped AbstractFieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ad7e298cf9f2b0c8], a0.this$, a1.this$));
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
      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self);
      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator, t_AbstractFieldTimeInterpolator, AbstractFieldTimeInterpolator);
      PyObject *t_AbstractFieldTimeInterpolator::wrap_Object(const AbstractFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator *self = (t_AbstractFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator), &PY_TYPE_DEF(AbstractFieldTimeInterpolator), module, "AbstractFieldTimeInterpolator", 0);
      }

      void t_AbstractFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "class_", make_descriptor(AbstractFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractFieldTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractFieldTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator::wrap_Object(AbstractFieldTimeInterpolator(((t_AbstractFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_of_(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractFieldTimeInterpolator_init_(t_AbstractFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractFieldTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractFieldTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldTimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractFieldTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getExtrapolationThreshold(t_AbstractFieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getNbInterpolationPoints(t_AbstractFieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_getSubInterpolators(t_AbstractFieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_interpolate(t_AbstractFieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractFieldTimeInterpolator_get__parameters_(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__extrapolationThreshold(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__nbInterpolationPoints(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator_get__subInterpolators(t_AbstractFieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MultivariateNormalDistribution::class$ = NULL;
        jmethodID *MultivariateNormalDistribution::mids$ = NULL;
        bool MultivariateNormalDistribution::live$ = false;

        jclass MultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cdae0ed71cfef3d1] = env->getMethodID(cls, "<init>", "([D[[D)V");
            mids$[mid_init$_4416507268beb014] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[D)V");
            mids$[mid_init$_54742420e02c0a66] = env->getMethodID(cls, "<init>", "([D[[DD)V");
            mids$[mid_init$_06cac99e0de2f70f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;[D[[DD)V");
            mids$[mid_density_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "density", "([D)D");
            mids$[mid_getCovariances_7116bbecdd8ceb21] = env->getMethodID(cls, "getCovariances", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeans_7cdc325af0834901] = env->getMethodID(cls, "getMeans", "()[D");
            mids$[mid_getSingularMatrixCheckTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getSingularMatrixCheckTolerance", "()D");
            mids$[mid_getStandardDeviations_7cdc325af0834901] = env->getMethodID(cls, "getStandardDeviations", "()[D");
            mids$[mid_sample_7cdc325af0834901] = env->getMethodID(cls, "sample", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_cdae0ed71cfef3d1, a0.this$, a1.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_4416507268beb014, a0.this$, a1.this$, a2.this$)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, jdouble a2) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_54742420e02c0a66, a0.this$, a1.this$, a2)) {}

        MultivariateNormalDistribution::MultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, jdouble a3) : ::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_06cac99e0de2f70f, a0.this$, a1.this$, a2.this$, a3)) {}

        jdouble MultivariateNormalDistribution::density(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_f05cb8c6dfd5e0b9], a0.this$);
        }

        ::org::hipparchus::linear::RealMatrix MultivariateNormalDistribution::getCovariances() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_7116bbecdd8ceb21]));
        }

        JArray< jdouble > MultivariateNormalDistribution::getMeans() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeans_7cdc325af0834901]));
        }

        jdouble MultivariateNormalDistribution::getSingularMatrixCheckTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSingularMatrixCheckTolerance_456d9a2f64d6b28d]);
        }

        JArray< jdouble > MultivariateNormalDistribution::getStandardDeviations() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getStandardDeviations_7cdc325af0834901]));
        }

        JArray< jdouble > MultivariateNormalDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_7cdc325af0834901]));
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
      namespace multivariate {
        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self);
        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args);
        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data);
        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, covariances),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, means),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, singularMatrixCheckTolerance),
          DECLARE_GET_FIELD(t_MultivariateNormalDistribution, standardDeviations),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getCovariances, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getMeans, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getSingularMatrixCheckTolerance, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, getStandardDeviations, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::AbstractMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalDistribution, t_MultivariateNormalDistribution, MultivariateNormalDistribution);

        void t_MultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalDistribution), &PY_TYPE_DEF(MultivariateNormalDistribution), module, "MultivariateNormalDistribution", 0);
        }

        void t_MultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "class_", make_descriptor(MultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalDistribution::wrap_Object(MultivariateNormalDistribution(((t_MultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalDistribution_init_(t_MultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D", &a0, &a1))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[D", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              jdouble a2;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[DD", &a0, &a1, &a2))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              jdouble a3;
              MultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "k[D[[DD", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = MultivariateNormalDistribution(a0, a1, a2, a3));
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

        static PyObject *t_MultivariateNormalDistribution_density(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_getCovariances(t_MultivariateNormalDistribution *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalDistribution_getMeans(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeans());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_getSingularMatrixCheckTolerance(t_MultivariateNormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalDistribution_getStandardDeviations(t_MultivariateNormalDistribution *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStandardDeviations());
          return result.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_sample(t_MultivariateNormalDistribution *self, PyObject *args)
        {
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sample());
            return result.wrap();
          }

          return callSuper(PY_TYPE(MultivariateNormalDistribution), (PyObject *) self, "sample", args, 2);
        }

        static PyObject *t_MultivariateNormalDistribution_get__covariances(t_MultivariateNormalDistribution *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariances());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__means(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeans());
          return value.wrap();
        }

        static PyObject *t_MultivariateNormalDistribution_get__singularMatrixCheckTolerance(t_MultivariateNormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSingularMatrixCheckTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MultivariateNormalDistribution_get__standardDeviations(t_MultivariateNormalDistribution *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStandardDeviations());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Attitude::class$ = NULL;
      jmethodID *Attitude::mids$ = NULL;
      bool Attitude::live$ = false;

      jclass Attitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Attitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a7cd0652731bfe10] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedAngularCoordinates;)V");
          mids$[mid_init$_5f47ea0b011c6224] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_45d9735c7810f3c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getOrientation_8b3d104eb3a71bfc] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedAngularCoordinates;");
          mids$[mid_getReferenceFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_24d2e432e376f9a0] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_17a952530a808943] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getSpin_17a952530a808943] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_a136a2ef3bf9ed86] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_a8de43036058d924] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Attitude::Attitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a7cd0652731bfe10, a0.this$, a1.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f47ea0b011c6224, a0.this$, a1.this$, a2.this$)) {}

      Attitude::Attitude(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45d9735c7810f3c9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::time::AbsoluteDate Attitude::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      ::org::orekit::utils::TimeStampedAngularCoordinates Attitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_8b3d104eb3a71bfc]));
      }

      ::org::orekit::frames::Frame Attitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_c8fe21bcdac65bf6]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Attitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_24d2e432e376f9a0]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Attitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getSpin_17a952530a808943]));
      }

      Attitude Attitude::shiftedBy(jdouble a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_a136a2ef3bf9ed86], a0));
      }

      Attitude Attitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return Attitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_a8de43036058d924], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Attitude_getDate(t_Attitude *self);
      static PyObject *t_Attitude_getOrientation(t_Attitude *self);
      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self);
      static PyObject *t_Attitude_getRotation(t_Attitude *self);
      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self);
      static PyObject *t_Attitude_getSpin(t_Attitude *self);
      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg);
      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data);
      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data);
      static PyGetSetDef t_Attitude__fields_[] = {
        DECLARE_GET_FIELD(t_Attitude, date),
        DECLARE_GET_FIELD(t_Attitude, orientation),
        DECLARE_GET_FIELD(t_Attitude, referenceFrame),
        DECLARE_GET_FIELD(t_Attitude, rotation),
        DECLARE_GET_FIELD(t_Attitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_Attitude, spin),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Attitude__methods_[] = {
        DECLARE_METHOD(t_Attitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Attitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_Attitude, shiftedBy, METH_O),
        DECLARE_METHOD(t_Attitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Attitude)[] = {
        { Py_tp_methods, t_Attitude__methods_ },
        { Py_tp_init, (void *) t_Attitude_init_ },
        { Py_tp_getset, t_Attitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Attitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Attitude, t_Attitude, Attitude);

      void t_Attitude::install(PyObject *module)
      {
        installType(&PY_TYPE(Attitude), &PY_TYPE_DEF(Attitude), module, "Attitude", 0);
      }

      void t_Attitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "class_", make_descriptor(Attitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "wrapfn_", make_descriptor(t_Attitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Attitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Attitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Attitude::initializeClass, 1)))
          return NULL;
        return t_Attitude::wrap_Object(Attitude(((t_Attitude *) arg)->object.this$));
      }
      static PyObject *t_Attitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Attitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Attitude_init_(t_Attitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedAngularCoordinates a1((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Attitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Attitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            Attitude object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = Attitude(a0, a1, a2, a3, a4));
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

      static PyObject *t_Attitude_getDate(t_Attitude *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Attitude_getOrientation(t_Attitude *self)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Attitude_getReferenceFrame(t_Attitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotation(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Attitude_getRotationAcceleration(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_getSpin(t_Attitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Attitude_shiftedBy(t_Attitude *self, PyObject *arg)
      {
        jdouble a0;
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Attitude_withReferenceFrame(t_Attitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        Attitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_Attitude::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }

      static PyObject *t_Attitude_get__date(t_Attitude *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__orientation(t_Attitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__referenceFrame(t_Attitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotation(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__rotationAcceleration(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Attitude_get__spin(t_Attitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
