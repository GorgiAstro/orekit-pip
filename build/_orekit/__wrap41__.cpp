#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$RangeMeasurement::class$ = NULL;
        jmethodID *CRD$RangeMeasurement::mids$ = NULL;
        bool CRD$RangeMeasurement::live$ = false;

        jclass CRD$RangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$RangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6b96dc882ab9fbf5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_init$_c6ef3bf05ecd3759] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DID)V");
            mids$[mid_init$_cc3de2c8e70eba76] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DIDLjava/lang/String;)V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochEvent_d6ab429752e7c267] = env->getMethodID(cls, "getEpochEvent", "()I");
            mids$[mid_getSnr_9981f74b2d109da6] = env->getMethodID(cls, "getSnr", "()D");
            mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getTimeOfFlight_9981f74b2d109da6] = env->getMethodID(cls, "getTimeOfFlight", "()D");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b96dc882ab9fbf5, a0.this$, a1, a2)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6ef3bf05ecd3759, a0.this$, a1, a2, a3)) {}

        CRD$RangeMeasurement::CRD$RangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, jdouble a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cc3de2c8e70eba76, a0.this$, a1, a2, a3, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate CRD$RangeMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jint CRD$RangeMeasurement::getEpochEvent() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochEvent_d6ab429752e7c267]);
        }

        jdouble CRD$RangeMeasurement::getSnr() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSnr_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$RangeMeasurement::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_d2c8eb4129821f0e]));
        }

        jdouble CRD$RangeMeasurement::getTimeOfFlight() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOfFlight_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$RangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
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
      namespace ilrs {
        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self);
        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data);
        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$RangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, epochEvent),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, snr),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$RangeMeasurement, timeOfFlight),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$RangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$RangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getEpochEvent, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSnr, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, getTimeOfFlight, METH_NOARGS),
          DECLARE_METHOD(t_CRD$RangeMeasurement, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$RangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$RangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$RangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$RangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$RangeMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$RangeMeasurement, t_CRD$RangeMeasurement, CRD$RangeMeasurement);

        void t_CRD$RangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$RangeMeasurement), &PY_TYPE_DEF(CRD$RangeMeasurement), module, "CRD$RangeMeasurement", 0);
        }

        void t_CRD$RangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "class_", make_descriptor(CRD$RangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "wrapfn_", make_descriptor(t_CRD$RangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$RangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$RangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$RangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$RangeMeasurement::wrap_Object(CRD$RangeMeasurement(((t_CRD$RangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$RangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$RangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$RangeMeasurement_init_(t_CRD$RangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jint a2;
              jdouble a3;
              ::java::lang::String a4((jobject) NULL);
              CRD$RangeMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDIDs", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$RangeMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$RangeMeasurement_getDate(t_CRD$RangeMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getEpochEvent(t_CRD$RangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochEvent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSnr(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSnr());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_getSystemConfigurationId(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_getTimeOfFlight(t_CRD$RangeMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$RangeMeasurement_toCrdString(t_CRD$RangeMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$RangeMeasurement_get__date(t_CRD$RangeMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__epochEvent(t_CRD$RangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochEvent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__snr(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSnr());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__systemConfigurationId(t_CRD$RangeMeasurement *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$RangeMeasurement_get__timeOfFlight(t_CRD$RangeMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOfFlight());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *SecularAndHarmonic::class$ = NULL;
      jmethodID *SecularAndHarmonic::mids$ = NULL;
      bool SecularAndHarmonic::live$ = false;

      jclass SecularAndHarmonic::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/SecularAndHarmonic");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9d367e34fba0a5ea] = env->getMethodID(cls, "<init>", "(I[D)V");
          mids$[mid_addPoint_6ed2c1cd7b0b1c75] = env->getMethodID(cls, "addPoint", "(Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addWeightedPoint_d1740697fab3a0ee] = env->getMethodID(cls, "addWeightedPoint", "(Lorg/orekit/time/AbsoluteDate;DD)V");
          mids$[mid_approximateAsPolynomialOnly_e4bfc9f116bdd840] = env->getMethodID(cls, "approximateAsPolynomialOnly", "(ILorg/orekit/time/AbsoluteDate;IILorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)[D");
          mids$[mid_fit_ff7cb6c242604316] = env->getMethodID(cls, "fit", "()V");
          mids$[mid_getFittedParameters_be783177b060994b] = env->getMethodID(cls, "getFittedParameters", "()[D");
          mids$[mid_getHarmonicAmplitude_9981f74b2d109da6] = env->getMethodID(cls, "getHarmonicAmplitude", "()D");
          mids$[mid_getPulsations_be783177b060994b] = env->getMethodID(cls, "getPulsations", "()[D");
          mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getSecularDegree_d6ab429752e7c267] = env->getMethodID(cls, "getSecularDegree", "()I");
          mids$[mid_meanDerivative_a3f9cea77181e4c8] = env->getMethodID(cls, "meanDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanSecondDerivative_a3f9cea77181e4c8] = env->getMethodID(cls, "meanSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_meanValue_a3f9cea77181e4c8] = env->getMethodID(cls, "meanValue", "(Lorg/orekit/time/AbsoluteDate;II)D");
          mids$[mid_osculatingDerivative_209f08246d708042] = env->getMethodID(cls, "osculatingDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingSecondDerivative_209f08246d708042] = env->getMethodID(cls, "osculatingSecondDerivative", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_osculatingValue_209f08246d708042] = env->getMethodID(cls, "osculatingValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_resetFitting_03daf63e1af251cd] = env->getMethodID(cls, "resetFitting", "(Lorg/orekit/time/AbsoluteDate;[D)V");
          mids$[mid_setConvergenceRMS_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setConvergenceRMS", "(D)V");
          mids$[mid_setMaxIter_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxIter", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SecularAndHarmonic::SecularAndHarmonic(jint a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9d367e34fba0a5ea, a0, a1.this$)) {}

      void SecularAndHarmonic::addPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addPoint_6ed2c1cd7b0b1c75], a0.this$, a1);
      }

      void SecularAndHarmonic::addWeightedPoint(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addWeightedPoint_d1740697fab3a0ee], a0.this$, a1, a2);
      }

      JArray< jdouble > SecularAndHarmonic::approximateAsPolynomialOnly(jint a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jint a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::time::AbsoluteDate & a5, jdouble a6) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_approximateAsPolynomialOnly_e4bfc9f116bdd840], a0, a1.this$, a2, a3, a4.this$, a5.this$, a6));
      }

      void SecularAndHarmonic::fit() const
      {
        env->callVoidMethod(this$, mids$[mid_fit_ff7cb6c242604316]);
      }

      JArray< jdouble > SecularAndHarmonic::getFittedParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getFittedParameters_be783177b060994b]));
      }

      jdouble SecularAndHarmonic::getHarmonicAmplitude() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHarmonicAmplitude_9981f74b2d109da6]);
      }

      JArray< jdouble > SecularAndHarmonic::getPulsations() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPulsations_be783177b060994b]));
      }

      ::org::orekit::time::AbsoluteDate SecularAndHarmonic::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
      }

      jint SecularAndHarmonic::getSecularDegree() const
      {
        return env->callIntMethod(this$, mids$[mid_getSecularDegree_d6ab429752e7c267]);
      }

      jdouble SecularAndHarmonic::meanDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanDerivative_a3f9cea77181e4c8], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanSecondDerivative_a3f9cea77181e4c8], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::meanValue(const ::org::orekit::time::AbsoluteDate & a0, jint a1, jint a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_meanValue_a3f9cea77181e4c8], a0.this$, a1, a2);
      }

      jdouble SecularAndHarmonic::osculatingDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingDerivative_209f08246d708042], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingSecondDerivative(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingSecondDerivative_209f08246d708042], a0.this$);
      }

      jdouble SecularAndHarmonic::osculatingValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_osculatingValue_209f08246d708042], a0.this$);
      }

      void SecularAndHarmonic::resetFitting(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_resetFitting_03daf63e1af251cd], a0.this$, a1.this$);
      }

      void SecularAndHarmonic::setConvergenceRMS(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setConvergenceRMS_1ad26e8c8c0cd65b], a0);
      }

      void SecularAndHarmonic::setMaxIter(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxIter_8fd427ab23829bf5], a0);
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
      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self);
      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args);
      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg);
      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg);
      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data);
      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data);
      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data);
      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data);
      static PyGetSetDef t_SecularAndHarmonic__fields_[] = {
        DECLARE_SET_FIELD(t_SecularAndHarmonic, convergenceRMS),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, fittedParameters),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, harmonicAmplitude),
        DECLARE_SET_FIELD(t_SecularAndHarmonic, maxIter),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, pulsations),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, referenceDate),
        DECLARE_GET_FIELD(t_SecularAndHarmonic, secularDegree),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecularAndHarmonic__methods_[] = {
        DECLARE_METHOD(t_SecularAndHarmonic, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecularAndHarmonic, addPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, addWeightedPoint, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, approximateAsPolynomialOnly, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, fit, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getFittedParameters, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getHarmonicAmplitude, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getPulsations, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, getSecularDegree, METH_NOARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanSecondDerivative, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, meanValue, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingSecondDerivative, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, osculatingValue, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, resetFitting, METH_VARARGS),
        DECLARE_METHOD(t_SecularAndHarmonic, setConvergenceRMS, METH_O),
        DECLARE_METHOD(t_SecularAndHarmonic, setMaxIter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecularAndHarmonic)[] = {
        { Py_tp_methods, t_SecularAndHarmonic__methods_ },
        { Py_tp_init, (void *) t_SecularAndHarmonic_init_ },
        { Py_tp_getset, t_SecularAndHarmonic__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecularAndHarmonic)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecularAndHarmonic, t_SecularAndHarmonic, SecularAndHarmonic);

      void t_SecularAndHarmonic::install(PyObject *module)
      {
        installType(&PY_TYPE(SecularAndHarmonic), &PY_TYPE_DEF(SecularAndHarmonic), module, "SecularAndHarmonic", 0);
      }

      void t_SecularAndHarmonic::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "class_", make_descriptor(SecularAndHarmonic::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "wrapfn_", make_descriptor(t_SecularAndHarmonic::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecularAndHarmonic), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecularAndHarmonic_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecularAndHarmonic::initializeClass, 1)))
          return NULL;
        return t_SecularAndHarmonic::wrap_Object(SecularAndHarmonic(((t_SecularAndHarmonic *) arg)->object.this$));
      }
      static PyObject *t_SecularAndHarmonic_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecularAndHarmonic::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SecularAndHarmonic_init_(t_SecularAndHarmonic *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);
        SecularAndHarmonic object((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          INT_CALL(object = SecularAndHarmonic(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SecularAndHarmonic_addPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;

        if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.addPoint(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_addWeightedPoint(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addWeightedPoint(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addWeightedPoint", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_approximateAsPolynomialOnly(t_SecularAndHarmonic *self, PyObject *args)
      {
        jint a0;
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jint a3;
        ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
        jdouble a6;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "IkIIkkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
        {
          OBJ_CALL(result = self->object.approximateAsPolynomialOnly(a0, a1, a2, a3, a4, a5, a6));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "approximateAsPolynomialOnly", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_fit(t_SecularAndHarmonic *self)
      {
        OBJ_CALL(self->object.fit());
        Py_RETURN_NONE;
      }

      static PyObject *t_SecularAndHarmonic_getFittedParameters(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getFittedParameters());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getHarmonicAmplitude(t_SecularAndHarmonic *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SecularAndHarmonic_getPulsations(t_SecularAndHarmonic *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPulsations());
        return result.wrap();
      }

      static PyObject *t_SecularAndHarmonic_getReferenceDate(t_SecularAndHarmonic *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_SecularAndHarmonic_getSecularDegree(t_SecularAndHarmonic *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSecularDegree());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecularAndHarmonic_meanDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanSecondDerivative(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanSecondDerivative(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanSecondDerivative", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_meanValue(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jint a1;
        jint a2;
        jdouble result;

        if (!parseArgs(args, "kII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.meanValue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "meanValue", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingSecondDerivative(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingSecondDerivative(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingSecondDerivative", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_osculatingValue(t_SecularAndHarmonic *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.osculatingValue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "osculatingValue", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_resetFitting(t_SecularAndHarmonic *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.resetFitting(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetFitting", args);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setConvergenceRMS(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setConvergenceRMS(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setConvergenceRMS", arg);
        return NULL;
      }

      static PyObject *t_SecularAndHarmonic_setMaxIter(t_SecularAndHarmonic *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxIter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxIter", arg);
        return NULL;
      }

      static int t_SecularAndHarmonic_set__convergenceRMS(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setConvergenceRMS(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "convergenceRMS", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__fittedParameters(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getFittedParameters());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__harmonicAmplitude(t_SecularAndHarmonic *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHarmonicAmplitude());
        return PyFloat_FromDouble((double) value);
      }

      static int t_SecularAndHarmonic_set__maxIter(t_SecularAndHarmonic *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxIter(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxIter", arg);
        return -1;
      }

      static PyObject *t_SecularAndHarmonic_get__pulsations(t_SecularAndHarmonic *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPulsations());
        return value.wrap();
      }

      static PyObject *t_SecularAndHarmonic_get__referenceDate(t_SecularAndHarmonic *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_SecularAndHarmonic_get__secularDegree(t_SecularAndHarmonic *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSecularDegree());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/errors/TimeStampedCacheException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *TimeStampedCacheException::class$ = NULL;
      jmethodID *TimeStampedCacheException::mids$ = NULL;
      bool TimeStampedCacheException::live$ = false;

      jclass TimeStampedCacheException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/TimeStampedCacheException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_23bc72a529164bda] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/MathRuntimeException;)V");
          mids$[mid_init$_a3d9201369e0f719] = env->getMethodID(cls, "<init>", "(Lorg/orekit/errors/OrekitException;)V");
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_unwrap_ce967debe2389e2a] = env->getStaticMethodID(cls, "unwrap", "(Lorg/hipparchus/exception/MathRuntimeException;)Lorg/orekit/errors/TimeStampedCacheException;");
          mids$[mid_unwrap_ebde7ec9195e90a4] = env->getStaticMethodID(cls, "unwrap", "(Lorg/orekit/errors/OrekitException;)Lorg/orekit/errors/TimeStampedCacheException;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::MathRuntimeException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_23bc72a529164bda, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::orekit::errors::OrekitException & a0) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_a3d9201369e0f719, a0.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      TimeStampedCacheException::TimeStampedCacheException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::hipparchus::exception::MathRuntimeException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_ce967debe2389e2a], a0.this$));
      }

      TimeStampedCacheException TimeStampedCacheException::unwrap(const ::org::orekit::errors::OrekitException & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return TimeStampedCacheException(env->callStaticObjectMethod(cls, mids$[mid_unwrap_ebde7ec9195e90a4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_TimeStampedCacheException__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCacheException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCacheException, unwrap, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCacheException)[] = {
        { Py_tp_methods, t_TimeStampedCacheException__methods_ },
        { Py_tp_init, (void *) t_TimeStampedCacheException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCacheException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(TimeStampedCacheException, t_TimeStampedCacheException, TimeStampedCacheException);

      void t_TimeStampedCacheException::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCacheException), &PY_TYPE_DEF(TimeStampedCacheException), module, "TimeStampedCacheException", 0);
      }

      void t_TimeStampedCacheException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "class_", make_descriptor(TimeStampedCacheException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "wrapfn_", make_descriptor(t_TimeStampedCacheException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCacheException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCacheException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCacheException::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCacheException::wrap_Object(TimeStampedCacheException(((t_TimeStampedCacheException *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCacheException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCacheException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedCacheException_init_(t_TimeStampedCacheException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              INT_CALL(object = TimeStampedCacheException(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::Throwable a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);
            TimeStampedCacheException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedCacheException(a0, a1, a2));
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

      static PyObject *t_TimeStampedCacheException_unwrap(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::exception::MathRuntimeException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::exception::MathRuntimeException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
          {
            ::org::orekit::errors::OrekitException a0((jobject) NULL);
            TimeStampedCacheException result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::errors::OrekitException::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::errors::TimeStampedCacheException::unwrap(a0));
              return t_TimeStampedCacheException::wrap_Object(result);
            }
          }
        }

        return callSuper(type, "unwrap", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *AtmosphericRefractionModel::class$ = NULL;
      jmethodID *AtmosphericRefractionModel::mids$ = NULL;
      bool AtmosphericRefractionModel::live$ = false;

      jclass AtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/AtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRefraction_bf28ed64d6e8576b] = env->getMethodID(cls, "getRefraction", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble AtmosphericRefractionModel::getRefraction(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRefraction_bf28ed64d6e8576b], a0);
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
      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg);

      static PyMethodDef t_AtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_AtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AtmosphericRefractionModel, getRefraction, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_AtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(AtmosphericRefractionModel, t_AtmosphericRefractionModel, AtmosphericRefractionModel);

      void t_AtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(AtmosphericRefractionModel), &PY_TYPE_DEF(AtmosphericRefractionModel), module, "AtmosphericRefractionModel", 0);
      }

      void t_AtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "class_", make_descriptor(AtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "wrapfn_", make_descriptor(t_AtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_AtmosphericRefractionModel::wrap_Object(AtmosphericRefractionModel(((t_AtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_AtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AtmosphericRefractionModel_getRefraction(t_AtmosphericRefractionModel *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getRefraction(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getRefraction", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *PolynomialSolver::class$ = NULL;
        jmethodID *PolynomialSolver::mids$ = NULL;
        bool PolynomialSolver::live$ = false;

        jclass PolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/PolynomialSolver");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace solvers {
        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_PolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_PolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialSolver)[] = {
          { Py_tp_methods, t_PolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(PolynomialSolver, t_PolynomialSolver, PolynomialSolver);

        void t_PolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialSolver), &PY_TYPE_DEF(PolynomialSolver), module, "PolynomialSolver", 0);
        }

        void t_PolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "class_", make_descriptor(PolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "wrapfn_", make_descriptor(t_PolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_PolynomialSolver::wrap_Object(PolynomialSolver(((t_PolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_PolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractWindUp::class$ = NULL;
          jmethodID *AbstractWindUp::mids$ = NULL;
          bool AbstractWindUp::live$ = false;

          jclass AbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_emitterToInert_f462106a6ca97aca] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_receiverToInert_f462106a6ca97aca] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractWindUp::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void AbstractWindUp::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args);
          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self);
          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg);
          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data);
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data);
          static PyGetSetDef t_AbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractWindUp, parametersDrivers),
            DECLARE_GET_FIELD(t_AbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_AbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractWindUp, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractWindUp, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWindUp)[] = {
            { Py_tp_methods, t_AbstractWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWindUp)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWindUp, t_AbstractWindUp, AbstractWindUp);
          PyObject *t_AbstractWindUp::wrap_Object(const AbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWindUp), &PY_TYPE_DEF(AbstractWindUp), module, "AbstractWindUp", 0);
          }

          void t_AbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "class_", make_descriptor(AbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "wrapfn_", make_descriptor(t_AbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_AbstractWindUp::wrap_Object(AbstractWindUp(((t_AbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg)
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
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data)
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
#include "org/orekit/time/PythonTimeShiftable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeShiftable::class$ = NULL;
      jmethodID *PythonTimeShiftable::mids$ = NULL;
      bool PythonTimeShiftable::live$ = false;

      jclass PythonTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_d6202557abc1fed4] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeShiftable::PythonTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args);
      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self);
      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args);
      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data);
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeShiftable, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeShiftable)[] = {
        { Py_tp_methods, t_PythonTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonTimeShiftable_init_ },
        { Py_tp_getset, t_PythonTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeShiftable, t_PythonTimeShiftable, PythonTimeShiftable);
      PyObject *t_PythonTimeShiftable::wrap_Object(const PythonTimeShiftable& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeShiftable *self = (t_PythonTimeShiftable *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeShiftable), &PY_TYPE_DEF(PythonTimeShiftable), module, "PythonTimeShiftable", 1);
      }

      void t_PythonTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "class_", make_descriptor(PythonTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "wrapfn_", make_descriptor(t_PythonTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/TimeShiftable;", (void *) t_PythonTimeShiftable_shiftedBy1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonTimeShiftable::wrap_Object(PythonTimeShiftable(((t_PythonTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeShiftable_of_(t_PythonTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeShiftable_init_(t_PythonTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeShiftable_finalize(t_PythonTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeShiftable_pythonExtension(t_PythonTimeShiftable *self, PyObject *args)
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

      static void JNICALL t_PythonTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeShiftable::mids$[PythonTimeShiftable::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeShiftable::initializeClass, &value))
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

      static PyObject *t_PythonTimeShiftable_get__self(t_PythonTimeShiftable *self, void *data)
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
      static PyObject *t_PythonTimeShiftable_get__parameters_(t_PythonTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovarianceHistory::class$ = NULL;
              jmethodID *AttitudeCovarianceHistory::mids$ = NULL;
              bool AttitudeCovarianceHistory::live$ = false;

              jclass AttitudeCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_5636a7c44212565c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_d751c1a57012b438] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_d2c768948b96ca08] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovarianceHistory::AttitudeCovarianceHistory(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5636a7c44212565c, a0.this$, a1.this$)) {}

              ::java::util::List AttitudeCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_d751c1a57012b438]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata AttitudeCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_d2c768948b96ca08]));
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
              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self);
              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data);
              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistory)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovarianceHistory_init_ },
                { Py_tp_getset, t_AttitudeCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistory, t_AttitudeCovarianceHistory, AttitudeCovarianceHistory);

              void t_AttitudeCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistory), &PY_TYPE_DEF(AttitudeCovarianceHistory), module, "AttitudeCovarianceHistory", 0);
              }

              void t_AttitudeCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "class_", make_descriptor(AttitudeCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistory::wrap_Object(AttitudeCovarianceHistory(((t_AttitudeCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovarianceHistory_init_(t_AttitudeCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AttitudeCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AttitudeCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovarianceHistory_getCovariances(t_AttitudeCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeCovariance));
              }

              static PyObject *t_AttitudeCovarianceHistory_getMetadata(t_AttitudeCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__covariances(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovarianceHistory_get__metadata(t_AttitudeCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/gnss/rflink/gps/SubFrame2.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame2::class$ = NULL;
          jmethodID *SubFrame2::mids$ = NULL;
          bool SubFrame2::live$ = false;

          jclass SubFrame2::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame2");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAODO_d6ab429752e7c267] = env->getMethodID(cls, "getAODO", "()I");
              mids$[mid_getCrs_9981f74b2d109da6] = env->getMethodID(cls, "getCrs", "()D");
              mids$[mid_getCuc_9981f74b2d109da6] = env->getMethodID(cls, "getCuc", "()D");
              mids$[mid_getCus_9981f74b2d109da6] = env->getMethodID(cls, "getCus", "()D");
              mids$[mid_getDeltaN_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaN", "()D");
              mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getFitInterval_d6ab429752e7c267] = env->getMethodID(cls, "getFitInterval", "()I");
              mids$[mid_getIODE_d6ab429752e7c267] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getM0_9981f74b2d109da6] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getSqrtA_9981f74b2d109da6] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getToe_d6ab429752e7c267] = env->getMethodID(cls, "getToe", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame2::getAODO() const
          {
            return env->callIntMethod(this$, mids$[mid_getAODO_d6ab429752e7c267]);
          }

          jdouble SubFrame2::getCrs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrs_9981f74b2d109da6]);
          }

          jdouble SubFrame2::getCuc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCuc_9981f74b2d109da6]);
          }

          jdouble SubFrame2::getCus() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCus_9981f74b2d109da6]);
          }

          jdouble SubFrame2::getDeltaN() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltaN_9981f74b2d109da6]);
          }

          jdouble SubFrame2::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
          }

          jint SubFrame2::getFitInterval() const
          {
            return env->callIntMethod(this$, mids$[mid_getFitInterval_d6ab429752e7c267]);
          }

          jint SubFrame2::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_d6ab429752e7c267]);
          }

          jdouble SubFrame2::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_9981f74b2d109da6]);
          }

          jdouble SubFrame2::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_9981f74b2d109da6]);
          }

          jint SubFrame2::getToe() const
          {
            return env->callIntMethod(this$, mids$[mid_getToe_d6ab429752e7c267]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self);
          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data);
          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data);
          static PyGetSetDef t_SubFrame2__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame2, aODO),
            DECLARE_GET_FIELD(t_SubFrame2, crs),
            DECLARE_GET_FIELD(t_SubFrame2, cuc),
            DECLARE_GET_FIELD(t_SubFrame2, cus),
            DECLARE_GET_FIELD(t_SubFrame2, deltaN),
            DECLARE_GET_FIELD(t_SubFrame2, e),
            DECLARE_GET_FIELD(t_SubFrame2, fitInterval),
            DECLARE_GET_FIELD(t_SubFrame2, iODE),
            DECLARE_GET_FIELD(t_SubFrame2, m0),
            DECLARE_GET_FIELD(t_SubFrame2, sqrtA),
            DECLARE_GET_FIELD(t_SubFrame2, toe),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame2__methods_[] = {
            DECLARE_METHOD(t_SubFrame2, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame2, getAODO, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCrs, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCuc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getCus, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getDeltaN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getFitInterval, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame2, getToe, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame2)[] = {
            { Py_tp_methods, t_SubFrame2__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame2__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame2)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame2, t_SubFrame2, SubFrame2);

          void t_SubFrame2::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame2), &PY_TYPE_DEF(SubFrame2), module, "SubFrame2", 0);
          }

          void t_SubFrame2::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "class_", make_descriptor(SubFrame2::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "wrapfn_", make_descriptor(t_SubFrame2::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame2), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame2_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame2::initializeClass, 1)))
              return NULL;
            return t_SubFrame2::wrap_Object(SubFrame2(((t_SubFrame2 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame2_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame2::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame2_getAODO(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getAODO());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getCrs(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCuc(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCuc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getCus(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCus());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getDeltaN(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltaN());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getE(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getFitInterval(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getFitInterval());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getIODE(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_getM0(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getSqrtA(t_SubFrame2 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame2_getToe(t_SubFrame2 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToe());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame2_get__aODO(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getAODO());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__crs(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrs());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cuc(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCuc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__cus(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCus());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__deltaN(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltaN());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__e(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__fitInterval(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getFitInterval());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__iODE(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame2_get__m0(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__sqrtA(t_SubFrame2 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame2_get__toe(t_SubFrame2 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToe());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileOutputStream::class$ = NULL;
    jmethodID *FileOutputStream::mids$ = NULL;
    bool FileOutputStream::live$ = false;

    jclass FileOutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileOutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_2abbf5ab4dcb8447] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_cce9dad9a003ecf9] = env->getMethodID(cls, "<init>", "(Ljava/io/File;Z)V");
        mids$[mid_init$_c5d48f261709aa3e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_18958df2242529e5] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_write_bba2a19638de22ff] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_8fd427ab23829bf5] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_e4288ba5fbf20d28] = env->getMethodID(cls, "write", "([BII)V");
        mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileOutputStream::FileOutputStream(const ::java::io::File & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::FileDescriptor & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_2abbf5ab4dcb8447, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    FileOutputStream::FileOutputStream(const ::java::io::File & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_cce9dad9a003ecf9, a0.this$, a1)) {}

    FileOutputStream::FileOutputStream(const ::java::lang::String & a0, jboolean a1) : ::java::io::OutputStream(env->newObject(initializeClass, &mids$, mid_init$_c5d48f261709aa3e, a0.this$, a1)) {}

    void FileOutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    ::java::io::FileDescriptor FileOutputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_18958df2242529e5]));
    }

    void FileOutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_bba2a19638de22ff], a0.this$);
    }

    void FileOutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_8fd427ab23829bf5], a0);
    }

    void FileOutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_e4288ba5fbf20d28], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self);
    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args);
    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data);
    static PyGetSetDef t_FileOutputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileOutputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileOutputStream__methods_[] = {
      DECLARE_METHOD(t_FileOutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileOutputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileOutputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileOutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileOutputStream)[] = {
      { Py_tp_methods, t_FileOutputStream__methods_ },
      { Py_tp_init, (void *) t_FileOutputStream_init_ },
      { Py_tp_getset, t_FileOutputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileOutputStream)[] = {
      &PY_TYPE_DEF(::java::io::OutputStream),
      NULL
    };

    DEFINE_TYPE(FileOutputStream, t_FileOutputStream, FileOutputStream);

    void t_FileOutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileOutputStream), &PY_TYPE_DEF(FileOutputStream), module, "FileOutputStream", 0);
    }

    void t_FileOutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "class_", make_descriptor(FileOutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "wrapfn_", make_descriptor(t_FileOutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileOutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileOutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileOutputStream::initializeClass, 1)))
        return NULL;
      return t_FileOutputStream::wrap_Object(FileOutputStream(((t_FileOutputStream *) arg)->object.this$));
    }
    static PyObject *t_FileOutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileOutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileOutputStream_init_(t_FileOutputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileOutputStream(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::File a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "kZ", ::java::io::File::initializeClass, &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean a1;
          FileOutputStream object((jobject) NULL);

          if (!parseArgs(args, "sZ", &a0, &a1))
          {
            INT_CALL(object = FileOutputStream(a0, a1));
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

    static PyObject *t_FileOutputStream_close(t_FileOutputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileOutputStream_getFD(t_FileOutputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileOutputStream_write(t_FileOutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(FileOutputStream), (PyObject *) self, "write", args, 2);
    }

    static PyObject *t_FileOutputStream_get__fD(t_FileOutputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraint::class$ = NULL;
        jmethodID *LinearConstraint::mids$ = NULL;
        bool LinearConstraint::live$ = false;

        jclass LinearConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e28600871a1a8ed6] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_780aacbfbc3e99fd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_a368520181f3b67a] = env->getMethodID(cls, "<init>", "([DDLorg/hipparchus/optim/linear/Relationship;[DD)V");
            mids$[mid_init$_efa3f8594ad0245e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;DLorg/hipparchus/optim/linear/Relationship;Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getRelationship_e6c81e0fe5424903] = env->getMethodID(cls, "getRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e28600871a1a8ed6, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_780aacbfbc3e99fd, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const JArray< jdouble > & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a368520181f3b67a, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efa3f8594ad0245e, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        jboolean LinearConstraint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearConstraint::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::optim::linear::Relationship LinearConstraint::getRelationship() const
        {
          return ::org::hipparchus::optim::linear::Relationship(env->callObjectMethod(this$, mids$[mid_getRelationship_e6c81e0fe5424903]));
        }

        jdouble LinearConstraint::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
        }

        jint LinearConstraint::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data);
        static PyGetSetDef t_LinearConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraint, coefficients),
          DECLARE_GET_FIELD(t_LinearConstraint, relationship),
          DECLARE_GET_FIELD(t_LinearConstraint, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraint__methods_[] = {
          DECLARE_METHOD(t_LinearConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearConstraint, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getRelationship, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getValue, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraint)[] = {
          { Py_tp_methods, t_LinearConstraint__methods_ },
          { Py_tp_init, (void *) t_LinearConstraint_init_ },
          { Py_tp_getset, t_LinearConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraint, t_LinearConstraint, LinearConstraint);

        void t_LinearConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraint), &PY_TYPE_DEF(LinearConstraint), module, "LinearConstraint", 0);
        }

        void t_LinearConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "class_", make_descriptor(LinearConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "wrapfn_", make_descriptor(t_LinearConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraint::initializeClass, 1)))
            return NULL;
          return t_LinearConstraint::wrap_Object(LinearConstraint(((t_LinearConstraint *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DKD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DDK[DD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::linear::RealVector a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kDKkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
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

        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self)
        {
          ::org::hipparchus::optim::linear::Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::optim::linear::Relationship value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FixedStepSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FixedStepSelector::class$ = NULL;
      jmethodID *FixedStepSelector::mids$ = NULL;
      bool FixedStepSelector::live$ = false;

      jclass FixedStepSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FixedStepSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4086a36ed4ec6069] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_0499dac7e83b853d] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedStepSelector::FixedStepSelector(jdouble a0, const ::org::orekit::time::TimeScale & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4086a36ed4ec6069, a0, a1.this$)) {}

      ::java::util::List FixedStepSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_0499dac7e83b853d], a0.this$, a1.this$));
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
      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args);

      static PyMethodDef t_FixedStepSelector__methods_[] = {
        DECLARE_METHOD(t_FixedStepSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedStepSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedStepSelector)[] = {
        { Py_tp_methods, t_FixedStepSelector__methods_ },
        { Py_tp_init, (void *) t_FixedStepSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedStepSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedStepSelector, t_FixedStepSelector, FixedStepSelector);

      void t_FixedStepSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedStepSelector), &PY_TYPE_DEF(FixedStepSelector), module, "FixedStepSelector", 0);
      }

      void t_FixedStepSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "class_", make_descriptor(FixedStepSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "wrapfn_", make_descriptor(t_FixedStepSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedStepSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedStepSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedStepSelector::initializeClass, 1)))
          return NULL;
        return t_FixedStepSelector::wrap_Object(FixedStepSelector(((t_FixedStepSelector *) arg)->object.this$));
      }
      static PyObject *t_FixedStepSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedStepSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedStepSelector_init_(t_FixedStepSelector *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        FixedStepSelector object((jobject) NULL);

        if (!parseArgs(args, "Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FixedStepSelector(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedStepSelector_selectDates(t_FixedStepSelector *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.selectDates(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(AbsoluteDate));
        }

        PyErr_SetArgsError((PyObject *) self, "selectDates", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSRangeModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSRangeModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_471620e7e7f15fbf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSRangeModifier::OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_471620e7e7f15fbf, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OnBoardAntennaOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSRangeModifier, t_OnBoardAntennaOneWayGNSSRangeModifier, OnBoardAntennaOneWayGNSSRangeModifier);

          void t_OnBoardAntennaOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier), module, "OnBoardAntennaOneWayGNSSRangeModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_Object(OnBoardAntennaOneWayGNSSRangeModifier(((t_OnBoardAntennaOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *ClockCorrection::class$ = NULL;
            jmethodID *ClockCorrection::mids$ = NULL;
            bool ClockCorrection::live$ = false;

            jclass ClockCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/ClockCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
                mids$[mid_getDeltaClockC0_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaClockC0", "()D");
                mids$[mid_getDeltaClockC1_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaClockC1", "()D");
                mids$[mid_getDeltaClockC2_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaClockC2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ClockCorrection::ClockCorrection(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

            jdouble ClockCorrection::getDeltaClockC0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC0_9981f74b2d109da6]);
            }

            jdouble ClockCorrection::getDeltaClockC1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC1_9981f74b2d109da6]);
            }

            jdouble ClockCorrection::getDeltaClockC2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC2_9981f74b2d109da6]);
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
          namespace common {
            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data);
            static PyGetSetDef t_ClockCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC0),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC1),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ClockCorrection__methods_[] = {
              DECLARE_METHOD(t_ClockCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC0, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC1, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ClockCorrection)[] = {
              { Py_tp_methods, t_ClockCorrection__methods_ },
              { Py_tp_init, (void *) t_ClockCorrection_init_ },
              { Py_tp_getset, t_ClockCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ClockCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ClockCorrection, t_ClockCorrection, ClockCorrection);

            void t_ClockCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(ClockCorrection), &PY_TYPE_DEF(ClockCorrection), module, "ClockCorrection", 0);
            }

            void t_ClockCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "class_", make_descriptor(ClockCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "wrapfn_", make_descriptor(t_ClockCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ClockCorrection::initializeClass, 1)))
                return NULL;
              return t_ClockCorrection::wrap_Object(ClockCorrection(((t_ClockCorrection *) arg)->object.this$));
            }
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ClockCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ClockCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ClockCorrection(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC2());
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
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersWriter::class$ = NULL;
            jmethodID *SpacecraftParametersWriter::mids$ = NULL;
            bool SpacecraftParametersWriter::live$ = false;

            jclass SpacecraftParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2c6e50f502c17198] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SpacecraftParametersWriter::SpacecraftParametersWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_2c6e50f502c17198, a0.this$, a1.this$, a2.this$)) {}
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
            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SpacecraftParametersWriter__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersWriter)[] = {
              { Py_tp_methods, t_SpacecraftParametersWriter__methods_ },
              { Py_tp_init, (void *) t_SpacecraftParametersWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersWriter, t_SpacecraftParametersWriter, SpacecraftParametersWriter);

            void t_SpacecraftParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersWriter), &PY_TYPE_DEF(SpacecraftParametersWriter), module, "SpacecraftParametersWriter", 0);
            }

            void t_SpacecraftParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "class_", make_descriptor(SpacecraftParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "wrapfn_", make_descriptor(t_SpacecraftParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SpacecraftParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersWriter::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersWriter::wrap_Object(SpacecraftParametersWriter(((t_SpacecraftParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SpacecraftParametersWriter_init_(t_SpacecraftParametersWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              SpacecraftParametersWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SpacecraftParametersWriter(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Space.h"
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
            mids$[mid_applyTransform_c243fc83137496a6] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_copySelf_ef6ba3b2a23af72e] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_getHyperplane_e081ba7b06e71434] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getRemainingRegion_3069dff3a674defc] = env->getMethodID(cls, "getRemainingRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getSize_9981f74b2d109da6] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_a9ff681d42e1a09d] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_split_b587049e19682418] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
            mids$[mid_buildNew_35b28ef87fdef21f] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractSubHyperplane AbstractSubHyperplane::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_applyTransform_c243fc83137496a6], a0.this$));
        }

        AbstractSubHyperplane AbstractSubHyperplane::copySelf() const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_ef6ba3b2a23af72e]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane AbstractSubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_e081ba7b06e71434]));
        }

        ::org::hipparchus::geometry::partitioning::Region AbstractSubHyperplane::getRemainingRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getRemainingRegion_3069dff3a674defc]));
        }

        jdouble AbstractSubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_9981f74b2d109da6]);
        }

        jboolean AbstractSubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
        }

        AbstractSubHyperplane AbstractSubHyperplane::reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_a9ff681d42e1a09d], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane AbstractSubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_b587049e19682418], a0.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *Parameterizable::class$ = NULL;
      jmethodID *Parameterizable::mids$ = NULL;
      bool Parameterizable::live$ = false;

      jclass Parameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/Parameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getParametersNames_d751c1a57012b438] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_df4c65b2aede5c41] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List Parameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_d751c1a57012b438]));
      }

      jboolean Parameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_df4c65b2aede5c41], a0.this$);
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
      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self);
      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg);
      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data);
      static PyGetSetDef t_Parameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_Parameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Parameterizable__methods_[] = {
        DECLARE_METHOD(t_Parameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Parameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_Parameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Parameterizable)[] = {
        { Py_tp_methods, t_Parameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Parameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Parameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Parameterizable, t_Parameterizable, Parameterizable);

      void t_Parameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(Parameterizable), &PY_TYPE_DEF(Parameterizable), module, "Parameterizable", 0);
      }

      void t_Parameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "class_", make_descriptor(Parameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "wrapfn_", make_descriptor(t_Parameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Parameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Parameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Parameterizable::initializeClass, 1)))
          return NULL;
        return t_Parameterizable::wrap_Object(Parameterizable(((t_Parameterizable *) arg)->object.this$));
      }
      static PyObject *t_Parameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Parameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Parameterizable_getParametersNames(t_Parameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_Parameterizable_isSupported(t_Parameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_Parameterizable_get__parametersNames(t_Parameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *FieldVector2D::class$ = NULL;
          jmethodID *FieldVector2D::mids$ = NULL;
          bool FieldVector2D::live$ = false;

          jclass FieldVector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/FieldVector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e61a645c496adc] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_9de897098cc4fc51] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_03cc98c26e4bc2f3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_a414bd4abe1a01ac] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_209fcdd831417cb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_bab44dcbad09a0fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_6d69d39ede98961c] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_57792df6518b6cbb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_6a174b750b8ff4dd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_c9375daef59d217d] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_614c0bea0d23deb7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_3094ca3420387466] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_de342bcdedd80e86] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_8910ab47d3946516] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)V");
              mids$[mid_init$_e68043fb008b727a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_7942696c79200ea4] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_e9f831185f725939] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_ce2a08ee78bdea1c] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_1de84f30ff815e36] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_c3406f0e361e3c5e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_add_a352159691fd6884] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_angle_88210a0f92666f78] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_1e522e275c6cd552] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_a873d18c5b331b2a] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_88210a0f92666f78] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_crossProduct_8285f2af445596a9] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_5463010749bace4d] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_155ae89e89847f4f] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_88210a0f92666f78] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_1e522e275c6cd552] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_a873d18c5b331b2a] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_5463010749bace4d] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_155ae89e89847f4f] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_88210a0f92666f78] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_a873d18c5b331b2a] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_1e522e275c6cd552] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_5463010749bace4d] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_155ae89e89847f4f] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_88210a0f92666f78] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_1e522e275c6cd552] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_a873d18c5b331b2a] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_5463010749bace4d] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_155ae89e89847f4f] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_88210a0f92666f78] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_a873d18c5b331b2a] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_1e522e275c6cd552] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_5463010749bace4d] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_155ae89e89847f4f] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getMinusI_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getMinusJ_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNaN_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNegativeInfinity_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getNorm_08d37e3f77b7239d] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_08d37e3f77b7239d] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_08d37e3f77b7239d] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_08d37e3f77b7239d] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPlusJ_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getPositiveInfinity_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_getX_08d37e3f77b7239d] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_08d37e3f77b7239d] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_3989eebec94e3b0f] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_da02c7b325187877] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_normalize_da02c7b325187877] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_orientation_6189d195f58c2f32] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_scalarMultiply_a95623cddc5b1016] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_scalarMultiply_a693c897c7425550] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_7942696c79200ea4] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_e9f831185f725939] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_ce2a08ee78bdea1c] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_c3406f0e361e3c5e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_1de84f30ff815e36] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_subtract_a352159691fd6884] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
              mids$[mid_toArray_94ed2e0620f8833d] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aeac32100fe35ffe] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector2D_0490d0574aafb07c] = env->getMethodID(cls, "toVector2D", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector2D::FieldVector2D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e61a645c496adc, a0.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9de897098cc4fc51, a0, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03cc98c26e4bc2f3, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a414bd4abe1a01ac, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_209fcdd831417cb9, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bab44dcbad09a0fe, a0.this$, a1.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d69d39ede98961c, a0, a1.this$, a2, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_57792df6518b6cbb, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a174b750b8ff4dd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9375daef59d217d, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_614c0bea0d23deb7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3094ca3420387466, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector2D::FieldVector2D(jdouble a0, const FieldVector2D & a1, jdouble a2, const FieldVector2D & a3, jdouble a4, const FieldVector2D & a5, jdouble a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de342bcdedd80e86, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8910ab47d3946516, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D::FieldVector2D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e68043fb008b727a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector2D FieldVector2D::add(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_7942696c79200ea4], a0.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_e9f831185f725939], a0.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_ce2a08ee78bdea1c], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_1de84f30ff815e36], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_c3406f0e361e3c5e], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_add_a352159691fd6884], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_1e522e275c6cd552], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::angle(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_a873d18c5b331b2a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const FieldVector2D & a0, const FieldVector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::crossProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_crossProduct_8285f2af445596a9], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_5463010749bace4d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_155ae89e89847f4f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_1e522e275c6cd552], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_a873d18c5b331b2a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_5463010749bace4d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_155ae89e89847f4f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_a873d18c5b331b2a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distance1(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_1e522e275c6cd552], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_5463010749bace4d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_155ae89e89847f4f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_1e522e275c6cd552], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceInf(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_a873d18c5b331b2a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_5463010749bace4d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_155ae89e89847f4f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_88210a0f92666f78], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const FieldVector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_a873d18c5b331b2a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::distanceSq(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const FieldVector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_1e522e275c6cd552], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const FieldVector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_5463010749bace4d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::dotProduct(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_155ae89e89847f4f], a0.this$));
          }

          jboolean FieldVector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
          }

          FieldVector2D FieldVector2D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_3989eebec94e3b0f], a0.this$));
          }

          FieldVector2D FieldVector2D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_3989eebec94e3b0f], a0.this$));
          }

          FieldVector2D FieldVector2D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_3989eebec94e3b0f], a0.this$));
          }

          FieldVector2D FieldVector2D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_3989eebec94e3b0f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_08d37e3f77b7239d]));
          }

          FieldVector2D FieldVector2D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_3989eebec94e3b0f], a0.this$));
          }

          FieldVector2D FieldVector2D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_3989eebec94e3b0f], a0.this$));
          }

          FieldVector2D FieldVector2D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_3989eebec94e3b0f], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_08d37e3f77b7239d]));
          }

          FieldVector2D FieldVector2D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector2D(env->callStaticObjectMethod(cls, mids$[mid_getZero_3989eebec94e3b0f], a0.this$));
          }

          jint FieldVector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
          }

          jboolean FieldVector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
          }

          jboolean FieldVector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
          }

          FieldVector2D FieldVector2D::negate() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_negate_da02c7b325187877]));
          }

          FieldVector2D FieldVector2D::normalize() const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_normalize_da02c7b325187877]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector2D::orientation(const FieldVector2D & a0, const FieldVector2D & a1, const FieldVector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_orientation_6189d195f58c2f32], a0.this$, a1.this$, a2.this$));
          }

          FieldVector2D FieldVector2D::scalarMultiply(jdouble a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_a95623cddc5b1016], a0));
          }

          FieldVector2D FieldVector2D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_a693c897c7425550], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const FieldVector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_7942696c79200ea4], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_e9f831185f725939], a0.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_ce2a08ee78bdea1c], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_c3406f0e361e3c5e], a0.this$, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_1de84f30ff815e36], a0, a1.this$));
          }

          FieldVector2D FieldVector2D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            return FieldVector2D(env->callObjectMethod(this$, mids$[mid_subtract_a352159691fd6884], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector2D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_94ed2e0620f8833d]));
          }

          ::java::lang::String FieldVector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
          }

          ::java::lang::String FieldVector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aeac32100fe35ffe], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D FieldVector2D::toVector2D() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toVector2D_0490d0574aafb07c]));
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
        namespace twod {
          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args);
          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args);
          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self);
          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data);
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data);
          static PyGetSetDef t_FieldVector2D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector2D, infinite),
            DECLARE_GET_FIELD(t_FieldVector2D, naN),
            DECLARE_GET_FIELD(t_FieldVector2D, norm),
            DECLARE_GET_FIELD(t_FieldVector2D, norm1),
            DECLARE_GET_FIELD(t_FieldVector2D, normInf),
            DECLARE_GET_FIELD(t_FieldVector2D, normSq),
            DECLARE_GET_FIELD(t_FieldVector2D, x),
            DECLARE_GET_FIELD(t_FieldVector2D, y),
            DECLARE_GET_FIELD(t_FieldVector2D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector2D__methods_[] = {
            DECLARE_METHOD(t_FieldVector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector2D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector2D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector2D, toVector2D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector2D)[] = {
            { Py_tp_methods, t_FieldVector2D__methods_ },
            { Py_tp_init, (void *) t_FieldVector2D_init_ },
            { Py_tp_getset, t_FieldVector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector2D, t_FieldVector2D, FieldVector2D);
          PyObject *t_FieldVector2D::wrap_Object(const FieldVector2D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector2D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector2D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector2D *self = (t_FieldVector2D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector2D), &PY_TYPE_DEF(FieldVector2D), module, "FieldVector2D", 0);
          }

          void t_FieldVector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "class_", make_descriptor(FieldVector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "wrapfn_", make_descriptor(t_FieldVector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector2D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector2D::initializeClass, 1)))
              return NULL;
            return t_FieldVector2D::wrap_Object(FieldVector2D(((t_FieldVector2D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector2D_of_(t_FieldVector2D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector2D_init_(t_FieldVector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_, &a2, &a3, &p3, t_FieldVector2D::parameters_, &a4, &a5, &p5, t_FieldVector2D::parameters_, &a6, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector2D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector2D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector2D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector2D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector2D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector2D::parameters_))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a7((jobject) NULL);
                FieldVector2D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector2D_add(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_crossProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_dotProduct(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_equals(t_FieldVector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector2D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getMinusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNaN(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getNegativeInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getNorm(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNorm1(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormInf(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getNormSq(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusI(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPlusJ(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getPositiveInfinity(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_getX(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getY(t_FieldVector2D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector2D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::getZero(a0));
              return t_FieldVector2D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector2D_hashCode(t_FieldVector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector2D_isInfinite(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_isNaN(t_FieldVector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector2D_negate(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_normalize(t_FieldVector2D *self)
          {
            FieldVector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            FieldVector2D a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector2D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector2D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKK", FieldVector2D::initializeClass, FieldVector2D::initializeClass, FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_, &a1, &p1, t_FieldVector2D::parameters_, &a2, &p2, t_FieldVector2D::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::FieldVector2D::orientation(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_scalarMultiply(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_subtract(t_FieldVector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector2D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector2D::initializeClass, &a0, &p0, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector2D::initializeClass, &a0, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector2D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector2D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                FieldVector2D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector2D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector2D_toArray(t_FieldVector2D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector2D_toString(t_FieldVector2D *self, PyObject *args)
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
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector2D_toVector2D(t_FieldVector2D *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector2D());
            return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
          }
          static PyObject *t_FieldVector2D_get__parameters_(t_FieldVector2D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector2D_get__infinite(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__naN(t_FieldVector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector2D_get__norm(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__norm1(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normInf(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__normSq(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__x(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector2D_get__y(t_FieldVector2D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/UnivariateOptimizer.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariateOptimizer::class$ = NULL;
        jmethodID *UnivariateOptimizer::mids$ = NULL;
        bool UnivariateOptimizer::live$ = false;

        jclass UnivariateOptimizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariateOptimizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getGoalType_bbd73725644e36aa] = env->getMethodID(cls, "getGoalType", "()Lorg/hipparchus/optim/nonlinear/scalar/GoalType;");
            mids$[mid_getMax_9981f74b2d109da6] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMin_9981f74b2d109da6] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getStartValue_9981f74b2d109da6] = env->getMethodID(cls, "getStartValue", "()D");
            mids$[mid_optimize_d4d3dd9bd6992b67] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;");
            mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
            mids$[mid_computeObjectiveValue_bf28ed64d6e8576b] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::optim::nonlinear::scalar::GoalType UnivariateOptimizer::getGoalType() const
        {
          return ::org::hipparchus::optim::nonlinear::scalar::GoalType(env->callObjectMethod(this$, mids$[mid_getGoalType_bbd73725644e36aa]));
        }

        jdouble UnivariateOptimizer::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_9981f74b2d109da6]);
        }

        jdouble UnivariateOptimizer::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_9981f74b2d109da6]);
        }

        jdouble UnivariateOptimizer::getStartValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStartValue_9981f74b2d109da6]);
        }

        ::org::hipparchus::optim::univariate::UnivariatePointValuePair UnivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
        {
          return ::org::hipparchus::optim::univariate::UnivariatePointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_d4d3dd9bd6992b67], a0.this$));
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
      namespace univariate {
        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self);
        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args);
        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data);
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data);
        static PyGetSetDef t_UnivariateOptimizer__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateOptimizer, goalType),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, max),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, min),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, startValue),
          DECLARE_GET_FIELD(t_UnivariateOptimizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateOptimizer__methods_[] = {
          DECLARE_METHOD(t_UnivariateOptimizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateOptimizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getGoalType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMax, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getMin, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, getStartValue, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateOptimizer, optimize, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateOptimizer)[] = {
          { Py_tp_methods, t_UnivariateOptimizer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnivariateOptimizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateOptimizer)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::BaseOptimizer),
          NULL
        };

        DEFINE_TYPE(UnivariateOptimizer, t_UnivariateOptimizer, UnivariateOptimizer);
        PyObject *t_UnivariateOptimizer::wrap_Object(const UnivariateOptimizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_UnivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_UnivariateOptimizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_UnivariateOptimizer *self = (t_UnivariateOptimizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_UnivariateOptimizer::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateOptimizer), &PY_TYPE_DEF(UnivariateOptimizer), module, "UnivariateOptimizer", 0);
        }

        void t_UnivariateOptimizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "class_", make_descriptor(UnivariateOptimizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "wrapfn_", make_descriptor(t_UnivariateOptimizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateOptimizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateOptimizer::initializeClass, 1)))
            return NULL;
          return t_UnivariateOptimizer::wrap_Object(UnivariateOptimizer(((t_UnivariateOptimizer *) arg)->object.this$));
        }
        static PyObject *t_UnivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateOptimizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateOptimizer_of_(t_UnivariateOptimizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_UnivariateOptimizer_getGoalType(t_UnivariateOptimizer *self)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType result((jobject) NULL);
          OBJ_CALL(result = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(result);
        }

        static PyObject *t_UnivariateOptimizer_getMax(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getMin(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_getStartValue(t_UnivariateOptimizer *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStartValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariateOptimizer_optimize(t_UnivariateOptimizer *self, PyObject *args)
        {
          JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.optimize(a0));
            return ::org::hipparchus::optim::univariate::t_UnivariatePointValuePair::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateOptimizer), (PyObject *) self, "optimize", args, 2);
        }
        static PyObject *t_UnivariateOptimizer_get__parameters_(t_UnivariateOptimizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_UnivariateOptimizer_get__goalType(t_UnivariateOptimizer *self, void *data)
        {
          ::org::hipparchus::optim::nonlinear::scalar::GoalType value((jobject) NULL);
          OBJ_CALL(value = self->object.getGoalType());
          return ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::wrap_Object(value);
        }

        static PyObject *t_UnivariateOptimizer_get__max(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__min(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariateOptimizer_get__startValue(t_UnivariateOptimizer *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStartValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/TruncatingFilter.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/data/DataFilter.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *TruncatingFilter::class$ = NULL;
      jmethodID *TruncatingFilter::mids$ = NULL;
      bool TruncatingFilter::live$ = false;

      jclass TruncatingFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/TruncatingFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_filter_4edc3983a04dd819] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TruncatingFilter::TruncatingFilter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      ::org::orekit::data::DataSource TruncatingFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_4edc3983a04dd819], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg);

      static PyMethodDef t_TruncatingFilter__methods_[] = {
        DECLARE_METHOD(t_TruncatingFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TruncatingFilter)[] = {
        { Py_tp_methods, t_TruncatingFilter__methods_ },
        { Py_tp_init, (void *) t_TruncatingFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TruncatingFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TruncatingFilter, t_TruncatingFilter, TruncatingFilter);

      void t_TruncatingFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(TruncatingFilter), &PY_TYPE_DEF(TruncatingFilter), module, "TruncatingFilter", 0);
      }

      void t_TruncatingFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "class_", make_descriptor(TruncatingFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "wrapfn_", make_descriptor(t_TruncatingFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TruncatingFilter::initializeClass, 1)))
          return NULL;
        return t_TruncatingFilter::wrap_Object(TruncatingFilter(((t_TruncatingFilter *) arg)->object.this$));
      }
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TruncatingFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        TruncatingFilter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = TruncatingFilter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame.h"
#include "java/lang/Enum.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadata::class$ = NULL;
            jmethodID *CdmRelativeMetadata::mids$ = NULL;
            bool CdmRelativeMetadata::live$ = false;

            jclass CdmRelativeMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addComment_105e1eadb709d9ac] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
                mids$[mid_checkNotNull_411d07b76862de9e] = env->getMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Ljava/lang/Enum;)V");
                mids$[mid_checkScreenVolumeConditions_ff7cb6c242604316] = env->getMethodID(cls, "checkScreenVolumeConditions", "()V");
                mids$[mid_getApproachAngle_9981f74b2d109da6] = env->getMethodID(cls, "getApproachAngle", "()D");
                mids$[mid_getCollisionPercentile_d6f20bd740dd34cd] = env->getMethodID(cls, "getCollisionPercentile", "()[I");
                mids$[mid_getCollisionProbaMethod_baad9ef664f2bcc1] = env->getMethodID(cls, "getCollisionProbaMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getCollisionProbability", "()D");
                mids$[mid_getComment_d751c1a57012b438] = env->getMethodID(cls, "getComment", "()Ljava/util/List;");
                mids$[mid_getConjunctionId_d2c8eb4129821f0e] = env->getMethodID(cls, "getConjunctionId", "()Ljava/lang/String;");
                mids$[mid_getMahalanobisDistance_9981f74b2d109da6] = env->getMethodID(cls, "getMahalanobisDistance", "()D");
                mids$[mid_getMaxCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getMaxCollisionProbability", "()D");
                mids$[mid_getMaxCollisionProbabilityMethod_baad9ef664f2bcc1] = env->getMethodID(cls, "getMaxCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getMissDistance_9981f74b2d109da6] = env->getMethodID(cls, "getMissDistance", "()D");
                mids$[mid_getNextMessageEpoch_80e11148db499dda] = env->getMethodID(cls, "getNextMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageEpoch_80e11148db499dda] = env->getMethodID(cls, "getPreviousMessageEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getPreviousMessageId_d2c8eb4129821f0e] = env->getMethodID(cls, "getPreviousMessageId", "()Ljava/lang/String;");
                mids$[mid_getRelativePosition_032312bdeb3f2f93] = env->getMethodID(cls, "getRelativePosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getRelativeSpeed_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeSpeed", "()D");
                mids$[mid_getRelativeVelocity_032312bdeb3f2f93] = env->getMethodID(cls, "getRelativeVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getScreenEntryTime_80e11148db499dda] = env->getMethodID(cls, "getScreenEntryTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenExitTime_80e11148db499dda] = env->getMethodID(cls, "getScreenExitTime", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getScreenPcThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getScreenPcThreshold", "()D");
                mids$[mid_getScreenType_6e349dec37c190ab] = env->getMethodID(cls, "getScreenType", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_getScreenVolumeFrame_359670cdfaf2ef9f] = env->getMethodID(cls, "getScreenVolumeFrame", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;");
                mids$[mid_getScreenVolumeRadius_9981f74b2d109da6] = env->getMethodID(cls, "getScreenVolumeRadius", "()D");
                mids$[mid_getScreenVolumeShape_d36e87427b729d63] = env->getMethodID(cls, "getScreenVolumeShape", "()Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_getScreenVolumeX_9981f74b2d109da6] = env->getMethodID(cls, "getScreenVolumeX", "()D");
                mids$[mid_getScreenVolumeY_9981f74b2d109da6] = env->getMethodID(cls, "getScreenVolumeY", "()D");
                mids$[mid_getScreenVolumeZ_9981f74b2d109da6] = env->getMethodID(cls, "getScreenVolumeZ", "()D");
                mids$[mid_getSefiCollisionProbability_9981f74b2d109da6] = env->getMethodID(cls, "getSefiCollisionProbability", "()D");
                mids$[mid_getSefiCollisionProbabilityMethod_baad9ef664f2bcc1] = env->getMethodID(cls, "getSefiCollisionProbabilityMethod", "()Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");
                mids$[mid_getSefiFragmentationModel_d2c8eb4129821f0e] = env->getMethodID(cls, "getSefiFragmentationModel", "()Ljava/lang/String;");
                mids$[mid_getStartScreenPeriod_80e11148db499dda] = env->getMethodID(cls, "getStartScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getStopScreenPeriod_80e11148db499dda] = env->getMethodID(cls, "getStopScreenPeriod", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTca_80e11148db499dda] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getTimeSystem_d72479bc3d5515c9] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/files/ccsds/definitions/TimeSystem;");
                mids$[mid_setApproachAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setApproachAngle", "(D)V");
                mids$[mid_setCollisionPercentile_d43202153dd284f7] = env->getMethodID(cls, "setCollisionPercentile", "([I)V");
                mids$[mid_setCollisionProbaMethod_d8c763a258b3e9ce] = env->getMethodID(cls, "setCollisionProbaMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCollisionProbability", "(D)V");
                mids$[mid_setConjunctionId_105e1eadb709d9ac] = env->getMethodID(cls, "setConjunctionId", "(Ljava/lang/String;)V");
                mids$[mid_setMahalanobisDistance_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMahalanobisDistance", "(D)V");
                mids$[mid_setMaxCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxCollisionProbability", "(D)V");
                mids$[mid_setMaxCollisionProbabilityMethod_d8c763a258b3e9ce] = env->getMethodID(cls, "setMaxCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setMissDistance_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMissDistance", "(D)V");
                mids$[mid_setNextMessageEpoch_8497861b879c83f7] = env->getMethodID(cls, "setNextMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageEpoch_8497861b879c83f7] = env->getMethodID(cls, "setPreviousMessageEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setPreviousMessageId_105e1eadb709d9ac] = env->getMethodID(cls, "setPreviousMessageId", "(Ljava/lang/String;)V");
                mids$[mid_setRelativePositionN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativePositionN", "(D)V");
                mids$[mid_setRelativePositionR_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativePositionR", "(D)V");
                mids$[mid_setRelativePositionT_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativePositionT", "(D)V");
                mids$[mid_setRelativeSpeed_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativeSpeed", "(D)V");
                mids$[mid_setRelativeVelocityN_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativeVelocityN", "(D)V");
                mids$[mid_setRelativeVelocityR_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativeVelocityR", "(D)V");
                mids$[mid_setRelativeVelocityT_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setRelativeVelocityT", "(D)V");
                mids$[mid_setScreenEntryTime_8497861b879c83f7] = env->getMethodID(cls, "setScreenEntryTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenExitTime_8497861b879c83f7] = env->getMethodID(cls, "setScreenExitTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setScreenPcThreshold_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScreenPcThreshold", "(D)V");
                mids$[mid_setScreenType_2e7985de48ca6858] = env->getMethodID(cls, "setScreenType", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;)V");
                mids$[mid_setScreenVolumeFrame_81622fe57e510b2d] = env->getMethodID(cls, "setScreenVolumeFrame", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeFrame;)V");
                mids$[mid_setScreenVolumeRadius_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScreenVolumeRadius", "(D)V");
                mids$[mid_setScreenVolumeShape_cd2532e6943870e6] = env->getMethodID(cls, "setScreenVolumeShape", "(Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;)V");
                mids$[mid_setScreenVolumeX_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScreenVolumeX", "(D)V");
                mids$[mid_setScreenVolumeY_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScreenVolumeY", "(D)V");
                mids$[mid_setScreenVolumeZ_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScreenVolumeZ", "(D)V");
                mids$[mid_setSefiCollisionProbability_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSefiCollisionProbability", "(D)V");
                mids$[mid_setSefiCollisionProbabilityMethod_d8c763a258b3e9ce] = env->getMethodID(cls, "setSefiCollisionProbabilityMethod", "(Lorg/orekit/files/ccsds/definitions/PocMethodFacade;)V");
                mids$[mid_setSefiFragmentationModel_105e1eadb709d9ac] = env->getMethodID(cls, "setSefiFragmentationModel", "(Ljava/lang/String;)V");
                mids$[mid_setStartScreenPeriod_8497861b879c83f7] = env->getMethodID(cls, "setStartScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setStopScreenPeriod_8497861b879c83f7] = env->getMethodID(cls, "setStopScreenPeriod", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTca_8497861b879c83f7] = env->getMethodID(cls, "setTca", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setTimeSystem_a052efb9a150bad4] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");
                mids$[mid_validate_ff7cb6c242604316] = env->getMethodID(cls, "validate", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmRelativeMetadata::CdmRelativeMetadata() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void CdmRelativeMetadata::addComment(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addComment_105e1eadb709d9ac], a0.this$);
            }

            void CdmRelativeMetadata::checkNotNull(const ::java::lang::Object & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkNotNull_411d07b76862de9e], a0.this$, a1.this$);
            }

            void CdmRelativeMetadata::checkScreenVolumeConditions() const
            {
              env->callVoidMethod(this$, mids$[mid_checkScreenVolumeConditions_ff7cb6c242604316]);
            }

            jdouble CdmRelativeMetadata::getApproachAngle() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getApproachAngle_9981f74b2d109da6]);
            }

            JArray< jint > CdmRelativeMetadata::getCollisionPercentile() const
            {
              return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getCollisionPercentile_d6f20bd740dd34cd]));
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getCollisionProbaMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getCollisionProbaMethod_baad9ef664f2bcc1]));
            }

            jdouble CdmRelativeMetadata::getCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCollisionProbability_9981f74b2d109da6]);
            }

            ::java::util::List CdmRelativeMetadata::getComment() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComment_d751c1a57012b438]));
            }

            ::java::lang::String CdmRelativeMetadata::getConjunctionId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConjunctionId_d2c8eb4129821f0e]));
            }

            jdouble CdmRelativeMetadata::getMahalanobisDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMahalanobisDistance_9981f74b2d109da6]);
            }

            jdouble CdmRelativeMetadata::getMaxCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMaxCollisionProbability_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getMaxCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getMaxCollisionProbabilityMethod_baad9ef664f2bcc1]));
            }

            jdouble CdmRelativeMetadata::getMissDistance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMissDistance_9981f74b2d109da6]);
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getNextMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getNextMessageEpoch_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getPreviousMessageEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPreviousMessageEpoch_80e11148db499dda]));
            }

            ::java::lang::String CdmRelativeMetadata::getPreviousMessageId() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPreviousMessageId_d2c8eb4129821f0e]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativePosition() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativePosition_032312bdeb3f2f93]));
            }

            jdouble CdmRelativeMetadata::getRelativeSpeed() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRelativeSpeed_9981f74b2d109da6]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D CdmRelativeMetadata::getRelativeVelocity() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRelativeVelocity_032312bdeb3f2f93]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenEntryTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenEntryTime_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getScreenExitTime() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getScreenExitTime_80e11148db499dda]));
            }

            jdouble CdmRelativeMetadata::getScreenPcThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenPcThreshold_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenType CdmRelativeMetadata::getScreenType() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenType(env->callObjectMethod(this$, mids$[mid_getScreenType_6e349dec37c190ab]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame CdmRelativeMetadata::getScreenVolumeFrame() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame(env->callObjectMethod(this$, mids$[mid_getScreenVolumeFrame_359670cdfaf2ef9f]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeRadius() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeRadius_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape CdmRelativeMetadata::getScreenVolumeShape() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape(env->callObjectMethod(this$, mids$[mid_getScreenVolumeShape_d36e87427b729d63]));
            }

            jdouble CdmRelativeMetadata::getScreenVolumeX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeX_9981f74b2d109da6]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeY_9981f74b2d109da6]);
            }

            jdouble CdmRelativeMetadata::getScreenVolumeZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getScreenVolumeZ_9981f74b2d109da6]);
            }

            jdouble CdmRelativeMetadata::getSefiCollisionProbability() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSefiCollisionProbability_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::definitions::PocMethodFacade CdmRelativeMetadata::getSefiCollisionProbabilityMethod() const
            {
              return ::org::orekit::files::ccsds::definitions::PocMethodFacade(env->callObjectMethod(this$, mids$[mid_getSefiCollisionProbabilityMethod_baad9ef664f2bcc1]));
            }

            ::java::lang::String CdmRelativeMetadata::getSefiFragmentationModel() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSefiFragmentationModel_d2c8eb4129821f0e]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStartScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartScreenPeriod_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getStopScreenPeriod() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopScreenPeriod_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate CdmRelativeMetadata::getTca() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_80e11148db499dda]));
            }

            ::org::orekit::files::ccsds::definitions::TimeSystem CdmRelativeMetadata::getTimeSystem() const
            {
              return ::org::orekit::files::ccsds::definitions::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_d72479bc3d5515c9]));
            }

            void CdmRelativeMetadata::setApproachAngle(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setApproachAngle_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setCollisionPercentile(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionPercentile_d43202153dd284f7], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbaMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbaMethod_d8c763a258b3e9ce], a0.this$);
            }

            void CdmRelativeMetadata::setCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCollisionProbability_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setConjunctionId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setConjunctionId_105e1eadb709d9ac], a0.this$);
            }

            void CdmRelativeMetadata::setMahalanobisDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMahalanobisDistance_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbability_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setMaxCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxCollisionProbabilityMethod_d8c763a258b3e9ce], a0.this$);
            }

            void CdmRelativeMetadata::setMissDistance(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMissDistance_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setNextMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setNextMessageEpoch_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageEpoch_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setPreviousMessageId(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPreviousMessageId_105e1eadb709d9ac], a0.this$);
            }

            void CdmRelativeMetadata::setRelativePositionN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionN_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativePositionR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionR_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativePositionT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativePositionT_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativeSpeed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeSpeed_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityN_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityR(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityR_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setRelativeVelocityT(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRelativeVelocityT_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setScreenEntryTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenEntryTime_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setScreenExitTime(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenExitTime_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setScreenPcThreshold(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenPcThreshold_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setScreenType(const ::org::orekit::files::ccsds::ndm::cdm::ScreenType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenType_2e7985de48ca6858], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeFrame(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeFrame_81622fe57e510b2d], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeRadius(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeRadius_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeShape(const ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeShape_cd2532e6943870e6], a0.this$);
            }

            void CdmRelativeMetadata::setScreenVolumeX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeX_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeY_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setScreenVolumeZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreenVolumeZ_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbability(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbability_1ad26e8c8c0cd65b], a0);
            }

            void CdmRelativeMetadata::setSefiCollisionProbabilityMethod(const ::org::orekit::files::ccsds::definitions::PocMethodFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiCollisionProbabilityMethod_d8c763a258b3e9ce], a0.this$);
            }

            void CdmRelativeMetadata::setSefiFragmentationModel(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSefiFragmentationModel_105e1eadb709d9ac], a0.this$);
            }

            void CdmRelativeMetadata::setStartScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStartScreenPeriod_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setStopScreenPeriod(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setStopScreenPeriod_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setTca(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTca_8497861b879c83f7], a0.this$);
            }

            void CdmRelativeMetadata::setTimeSystem(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTimeSystem_a052efb9a150bad4], a0.this$);
            }

            void CdmRelativeMetadata::validate() const
            {
              env->callVoidMethod(this$, mids$[mid_validate_ff7cb6c242604316]);
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
          namespace cdm {
            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg);
            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self);
            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data);
            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data);
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_CdmRelativeMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, approachAngle),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionPercentile),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbaMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, collisionProbability),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, comment),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, conjunctionId),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, mahalanobisDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, maxCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, missDistance),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, nextMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageEpoch),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, previousMessageId),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativePosition),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativePositionT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, relativeSpeed),
              DECLARE_GET_FIELD(t_CdmRelativeMetadata, relativeVelocity),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityN),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityR),
              DECLARE_SET_FIELD(t_CdmRelativeMetadata, relativeVelocityT),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenEntryTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenExitTime),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenPcThreshold),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenType),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeFrame),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeRadius),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeShape),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeX),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeY),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, screenVolumeZ),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbability),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiCollisionProbabilityMethod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, sefiFragmentationModel),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, startScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, stopScreenPeriod),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, tca),
              DECLARE_GETSET_FIELD(t_CdmRelativeMetadata, timeSystem),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadata__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadata, addComment, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkNotNull, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, checkScreenVolumeConditions, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getApproachAngle, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionPercentile, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbaMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getComment, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getConjunctionId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMahalanobisDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMaxCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getMissDistance, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getNextMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageEpoch, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getPreviousMessageId, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativePosition, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeSpeed, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getRelativeVelocity, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenEntryTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenExitTime, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenPcThreshold, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenType, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeFrame, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeRadius, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeShape, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeX, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeY, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getScreenVolumeZ, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbability, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiCollisionProbabilityMethod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getSefiFragmentationModel, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStartScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getStopScreenPeriod, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTca, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, getTimeSystem, METH_NOARGS),
              DECLARE_METHOD(t_CdmRelativeMetadata, setApproachAngle, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionPercentile, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbaMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setConjunctionId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMahalanobisDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMaxCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setMissDistance, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setNextMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageEpoch, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setPreviousMessageId, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativePositionT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeSpeed, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityN, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityR, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setRelativeVelocityT, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenEntryTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenExitTime, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenPcThreshold, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenType, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeFrame, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeRadius, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeShape, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeX, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeY, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setScreenVolumeZ, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbability, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiCollisionProbabilityMethod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setSefiFragmentationModel, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStartScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setStopScreenPeriod, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTca, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, setTimeSystem, METH_O),
              DECLARE_METHOD(t_CdmRelativeMetadata, validate, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadata)[] = {
              { Py_tp_methods, t_CdmRelativeMetadata__methods_ },
              { Py_tp_init, (void *) t_CdmRelativeMetadata_init_ },
              { Py_tp_getset, t_CdmRelativeMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadata)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadata, t_CdmRelativeMetadata, CdmRelativeMetadata);

            void t_CdmRelativeMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadata), &PY_TYPE_DEF(CdmRelativeMetadata), module, "CdmRelativeMetadata", 0);
            }

            void t_CdmRelativeMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "class_", make_descriptor(CdmRelativeMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "wrapfn_", make_descriptor(t_CdmRelativeMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmRelativeMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadata::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadata::wrap_Object(CdmRelativeMetadata(((t_CdmRelativeMetadata *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmRelativeMetadata_init_(t_CdmRelativeMetadata *self, PyObject *args, PyObject *kwds)
            {
              CdmRelativeMetadata object((jobject) NULL);

              INT_CALL(object = CdmRelativeMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_CdmRelativeMetadata_addComment(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.addComment(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "addComment", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkNotNull(t_CdmRelativeMetadata *self, PyObject *args)
            {
              ::java::lang::Object a0((jobject) NULL);
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "oK", ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkNotNull(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkNotNull", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_checkScreenVolumeConditions(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.checkScreenVolumeConditions());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_getApproachAngle(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionPercentile(t_CdmRelativeMetadata *self)
            {
              JArray< jint > result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionPercentile());
              return result.wrap();
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbaMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getComment(t_CdmRelativeMetadata *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComment());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmRelativeMetadata_getConjunctionId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getConjunctionId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMahalanobisDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getMissDistance(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMissDistance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getNextMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageEpoch(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getPreviousMessageId(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getPreviousMessageId());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativePosition(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeSpeed(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getRelativeVelocity(t_CdmRelativeMetadata *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenEntryTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenExitTime(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenPcThreshold(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenType(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeFrame(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeRadius(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeShape(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeX(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeY(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getScreenVolumeZ(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbability(t_CdmRelativeMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getSefiFragmentationModel(t_CdmRelativeMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getSefiFragmentationModel());
              return j2p(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStartScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getStopScreenPeriod(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTca(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_getTimeSystem(t_CdmRelativeMetadata *self)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem result((jobject) NULL);
              OBJ_CALL(result = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(result);
            }

            static PyObject *t_CdmRelativeMetadata_setApproachAngle(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setApproachAngle(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setApproachAngle", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
              {
                OBJ_CALL(self->object.setCollisionPercentile(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionPercentile", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCollisionProbaMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbaMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setConjunctionId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setConjunctionId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setConjunctionId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMahalanobisDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMahalanobisDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMaxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setMissDistance(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMissDistance(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMissDistance", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setNextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setNextMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setNextMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageEpoch", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setPreviousMessageId(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setPreviousMessageId(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPreviousMessageId", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativePositionT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativePositionT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativePositionT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeSpeed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeSpeed", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityN", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityR(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityR", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setRelativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRelativeVelocityT(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRelativeVelocityT", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenEntryTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenEntryTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenExitTime(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setScreenExitTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenExitTime", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenPcThreshold(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenPcThreshold", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenType(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::parameters_))
              {
                OBJ_CALL(self->object.setScreenType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenType", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeFrame(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeFrame", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeRadius(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeRadius", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::parameters_))
              {
                OBJ_CALL(self->object.setScreenVolumeShape(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeShape", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeX", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeY", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setScreenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setScreenVolumeZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreenVolumeZ", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbability(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbability", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setSefiCollisionProbabilityMethod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiCollisionProbabilityMethod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setSefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setSefiFragmentationModel(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSefiFragmentationModel", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStartScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStartScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStartScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setStopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setStopScreenPeriod(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setStopScreenPeriod", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTca(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setTca(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTca", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_setTimeSystem(t_CdmRelativeMetadata *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
              {
                OBJ_CALL(self->object.setTimeSystem(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadata_validate(t_CdmRelativeMetadata *self)
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            static PyObject *t_CdmRelativeMetadata_get__approachAngle(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getApproachAngle());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__approachAngle(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setApproachAngle(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "approachAngle", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionPercentile(t_CdmRelativeMetadata *self, void *data)
            {
              JArray< jint > value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionPercentile());
              return value.wrap();
            }
            static int t_CdmRelativeMetadata_set__collisionPercentile(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jint > value((jobject) NULL);
                if (!parseArg(arg, "[I", &value))
                {
                  INT_CALL(self->object.setCollisionPercentile(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionPercentile", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbaMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getCollisionProbaMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbaMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setCollisionProbaMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbaMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__collisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__collisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "collisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__comment(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComment());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CdmRelativeMetadata_get__conjunctionId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getConjunctionId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__conjunctionId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setConjunctionId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "conjunctionId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__mahalanobisDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMahalanobisDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__mahalanobisDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMahalanobisDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mahalanobisDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMaxCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__maxCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__missDistance(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMissDistance());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__missDistance(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMissDistance(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "missDistance", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__nextMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getNextMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__nextMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setNextMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "nextMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageEpoch(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageEpoch(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setPreviousMessageEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageEpoch", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__previousMessageId(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getPreviousMessageId());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__previousMessageId(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setPreviousMessageId(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "previousMessageId", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativePosition(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativePosition());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativePositionN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativePositionT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativePositionT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativePositionT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeSpeed(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRelativeSpeed());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__relativeSpeed(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeSpeed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeSpeed", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__relativeVelocity(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeVelocity());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityN(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityN", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityR(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityR(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityR", arg);
              return -1;
            }

            static int t_CdmRelativeMetadata_set__relativeVelocityT(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRelativeVelocityT(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "relativeVelocityT", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenEntryTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenEntryTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenEntryTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenEntryTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenEntryTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenExitTime(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenExitTime());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenExitTime(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenExitTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenExitTime", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenPcThreshold(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenPcThreshold());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenPcThreshold(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenPcThreshold(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenPcThreshold", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenType(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenType());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenType::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenType(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenType::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenType", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeFrame(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeFrame());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeFrame::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeFrame(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeFrame::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeFrame(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeFrame", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeRadius(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeRadius());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeRadius(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeRadius(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeRadius", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeShape(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreenVolumeShape());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ScreenVolumeShape::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeShape(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::initializeClass, &value))
                {
                  INT_CALL(self->object.setScreenVolumeShape(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeShape", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeX(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeX());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeX(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeX", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeY(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeY());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeY(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeY", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__screenVolumeZ(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getScreenVolumeZ());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__screenVolumeZ(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setScreenVolumeZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screenVolumeZ", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbability(t_CdmRelativeMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSefiCollisionProbability());
              return PyFloat_FromDouble((double) value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbability(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbability(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbability", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiCollisionProbabilityMethod());
              return ::org::orekit::files::ccsds::definitions::t_PocMethodFacade::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__sefiCollisionProbabilityMethod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::PocMethodFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::PocMethodFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setSefiCollisionProbabilityMethod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiCollisionProbabilityMethod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__sefiFragmentationModel(t_CdmRelativeMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getSefiFragmentationModel());
              return j2p(value);
            }
            static int t_CdmRelativeMetadata_set__sefiFragmentationModel(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setSefiFragmentationModel(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sefiFragmentationModel", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__startScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStartScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__startScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStartScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "startScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__stopScreenPeriod(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getStopScreenPeriod());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__stopScreenPeriod(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setStopScreenPeriod(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "stopScreenPeriod", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__tca(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getTca());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__tca(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setTca(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tca", arg);
              return -1;
            }

            static PyObject *t_CdmRelativeMetadata_get__timeSystem(t_CdmRelativeMetadata *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
              OBJ_CALL(value = self->object.getTimeSystem());
              return ::org::orekit::files::ccsds::definitions::t_TimeSystem::wrap_Object(value);
            }
            static int t_CdmRelativeMetadata_set__timeSystem(t_CdmRelativeMetadata *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::TimeSystem value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &value))
                {
                  INT_CALL(self->object.setTimeSystem(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
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
#include "org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OneWayGNSSPhaseAmbiguityModifier::class$ = NULL;
          jmethodID *OneWayGNSSPhaseAmbiguityModifier::mids$ = NULL;
          bool OneWayGNSSPhaseAmbiguityModifier::live$ = false;

          jclass OneWayGNSSPhaseAmbiguityModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OneWayGNSSPhaseAmbiguityModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSPhaseAmbiguityModifier::OneWayGNSSPhaseAmbiguityModifier(jint a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}

          ::java::util::List OneWayGNSSPhaseAmbiguityModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void OneWayGNSSPhaseAmbiguityModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void OneWayGNSSPhaseAmbiguityModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg);
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhaseAmbiguityModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhaseAmbiguityModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhaseAmbiguityModifier__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modify, METH_O),
            DECLARE_METHOD(t_OneWayGNSSPhaseAmbiguityModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhaseAmbiguityModifier)[] = {
            { Py_tp_methods, t_OneWayGNSSPhaseAmbiguityModifier__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhaseAmbiguityModifier_init_ },
            { Py_tp_getset, t_OneWayGNSSPhaseAmbiguityModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhaseAmbiguityModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractAmbiguityModifier),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhaseAmbiguityModifier, t_OneWayGNSSPhaseAmbiguityModifier, OneWayGNSSPhaseAmbiguityModifier);

          void t_OneWayGNSSPhaseAmbiguityModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), &PY_TYPE_DEF(OneWayGNSSPhaseAmbiguityModifier), module, "OneWayGNSSPhaseAmbiguityModifier", 0);
          }

          void t_OneWayGNSSPhaseAmbiguityModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "class_", make_descriptor(OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "wrapfn_", make_descriptor(t_OneWayGNSSPhaseAmbiguityModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhaseAmbiguityModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhaseAmbiguityModifier::wrap_Object(OneWayGNSSPhaseAmbiguityModifier(((t_OneWayGNSSPhaseAmbiguityModifier *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhaseAmbiguityModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OneWayGNSSPhaseAmbiguityModifier_init_(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OneWayGNSSPhaseAmbiguityModifier object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OneWayGNSSPhaseAmbiguityModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_getParametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modify(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_modifyWithoutDerivatives(t_OneWayGNSSPhaseAmbiguityModifier *self, PyObject *arg)
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

          static PyObject *t_OneWayGNSSPhaseAmbiguityModifier_get__parametersDrivers(t_OneWayGNSSPhaseAmbiguityModifier *self, void *data)
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
#include "org/orekit/files/ilrs/StreamingCpfWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter::mids$ = NULL;
        bool StreamingCpfWriter::live$ = false;

        jclass StreamingCpfWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_932be17914d0c040] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;)V");
            mids$[mid_init$_13ea75a8bd428b91] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;Lorg/orekit/files/ilrs/CPFHeader;Z)V");
            mids$[mid_newSegment_0c2d846aef8d516d] = env->getMethodID(cls, "newSegment", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ilrs/StreamingCpfWriter$Segment;");
            mids$[mid_writeEndOfFile_ff7cb6c242604316] = env->getMethodID(cls, "writeEndOfFile", "()V");
            mids$[mid_writeHeader_ff7cb6c242604316] = env->getMethodID(cls, "writeHeader", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_932be17914d0c040, a0.this$, a1.this$, a2.this$)) {}

        StreamingCpfWriter::StreamingCpfWriter(const ::java::lang::Appendable & a0, const ::org::orekit::time::TimeScale & a1, const ::org::orekit::files::ilrs::CPFHeader & a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13ea75a8bd428b91, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::files::ilrs::StreamingCpfWriter$Segment StreamingCpfWriter::newSegment(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::orekit::files::ilrs::StreamingCpfWriter$Segment(env->callObjectMethod(this$, mids$[mid_newSegment_0c2d846aef8d516d], a0.this$));
        }

        void StreamingCpfWriter::writeEndOfFile() const
        {
          env->callVoidMethod(this$, mids$[mid_writeEndOfFile_ff7cb6c242604316]);
        }

        void StreamingCpfWriter::writeHeader() const
        {
          env->callVoidMethod(this$, mids$[mid_writeHeader_ff7cb6c242604316]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg);
        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self);
        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self);

        static PyMethodDef t_StreamingCpfWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter, newSegment, METH_O),
          DECLARE_METHOD(t_StreamingCpfWriter, writeEndOfFile, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter, writeHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter__methods_ },
          { Py_tp_init, (void *) t_StreamingCpfWriter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter, t_StreamingCpfWriter, StreamingCpfWriter);

        void t_StreamingCpfWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter), &PY_TYPE_DEF(StreamingCpfWriter), module, "StreamingCpfWriter", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "HeaderLineWriter", make_descriptor(&PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter)));
        }

        void t_StreamingCpfWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "class_", make_descriptor(StreamingCpfWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StreamingCpfWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter::wrap_Object(StreamingCpfWriter(((t_StreamingCpfWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StreamingCpfWriter_init_(t_StreamingCpfWriter *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::org::orekit::time::TimeScale a1((jobject) NULL);
              ::org::orekit::files::ilrs::CPFHeader a2((jobject) NULL);
              jboolean a3;
              StreamingCpfWriter object((jobject) NULL);

              if (!parseArgs(args, "kkkZ", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::files::ilrs::CPFHeader::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StreamingCpfWriter(a0, a1, a2, a3));
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

        static PyObject *t_StreamingCpfWriter_newSegment(t_StreamingCpfWriter *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::orekit::files::ilrs::StreamingCpfWriter$Segment result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.newSegment(a0));
            return ::org::orekit::files::ilrs::t_StreamingCpfWriter$Segment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newSegment", arg);
          return NULL;
        }

        static PyObject *t_StreamingCpfWriter_writeEndOfFile(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeEndOfFile());
          Py_RETURN_NONE;
        }

        static PyObject *t_StreamingCpfWriter_writeHeader(t_StreamingCpfWriter *self)
        {
          OBJ_CALL(self->object.writeHeader());
          Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/HelmertTransformation$Predefined.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/HelmertTransformation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *HelmertTransformation$Predefined::class$ = NULL;
      jmethodID *HelmertTransformation$Predefined::mids$ = NULL;
      bool HelmertTransformation$Predefined::live$ = false;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008 = NULL;
      HelmertTransformation$Predefined *HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014 = NULL;

      jclass HelmertTransformation$Predefined::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/HelmertTransformation$Predefined");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createTransformedITRF_f191cd20a5419350] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;)Lorg/orekit/frames/Frame;");
          mids$[mid_createTransformedITRF_69d7b3ddbd517a35] = env->getMethodID(cls, "createTransformedITRF", "(Lorg/orekit/frames/Frame;Ljava/lang/String;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/Frame;");
          mids$[mid_getDestination_4865f340ec39b9c4] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_4865f340ec39b9c4] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getTransformation_fa250fc22257ad76] = env->getMethodID(cls, "getTransformation", "()Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_getTransformation_f121d36dd07dbd04] = env->getMethodID(cls, "getTransformation", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/HelmertTransformation;");
          mids$[mid_selectPredefined_41beeebc01b3d028] = env->getStaticMethodID(cls, "selectPredefined", "(II)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_valueOf_493930d80ab72ff7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/HelmertTransformation$Predefined;");
          mids$[mid_values_5e5cbaa9ce30761b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/HelmertTransformation$Predefined;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_2008_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2008_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2008_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2014_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2014_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1988 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1988", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1989 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1989", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1990 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1990", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1991 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1991", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1992 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1992", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1993 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1993", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1994 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1994", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1996 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1996", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_1997 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_1997", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2000 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2000", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2005 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2005", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2008 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2008", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          ITRF_2020_TO_ITRF_2014 = new HelmertTransformation$Predefined(env->getStaticObjectField(cls, "ITRF_2020_TO_ITRF_2014", "Lorg/orekit/frames/HelmertTransformation$Predefined;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_f191cd20a5419350], a0.this$, a1.this$));
      }

      ::org::orekit::frames::Frame HelmertTransformation$Predefined::createTransformedITRF(const ::org::orekit::frames::Frame & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_createTransformedITRF_69d7b3ddbd517a35], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_4865f340ec39b9c4]));
      }

      ::org::orekit::frames::ITRFVersion HelmertTransformation$Predefined::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_4865f340ec39b9c4]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation() const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_fa250fc22257ad76]));
      }

      ::org::orekit::frames::HelmertTransformation HelmertTransformation$Predefined::getTransformation(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::frames::HelmertTransformation(env->callObjectMethod(this$, mids$[mid_getTransformation_f121d36dd07dbd04], a0.this$));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::selectPredefined(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_selectPredefined_41beeebc01b3d028], a0, a1));
      }

      HelmertTransformation$Predefined HelmertTransformation$Predefined::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return HelmertTransformation$Predefined(env->callStaticObjectMethod(cls, mids$[mid_valueOf_493930d80ab72ff7], a0.this$));
      }

      JArray< HelmertTransformation$Predefined > HelmertTransformation$Predefined::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< HelmertTransformation$Predefined >(env->callStaticObjectMethod(cls, mids$[mid_values_5e5cbaa9ce30761b]));
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
      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self);
      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type);
      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data);
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data);
      static PyGetSetDef t_HelmertTransformation$Predefined__fields_[] = {
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, destination),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, origin),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, transformation),
        DECLARE_GET_FIELD(t_HelmertTransformation$Predefined, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HelmertTransformation$Predefined__methods_[] = {
        DECLARE_METHOD(t_HelmertTransformation$Predefined, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, of_, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, createTransformedITRF, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, getTransformation, METH_VARARGS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, selectPredefined, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_HelmertTransformation$Predefined, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HelmertTransformation$Predefined)[] = {
        { Py_tp_methods, t_HelmertTransformation$Predefined__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_HelmertTransformation$Predefined__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HelmertTransformation$Predefined)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(HelmertTransformation$Predefined, t_HelmertTransformation$Predefined, HelmertTransformation$Predefined);
      PyObject *t_HelmertTransformation$Predefined::wrap_Object(const HelmertTransformation$Predefined& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_HelmertTransformation$Predefined::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_HelmertTransformation$Predefined::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_HelmertTransformation$Predefined *self = (t_HelmertTransformation$Predefined *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_HelmertTransformation$Predefined::install(PyObject *module)
      {
        installType(&PY_TYPE(HelmertTransformation$Predefined), &PY_TYPE_DEF(HelmertTransformation$Predefined), module, "HelmertTransformation$Predefined", 0);
      }

      void t_HelmertTransformation$Predefined::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "class_", make_descriptor(HelmertTransformation$Predefined::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "wrapfn_", make_descriptor(t_HelmertTransformation$Predefined::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "boxfn_", make_descriptor(boxObject));
        env->getClass(HelmertTransformation$Predefined::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2008_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2008_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2014_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2014_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1988", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1989", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1990", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1991", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1992", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1993", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1994", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1996", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_1997", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2000", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2005", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2008", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HelmertTransformation$Predefined), "ITRF_2020_TO_ITRF_2014", make_descriptor(t_HelmertTransformation$Predefined::wrap_Object(*HelmertTransformation$Predefined::ITRF_2020_TO_ITRF_2014)));
      }

      static PyObject *t_HelmertTransformation$Predefined_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HelmertTransformation$Predefined::initializeClass, 1)))
          return NULL;
        return t_HelmertTransformation$Predefined::wrap_Object(HelmertTransformation$Predefined(((t_HelmertTransformation$Predefined *) arg)->object.this$));
      }
      static PyObject *t_HelmertTransformation$Predefined_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HelmertTransformation$Predefined::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_HelmertTransformation$Predefined_of_(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_HelmertTransformation$Predefined_createTransformedITRF(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "ksk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.createTransformedITRF(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "createTransformedITRF", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_getDestination(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getOrigin(t_HelmertTransformation$Predefined *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_HelmertTransformation$Predefined_getTransformation(t_HelmertTransformation$Predefined *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransformation());
            return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::frames::HelmertTransformation result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransformation(a0));
              return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransformation", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_selectPredefined(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::selectPredefined(a0, a1));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "selectPredefined", args);
        return NULL;
      }

      static PyObject *t_HelmertTransformation$Predefined_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        HelmertTransformation$Predefined result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::valueOf(a0));
          return t_HelmertTransformation$Predefined::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_HelmertTransformation$Predefined_values(PyTypeObject *type)
      {
        JArray< HelmertTransformation$Predefined > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::HelmertTransformation$Predefined::values());
        return JArray<jobject>(result.this$).wrap(t_HelmertTransformation$Predefined::wrap_jobject);
      }
      static PyObject *t_HelmertTransformation$Predefined_get__parameters_(t_HelmertTransformation$Predefined *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_HelmertTransformation$Predefined_get__destination(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__origin(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_HelmertTransformation$Predefined_get__transformation(t_HelmertTransformation$Predefined *self, void *data)
      {
        ::org::orekit::frames::HelmertTransformation value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransformation());
        return ::org::orekit::frames::t_HelmertTransformation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *Supplier::class$ = NULL;
      jmethodID *Supplier::mids$ = NULL;
      bool Supplier::live$ = false;

      jclass Supplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/Supplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_get_704a5bee58538972] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Supplier::get$() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_704a5bee58538972]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args);
      static PyObject *t_Supplier_get(t_Supplier *self);
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data);
      static PyGetSetDef t_Supplier__fields_[] = {
        DECLARE_GET_FIELD(t_Supplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Supplier__methods_[] = {
        DECLARE_METHOD(t_Supplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_Supplier, get, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Supplier)[] = {
        { Py_tp_methods, t_Supplier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Supplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Supplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Supplier, t_Supplier, Supplier);
      PyObject *t_Supplier::wrap_Object(const Supplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Supplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Supplier::install(PyObject *module)
      {
        installType(&PY_TYPE(Supplier), &PY_TYPE_DEF(Supplier), module, "Supplier", 0);
      }

      void t_Supplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "class_", make_descriptor(Supplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "wrapfn_", make_descriptor(t_Supplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Supplier::initializeClass, 1)))
          return NULL;
        return t_Supplier::wrap_Object(Supplier(((t_Supplier *) arg)->object.this$));
      }
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Supplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Supplier_get(t_Supplier *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.get$());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$QuadraticSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$QuadraticSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$QuadraticSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$QuadraticSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_db06d8c3fc3d9670] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        jdouble SmoothStepFactory$QuadraticSmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_db06d8c3fc3d9670], a0, a1, a2);
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
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$QuadraticSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$QuadraticSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$QuadraticSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction, t_SmoothStepFactory$QuadraticSmoothStepFunction, SmoothStepFactory$QuadraticSmoothStepFunction);

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$QuadraticSmoothStepFunction), module, "SmoothStepFactory$QuadraticSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$QuadraticSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$QuadraticSmoothStepFunction::wrap_Object(SmoothStepFactory$QuadraticSmoothStepFunction(((t_SmoothStepFactory$QuadraticSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$QuadraticSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$QuadraticSmoothStepFunction_value(t_SmoothStepFactory$QuadraticSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble result;

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$QuadraticSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldStateMapper.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldStateMapper::class$ = NULL;
        jmethodID *PythonFieldStateMapper::mids$ = NULL;
        bool PythonFieldStateMapper::live$ = false;

        jclass PythonFieldStateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldStateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36e0022c13f8aa26] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_mapArrayToState_0dd5c63fffcaab3c] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_mapStateToArray_0924dbbee225355c] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldStateMapper::PythonFieldStateMapper(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::OrbitType & a2, const ::org::orekit::orbits::PositionAngleType & a3, const ::org::orekit::attitudes::AttitudeProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::propagation::integration::FieldStateMapper(env->newObject(initializeClass, &mids$, mid_init$_36e0022c13f8aa26, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        void PythonFieldStateMapper::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonFieldStateMapper::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonFieldStateMapper::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
      namespace integration {
        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args);
        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self);
        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args);
        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data);
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data);
        static PyGetSetDef t_PythonFieldStateMapper__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, self),
          DECLARE_GET_FIELD(t_PythonFieldStateMapper, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldStateMapper__methods_[] = {
          DECLARE_METHOD(t_PythonFieldStateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldStateMapper, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldStateMapper, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldStateMapper)[] = {
          { Py_tp_methods, t_PythonFieldStateMapper__methods_ },
          { Py_tp_init, (void *) t_PythonFieldStateMapper_init_ },
          { Py_tp_getset, t_PythonFieldStateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldStateMapper)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldStateMapper),
          NULL
        };

        DEFINE_TYPE(PythonFieldStateMapper, t_PythonFieldStateMapper, PythonFieldStateMapper);
        PyObject *t_PythonFieldStateMapper::wrap_Object(const PythonFieldStateMapper& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldStateMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldStateMapper::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldStateMapper *self = (t_PythonFieldStateMapper *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldStateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldStateMapper), &PY_TYPE_DEF(PythonFieldStateMapper), module, "PythonFieldStateMapper", 1);
        }

        void t_PythonFieldStateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "class_", make_descriptor(PythonFieldStateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "wrapfn_", make_descriptor(t_PythonFieldStateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStateMapper), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldStateMapper::initializeClass);
          JNINativeMethod methods[] = {
            { "mapArrayToState", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/FieldSpacecraftState;", (void *) t_PythonFieldStateMapper_mapArrayToState0 },
            { "mapStateToArray", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V", (void *) t_PythonFieldStateMapper_mapStateToArray1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldStateMapper_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldStateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldStateMapper::initializeClass, 1)))
            return NULL;
          return t_PythonFieldStateMapper::wrap_Object(PythonFieldStateMapper(((t_PythonFieldStateMapper *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldStateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldStateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldStateMapper_of_(t_PythonFieldStateMapper *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldStateMapper_init_(t_PythonFieldStateMapper *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::orbits::PositionAngleType a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          PythonFieldStateMapper object((jobject) NULL);

          if (!parseArgs(args, "KKKKkk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_, &a3, &p3, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a4, &a5))
          {
            INT_CALL(object = PythonFieldStateMapper(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_PythonFieldStateMapper_finalize(t_PythonFieldStateMapper *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldStateMapper_pythonExtension(t_PythonFieldStateMapper *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldStateMapper_mapArrayToState0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o3 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a3));
          PyObject *result = PyObject_CallMethod(obj, "mapArrayToState", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
          {
            throwTypeError("mapArrayToState", result);
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

        static void JNICALL t_PythonFieldStateMapper_mapStateToArray1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "mapStateToArray", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonFieldStateMapper_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldStateMapper::mids$[PythonFieldStateMapper::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldStateMapper_get__self(t_PythonFieldStateMapper *self, void *data)
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
        static PyObject *t_PythonFieldStateMapper_get__parameters_(t_PythonFieldStateMapper *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarC.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarC::class$ = NULL;
          jmethodID *FieldCopolarC::mids$ = NULL;
          bool FieldCopolarC::live$ = false;

          jclass FieldCopolarC::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarC");

              mids$ = new jmethodID[max_mid];
              mids$[mid_dc_08d37e3f77b7239d] = env->getMethodID(cls, "dc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nc_08d37e3f77b7239d] = env->getMethodID(cls, "nc", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sc_08d37e3f77b7239d] = env->getMethodID(cls, "sc", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::dc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dc_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::nc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nc_08d37e3f77b7239d]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarC::sc() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sc_08d37e3f77b7239d]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args);
          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self);
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data);
          static PyGetSetDef t_FieldCopolarC__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarC, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarC__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarC, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarC, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarC, dc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, nc, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarC, sc, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarC)[] = {
            { Py_tp_methods, t_FieldCopolarC__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarC__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarC)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarC, t_FieldCopolarC, FieldCopolarC);
          PyObject *t_FieldCopolarC::wrap_Object(const FieldCopolarC& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarC::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarC::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarC *self = (t_FieldCopolarC *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarC::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarC), &PY_TYPE_DEF(FieldCopolarC), module, "FieldCopolarC", 0);
          }

          void t_FieldCopolarC::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "class_", make_descriptor(FieldCopolarC::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "wrapfn_", make_descriptor(t_FieldCopolarC::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarC), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarC_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarC::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarC::wrap_Object(FieldCopolarC(((t_FieldCopolarC *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarC_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarC::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarC_of_(t_FieldCopolarC *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarC_dc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_nc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarC_sc(t_FieldCopolarC *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sc());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarC_get__parameters_(t_FieldCopolarC *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeIonosphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeIonosphericDelayModifier::live$ = false;

          jclass TurnAroundRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeIonosphericDelayModifier::TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          ::java::util::List TurnAroundRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void TurnAroundRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void TurnAroundRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_ecce216dce506020], a0.this$);
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
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeIonosphericDelayModifier, t_TurnAroundRangeIonosphericDelayModifier, TurnAroundRangeIonosphericDelayModifier);

          void t_TurnAroundRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeIonosphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier), module, "TurnAroundRangeIonosphericDelayModifier", 0);
          }

          void t_TurnAroundRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "class_", make_descriptor(TurnAroundRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeIonosphericDelayModifier::wrap_Object(TurnAroundRangeIonosphericDelayModifier(((t_TurnAroundRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TurnAroundRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TurnAroundRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider::mids$ = NULL;
          bool RawSphericalHarmonicsProvider::live$ = false;

          jclass RawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_43fc6321576a98a9] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics RawSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_43fc6321576a98a9], a0.this$));
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
          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_RawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider, t_RawSphericalHarmonicsProvider, RawSphericalHarmonicsProvider);

          void t_RawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider), &PY_TYPE_DEF(RawSphericalHarmonicsProvider), module, "RawSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "RawSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics)));
          }

          void t_RawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "class_", make_descriptor(RawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider::wrap_Object(RawSphericalHarmonicsProvider(((t_RawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(result);
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
#include "org/orekit/errors/OrekitParseException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "org/orekit/errors/LocalizedException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitParseException::class$ = NULL;
      jmethodID *OrekitParseException::mids$ = NULL;
      bool OrekitParseException::live$ = false;

      jclass OrekitParseException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitParseException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_d2c8eb4129821f0e] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_5969ecf7afac3dba] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_2ab86268ef7a6631] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_667bcd34994d9d31] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitParseException::OrekitParseException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::text::ParseException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitParseException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitParseException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_d2c8eb4129821f0e]));
      }

      ::java::lang::String OrekitParseException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_5969ecf7afac3dba], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitParseException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_2ab86268ef7a6631]));
      }

      ::org::hipparchus::exception::Localizable OrekitParseException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_667bcd34994d9d31]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data);
      static PyGetSetDef t_OrekitParseException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitParseException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitParseException, message),
        DECLARE_GET_FIELD(t_OrekitParseException, parts),
        DECLARE_GET_FIELD(t_OrekitParseException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitParseException__methods_[] = {
        DECLARE_METHOD(t_OrekitParseException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitParseException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitParseException)[] = {
        { Py_tp_methods, t_OrekitParseException__methods_ },
        { Py_tp_init, (void *) t_OrekitParseException_init_ },
        { Py_tp_getset, t_OrekitParseException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitParseException)[] = {
        &PY_TYPE_DEF(::java::text::ParseException),
        NULL
      };

      DEFINE_TYPE(OrekitParseException, t_OrekitParseException, OrekitParseException);

      void t_OrekitParseException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitParseException), &PY_TYPE_DEF(OrekitParseException), module, "OrekitParseException", 0);
      }

      void t_OrekitParseException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "class_", make_descriptor(OrekitParseException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "wrapfn_", make_descriptor(t_OrekitParseException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitParseException::initializeClass, 1)))
          return NULL;
        return t_OrekitParseException::wrap_Object(OrekitParseException(((t_OrekitParseException *) arg)->object.this$));
      }
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitParseException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitParseException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitParseException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonSphericalHarmonicsProvider::live$ = false;

          jclass PythonSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_9981f74b2d109da6] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_d6ab429752e7c267] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_d6ab429752e7c267] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_1e0f912623cd4841] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSphericalHarmonicsProvider::PythonSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self);
          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSphericalHarmonicsProvider, t_PythonSphericalHarmonicsProvider, PythonSphericalHarmonicsProvider);

          void t_PythonSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonSphericalHarmonicsProvider), module, "PythonSphericalHarmonicsProvider", 1);
          }

          void t_PythonSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "class_", make_descriptor(PythonSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonSphericalHarmonicsProvider_getTideSystem5 },
              { "pythonDecRef", "()V", (void *) t_PythonSphericalHarmonicsProvider_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonSphericalHarmonicsProvider::wrap_Object(PythonSphericalHarmonicsProvider(((t_PythonSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSphericalHarmonicsProvider_init_(t_PythonSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_finalize(t_PythonSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_pythonExtension(t_PythonSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static void JNICALL t_PythonSphericalHarmonicsProvider_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSphericalHarmonicsProvider::mids$[PythonSphericalHarmonicsProvider::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonSphericalHarmonicsProvider_get__self(t_PythonSphericalHarmonicsProvider *self, void *data)
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
