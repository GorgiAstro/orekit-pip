#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Class.h"
#include "java/util/TimeZone.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/Month.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Comparable.h"
#include "java/util/Date.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldAbsoluteDate::class$ = NULL;
      jmethodID *FieldAbsoluteDate::mids$ = NULL;
      bool FieldAbsoluteDate::live$ = false;

      jclass FieldAbsoluteDate::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldAbsoluteDate");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a44abdd035f01345] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_76cf634551536b39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;D)V");
          mids$[mid_init$_f8feb5512ae09c3a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_87313c4940a4af73] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init$_e0edad729455a6ea] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_9f202e185e21bf7a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/util/Date;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_bc254f060c9e5863] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;DLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_10122be5ff70d200] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_c1900d9d51c495cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_cad4237db4569839] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateTimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_d163f863f1d292ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;Lorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_7042cf53c50aaff7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;ILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_9596bd8655a1c951] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIILorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_88d79fdb1b7e0c80] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/time/Month;IIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_init$_01be167982bcb2af] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IIIIIDLorg/orekit/time/TimeScale;)V");
          mids$[mid_compareTo_23ced097258e06b3] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_createBesselianEpoch_7e3a2932d2ce0a9d] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createBesselianEpoch_c1abb2cb5c3d5e1f] = env->getStaticMethodID(cls, "createBesselianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_e1933490c09b1d85] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createGPSDate_b3052b1ff0a4369a] = env->getStaticMethodID(cls, "createGPSDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJDDate_b3052b1ff0a4369a] = env->getStaticMethodID(cls, "createJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_7e3a2932d2ce0a9d] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createJulianEpoch_c1abb2cb5c3d5e1f] = env->getStaticMethodID(cls, "createJulianEpoch", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScales;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_createMJDDate_b3052b1ff0a4369a] = env->getStaticMethodID(cls, "createMJDDate", "(ILorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_durationFrom_38c3d70f28fa857a] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_durationFrom_cf010978f3c5a913] = env->getMethodID(cls, "durationFrom", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getArbitraryEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getArbitraryEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getCCSDSEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getCCSDSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getComponents_2fdd961225d82a4c] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_25a98438943eaa69] = env->getMethodID(cls, "getComponents", "(I)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_b13d0c91d0170882] = env->getMethodID(cls, "getComponents", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_d96f0e789f74ae85] = env->getMethodID(cls, "getComponents", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getComponents_5ffda85291c2dfbf] = env->getMethodID(cls, "getComponents", "(ILorg/orekit/time/TimeScale;)Lorg/orekit/time/DateTimeComponents;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFiftiesEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getFiftiesEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFutureInfinity_196c311b66ae5994] = env->getStaticMethodID(cls, "getFutureInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGPSEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getGPSEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getGalileoEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getGalileoEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJ2000Epoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getJ2000Epoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJavaEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getJavaEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getJulianEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_196c311b66ae5994] = env->getStaticMethodID(cls, "getModifiedJulianEpoch", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getPastInfinity_196c311b66ae5994] = env->getStaticMethodID(cls, "getPastInfinity", "(Lorg/hipparchus/Field;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_hasZeroField_eee3de00fe971136] = env->getMethodID(cls, "hasZeroField", "()Z");
          mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_isAfter_8f105d42924f7753] = env->getMethodID(cls, "isAfter", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isAfterOrEqualTo_8f105d42924f7753] = env->getMethodID(cls, "isAfterOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBefore_8f105d42924f7753] = env->getMethodID(cls, "isBefore", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBeforeOrEqualTo_8f105d42924f7753] = env->getMethodID(cls, "isBeforeOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetween_5e6a105e438a5b75] = env->getMethodID(cls, "isBetween", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isBetweenOrEqualTo_5e6a105e438a5b75] = env->getMethodID(cls, "isBetweenOrEqualTo", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_isCloseTo_9286adaa7d1ceee8] = env->getMethodID(cls, "isCloseTo", "(Lorg/orekit/time/FieldTimeStamped;D)Z");
          mids$[mid_isEqualTo_8f105d42924f7753] = env->getMethodID(cls, "isEqualTo", "(Lorg/orekit/time/FieldTimeStamped;)Z");
          mids$[mid_offsetFrom_5afcdde00ca83693] = env->getMethodID(cls, "offsetFrom", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_c1b5e65fac323a15] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[B)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSCalendarSegmentedTimeCode_116025de7b57618a] = env->getMethodID(cls, "parseCCSDSCalendarSegmentedTimeCode", "(B[BLorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_2d730b32cd00a0a4] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSDaySegmentedTimeCode_dca94621e81dfa88] = env->getStaticMethodID(cls, "parseCCSDSDaySegmentedTimeCode", "(Lorg/hipparchus/Field;B[BLorg/orekit/time/DateComponents;Lorg/orekit/time/TimeScale;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_12d77e232200be17] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_parseCCSDSUnsegmentedTimeCode_114b611ac0a9a6d1] = env->getStaticMethodID(cls, "parseCCSDSUnsegmentedTimeCode", "(Lorg/hipparchus/Field;BB[BLorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_e9a60550ba8fc941] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_shiftedBy_7e3a2932d2ce0a9d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_timeScalesOffset_0d01f1e5301a57a8] = env->getMethodID(cls, "timeScalesOffset", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/TimeScale;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toAbsoluteDate_80e11148db499dda] = env->getMethodID(cls, "toAbsoluteDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_toDate_d32c3ee19e93b5d7] = env->getMethodID(cls, "toDate", "(Lorg/orekit/time/TimeScale;)Ljava/util/Date;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_bccddd047a056900] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;)Ljava/lang/String;");
          mids$[mid_toString_c81987d6b0e2977a] = env->getMethodID(cls, "toString", "(I)Ljava/lang/String;");
          mids$[mid_toString_244ea083ab9940d6] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_37e3c4b01d3d6d8c] = env->getMethodID(cls, "toString", "(Ljava/util/TimeZone;Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toString_cf32da3deabe563d] = env->getMethodID(cls, "toString", "(ILorg/orekit/time/TimeScale;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a44abdd035f01345, a0.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_76cf634551536b39, a0.this$, a1)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8feb5512ae09c3a, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87313c4940a4af73, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e0edad729455a6ea, a0.this$, a1.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::util::Date & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f202e185e21bf7a, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const FieldAbsoluteDate & a0, jdouble a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc254f060c9e5863, a0.this$, a1, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10122be5ff70d200, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1900d9d51c495cc, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateTimeComponents & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cad4237db4569839, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, const ::org::orekit::time::DateComponents & a1, const ::org::orekit::time::TimeComponents & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d163f863f1d292ef, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7042cf53c50aaff7, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9596bd8655a1c951, a0.this$, a1, a2, a3, a4.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::time::Month & a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88d79fdb1b7e0c80, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

      FieldAbsoluteDate::FieldAbsoluteDate(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3, jint a4, jint a5, jdouble a6, const ::org::orekit::time::TimeScale & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_01be167982bcb2af, a0.this$, a1, a2, a3, a4, a5, a6, a7.this$)) {}

      jint FieldAbsoluteDate::compareTo(const FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_23ced097258e06b3], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_7e3a2932d2ce0a9d], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createBesselianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createBesselianEpoch_c1abb2cb5c3d5e1f], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_e1933490c09b1d85], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createGPSDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createGPSDate_b3052b1ff0a4369a], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJDDate_b3052b1ff0a4369a], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_7e3a2932d2ce0a9d], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createJulianEpoch(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::time::TimeScales & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createJulianEpoch_c1abb2cb5c3d5e1f], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::createMJDDate(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_createMJDDate_b3052b1ff0a4369a], a0, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_38c3d70f28fa857a], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::durationFrom(const FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_durationFrom_cf010978f3c5a913], a0.this$));
      }

      jboolean FieldAbsoluteDate::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
      }

      FieldAbsoluteDate FieldAbsoluteDate::getArbitraryEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getArbitraryEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getCCSDSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getCCSDSEpoch_196c311b66ae5994], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_2fdd961225d82a4c], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_25a98438943eaa69], a0));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_b13d0c91d0170882], a0.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_d96f0e789f74ae85], a0.this$, a1.this$));
      }

      ::org::orekit::time::DateTimeComponents FieldAbsoluteDate::getComponents(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_getComponents_5ffda85291c2dfbf], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getDate() const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::hipparchus::Field FieldAbsoluteDate::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFiftiesEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFiftiesEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getFutureInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getFutureInfinity_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGPSEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGPSEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getGalileoEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getGalileoEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJ2000Epoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJ2000Epoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJavaEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJavaEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getJulianEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getModifiedJulianEpoch(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getModifiedJulianEpoch_196c311b66ae5994], a0.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::getPastInfinity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_getPastInfinity_196c311b66ae5994], a0.this$));
      }

      jboolean FieldAbsoluteDate::hasZeroField() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasZeroField_eee3de00fe971136]);
      }

      jint FieldAbsoluteDate::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
      }

      jboolean FieldAbsoluteDate::isAfter(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfter_8f105d42924f7753], a0.this$);
      }

      jboolean FieldAbsoluteDate::isAfterOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAfterOrEqualTo_8f105d42924f7753], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBefore(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBefore_8f105d42924f7753], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBeforeOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBeforeOrEqualTo_8f105d42924f7753], a0.this$);
      }

      jboolean FieldAbsoluteDate::isBetween(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetween_5e6a105e438a5b75], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isBetweenOrEqualTo(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isBetweenOrEqualTo_5e6a105e438a5b75], a0.this$, a1.this$);
      }

      jboolean FieldAbsoluteDate::isCloseTo(const ::org::orekit::time::FieldTimeStamped & a0, jdouble a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isCloseTo_9286adaa7d1ceee8], a0.this$, a1);
      }

      jboolean FieldAbsoluteDate::isEqualTo(const ::org::orekit::time::FieldTimeStamped & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isEqualTo_8f105d42924f7753], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::offsetFrom(const FieldAbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFrom_5afcdde00ca83693], a0.this$, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_c1b5e65fac323a15], a0, a1.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSCalendarSegmentedTimeCode(jbyte a0, const JArray< jbyte > & a1, const ::org::orekit::time::TimeScale & a2) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_parseCCSDSCalendarSegmentedTimeCode_116025de7b57618a], a0, a1.this$, a2.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_2d730b32cd00a0a4], a0.this$, a1, a2.this$, a3.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, const JArray< jbyte > & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeScale & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSDaySegmentedTimeCode_dca94621e81dfa88], a0.this$, a1, a2.this$, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_12d77e232200be17], a0.this$, a1, a2, a3.this$, a4.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(const ::org::hipparchus::Field & a0, jbyte a1, jbyte a2, const JArray< jbyte > & a3, const FieldAbsoluteDate & a4, const FieldAbsoluteDate & a5)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldAbsoluteDate(env->callStaticObjectMethod(cls, mids$[mid_parseCCSDSUnsegmentedTimeCode_114b611ac0a9a6d1], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(jdouble a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_e9a60550ba8fc941], a0));
      }

      FieldAbsoluteDate FieldAbsoluteDate::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_shiftedBy_7e3a2932d2ce0a9d], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldAbsoluteDate::timeScalesOffset(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_timeScalesOffset_0d01f1e5301a57a8], a0.this$, a1.this$));
      }

      ::org::orekit::time::AbsoluteDate FieldAbsoluteDate::toAbsoluteDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_toAbsoluteDate_80e11148db499dda]));
      }

      ::java::util::Date FieldAbsoluteDate::toDate(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::util::Date(env->callObjectMethod(this$, mids$[mid_toDate_d32c3ee19e93b5d7], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_bccddd047a056900], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_c81987d6b0e2977a], a0));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_244ea083ab9940d6], a0.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(const ::java::util::TimeZone & a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_37e3c4b01d3d6d8c], a0.this$, a1.this$));
      }

      ::java::lang::String FieldAbsoluteDate::toString(jint a0, const ::org::orekit::time::TimeScale & a1) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_cf32da3deabe563d], a0, a1.this$));
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
      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args);
      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self);
      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg);
      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args);
      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data);
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data);
      static PyGetSetDef t_FieldAbsoluteDate__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, date),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, field),
        DECLARE_GET_FIELD(t_FieldAbsoluteDate, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsoluteDate__methods_[] = {
        DECLARE_METHOD(t_FieldAbsoluteDate, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, compareTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, createBesselianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createGPSDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createJulianEpoch, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, createMJDDate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, durationFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getArbitraryEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getCCSDSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getComponents, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFiftiesEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getFutureInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGPSEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getGalileoEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJ2000Epoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJavaEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getModifiedJulianEpoch, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, getPastInfinity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hasZeroField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfter, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isAfterOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBefore, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBeforeOrEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetween, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isBetweenOrEqualTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isCloseTo, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, isEqualTo, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, offsetFrom, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSCalendarSegmentedTimeCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSDaySegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, parseCCSDSUnsegmentedTimeCode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsoluteDate, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, timeScalesOffset, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toAbsoluteDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsoluteDate, toDate, METH_O),
        DECLARE_METHOD(t_FieldAbsoluteDate, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsoluteDate)[] = {
        { Py_tp_methods, t_FieldAbsoluteDate__methods_ },
        { Py_tp_init, (void *) t_FieldAbsoluteDate_init_ },
        { Py_tp_getset, t_FieldAbsoluteDate__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsoluteDate)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbsoluteDate, t_FieldAbsoluteDate, FieldAbsoluteDate);
      PyObject *t_FieldAbsoluteDate::wrap_Object(const FieldAbsoluteDate& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsoluteDate::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsoluteDate::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsoluteDate *self = (t_FieldAbsoluteDate *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsoluteDate::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsoluteDate), &PY_TYPE_DEF(FieldAbsoluteDate), module, "FieldAbsoluteDate", 0);
      }

      void t_FieldAbsoluteDate::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "class_", make_descriptor(FieldAbsoluteDate::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "wrapfn_", make_descriptor(t_FieldAbsoluteDate::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsoluteDate), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsoluteDate_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsoluteDate::initializeClass, 1)))
          return NULL;
        return t_FieldAbsoluteDate::wrap_Object(FieldAbsoluteDate(((t_FieldAbsoluteDate *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsoluteDate_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsoluteDate::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsoluteDate_of_(t_FieldAbsoluteDate *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsoluteDate_init_(t_FieldAbsoluteDate *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KD", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KK", FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Date a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::java::util::Date::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KDk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Ksk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateTimeComponents a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateTimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DateComponents a1((jobject) NULL);
            ::org::orekit::time::TimeComponents a2((jobject) NULL);
            ::org::orekit::time::TimeScale a3((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "Kkkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::time::Month a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIKIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::Month::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_Month::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jint a5;
            jdouble a6;
            ::org::orekit::time::TimeScale a7((jobject) NULL);
            FieldAbsoluteDate object((jobject) NULL);

            if (!parseArgs(args, "KIIIIIDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = FieldAbsoluteDate(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_FieldAbsoluteDate_compareTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createBesselianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createBesselianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createBesselianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createGPSDate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createGPSDate(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createGPSDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createJulianEpoch(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::TimeScales a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createJulianEpoch(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "createJulianEpoch", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_createMJDDate(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArgs(args, "IKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::createMJDDate(a0, a1, a2));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "createMJDDate", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_durationFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", FieldAbsoluteDate::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.durationFrom(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "durationFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_equals(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_getArbitraryEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getArbitraryEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getArbitraryEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getCCSDSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getCCSDSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCCSDSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getComponents(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getComponents(a0));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::org::orekit::time::DateTimeComponents result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getComponents(a0, a1));
              return ::org::orekit::time::t_DateTimeComponents::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getComponents", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getDate(t_FieldAbsoluteDate *self)
      {
        FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getField(t_FieldAbsoluteDate *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbsoluteDate_getFiftiesEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFiftiesEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFiftiesEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getFutureInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getFutureInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getFutureInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGPSEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGPSEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGPSEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getGalileoEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getGalileoEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGalileoEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJ2000Epoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJ2000Epoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJ2000Epoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJavaEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJavaEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJavaEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getModifiedJulianEpoch(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getModifiedJulianEpoch(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getModifiedJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_getPastInfinity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldAbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::getPastInfinity(a0));
          return t_FieldAbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPastInfinity", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_hasZeroField(t_FieldAbsoluteDate *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasZeroField());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldAbsoluteDate_hashCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldAbsoluteDate_isAfter(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfter(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfter", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isAfterOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isAfterOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAfterOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBefore(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBefore(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBefore", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBeforeOrEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBeforeOrEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBeforeOrEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetween(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetween(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetween", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isBetweenOrEqualTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jboolean result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isBetweenOrEqualTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isBetweenOrEqualTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isCloseTo(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "KD", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.isCloseTo(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isCloseTo", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_isEqualTo(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.isEqualTo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isEqualTo", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_offsetFrom(t_FieldAbsoluteDate *self, PyObject *args)
      {
        FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "Kk", FieldAbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.offsetFrom(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFrom", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSCalendarSegmentedTimeCode(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[B", &a0, &a1))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 3:
          {
            jbyte a0;
            JArray< jbyte > a1((jobject) NULL);
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "B[Bk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.parseCCSDSCalendarSegmentedTimeCode(a0, a1, a2));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parseCCSDSCalendarSegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSDaySegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            JArray< jbyte > a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeScale a4((jobject) NULL);
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KB[Bkk", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSDaySegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSDaySegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_parseCCSDSUnsegmentedTimeCode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jbyte a1;
            jbyte a2;
            JArray< jbyte > a3((jobject) NULL);
            FieldAbsoluteDate a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsoluteDate a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "KBB[BKK", ::org::hipparchus::Field::initializeClass, FieldAbsoluteDate::initializeClass, FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &p4, t_FieldAbsoluteDate::parameters_, &a5, &p5, t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::time::FieldAbsoluteDate::parseCCSDSUnsegmentedTimeCode(a0, a1, a2, a3, a4, a5));
              return t_FieldAbsoluteDate::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "parseCCSDSUnsegmentedTimeCode", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_shiftedBy(t_FieldAbsoluteDate *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsoluteDate result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_timeScalesOffset(t_FieldAbsoluteDate *self, PyObject *args)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::org::orekit::time::TimeScale a1((jobject) NULL);
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.timeScalesOffset(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "timeScalesOffset", args);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toAbsoluteDate(t_FieldAbsoluteDate *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsoluteDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldAbsoluteDate_toDate(t_FieldAbsoluteDate *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScale a0((jobject) NULL);
        ::java::util::Date result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toDate(a0));
          return ::java::util::t_Date::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toDate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbsoluteDate_toString(t_FieldAbsoluteDate *self, PyObject *args)
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
            ::java::util::TimeZone a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::TimeZone::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
          break;
         case 2:
          {
            ::java::util::TimeZone a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::util::TimeZone::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
          {
            jint a0;
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.toString(a0, a1));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsoluteDate), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldAbsoluteDate_get__parameters_(t_FieldAbsoluteDate *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsoluteDate_get__date(t_FieldAbsoluteDate *self, void *data)
      {
        FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAbsoluteDate_get__field(t_FieldAbsoluteDate *self, void *data)
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
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *UnivariatePointValuePair::class$ = NULL;
        jmethodID *UnivariatePointValuePair::mids$ = NULL;
        bool UnivariatePointValuePair::live$ = false;

        jclass UnivariatePointValuePair::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/UnivariatePointValuePair");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_getPoint_9981f74b2d109da6] = env->getMethodID(cls, "getPoint", "()D");
            mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePointValuePair::UnivariatePointValuePair(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble UnivariatePointValuePair::getPoint() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPoint_9981f74b2d109da6]);
        }

        jdouble UnivariatePointValuePair::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
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
        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self);
        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data);
        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data);
        static PyGetSetDef t_UnivariatePointValuePair__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, point),
          DECLARE_GET_FIELD(t_UnivariatePointValuePair, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariatePointValuePair__methods_[] = {
          DECLARE_METHOD(t_UnivariatePointValuePair, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getPoint, METH_NOARGS),
          DECLARE_METHOD(t_UnivariatePointValuePair, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePointValuePair)[] = {
          { Py_tp_methods, t_UnivariatePointValuePair__methods_ },
          { Py_tp_init, (void *) t_UnivariatePointValuePair_init_ },
          { Py_tp_getset, t_UnivariatePointValuePair__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePointValuePair)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePointValuePair, t_UnivariatePointValuePair, UnivariatePointValuePair);

        void t_UnivariatePointValuePair::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePointValuePair), &PY_TYPE_DEF(UnivariatePointValuePair), module, "UnivariatePointValuePair", 0);
        }

        void t_UnivariatePointValuePair::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "class_", make_descriptor(UnivariatePointValuePair::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "wrapfn_", make_descriptor(t_UnivariatePointValuePair::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePointValuePair), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariatePointValuePair_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePointValuePair::initializeClass, 1)))
            return NULL;
          return t_UnivariatePointValuePair::wrap_Object(UnivariatePointValuePair(((t_UnivariatePointValuePair *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePointValuePair_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePointValuePair::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePointValuePair_init_(t_UnivariatePointValuePair *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          UnivariatePointValuePair object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = UnivariatePointValuePair(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UnivariatePointValuePair_getPoint(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPoint());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_getValue(t_UnivariatePointValuePair *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_UnivariatePointValuePair_get__point(t_UnivariatePointValuePair *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPoint());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UnivariatePointValuePair_get__value(t_UnivariatePointValuePair *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenVolumeShape::class$ = NULL;
            jmethodID *ScreenVolumeShape::mids$ = NULL;
            bool ScreenVolumeShape::live$ = false;
            ScreenVolumeShape *ScreenVolumeShape::BOX = NULL;
            ScreenVolumeShape *ScreenVolumeShape::ELLIPSOID = NULL;
            ScreenVolumeShape *ScreenVolumeShape::SPHERE = NULL;

            jclass ScreenVolumeShape::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_ad80b6d233102fcd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");
                mids$[mid_values_0a01d08c74ad66af] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                BOX = new ScreenVolumeShape(env->getStaticObjectField(cls, "BOX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                ELLIPSOID = new ScreenVolumeShape(env->getStaticObjectField(cls, "ELLIPSOID", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                SPHERE = new ScreenVolumeShape(env->getStaticObjectField(cls, "SPHERE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenVolumeShape;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenVolumeShape ScreenVolumeShape::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenVolumeShape(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ad80b6d233102fcd], a0.this$));
            }

            JArray< ScreenVolumeShape > ScreenVolumeShape::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenVolumeShape >(env->callStaticObjectMethod(cls, mids$[mid_values_0a01d08c74ad66af]));
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
            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args);
            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type);
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data);
            static PyGetSetDef t_ScreenVolumeShape__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenVolumeShape, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenVolumeShape__methods_[] = {
              DECLARE_METHOD(t_ScreenVolumeShape, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenVolumeShape, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenVolumeShape, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenVolumeShape)[] = {
              { Py_tp_methods, t_ScreenVolumeShape__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenVolumeShape__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenVolumeShape)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenVolumeShape, t_ScreenVolumeShape, ScreenVolumeShape);
            PyObject *t_ScreenVolumeShape::wrap_Object(const ScreenVolumeShape& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenVolumeShape::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenVolumeShape::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenVolumeShape *self = (t_ScreenVolumeShape *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenVolumeShape::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenVolumeShape), &PY_TYPE_DEF(ScreenVolumeShape), module, "ScreenVolumeShape", 0);
            }

            void t_ScreenVolumeShape::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "class_", make_descriptor(ScreenVolumeShape::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "wrapfn_", make_descriptor(t_ScreenVolumeShape::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenVolumeShape::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "BOX", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::BOX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "ELLIPSOID", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::ELLIPSOID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenVolumeShape), "SPHERE", make_descriptor(t_ScreenVolumeShape::wrap_Object(*ScreenVolumeShape::SPHERE)));
            }

            static PyObject *t_ScreenVolumeShape_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenVolumeShape::initializeClass, 1)))
                return NULL;
              return t_ScreenVolumeShape::wrap_Object(ScreenVolumeShape(((t_ScreenVolumeShape *) arg)->object.this$));
            }
            static PyObject *t_ScreenVolumeShape_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenVolumeShape::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenVolumeShape_of_(t_ScreenVolumeShape *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenVolumeShape_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenVolumeShape result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::valueOf(a0));
                return t_ScreenVolumeShape::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenVolumeShape_values(PyTypeObject *type)
            {
              JArray< ScreenVolumeShape > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenVolumeShape::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenVolumeShape::wrap_jobject);
            }
            static PyObject *t_ScreenVolumeShape_get__parameters_(t_ScreenVolumeShape *self, void *data)
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
#include "org/hipparchus/ode/FirstOrderConverter.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FirstOrderConverter::class$ = NULL;
      jmethodID *FirstOrderConverter::mids$ = NULL;
      bool FirstOrderConverter::live$ = false;

      jclass FirstOrderConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FirstOrderConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_14e75a64a50c908a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/SecondOrderODE;)V");
          mids$[mid_computeDerivatives_bfc955188bf36f2c] = env->getMethodID(cls, "computeDerivatives", "(D[D)[D");
          mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FirstOrderConverter::FirstOrderConverter(const ::org::hipparchus::ode::SecondOrderODE & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_14e75a64a50c908a, a0.this$)) {}

      JArray< jdouble > FirstOrderConverter::computeDerivatives(jdouble a0, const JArray< jdouble > & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_bfc955188bf36f2c], a0, a1.this$));
      }

      jint FirstOrderConverter::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
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
      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args);
      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self);
      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data);
      static PyGetSetDef t_FirstOrderConverter__fields_[] = {
        DECLARE_GET_FIELD(t_FirstOrderConverter, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FirstOrderConverter__methods_[] = {
        DECLARE_METHOD(t_FirstOrderConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FirstOrderConverter, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FirstOrderConverter, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FirstOrderConverter)[] = {
        { Py_tp_methods, t_FirstOrderConverter__methods_ },
        { Py_tp_init, (void *) t_FirstOrderConverter_init_ },
        { Py_tp_getset, t_FirstOrderConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FirstOrderConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FirstOrderConverter, t_FirstOrderConverter, FirstOrderConverter);

      void t_FirstOrderConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(FirstOrderConverter), &PY_TYPE_DEF(FirstOrderConverter), module, "FirstOrderConverter", 0);
      }

      void t_FirstOrderConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "class_", make_descriptor(FirstOrderConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "wrapfn_", make_descriptor(t_FirstOrderConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FirstOrderConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FirstOrderConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FirstOrderConverter::initializeClass, 1)))
          return NULL;
        return t_FirstOrderConverter::wrap_Object(FirstOrderConverter(((t_FirstOrderConverter *) arg)->object.this$));
      }
      static PyObject *t_FirstOrderConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FirstOrderConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FirstOrderConverter_init_(t_FirstOrderConverter *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::SecondOrderODE a0((jobject) NULL);
        FirstOrderConverter object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::ode::SecondOrderODE::initializeClass, &a0))
        {
          INT_CALL(object = FirstOrderConverter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FirstOrderConverter_computeDerivatives(t_FirstOrderConverter *self, PyObject *args)
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

      static PyObject *t_FirstOrderConverter_getDimension(t_FirstOrderConverter *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FirstOrderConverter_get__dimension(t_FirstOrderConverter *self, void *data)
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
#include "org/hipparchus/fraction/AbstractFormat.h"
#include "java/text/FieldPosition.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *AbstractFormat::class$ = NULL;
      jmethodID *AbstractFormat::mids$ = NULL;
      bool AbstractFormat::live$ = false;

      jclass AbstractFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/AbstractFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_bd8d8164e076ccaa] = env->getMethodID(cls, "format", "(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_1f446f5fe940e316] = env->getMethodID(cls, "format", "(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getDenominatorFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getDenominatorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getNumeratorFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getNumeratorFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parseNextCharacter_5ce3a6c37aaf3132] = env->getStaticMethodID(cls, "parseNextCharacter", "(Ljava/lang/String;Ljava/text/ParsePosition;)C");
          mids$[mid_getDefaultNumberFormat_5ed382d8d7b942c5] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "(Ljava/util/Locale;)Ljava/text/NumberFormat;");
          mids$[mid_getDefaultNumberFormat_525709eb5c5b5ea6] = env->getStaticMethodID(cls, "getDefaultNumberFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parseAndIgnoreWhitespace_63c49683e3fd0aef] = env->getStaticMethodID(cls, "parseAndIgnoreWhitespace", "(Ljava/lang/String;Ljava/text/ParsePosition;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::StringBuffer AbstractFormat::format(jdouble a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_bd8d8164e076ccaa], a0, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer AbstractFormat::format(jlong a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_1f446f5fe940e316], a0, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat AbstractFormat::getDenominatorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getDenominatorFormat_525709eb5c5b5ea6]));
      }

      ::java::text::NumberFormat AbstractFormat::getNumeratorFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getNumeratorFormat_525709eb5c5b5ea6]));
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
      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args);
      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self);
      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data);
      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data);
      static PyGetSetDef t_AbstractFormat__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFormat, denominatorFormat),
        DECLARE_GET_FIELD(t_AbstractFormat, numeratorFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFormat__methods_[] = {
        DECLARE_METHOD(t_AbstractFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFormat, getDenominatorFormat, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFormat, getNumeratorFormat, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFormat)[] = {
        { Py_tp_methods, t_AbstractFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFormat)[] = {
        &PY_TYPE_DEF(::java::text::NumberFormat),
        NULL
      };

      DEFINE_TYPE(AbstractFormat, t_AbstractFormat, AbstractFormat);

      void t_AbstractFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFormat), &PY_TYPE_DEF(AbstractFormat), module, "AbstractFormat", 0);
      }

      void t_AbstractFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "class_", make_descriptor(AbstractFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "wrapfn_", make_descriptor(t_AbstractFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFormat::initializeClass, 1)))
          return NULL;
        return t_AbstractFormat::wrap_Object(AbstractFormat(((t_AbstractFormat *) arg)->object.this$));
      }
      static PyObject *t_AbstractFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFormat_format(t_AbstractFormat *self, PyObject *args)
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

        return callSuper(PY_TYPE(AbstractFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_AbstractFormat_getDenominatorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_getNumeratorFormat(t_AbstractFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_AbstractFormat_get__denominatorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getDenominatorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_AbstractFormat_get__numeratorFormat(t_AbstractFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getNumeratorFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperFractionFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "java/text/ParsePosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperFractionFormat::class$ = NULL;
      jmethodID *ProperFractionFormat::mids$ = NULL;
      bool ProperFractionFormat::live$ = false;

      jclass ProperFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_327b6d3ae10b544b] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_8803c3bb12b07c13] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_fdb3091a5d795ad8] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/Fraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_525709eb5c5b5ea6] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_15ac28a32cea3b83] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/Fraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperFractionFormat::ProperFractionFormat() : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_327b6d3ae10b544b, a0.this$)) {}

      ProperFractionFormat::ProperFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::FractionFormat(env->newObject(initializeClass, &mids$, mid_init$_8803c3bb12b07c13, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperFractionFormat::format(const ::org::hipparchus::fraction::Fraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_fdb3091a5d795ad8], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_525709eb5c5b5ea6]));
      }

      ::org::hipparchus::fraction::Fraction ProperFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_parse_15ac28a32cea3b83], a0.this$, a1.this$));
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
      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self);
      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args);
      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data);
      static PyGetSetDef t_ProperFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperFractionFormat)[] = {
        { Py_tp_methods, t_ProperFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperFractionFormat_init_ },
        { Py_tp_getset, t_ProperFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::FractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperFractionFormat, t_ProperFractionFormat, ProperFractionFormat);

      void t_ProperFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperFractionFormat), &PY_TYPE_DEF(ProperFractionFormat), module, "ProperFractionFormat", 0);
      }

      void t_ProperFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "class_", make_descriptor(ProperFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "wrapfn_", make_descriptor(t_ProperFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperFractionFormat::wrap_Object(ProperFractionFormat(((t_ProperFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperFractionFormat_init_(t_ProperFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperFractionFormat_format(t_ProperFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::Fraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::Fraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperFractionFormat_getWholeFormat(t_ProperFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperFractionFormat_parse(t_ProperFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperFractionFormat_get__wholeFormat(t_ProperFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator$DifferentialEffect::class$ = NULL;
        jmethodID *AdapterPropagator$DifferentialEffect::mids$ = NULL;
        bool AdapterPropagator$DifferentialEffect::live$ = false;

        jclass AdapterPropagator$DifferentialEffect::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_ed3fe207e6fde26f] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator$DifferentialEffect::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_ed3fe207e6fde26f], a0.this$));
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
        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg);

        static PyMethodDef t_AdapterPropagator$DifferentialEffect__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator$DifferentialEffect, apply, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator$DifferentialEffect)[] = {
          { Py_tp_methods, t_AdapterPropagator$DifferentialEffect__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator$DifferentialEffect)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator$DifferentialEffect, t_AdapterPropagator$DifferentialEffect, AdapterPropagator$DifferentialEffect);

        void t_AdapterPropagator$DifferentialEffect::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator$DifferentialEffect), &PY_TYPE_DEF(AdapterPropagator$DifferentialEffect), module, "AdapterPropagator$DifferentialEffect", 0);
        }

        void t_AdapterPropagator$DifferentialEffect::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "class_", make_descriptor(AdapterPropagator$DifferentialEffect::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "wrapfn_", make_descriptor(t_AdapterPropagator$DifferentialEffect::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator$DifferentialEffect), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator$DifferentialEffect::wrap_Object(AdapterPropagator$DifferentialEffect(((t_AdapterPropagator$DifferentialEffect *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator$DifferentialEffect_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator$DifferentialEffect::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdapterPropagator$DifferentialEffect_apply(t_AdapterPropagator$DifferentialEffect *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *PythonSatelliteAttitudeEphemeris::mids$ = NULL;
        bool PythonSatelliteAttitudeEphemeris::live$ = false;

        jclass PythonSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitudeProvider_228bb29d53a1472e] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_d2c8eb4129821f0e] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_d751c1a57012b438] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSatelliteAttitudeEphemeris::PythonSatelliteAttitudeEphemeris() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonSatelliteAttitudeEphemeris::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonSatelliteAttitudeEphemeris::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonSatelliteAttitudeEphemeris::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_PythonSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSatelliteAttitudeEphemeris, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_PythonSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_PythonSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_PythonSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSatelliteAttitudeEphemeris, t_PythonSatelliteAttitudeEphemeris, PythonSatelliteAttitudeEphemeris);

        void t_PythonSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSatelliteAttitudeEphemeris), &PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris), module, "PythonSatelliteAttitudeEphemeris", 1);
        }

        void t_PythonSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "class_", make_descriptor(PythonSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_PythonSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSatelliteAttitudeEphemeris::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0 },
            { "getId", "()Ljava/lang/String;", (void *) t_PythonSatelliteAttitudeEphemeris_getId1 },
            { "getSegments", "()Ljava/util/List;", (void *) t_PythonSatelliteAttitudeEphemeris_getSegments2 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStart3 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStop4 },
            { "pythonDecRef", "()V", (void *) t_PythonSatelliteAttitudeEphemeris_pythonDecRef5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_PythonSatelliteAttitudeEphemeris::wrap_Object(PythonSatelliteAttitudeEphemeris(((t_PythonSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          PythonSatelliteAttitudeEphemeris object((jobject) NULL);

          INT_CALL(object = PythonSatelliteAttitudeEphemeris());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args)
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
          {
            throwTypeError("getAttitudeProvider", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getId", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getSegments", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data)
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
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *OptimizerId::class$ = NULL;
        jmethodID *OptimizerId::mids$ = NULL;
        bool OptimizerId::live$ = false;
        OptimizerId *OptimizerId::GAUSS_NEWTON_LU = NULL;
        OptimizerId *OptimizerId::GAUSS_NEWTON_QR = NULL;
        OptimizerId *OptimizerId::LEVENBERG_MARQUADT = NULL;

        jclass OptimizerId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/OptimizerId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_4959f42dfa8d0f54] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/adjustment/OptimizerId;");
            mids$[mid_values_4790b53e33f7172e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/adjustment/OptimizerId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GAUSS_NEWTON_LU = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_LU", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            GAUSS_NEWTON_QR = new OptimizerId(env->getStaticObjectField(cls, "GAUSS_NEWTON_QR", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            LEVENBERG_MARQUADT = new OptimizerId(env->getStaticObjectField(cls, "LEVENBERG_MARQUADT", "Lorg/orekit/rugged/adjustment/OptimizerId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OptimizerId OptimizerId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return OptimizerId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4959f42dfa8d0f54], a0.this$));
        }

        JArray< OptimizerId > OptimizerId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< OptimizerId >(env->callStaticObjectMethod(cls, mids$[mid_values_4790b53e33f7172e]));
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
      namespace adjustment {
        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args);
        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_OptimizerId_values(PyTypeObject *type);
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data);
        static PyGetSetDef t_OptimizerId__fields_[] = {
          DECLARE_GET_FIELD(t_OptimizerId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OptimizerId__methods_[] = {
          DECLARE_METHOD(t_OptimizerId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, of_, METH_VARARGS),
          DECLARE_METHOD(t_OptimizerId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_OptimizerId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OptimizerId)[] = {
          { Py_tp_methods, t_OptimizerId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_OptimizerId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OptimizerId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(OptimizerId, t_OptimizerId, OptimizerId);
        PyObject *t_OptimizerId::wrap_Object(const OptimizerId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_OptimizerId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_OptimizerId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_OptimizerId *self = (t_OptimizerId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_OptimizerId::install(PyObject *module)
        {
          installType(&PY_TYPE(OptimizerId), &PY_TYPE_DEF(OptimizerId), module, "OptimizerId", 0);
        }

        void t_OptimizerId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "class_", make_descriptor(OptimizerId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "wrapfn_", make_descriptor(t_OptimizerId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "boxfn_", make_descriptor(boxObject));
          env->getClass(OptimizerId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_LU", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_LU)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "GAUSS_NEWTON_QR", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::GAUSS_NEWTON_QR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizerId), "LEVENBERG_MARQUADT", make_descriptor(t_OptimizerId::wrap_Object(*OptimizerId::LEVENBERG_MARQUADT)));
        }

        static PyObject *t_OptimizerId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OptimizerId::initializeClass, 1)))
            return NULL;
          return t_OptimizerId::wrap_Object(OptimizerId(((t_OptimizerId *) arg)->object.this$));
        }
        static PyObject *t_OptimizerId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OptimizerId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OptimizerId_of_(t_OptimizerId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_OptimizerId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          OptimizerId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::valueOf(a0));
            return t_OptimizerId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_OptimizerId_values(PyTypeObject *type)
        {
          JArray< OptimizerId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::adjustment::OptimizerId::values());
          return JArray<jobject>(result.this$).wrap(t_OptimizerId::wrap_jobject);
        }
        static PyObject *t_OptimizerId_get__parameters_(t_OptimizerId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/NullPointerException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractFieldIntegrator::class$ = NULL;
      jmethodID *AbstractFieldIntegrator::mids$ = NULL;
      bool AbstractFieldIntegrator::live$ = false;

      jclass AbstractFieldIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractFieldIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_1ffd39265a0e340d] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
          mids$[mid_addStepEndHandler_0490fb61ed7db186] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
          mids$[mid_addStepHandler_d8a2a9c1603c5377] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/FieldODEStepHandler;)V");
          mids$[mid_clearEventDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_ff7cb6c242604316] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_computeDerivatives_31586897e81be81c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCurrentSignedStepsize_08d37e3f77b7239d] = env->getMethodID(cls, "getCurrentSignedStepsize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_d751c1a57012b438] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getMaxEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_d751c1a57012b438] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_15f5056f2d3c7d41] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_8fd427ab23829bf5] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");
          mids$[mid_sanityChecks_d7702289c8dcf483] = env->getMethodID(cls, "sanityChecks", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_initIntegration_7e5884a5ebca9afb] = env->getMethodID(cls, "initIntegration", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_setStepStart_380a9edd05c82300] = env->getMethodID(cls, "setStepStart", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_setIsLastStep_b35db77cae58639e] = env->getMethodID(cls, "setIsLastStep", "(Z)V");
          mids$[mid_setStepSize_f63ca9e3185c722e] = env->getMethodID(cls, "setStepSize", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getStepSize_08d37e3f77b7239d] = env->getMethodID(cls, "getStepSize", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_acceptStep_f14831ca35d7498e] = env->getMethodID(cls, "acceptStep", "(Lorg/hipparchus/ode/sampling/AbstractFieldODEStateInterpolator;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_isLastStep_eee3de00fe971136] = env->getMethodID(cls, "isLastStep", "()Z");
          mids$[mid_resetOccurred_eee3de00fe971136] = env->getMethodID(cls, "resetOccurred", "()Z");
          mids$[mid_getEquations_bce68763fe61c9e7] = env->getMethodID(cls, "getEquations", "()Lorg/hipparchus/ode/FieldExpandableODE;");
          mids$[mid_getEvaluationsCounter_286bd168b7e14166] = env->getMethodID(cls, "getEvaluationsCounter", "()Lorg/hipparchus/util/Incrementor;");
          mids$[mid_setStateInitialized_b35db77cae58639e] = env->getMethodID(cls, "setStateInitialized", "(Z)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractFieldIntegrator::addEventDetector(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_1ffd39265a0e340d], a0.this$);
      }

      void AbstractFieldIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_0490fb61ed7db186], a0.this$);
      }

      void AbstractFieldIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::FieldODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_d8a2a9c1603c5377], a0.this$);
      }

      void AbstractFieldIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_ff7cb6c242604316]);
      }

      void AbstractFieldIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_ff7cb6c242604316]);
      }

      void AbstractFieldIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_ff7cb6c242604316]);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > AbstractFieldIntegrator::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_31586897e81be81c], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldIntegrator::getCurrentSignedStepsize() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCurrentSignedStepsize_08d37e3f77b7239d]));
      }

      jint AbstractFieldIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
      }

      ::java::util::List AbstractFieldIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d751c1a57012b438]));
      }

      ::org::hipparchus::Field AbstractFieldIntegrator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      jint AbstractFieldIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_d6ab429752e7c267]);
      }

      ::java::lang::String AbstractFieldIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_d751c1a57012b438]));
      }

      ::java::util::List AbstractFieldIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_d751c1a57012b438]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative AbstractFieldIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_15f5056f2d3c7d41]));
      }

      void AbstractFieldIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_8fd427ab23829bf5], a0);
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
      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args);
      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self);
      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg);
      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data);
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data);
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data);
      static PyGetSetDef t_AbstractFieldIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, evaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, eventDetectors),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, field),
        DECLARE_GETSET_FIELD(t_AbstractFieldIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, name),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, stepStart),
        DECLARE_GET_FIELD(t_AbstractFieldIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldIntegrator__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldIntegrator)[] = {
        { Py_tp_methods, t_AbstractFieldIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldIntegrator, t_AbstractFieldIntegrator, AbstractFieldIntegrator);
      PyObject *t_AbstractFieldIntegrator::wrap_Object(const AbstractFieldIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractFieldIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldIntegrator *self = (t_AbstractFieldIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractFieldIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldIntegrator), &PY_TYPE_DEF(AbstractFieldIntegrator), module, "AbstractFieldIntegrator", 0);
      }

      void t_AbstractFieldIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "class_", make_descriptor(AbstractFieldIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "wrapfn_", make_descriptor(t_AbstractFieldIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldIntegrator::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldIntegrator::wrap_Object(AbstractFieldIntegrator(((t_AbstractFieldIntegrator *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldIntegrator_of_(t_AbstractFieldIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldIntegrator_addEventDetector(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepEndHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_addStepHandler(t_AbstractFieldIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStepHandler a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStepHandler::parameters_))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_AbstractFieldIntegrator_clearEventDetectors(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_clearStepHandlers(t_AbstractFieldIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_AbstractFieldIntegrator_computeDerivatives(t_AbstractFieldIntegrator *self, PyObject *args)
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

      static PyObject *t_AbstractFieldIntegrator_getCurrentSignedStepsize(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getEventDetectors(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getField(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_getMaxEvaluations(t_AbstractFieldIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractFieldIntegrator_getName(t_AbstractFieldIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepEndHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepHandlers(t_AbstractFieldIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldIntegrator_getStepStart(t_AbstractFieldIntegrator *self)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldIntegrator_setMaxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg)
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
      static PyObject *t_AbstractFieldIntegrator_get__parameters_(t_AbstractFieldIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldIntegrator_get__currentSignedStepsize(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__evaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__eventDetectors(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__field(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__maxEvaluations(t_AbstractFieldIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_AbstractFieldIntegrator_set__maxEvaluations(t_AbstractFieldIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_AbstractFieldIntegrator_get__name(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepEndHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepHandlers(t_AbstractFieldIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldIntegrator_get__stepStart(t_AbstractFieldIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanEstimation::class$ = NULL;
        jmethodID *KalmanEstimation::mids$ = NULL;
        bool KalmanEstimation::live$ = false;

        jclass KalmanEstimation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanEstimation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_80e11148db499dda] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_b4478e72a44f53a7] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_598bcd058df23e79]));
        }

        ::org::orekit::time::AbsoluteDate KalmanEstimation::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_80e11148db499dda]));
        }

        jint KalmanEstimation::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_d6ab429752e7c267]);
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_7c5a416c83e442be]));
        }

        ::org::orekit::utils::ParameterDriversList KalmanEstimation::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_7c5a416c83e442be]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealVector KalmanEstimation::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_92d7e8d8d3f1dfcf]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_b2eebabce70526d8]));
        }

        ::org::hipparchus::linear::RealMatrix KalmanEstimation::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_b2eebabce70526d8]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement KalmanEstimation::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_b4478e72a44f53a7]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > KalmanEstimation::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_598bcd058df23e79]));
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
        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self);
        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data);
        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data);
        static PyGetSetDef t_KalmanEstimation__fields_[] = {
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentDate),
          DECLARE_GET_FIELD(t_KalmanEstimation, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalEstimatedState),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalKalmanGain),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_KalmanEstimation, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedMeasurement),
          DECLARE_GET_FIELD(t_KalmanEstimation, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KalmanEstimation__methods_[] = {
          DECLARE_METHOD(t_KalmanEstimation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_KalmanEstimation, getPredictedSpacecraftStates, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanEstimation)[] = {
          { Py_tp_methods, t_KalmanEstimation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_KalmanEstimation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanEstimation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanEstimation, t_KalmanEstimation, KalmanEstimation);

        void t_KalmanEstimation::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanEstimation), &PY_TYPE_DEF(KalmanEstimation), module, "KalmanEstimation", 0);
        }

        void t_KalmanEstimation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "class_", make_descriptor(KalmanEstimation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "wrapfn_", make_descriptor(t_KalmanEstimation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanEstimation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanEstimation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanEstimation::initializeClass, 1)))
            return NULL;
          return t_KalmanEstimation::wrap_Object(KalmanEstimation(((t_KalmanEstimation *) arg)->object.this$));
        }
        static PyObject *t_KalmanEstimation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanEstimation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanEstimation_getCorrectedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCorrectedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_getCurrentDate(t_KalmanEstimation *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getCurrentMeasurementNumber(t_KalmanEstimation *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedMeasurementsParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedOrbitalParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getEstimatedPropagationParameters(t_KalmanEstimation *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalEstimatedState(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalInnovationCovarianceMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalKalmanGain(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalMeasurementJacobian(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPhysicalStateTransitionMatrix(t_KalmanEstimation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedMeasurement(t_KalmanEstimation *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_KalmanEstimation_getPredictedSpacecraftStates(t_KalmanEstimation *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__correctedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__correctedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_KalmanEstimation_get__currentDate(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__currentMeasurementNumber(t_KalmanEstimation *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedMeasurementsParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedOrbitalParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__estimatedPropagationParameters(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalEstimatedState(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalInnovationCovarianceMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalKalmanGain(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalMeasurementJacobian(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__physicalStateTransitionMatrix(t_KalmanEstimation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedMeasurement(t_KalmanEstimation *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_KalmanEstimation_get__predictedSpacecraftStates(t_KalmanEstimation *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/LutherIntegratorBuilder.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherIntegratorBuilder::class$ = NULL;
        jmethodID *LutherIntegratorBuilder::mids$ = NULL;
        bool LutherIntegratorBuilder::live$ = false;

        jclass LutherIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_31c1ebb8b9cbaedc] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherIntegratorBuilder::LutherIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator LutherIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_31c1ebb8b9cbaedc], a0.this$, a1.this$));
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
        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_LutherIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LutherIntegratorBuilder, t_LutherIntegratorBuilder, LutherIntegratorBuilder);

        void t_LutherIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherIntegratorBuilder), &PY_TYPE_DEF(LutherIntegratorBuilder), module, "LutherIntegratorBuilder", 0);
        }

        void t_LutherIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "class_", make_descriptor(LutherIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherIntegratorBuilder::wrap_Object(LutherIntegratorBuilder(((t_LutherIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LutherIntegratorBuilder_init_(t_LutherIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          LutherIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = LutherIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherIntegratorBuilder_buildIntegrator(t_LutherIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *LambdaMethod::class$ = NULL;
          jmethodID *LambdaMethod::mids$ = NULL;
          bool LambdaMethod::live$ = false;

          jclass LambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/LambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_inverseDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_ltdlDecomposition_ff7cb6c242604316] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_ff7cb6c242604316] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_discreteSearch_ff7cb6c242604316] = env->getMethodID(cls, "discreteSearch", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LambdaMethod::LambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LambdaMethod__methods_[] = {
            DECLARE_METHOD(t_LambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LambdaMethod)[] = {
            { Py_tp_methods, t_LambdaMethod__methods_ },
            { Py_tp_init, (void *) t_LambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(LambdaMethod, t_LambdaMethod, LambdaMethod);

          void t_LambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(LambdaMethod), &PY_TYPE_DEF(LambdaMethod), module, "LambdaMethod", 0);
          }

          void t_LambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "class_", make_descriptor(LambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "wrapfn_", make_descriptor(t_LambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LambdaMethod::initializeClass, 1)))
              return NULL;
            return t_LambdaMethod::wrap_Object(LambdaMethod(((t_LambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            LambdaMethod object((jobject) NULL);

            INT_CALL(object = LambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonEnablingPredicate.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonEnablingPredicate::class$ = NULL;
        jmethodID *PythonEnablingPredicate::mids$ = NULL;
        bool PythonEnablingPredicate::live$ = false;

        jclass PythonEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_eventIsEnabled_edfe3d9894da78a1] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEnablingPredicate::PythonEnablingPredicate() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonEnablingPredicate::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonEnablingPredicate::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonEnablingPredicate::pythonExtension(jlong a0) const
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
      namespace events {
        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self);
        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args);
        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data);
        static PyGetSetDef t_PythonEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEnablingPredicate, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_PythonEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEnablingPredicate, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEnablingPredicate, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEnablingPredicate)[] = {
          { Py_tp_methods, t_PythonEnablingPredicate__methods_ },
          { Py_tp_init, (void *) t_PythonEnablingPredicate_init_ },
          { Py_tp_getset, t_PythonEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEnablingPredicate, t_PythonEnablingPredicate, PythonEnablingPredicate);

        void t_PythonEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEnablingPredicate), &PY_TYPE_DEF(PythonEnablingPredicate), module, "PythonEnablingPredicate", 1);
        }

        void t_PythonEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "class_", make_descriptor(PythonEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "wrapfn_", make_descriptor(t_PythonEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEnablingPredicate), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEnablingPredicate::initializeClass);
          JNINativeMethod methods[] = {
            { "eventIsEnabled", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;D)Z", (void *) t_PythonEnablingPredicate_eventIsEnabled0 },
            { "pythonDecRef", "()V", (void *) t_PythonEnablingPredicate_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_PythonEnablingPredicate::wrap_Object(PythonEnablingPredicate(((t_PythonEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_PythonEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEnablingPredicate_init_(t_PythonEnablingPredicate *self, PyObject *args, PyObject *kwds)
        {
          PythonEnablingPredicate object((jobject) NULL);

          INT_CALL(object = PythonEnablingPredicate());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEnablingPredicate_finalize(t_PythonEnablingPredicate *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEnablingPredicate_pythonExtension(t_PythonEnablingPredicate *self, PyObject *args)
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

        static jboolean JNICALL t_PythonEnablingPredicate_eventIsEnabled0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jboolean value;
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a1));
          PyObject *result = PyObject_CallMethod(obj, "eventIsEnabled", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "Z", &value))
          {
            throwTypeError("eventIsEnabled", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jboolean) 0;
        }

        static void JNICALL t_PythonEnablingPredicate_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEnablingPredicate::mids$[PythonEnablingPredicate::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEnablingPredicate_get__self(t_PythonEnablingPredicate *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data.h"
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/Integer.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm06Data::class$ = NULL;
              jmethodID *SsrIgm06Data::mids$ = NULL;
              bool SsrIgm06Data::live$ = false;

              jclass SsrIgm06Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm06Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addPhaseBias_a74a5094b1655efa] = env->getMethodID(cls, "addPhaseBias", "(Lorg/orekit/gnss/metric/messages/common/PhaseBias;)V");
                  mids$[mid_getNumberOfBiasesProcessed_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfBiasesProcessed", "()I");
                  mids$[mid_getPhaseBias_c805432fe36e034e] = env->getMethodID(cls, "getPhaseBias", "(I)Lorg/orekit/gnss/metric/messages/common/PhaseBias;");
                  mids$[mid_getPhaseBiases_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getPhaseBiases", "()Ljava/util/Map;");
                  mids$[mid_getYawAngle_9981f74b2d109da6] = env->getMethodID(cls, "getYawAngle", "()D");
                  mids$[mid_getYawRate_9981f74b2d109da6] = env->getMethodID(cls, "getYawRate", "()D");
                  mids$[mid_setNumberOfBiasesProcessed_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfBiasesProcessed", "(I)V");
                  mids$[mid_setYawAngle_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYawAngle", "(D)V");
                  mids$[mid_setYawRate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setYawRate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm06Data::SsrIgm06Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              void SsrIgm06Data::addPhaseBias(const ::org::orekit::gnss::metric::messages::common::PhaseBias & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addPhaseBias_a74a5094b1655efa], a0.this$);
              }

              jint SsrIgm06Data::getNumberOfBiasesProcessed() const
              {
                return env->callIntMethod(this$, mids$[mid_getNumberOfBiasesProcessed_d6ab429752e7c267]);
              }

              ::org::orekit::gnss::metric::messages::common::PhaseBias SsrIgm06Data::getPhaseBias(jint a0) const
              {
                return ::org::orekit::gnss::metric::messages::common::PhaseBias(env->callObjectMethod(this$, mids$[mid_getPhaseBias_c805432fe36e034e], a0));
              }

              ::java::util::Map SsrIgm06Data::getPhaseBiases() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getPhaseBiases_dbcb8bbac6b35e0d]));
              }

              jdouble SsrIgm06Data::getYawAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawAngle_9981f74b2d109da6]);
              }

              jdouble SsrIgm06Data::getYawRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getYawRate_9981f74b2d109da6]);
              }

              void SsrIgm06Data::setNumberOfBiasesProcessed(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNumberOfBiasesProcessed_8fd427ab23829bf5], a0);
              }

              void SsrIgm06Data::setYawAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawAngle_1ad26e8c8c0cd65b], a0);
              }

              void SsrIgm06Data::setYawRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setYawRate_1ad26e8c8c0cd65b], a0);
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
              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self);
              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg);
              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data);
              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data);
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm06Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, numberOfBiasesProcessed),
                DECLARE_GET_FIELD(t_SsrIgm06Data, phaseBiases),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawAngle),
                DECLARE_GETSET_FIELD(t_SsrIgm06Data, yawRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm06Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm06Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm06Data, addPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getNumberOfBiasesProcessed, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBias, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, getPhaseBiases, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawAngle, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, getYawRate, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm06Data, setNumberOfBiasesProcessed, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawAngle, METH_O),
                DECLARE_METHOD(t_SsrIgm06Data, setYawRate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm06Data)[] = {
                { Py_tp_methods, t_SsrIgm06Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm06Data_init_ },
                { Py_tp_getset, t_SsrIgm06Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm06Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm06Data, t_SsrIgm06Data, SsrIgm06Data);

              void t_SsrIgm06Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm06Data), &PY_TYPE_DEF(SsrIgm06Data), module, "SsrIgm06Data", 0);
              }

              void t_SsrIgm06Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "class_", make_descriptor(SsrIgm06Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "wrapfn_", make_descriptor(t_SsrIgm06Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm06Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm06Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm06Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm06Data::wrap_Object(SsrIgm06Data(((t_SsrIgm06Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm06Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm06Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm06Data_init_(t_SsrIgm06Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm06Data object((jobject) NULL);

                INT_CALL(object = SsrIgm06Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm06Data_addPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::PhaseBias a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::PhaseBias::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addPhaseBias(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getNumberOfBiasesProcessed(t_SsrIgm06Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm06Data_getPhaseBias(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::common::PhaseBias result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getPhaseBias(a0));
                  return ::org::orekit::gnss::metric::messages::common::t_PhaseBias::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getPhaseBias", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_getPhaseBiases(t_SsrIgm06Data *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::org::orekit::gnss::metric::messages::common::PY_TYPE(PhaseBias));
              }

              static PyObject *t_SsrIgm06Data_getYawAngle(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_getYawRate(t_SsrIgm06Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getYawRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm06Data_setNumberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNumberOfBiasesProcessed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNumberOfBiasesProcessed", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawAngle(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawAngle", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_setYawRate(t_SsrIgm06Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setYawRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setYawRate", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm06Data_get__numberOfBiasesProcessed(t_SsrIgm06Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNumberOfBiasesProcessed());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm06Data_set__numberOfBiasesProcessed(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNumberOfBiasesProcessed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "numberOfBiasesProcessed", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__phaseBiases(t_SsrIgm06Data *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getPhaseBiases());
                return ::java::util::t_Map::wrap_Object(value);
              }

              static PyObject *t_SsrIgm06Data_get__yawAngle(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawAngle(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawAngle", arg);
                return -1;
              }

              static PyObject *t_SsrIgm06Data_get__yawRate(t_SsrIgm06Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getYawRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm06Data_set__yawRate(t_SsrIgm06Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setYawRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "yawRate", arg);
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
#include "org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *UnivariateDifferentiableSolver::class$ = NULL;
        jmethodID *UnivariateDifferentiableSolver::mids$ = NULL;
        bool UnivariateDifferentiableSolver::live$ = false;

        jclass UnivariateDifferentiableSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/UnivariateDifferentiableSolver");

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
        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_UnivariateDifferentiableSolver__methods_[] = {
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateDifferentiableSolver, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateDifferentiableSolver)[] = {
          { Py_tp_methods, t_UnivariateDifferentiableSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateDifferentiableSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(UnivariateDifferentiableSolver, t_UnivariateDifferentiableSolver, UnivariateDifferentiableSolver);

        void t_UnivariateDifferentiableSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateDifferentiableSolver), &PY_TYPE_DEF(UnivariateDifferentiableSolver), module, "UnivariateDifferentiableSolver", 0);
        }

        void t_UnivariateDifferentiableSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "class_", make_descriptor(UnivariateDifferentiableSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "wrapfn_", make_descriptor(t_UnivariateDifferentiableSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateDifferentiableSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateDifferentiableSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 1)))
            return NULL;
          return t_UnivariateDifferentiableSolver::wrap_Object(UnivariateDifferentiableSolver(((t_UnivariateDifferentiableSolver *) arg)->object.this$));
        }
        static PyObject *t_UnivariateDifferentiableSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateDifferentiableSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/WeightedObservedPoints.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *WeightedObservedPoints::class$ = NULL;
      jmethodID *WeightedObservedPoints::mids$ = NULL;
      bool WeightedObservedPoints::live$ = false;

      jclass WeightedObservedPoints::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/WeightedObservedPoints");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_477ad39959f93dab] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fitting/WeightedObservedPoint;)V");
          mids$[mid_add_13edac039e8cc967] = env->getMethodID(cls, "add", "(DD)V");
          mids$[mid_add_bd28dc6055dc5bbd] = env->getMethodID(cls, "add", "(DDD)V");
          mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_toList_d751c1a57012b438] = env->getMethodID(cls, "toList", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WeightedObservedPoints::WeightedObservedPoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void WeightedObservedPoints::add(const ::org::hipparchus::fitting::WeightedObservedPoint & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_477ad39959f93dab], a0.this$);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_add_13edac039e8cc967], a0, a1);
      }

      void WeightedObservedPoints::add(jdouble a0, jdouble a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_add_bd28dc6055dc5bbd], a0, a1, a2);
      }

      void WeightedObservedPoints::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
      }

      ::java::util::List WeightedObservedPoints::toList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_toList_d751c1a57012b438]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fitting {
      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args);
      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self);
      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self);

      static PyMethodDef t_WeightedObservedPoints__methods_[] = {
        DECLARE_METHOD(t_WeightedObservedPoints, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WeightedObservedPoints, add, METH_VARARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, clear, METH_NOARGS),
        DECLARE_METHOD(t_WeightedObservedPoints, toList, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WeightedObservedPoints)[] = {
        { Py_tp_methods, t_WeightedObservedPoints__methods_ },
        { Py_tp_init, (void *) t_WeightedObservedPoints_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WeightedObservedPoints)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WeightedObservedPoints, t_WeightedObservedPoints, WeightedObservedPoints);

      void t_WeightedObservedPoints::install(PyObject *module)
      {
        installType(&PY_TYPE(WeightedObservedPoints), &PY_TYPE_DEF(WeightedObservedPoints), module, "WeightedObservedPoints", 0);
      }

      void t_WeightedObservedPoints::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "class_", make_descriptor(WeightedObservedPoints::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "wrapfn_", make_descriptor(t_WeightedObservedPoints::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedObservedPoints), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WeightedObservedPoints_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WeightedObservedPoints::initializeClass, 1)))
          return NULL;
        return t_WeightedObservedPoints::wrap_Object(WeightedObservedPoints(((t_WeightedObservedPoints *) arg)->object.this$));
      }
      static PyObject *t_WeightedObservedPoints_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WeightedObservedPoints::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WeightedObservedPoints_init_(t_WeightedObservedPoints *self, PyObject *args, PyObject *kwds)
      {
        WeightedObservedPoints object((jobject) NULL);

        INT_CALL(object = WeightedObservedPoints());
        self->object = object;

        return 0;
      }

      static PyObject *t_WeightedObservedPoints_add(t_WeightedObservedPoints *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::fitting::WeightedObservedPoint a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::fitting::WeightedObservedPoint::initializeClass, &a0))
            {
              OBJ_CALL(self->object.add(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            jdouble a1;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(self->object.add(a0, a1));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.add(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_WeightedObservedPoints_clear(t_WeightedObservedPoints *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_WeightedObservedPoints_toList(t_WeightedObservedPoints *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.toList());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::fitting::PY_TYPE(WeightedObservedPoint));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/String.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFieldFactory$FieldModel::class$ = NULL;
        jmethodID *GeoMagneticFieldFactory$FieldModel::mids$ = NULL;
        bool GeoMagneticFieldFactory$FieldModel::live$ = false;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::IGRF = NULL;
        GeoMagneticFieldFactory$FieldModel *GeoMagneticFieldFactory$FieldModel::WMM = NULL;

        jclass GeoMagneticFieldFactory$FieldModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_ca5b071a97c92d0d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");
            mids$[mid_values_381da18d39400f1b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            IGRF = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "IGRF", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            WMM = new GeoMagneticFieldFactory$FieldModel(env->getStaticObjectField(cls, "WMM", "Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticFieldFactory$FieldModel GeoMagneticFieldFactory$FieldModel::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return GeoMagneticFieldFactory$FieldModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ca5b071a97c92d0d], a0.this$));
        }

        JArray< GeoMagneticFieldFactory$FieldModel > GeoMagneticFieldFactory$FieldModel::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< GeoMagneticFieldFactory$FieldModel >(env->callStaticObjectMethod(cls, mids$[mid_values_381da18d39400f1b]));
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
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type);
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data);
        static PyGetSetDef t_GeoMagneticFieldFactory$FieldModel__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticFieldFactory$FieldModel, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticFieldFactory$FieldModel__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, of_, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFieldFactory$FieldModel, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFieldFactory$FieldModel)[] = {
          { Py_tp_methods, t_GeoMagneticFieldFactory$FieldModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticFieldFactory$FieldModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFieldFactory$FieldModel)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFieldFactory$FieldModel, t_GeoMagneticFieldFactory$FieldModel, GeoMagneticFieldFactory$FieldModel);
        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_Object(const GeoMagneticFieldFactory$FieldModel& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GeoMagneticFieldFactory$FieldModel::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GeoMagneticFieldFactory$FieldModel *self = (t_GeoMagneticFieldFactory$FieldModel *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GeoMagneticFieldFactory$FieldModel::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFieldFactory$FieldModel), &PY_TYPE_DEF(GeoMagneticFieldFactory$FieldModel), module, "GeoMagneticFieldFactory$FieldModel", 0);
        }

        void t_GeoMagneticFieldFactory$FieldModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "class_", make_descriptor(GeoMagneticFieldFactory$FieldModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "wrapfn_", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "boxfn_", make_descriptor(boxObject));
          env->getClass(GeoMagneticFieldFactory$FieldModel::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "IGRF", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::IGRF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFieldFactory$FieldModel), "WMM", make_descriptor(t_GeoMagneticFieldFactory$FieldModel::wrap_Object(*GeoMagneticFieldFactory$FieldModel::WMM)));
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(GeoMagneticFieldFactory$FieldModel(((t_GeoMagneticFieldFactory$FieldModel *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFieldFactory$FieldModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_of_(t_GeoMagneticFieldFactory$FieldModel *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          GeoMagneticFieldFactory$FieldModel result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::valueOf(a0));
            return t_GeoMagneticFieldFactory$FieldModel::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_GeoMagneticFieldFactory$FieldModel_values(PyTypeObject *type)
        {
          JArray< GeoMagneticFieldFactory$FieldModel > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::values());
          return JArray<jobject>(result.this$).wrap(t_GeoMagneticFieldFactory$FieldModel::wrap_jobject);
        }
        static PyObject *t_GeoMagneticFieldFactory$FieldModel_get__parameters_(t_GeoMagneticFieldFactory$FieldModel *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory$DerivativeField::class$ = NULL;
        jmethodID *FDSFactory$DerivativeField::mids$ = NULL;
        bool FDSFactory$DerivativeField::live$ = false;

        jclass FDSFactory$DerivativeField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_b363d6ebd90353bf] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getPi_b363d6ebd90353bf] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_b363d6ebd90353bf] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FDSFactory$DerivativeField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_b363d6ebd90353bf]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_b363d6ebd90353bf]));
        }

        ::java::lang::Class FDSFactory$DerivativeField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_b363d6ebd90353bf]));
        }

        jint FDSFactory$DerivativeField::hashCode() const
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
    namespace analysis {
      namespace differentiation {
        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data);
        static PyGetSetDef t_FDSFactory$DerivativeField__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, one),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, pi),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, runtimeClass),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, zero),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory$DerivativeField__methods_[] = {
          DECLARE_METHOD(t_FDSFactory$DerivativeField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory$DerivativeField)[] = {
          { Py_tp_methods, t_FDSFactory$DerivativeField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FDSFactory$DerivativeField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory$DerivativeField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory$DerivativeField, t_FDSFactory$DerivativeField, FDSFactory$DerivativeField);
        PyObject *t_FDSFactory$DerivativeField::wrap_Object(const FDSFactory$DerivativeField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory$DerivativeField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory$DerivativeField::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory$DerivativeField), &PY_TYPE_DEF(FDSFactory$DerivativeField), module, "FDSFactory$DerivativeField", 0);
        }

        void t_FDSFactory$DerivativeField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "class_", make_descriptor(FDSFactory$DerivativeField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "wrapfn_", make_descriptor(t_FDSFactory$DerivativeField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory$DerivativeField::initializeClass, 1)))
            return NULL;
          return t_FDSFactory$DerivativeField::wrap_Object(FDSFactory$DerivativeField(((t_FDSFactory$DerivativeField *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory$DerivativeField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Data.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm01::class$ = NULL;
              jmethodID *SsrIgm01::mids$ = NULL;
              bool SsrIgm01::live$ = false;

              jclass SsrIgm01::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm01");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_4ffdd930f08ed76f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/metric/messages/ssr/igm/SsrIgm01Header;Ljava/util/List;)V");
                  mids$[mid_getSsrIgm01Data_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSsrIgm01Data", "()Ljava/util/Map;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm01::SsrIgm01(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1, const ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header & a2, const ::java::util::List & a3) : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage(env->newObject(initializeClass, &mids$, mid_init$_4ffdd930f08ed76f, a0, a1.this$, a2.this$, a3.this$)) {}

              ::java::util::Map SsrIgm01::getSsrIgm01Data() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSsrIgm01Data_dbcb8bbac6b35e0d]));
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
              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args);
              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self);
              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data);
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data);
              static PyGetSetDef t_SsrIgm01__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIgm01, ssrIgm01Data),
                DECLARE_GET_FIELD(t_SsrIgm01, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm01__methods_[] = {
                DECLARE_METHOD(t_SsrIgm01, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm01, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIgm01, getSsrIgm01Data, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm01)[] = {
                { Py_tp_methods, t_SsrIgm01__methods_ },
                { Py_tp_init, (void *) t_SsrIgm01_init_ },
                { Py_tp_getset, t_SsrIgm01__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm01)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmMessage),
                NULL
              };

              DEFINE_TYPE(SsrIgm01, t_SsrIgm01, SsrIgm01);
              PyObject *t_SsrIgm01::wrap_Object(const SsrIgm01& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIgm01::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIgm01::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIgm01 *self = (t_SsrIgm01 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIgm01::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm01), &PY_TYPE_DEF(SsrIgm01), module, "SsrIgm01", 0);
              }

              void t_SsrIgm01::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "class_", make_descriptor(SsrIgm01::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "wrapfn_", make_descriptor(t_SsrIgm01::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm01), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm01_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm01::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm01::wrap_Object(SsrIgm01(((t_SsrIgm01 *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm01_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm01::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIgm01_of_(t_SsrIgm01 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIgm01_init_(t_SsrIgm01 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header a2((jobject) NULL);
                ::java::util::List a3((jobject) NULL);
                PyTypeObject **p3;
                SsrIgm01 object((jobject) NULL);

                if (!parseArgs(args, "IKkK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgm01Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIgm01(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::igm::PY_TYPE(SsrIgm01Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIgm01_getSsrIgm01Data(t_SsrIgm01 *self)
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSsrIgm01Data());
                return ::java::util::t_Map::wrap_Object(result);
              }
              static PyObject *t_SsrIgm01_get__parameters_(t_SsrIgm01 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIgm01_get__ssrIgm01Data(t_SsrIgm01 *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSsrIgm01Data());
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
#include "org/orekit/propagation/FieldAbstractPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldPropagator.h"
#include "org/orekit/propagation/sampling/FieldStepHandlerMultiplexer.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAbstractPropagator::class$ = NULL;
      jmethodID *FieldAbstractPropagator::mids$ = NULL;
      bool FieldAbstractPropagator::live$ = false;

      jclass FieldAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAdditionalStateProvider_546488029ed6e282] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/FieldAdditionalStateProvider;)V");
          mids$[mid_getAdditionalStateProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_a74be2e38786f3b6] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_getManagedAdditionalStates_f81c0644d57ae495] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMultiplexer_8da2e06aa361bf03] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/FieldStepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_1b1a4229447f7bf7] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fb689a9c0f30b938] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
          mids$[mid_setStartDate_421e631f14d32a8c] = env->getMethodID(cls, "setStartDate", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_getStartDate_1fea28374011eef5] = env->getMethodID(cls, "getStartDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_stateChanged_8062511934471166] = env->getMethodID(cls, "stateChanged", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_updateAdditionalStates_59bc90ab93a43079] = env->getMethodID(cls, "updateAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_initializeAdditionalStates_421e631f14d32a8c] = env->getMethodID(cls, "initializeAdditionalStates", "(Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_initializePropagation_ff7cb6c242604316] = env->getMethodID(cls, "initializePropagation", "()V");
          mids$[mid_updateUnmanagedStates_59bc90ab93a43079] = env->getMethodID(cls, "updateUnmanagedStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void FieldAbstractPropagator::addAdditionalStateProvider(const ::org::orekit::propagation::FieldAdditionalStateProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addAdditionalStateProvider_546488029ed6e282], a0.this$);
      }

      ::java::util::List FieldAbstractPropagator::getAdditionalStateProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAdditionalStateProviders_d751c1a57012b438]));
      }

      ::org::orekit::attitudes::AttitudeProvider FieldAbstractPropagator::getAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
      }

      ::org::hipparchus::Field FieldAbstractPropagator::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
      }

      ::org::orekit::frames::Frame FieldAbstractPropagator::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::getInitialState() const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_a74be2e38786f3b6]));
      }

      JArray< ::java::lang::String > FieldAbstractPropagator::getManagedAdditionalStates() const
      {
        return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_f81c0644d57ae495]));
      }

      ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer FieldAbstractPropagator::getMultiplexer() const
      {
        return ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer(env->callObjectMethod(this$, mids$[mid_getMultiplexer_8da2e06aa361bf03]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbstractPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_1b1a4229447f7bf7], a0.this$, a1.this$));
      }

      jboolean FieldAbstractPropagator::isAdditionalStateManaged(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_df4c65b2aede5c41], a0.this$);
      }

      ::org::orekit::propagation::FieldSpacecraftState FieldAbstractPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_fb689a9c0f30b938], a0.this$));
      }

      void FieldAbstractPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
      }

      void FieldAbstractPropagator::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
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
      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self);
      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args);
      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg);
      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data);
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data);
      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data);
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data);
      static PyGetSetDef t_FieldAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, additionalStateProviders),
        DECLARE_GETSET_FIELD(t_FieldAbstractPropagator, attitudeProvider),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, field),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, frame),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, initialState),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, managedAdditionalStates),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, multiplexer),
        DECLARE_GET_FIELD(t_FieldAbstractPropagator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_FieldAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbstractPropagator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, addAdditionalStateProvider, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAdditionalStateProviders, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getInitialState, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getManagedAdditionalStates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getMultiplexer, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbstractPropagator, isAdditionalStateManaged, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, propagate, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, resetInitialState, METH_O),
        DECLARE_METHOD(t_FieldAbstractPropagator, setAttitudeProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbstractPropagator)[] = {
        { Py_tp_methods, t_FieldAbstractPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbstractPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAbstractPropagator, t_FieldAbstractPropagator, FieldAbstractPropagator);
      PyObject *t_FieldAbstractPropagator::wrap_Object(const FieldAbstractPropagator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbstractPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbstractPropagator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbstractPropagator *self = (t_FieldAbstractPropagator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbstractPropagator), &PY_TYPE_DEF(FieldAbstractPropagator), module, "FieldAbstractPropagator", 0);
      }

      void t_FieldAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "class_", make_descriptor(FieldAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "wrapfn_", make_descriptor(t_FieldAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_FieldAbstractPropagator::wrap_Object(FieldAbstractPropagator(((t_FieldAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbstractPropagator_of_(t_FieldAbstractPropagator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAbstractPropagator_addAdditionalStateProvider(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldAdditionalStateProvider a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldAdditionalStateProvider::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldAdditionalStateProvider::parameters_))
        {
          OBJ_CALL(self->object.addAdditionalStateProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateProvider", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_getAdditionalStateProviders(t_FieldAbstractPropagator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getAttitudeProvider(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getField(t_FieldAbstractPropagator *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getFrame(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbstractPropagator_getInitialState(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getManagedAdditionalStates(t_FieldAbstractPropagator *self)
      {
        JArray< ::java::lang::String > result((jobject) NULL);
        OBJ_CALL(result = self->object.getManagedAdditionalStates());
        return JArray<jstring>(result.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_getMultiplexer(t_FieldAbstractPropagator *self)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer result((jobject) NULL);
        OBJ_CALL(result = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAbstractPropagator_getPVCoordinates(t_FieldAbstractPropagator *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_isAdditionalStateManaged(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isAdditionalStateManaged", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_propagate(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.propagate(a0));
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "propagate", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_resetInitialState(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.resetInitialState(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "resetInitialState", arg);
        return NULL;
      }

      static PyObject *t_FieldAbstractPropagator_setAttitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setAttitudeProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
        return NULL;
      }
      static PyObject *t_FieldAbstractPropagator_get__parameters_(t_FieldAbstractPropagator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbstractPropagator_get__additionalStateProviders(t_FieldAbstractPropagator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStateProviders());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__attitudeProvider(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
      static int t_FieldAbstractPropagator_set__attitudeProvider(t_FieldAbstractPropagator *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
          {
            INT_CALL(self->object.setAttitudeProvider(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
        return -1;
      }

      static PyObject *t_FieldAbstractPropagator_get__field(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__frame(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__initialState(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialState());
        return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
      }

      static PyObject *t_FieldAbstractPropagator_get__managedAdditionalStates(t_FieldAbstractPropagator *self, void *data)
      {
        JArray< ::java::lang::String > value((jobject) NULL);
        OBJ_CALL(value = self->object.getManagedAdditionalStates());
        return JArray<jstring>(value.this$).wrap();
      }

      static PyObject *t_FieldAbstractPropagator_get__multiplexer(t_FieldAbstractPropagator *self, void *data)
      {
        ::org::orekit::propagation::sampling::FieldStepHandlerMultiplexer value((jobject) NULL);
        OBJ_CALL(value = self->object.getMultiplexer());
        return ::org::orekit::propagation::sampling::t_FieldStepHandlerMultiplexer::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BodyCenterPointing::class$ = NULL;
      jmethodID *BodyCenterPointing::mids$ = NULL;
      bool BodyCenterPointing::live$ = false;

      jclass BodyCenterPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BodyCenterPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3efc3fd3246a886b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/Ellipsoid;)V");
          mids$[mid_getTargetPV_11bfbaf3cce3e66c] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_19719ebf0495cd86] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodyCenterPointing::BodyCenterPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::Ellipsoid & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_3efc3fd3246a886b, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedFieldPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_11bfbaf3cce3e66c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_19719ebf0495cd86], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args);

      static PyMethodDef t_BodyCenterPointing__methods_[] = {
        DECLARE_METHOD(t_BodyCenterPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyCenterPointing)[] = {
        { Py_tp_methods, t_BodyCenterPointing__methods_ },
        { Py_tp_init, (void *) t_BodyCenterPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyCenterPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(BodyCenterPointing, t_BodyCenterPointing, BodyCenterPointing);

      void t_BodyCenterPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyCenterPointing), &PY_TYPE_DEF(BodyCenterPointing), module, "BodyCenterPointing", 0);
      }

      void t_BodyCenterPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "class_", make_descriptor(BodyCenterPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "wrapfn_", make_descriptor(t_BodyCenterPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyCenterPointing::initializeClass, 1)))
          return NULL;
        return t_BodyCenterPointing::wrap_Object(BodyCenterPointing(((t_BodyCenterPointing *) arg)->object.this$));
      }
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyCenterPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::Ellipsoid a1((jobject) NULL);
        BodyCenterPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::Ellipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = BodyCenterPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FrameAlignedProvider::class$ = NULL;
      jmethodID *FrameAlignedProvider::mids$ = NULL;
      bool FrameAlignedProvider::live$ = false;

      jclass FrameAlignedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FrameAlignedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c7213d7f3b4952c4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_289ae7c901f3113a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_494718838b66cf03] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_267252ddff45220c] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_of_19c72d3fcdb5c327] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7213d7f3b4952c4, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_289ae7c901f3113a, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_494718838b66cf03], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_267252ddff45220c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider FrameAlignedProvider::of(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_of_19c72d3fcdb5c327], a0.this$));
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
      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_FrameAlignedProvider__methods_[] = {
        DECLARE_METHOD(t_FrameAlignedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAlignedProvider)[] = {
        { Py_tp_methods, t_FrameAlignedProvider__methods_ },
        { Py_tp_init, (void *) t_FrameAlignedProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAlignedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAlignedProvider, t_FrameAlignedProvider, FrameAlignedProvider);

      void t_FrameAlignedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAlignedProvider), &PY_TYPE_DEF(FrameAlignedProvider), module, "FrameAlignedProvider", 0);
      }

      void t_FrameAlignedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "class_", make_descriptor(FrameAlignedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "wrapfn_", make_descriptor(t_FrameAlignedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAlignedProvider::initializeClass, 1)))
          return NULL;
        return t_FrameAlignedProvider::wrap_Object(FrameAlignedProvider(((t_FrameAlignedProvider *) arg)->object.this$));
      }
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAlignedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FrameAlignedProvider(a0, a1));
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

      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::attitudes::FrameAlignedProvider::of(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedCache::class$ = NULL;
      jmethodID *PythonTimeStampedCache::mids$ = NULL;
      bool PythonTimeStampedCache::live$ = false;

      jclass PythonTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_80bbab87cd34ef1a] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_80bbab87cd34ef1a] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_51316859db71bd81] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_ad75bac85cbb88e7] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedCache::PythonTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args);
      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self);
      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1);
      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data);
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedCache, t_PythonTimeStampedCache, PythonTimeStampedCache);
      PyObject *t_PythonTimeStampedCache::wrap_Object(const PythonTimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedCache *self = (t_PythonTimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedCache), &PY_TYPE_DEF(PythonTimeStampedCache), module, "PythonTimeStampedCache", 1);
      }

      void t_PythonTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "class_", make_descriptor(PythonTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "wrapfn_", make_descriptor(t_PythonTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/TimeStamped;", (void *) t_PythonTimeStampedCache_getLatest1 },
          { "getMaxNeighborsSize", "()I", (void *) t_PythonTimeStampedCache_getMaxNeighborsSize2 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors3 },
          { "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;", (void *) t_PythonTimeStampedCache_getNeighbors4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedCache_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedCache::wrap_Object(PythonTimeStampedCache(((t_PythonTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedCache_of_(t_PythonTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedCache_init_(t_PythonTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedCache_finalize(t_PythonTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedCache_pythonExtension(t_PythonTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jint JNICALL t_PythonTimeStampedCache_getMaxNeighborsSize2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getMaxNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getMaxNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors3(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jobject JNICALL t_PythonTimeStampedCache_getNeighbors4(JNIEnv *jenv, jobject jobj, jobject a0, jint a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "Oi", o0, (int) a1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static void JNICALL t_PythonTimeStampedCache_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedCache::mids$[PythonTimeStampedCache::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedCache_get__self(t_PythonTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonTimeStampedCache_get__parameters_(t_PythonTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/iod/IodGauss.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/frames/Frame.h"
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
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_d3a935233cda59ab] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_5767f052c979bd65] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e507dfcbdc2e0334] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGauss::IodGauss(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_d3a935233cda59ab], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_5767f052c979bd65], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodGauss::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7, const ::org::orekit::time::AbsoluteDate & a8, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a9) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e507dfcbdc2e0334], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
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
#include "org/hipparchus/dfp/DfpMath.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpMath::class$ = NULL;
      jmethodID *DfpMath::mids$ = NULL;
      bool DfpMath::live$ = false;

      jclass DfpMath::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpMath");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acos_f4723517f29214b4] = env->getStaticMethodID(cls, "acos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_f4723517f29214b4] = env->getStaticMethodID(cls, "asin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_f4723517f29214b4] = env->getStaticMethodID(cls, "atan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_f4723517f29214b4] = env->getStaticMethodID(cls, "cos", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_exp_f4723517f29214b4] = env->getStaticMethodID(cls, "exp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_f4723517f29214b4] = env->getStaticMethodID(cls, "log", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_6c69a9f186dcd94b] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_0f029d7bd1a04474] = env->getStaticMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_f4723517f29214b4] = env->getStaticMethodID(cls, "sin", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_f4723517f29214b4] = env->getStaticMethodID(cls, "tan", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitMult_9fbddec527abc1b5] = env->getStaticMethodID(cls, "splitMult", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitDiv_9fbddec527abc1b5] = env->getStaticMethodID(cls, "splitDiv", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_splitPow_1a6dd0b069e10975] = env->getStaticMethodID(cls, "splitPow", "([Lorg/hipparchus/dfp/Dfp;I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expInternal_f4723517f29214b4] = env->getStaticMethodID(cls, "expInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_logInternal_9e0bd39a14a96cd6] = env->getStaticMethodID(cls, "logInternal", "([Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinInternal_738c8f8e51e4e372] = env->getStaticMethodID(cls, "sinInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosInternal_738c8f8e51e4e372] = env->getStaticMethodID(cls, "cosInternal", "([Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanInternal_f4723517f29214b4] = env->getStaticMethodID(cls, "atanInternal", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_3bcbb789bf246610] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/DfpField;Ljava/lang/String;)[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_split_e83c2a032a3b257b] = env->getStaticMethodID(cls, "split", "(Lorg/hipparchus/dfp/Dfp;)[Lorg/hipparchus/dfp/Dfp;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::dfp::Dfp DfpMath::acos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_acos_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::asin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_asin_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::atan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_atan_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::cos(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_cos_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::exp(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_exp_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::log(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_log_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_6c69a9f186dcd94b], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::pow(const ::org::hipparchus::dfp::Dfp & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_pow_0f029d7bd1a04474], a0.this$, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::sin(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_sin_f4723517f29214b4], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpMath::tan(const ::org::hipparchus::dfp::Dfp & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_tan_f4723517f29214b4], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_DfpMath__methods_[] = {
        DECLARE_METHOD(t_DfpMath, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, acos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, asin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, atan, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, cos, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, exp, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, log, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, sin, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpMath, tan, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpMath)[] = {
        { Py_tp_methods, t_DfpMath__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpMath)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpMath, t_DfpMath, DfpMath);

      void t_DfpMath::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpMath), &PY_TYPE_DEF(DfpMath), module, "DfpMath", 0);
      }

      void t_DfpMath::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "class_", make_descriptor(DfpMath::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "wrapfn_", make_descriptor(t_DfpMath::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpMath), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpMath_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpMath::initializeClass, 1)))
          return NULL;
        return t_DfpMath::wrap_Object(DfpMath(((t_DfpMath *) arg)->object.this$));
      }
      static PyObject *t_DfpMath_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpMath::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpMath_acos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::acos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "acos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_asin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::asin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "asin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_atan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::atan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "atan", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_cos(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::cos(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cos", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_exp(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::exp(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "exp", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_log(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::log(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "log", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            jint a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::pow(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_DfpMath_sin(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::sin(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sin", arg);
        return NULL;
      }

      static PyObject *t_DfpMath_tan(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpMath::tan(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "tan", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FixedFrameBuilder.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FixedFrameBuilder::class$ = NULL;
      jmethodID *FixedFrameBuilder::mids$ = NULL;
      bool FixedFrameBuilder::live$ = false;

      jclass FixedFrameBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FixedFrameBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9725b246c9e25f68] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_build_16f6708eb1cda684] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_11d80d4c91effa8b] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FixedFrameBuilder::FixedFrameBuilder(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9725b246c9e25f68, a0.this$)) {}

      ::org::orekit::attitudes::FieldAttitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_16f6708eb1cda684], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude FixedFrameBuilder::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_11d80d4c91effa8b], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args);

      static PyMethodDef t_FixedFrameBuilder__methods_[] = {
        DECLARE_METHOD(t_FixedFrameBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FixedFrameBuilder, build, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FixedFrameBuilder)[] = {
        { Py_tp_methods, t_FixedFrameBuilder__methods_ },
        { Py_tp_init, (void *) t_FixedFrameBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FixedFrameBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FixedFrameBuilder, t_FixedFrameBuilder, FixedFrameBuilder);

      void t_FixedFrameBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(FixedFrameBuilder), &PY_TYPE_DEF(FixedFrameBuilder), module, "FixedFrameBuilder", 0);
      }

      void t_FixedFrameBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "class_", make_descriptor(FixedFrameBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "wrapfn_", make_descriptor(t_FixedFrameBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FixedFrameBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FixedFrameBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FixedFrameBuilder::initializeClass, 1)))
          return NULL;
        return t_FixedFrameBuilder::wrap_Object(FixedFrameBuilder(((t_FixedFrameBuilder *) arg)->object.this$));
      }
      static PyObject *t_FixedFrameBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FixedFrameBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FixedFrameBuilder_init_(t_FixedFrameBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FixedFrameBuilder object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          INT_CALL(object = FixedFrameBuilder(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FixedFrameBuilder_build(t_FixedFrameBuilder *self, PyObject *args)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MillerUpdatingRegression::class$ = NULL;
        jmethodID *MillerUpdatingRegression::mids$ = NULL;
        bool MillerUpdatingRegression::live$ = false;

        jclass MillerUpdatingRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MillerUpdatingRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_06c90d8be18d8afa] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_init$_f749fdf8034f9bd9] = env->getMethodID(cls, "<init>", "(IZD)V");
            mids$[mid_addObservation_19a01fdb4baa56b0] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f1517d9a21833345] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDiagonalOfHatMatrix_a40ce4fdf6559ac0] = env->getMethodID(cls, "getDiagonalOfHatMatrix", "([D)D");
            mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getOrderOfRegressors_d6f20bd740dd34cd] = env->getMethodID(cls, "getOrderOfRegressors", "()[I");
            mids$[mid_getPartialCorrelations_81add9fc9d78d5b9] = env->getMethodID(cls, "getPartialCorrelations", "(I)[D");
            mids$[mid_hasIntercept_eee3de00fe971136] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_b2f062f0fff197c0] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_54420be6ab2acfca] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_ce00c0e72893108a] = env->getMethodID(cls, "regress", "(I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06c90d8be18d8afa, a0, a1)) {}

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f749fdf8034f9bd9, a0, a1, a2)) {}

        void MillerUpdatingRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_19a01fdb4baa56b0], a0.this$, a1);
        }

        void MillerUpdatingRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f1517d9a21833345], a0.this$, a1.this$);
        }

        void MillerUpdatingRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
        }

        jdouble MillerUpdatingRegression::getDiagonalOfHatMatrix(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDiagonalOfHatMatrix_a40ce4fdf6559ac0], a0.this$);
        }

        jlong MillerUpdatingRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
        }

        JArray< jint > MillerUpdatingRegression::getOrderOfRegressors() const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getOrderOfRegressors_d6f20bd740dd34cd]));
        }

        JArray< jdouble > MillerUpdatingRegression::getPartialCorrelations(jint a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPartialCorrelations_81add9fc9d78d5b9], a0));
        }

        jboolean MillerUpdatingRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_eee3de00fe971136]);
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b2f062f0fff197c0]));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_54420be6ab2acfca], a0.this$));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(jint a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_ce00c0e72893108a], a0));
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
      namespace regression {
        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data);
        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data);
        static PyGetSetDef t_MillerUpdatingRegression__fields_[] = {
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, n),
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, orderOfRegressors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MillerUpdatingRegression__methods_[] = {
          DECLARE_METHOD(t_MillerUpdatingRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getDiagonalOfHatMatrix, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getOrderOfRegressors, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getPartialCorrelations, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MillerUpdatingRegression)[] = {
          { Py_tp_methods, t_MillerUpdatingRegression__methods_ },
          { Py_tp_init, (void *) t_MillerUpdatingRegression_init_ },
          { Py_tp_getset, t_MillerUpdatingRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MillerUpdatingRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MillerUpdatingRegression, t_MillerUpdatingRegression, MillerUpdatingRegression);

        void t_MillerUpdatingRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MillerUpdatingRegression), &PY_TYPE_DEF(MillerUpdatingRegression), module, "MillerUpdatingRegression", 0);
        }

        void t_MillerUpdatingRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "class_", make_descriptor(MillerUpdatingRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "wrapfn_", make_descriptor(t_MillerUpdatingRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MillerUpdatingRegression::initializeClass, 1)))
            return NULL;
          return t_MillerUpdatingRegression::wrap_Object(MillerUpdatingRegression(((t_MillerUpdatingRegression *) arg)->object.this$));
        }
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MillerUpdatingRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jboolean a1;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jdouble a2;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZD", &a0, &a1, &a2))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1, a2));
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

        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.getDiagonalOfHatMatrix(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDiagonalOfHatMatrix", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self)
        {
          JArray< jint > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrderOfRegressors());
          return result.wrap();
        }

        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          jint a0;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialCorrelations(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialCorrelations", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data)
        {
          JArray< jint > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrderOfRegressors());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF::class$ = NULL;
        jmethodID *CPF::mids$ = NULL;
        bool CPF::live$ = false;
        ::java::lang::String *CPF::DEFAULT_ID = NULL;

        jclass CPF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSatelliteCoordinate_9278ccfd1e581241] = env->getMethodID(cls, "addSatelliteCoordinate", "(Ljava/lang/String;Lorg/orekit/files/ilrs/CPF$CPFCoordinate;)V");
            mids$[mid_addSatelliteCoordinates_d6d7b1002c69c04a] = env->getMethodID(cls, "addSatelliteCoordinates", "(Ljava/lang/String;Ljava/util/List;)V");
            mids$[mid_addSatelliteVelocityToCPFCoordinate_58dd0b995bc90543] = env->getMethodID(cls, "addSatelliteVelocityToCPFCoordinate", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_93ed38ea49f194fa] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ilrs/CPFHeader;");
            mids$[mid_getSatellites_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_getTimeScale_5e2cac12ab8da943] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
            mids$[mid_setFilter_b30f5228e357f0be] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setInterpolationSample_8fd427ab23829bf5] = env->getMethodID(cls, "setInterpolationSample", "(I)V");
            mids$[mid_setMu_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setTimeScale_7cb2659f4799e4d2] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ID = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_ID", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF::CPF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void CPF::addSatelliteCoordinate(const ::java::lang::String & a0, const ::org::orekit::files::ilrs::CPF$CPFCoordinate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinate_9278ccfd1e581241], a0.this$, a1.this$);
        }

        void CPF::addSatelliteCoordinates(const ::java::lang::String & a0, const ::java::util::List & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteCoordinates_d6d7b1002c69c04a], a0.this$, a1.this$);
        }

        void CPF::addSatelliteVelocityToCPFCoordinate(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatelliteVelocityToCPFCoordinate_58dd0b995bc90543], a0.this$, a1.this$);
        }

        ::java::util::List CPF::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
        }

        ::org::orekit::files::ilrs::CPFHeader CPF::getHeader() const
        {
          return ::org::orekit::files::ilrs::CPFHeader(env->callObjectMethod(this$, mids$[mid_getHeader_93ed38ea49f194fa]));
        }

        ::java::util::Map CPF::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_dbcb8bbac6b35e0d]));
        }

        ::org::orekit::time::TimeScale CPF::getTimeScale() const
        {
          return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5e2cac12ab8da943]));
        }

        void CPF::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_b30f5228e357f0be], a0.this$);
        }

        void CPF::setInterpolationSample(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInterpolationSample_8fd427ab23829bf5], a0);
        }

        void CPF::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_1ad26e8c8c0cd65b], a0);
        }

        void CPF::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeScale_7cb2659f4799e4d2], a0.this$);
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
        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args);
        static PyObject *t_CPF_getComments(t_CPF *self);
        static PyObject *t_CPF_getHeader(t_CPF *self);
        static PyObject *t_CPF_getSatellites(t_CPF *self);
        static PyObject *t_CPF_getTimeScale(t_CPF *self);
        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg);
        static PyObject *t_CPF_get__comments(t_CPF *self, void *data);
        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__header(t_CPF *self, void *data);
        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data);
        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data);
        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data);
        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data);
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data);
        static PyGetSetDef t_CPF__fields_[] = {
          DECLARE_GET_FIELD(t_CPF, comments),
          DECLARE_SET_FIELD(t_CPF, filter),
          DECLARE_GET_FIELD(t_CPF, header),
          DECLARE_SET_FIELD(t_CPF, interpolationSample),
          DECLARE_SET_FIELD(t_CPF, mu),
          DECLARE_GET_FIELD(t_CPF, satellites),
          DECLARE_GETSET_FIELD(t_CPF, timeScale),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF__methods_[] = {
          DECLARE_METHOD(t_CPF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_CPF, addSatelliteVelocityToCPFCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_CPF, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getHeader, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_CPF, getTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CPF, setFilter, METH_O),
          DECLARE_METHOD(t_CPF, setInterpolationSample, METH_O),
          DECLARE_METHOD(t_CPF, setMu, METH_O),
          DECLARE_METHOD(t_CPF, setTimeScale, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF)[] = {
          { Py_tp_methods, t_CPF__methods_ },
          { Py_tp_init, (void *) t_CPF_init_ },
          { Py_tp_getset, t_CPF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF, t_CPF, CPF);

        void t_CPF::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF), &PY_TYPE_DEF(CPF), module, "CPF", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "CPFCoordinate", make_descriptor(&PY_TYPE_DEF(CPF$CPFCoordinate)));
        }

        void t_CPF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "class_", make_descriptor(CPF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "wrapfn_", make_descriptor(t_CPF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "boxfn_", make_descriptor(boxObject));
          env->getClass(CPF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF), "DEFAULT_ID", make_descriptor(j2p(*CPF::DEFAULT_ID)));
        }

        static PyObject *t_CPF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF::initializeClass, 1)))
            return NULL;
          return t_CPF::wrap_Object(CPF(((t_CPF *) arg)->object.this$));
        }
        static PyObject *t_CPF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF_init_(t_CPF *self, PyObject *args, PyObject *kwds)
        {
          CPF object((jobject) NULL);

          INT_CALL(object = CPF());
          self->object = object;

          return 0;
        }

        static PyObject *t_CPF_addSatelliteCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF$CPFCoordinate a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::files::ilrs::CPF$CPFCoordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteCoordinates(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.addSatelliteCoordinates(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteCoordinates", args);
          return NULL;
        }

        static PyObject *t_CPF_addSatelliteVelocityToCPFCoordinate(t_CPF *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addSatelliteVelocityToCPFCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatelliteVelocityToCPFCoordinate", args);
          return NULL;
        }

        static PyObject *t_CPF_getComments(t_CPF *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CPF_getHeader(t_CPF *self)
        {
          ::org::orekit::files::ilrs::CPFHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(result);
        }

        static PyObject *t_CPF_getSatellites(t_CPF *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF_getTimeScale(t_CPF *self)
        {
          ::org::orekit::time::TimeScale result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        static PyObject *t_CPF_setFilter(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_CPF_setInterpolationSample(t_CPF *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setInterpolationSample(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInterpolationSample", arg);
          return NULL;
        }

        static PyObject *t_CPF_setMu(t_CPF *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMu", arg);
          return NULL;
        }

        static PyObject *t_CPF_setTimeScale(t_CPF *self, PyObject *arg)
        {
          ::org::orekit::time::TimeScale a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CPF_get__comments(t_CPF *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_CPF_set__filter(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_CPF_get__header(t_CPF *self, void *data)
        {
          ::org::orekit::files::ilrs::CPFHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::ilrs::t_CPFHeader::wrap_Object(value);
        }

        static int t_CPF_set__interpolationSample(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setInterpolationSample(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "interpolationSample", arg);
          return -1;
        }

        static int t_CPF_set__mu(t_CPF *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_CPF_get__satellites(t_CPF *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }

        static PyObject *t_CPF_get__timeScale(t_CPF *self, void *data)
        {
          ::org::orekit::time::TimeScale value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeScale());
          return ::org::orekit::time::t_TimeScale::wrap_Object(value);
        }
        static int t_CPF_set__timeScale(t_CPF *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$SmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$SmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$SmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$SmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_db06d8c3fc3d9670] = env->getMethodID(cls, "value", "(DDD)D");
            mids$[mid_checkInputEdges_13edac039e8cc967] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_db06d8c3fc3d9670] = env->getMethodID(cls, "clampInput", "(DDD)D");
            mids$[mid_normalizeInput_db06d8c3fc3d9670] = env->getMethodID(cls, "normalizeInput", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
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
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args);

        static PyMethodDef t_SmoothStepFactory$SmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$SmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$SmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$SmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$SmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::PolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$SmoothStepFunction, t_SmoothStepFactory$SmoothStepFunction, SmoothStepFactory$SmoothStepFunction);

        void t_SmoothStepFactory$SmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$SmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$SmoothStepFunction), module, "SmoothStepFactory$SmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$SmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$SmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$SmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$SmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$SmoothStepFunction::wrap_Object(SmoothStepFactory$SmoothStepFunction(((t_SmoothStepFactory$SmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$SmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$SmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$SmoothStepFunction_value(t_SmoothStepFactory$SmoothStepFunction *self, PyObject *args)
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

          return callSuper(PY_TYPE(SmoothStepFactory$SmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well1024a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well1024a::class$ = NULL;
      jmethodID *Well1024a::mids$ = NULL;
      bool Well1024a::live$ = false;

      jclass Well1024a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well1024a");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d43202153dd284f7] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_d6ab429752e7c267] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well1024a::Well1024a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      Well1024a::Well1024a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d43202153dd284f7, a0.this$)) {}

      Well1024a::Well1024a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      Well1024a::Well1024a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

      jint Well1024a::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_d6ab429752e7c267]);
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
      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args);

      static PyMethodDef t_Well1024a__methods_[] = {
        DECLARE_METHOD(t_Well1024a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well1024a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well1024a)[] = {
        { Py_tp_methods, t_Well1024a__methods_ },
        { Py_tp_init, (void *) t_Well1024a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well1024a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well1024a, t_Well1024a, Well1024a);

      void t_Well1024a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well1024a), &PY_TYPE_DEF(Well1024a), module, "Well1024a", 0);
      }

      void t_Well1024a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "class_", make_descriptor(Well1024a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "wrapfn_", make_descriptor(t_Well1024a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well1024a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well1024a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well1024a::initializeClass, 1)))
          return NULL;
        return t_Well1024a::wrap_Object(Well1024a(((t_Well1024a *) arg)->object.this$));
      }
      static PyObject *t_Well1024a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well1024a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well1024a_init_(t_Well1024a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well1024a object((jobject) NULL);

            INT_CALL(object = Well1024a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well1024a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well1024a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well1024a(a0));
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

      static PyObject *t_Well1024a_nextInt(t_Well1024a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well1024a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
