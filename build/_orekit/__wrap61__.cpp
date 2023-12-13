#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ArithmeticUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ArithmeticUtils::class$ = NULL;
      jmethodID *ArithmeticUtils::mids$ = NULL;
      bool ArithmeticUtils::live$ = false;

      jclass ArithmeticUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ArithmeticUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addAndCheck_92ecd94558bf0c68] = env->getStaticMethodID(cls, "addAndCheck", "(II)I");
          mids$[mid_addAndCheck_8f345e4204401ff5] = env->getStaticMethodID(cls, "addAndCheck", "(JJ)J");
          mids$[mid_divideUnsigned_92ecd94558bf0c68] = env->getStaticMethodID(cls, "divideUnsigned", "(II)I");
          mids$[mid_divideUnsigned_8f345e4204401ff5] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
          mids$[mid_gcd_92ecd94558bf0c68] = env->getStaticMethodID(cls, "gcd", "(II)I");
          mids$[mid_gcd_8f345e4204401ff5] = env->getStaticMethodID(cls, "gcd", "(JJ)J");
          mids$[mid_isPowerOfTwo_ba9ecb578b8b76e7] = env->getStaticMethodID(cls, "isPowerOfTwo", "(J)Z");
          mids$[mid_lcm_92ecd94558bf0c68] = env->getStaticMethodID(cls, "lcm", "(II)I");
          mids$[mid_lcm_8f345e4204401ff5] = env->getStaticMethodID(cls, "lcm", "(JJ)J");
          mids$[mid_mulAndCheck_92ecd94558bf0c68] = env->getStaticMethodID(cls, "mulAndCheck", "(II)I");
          mids$[mid_mulAndCheck_8f345e4204401ff5] = env->getStaticMethodID(cls, "mulAndCheck", "(JJ)J");
          mids$[mid_pow_92ecd94558bf0c68] = env->getStaticMethodID(cls, "pow", "(II)I");
          mids$[mid_pow_a60a6e0b1c5dfa26] = env->getStaticMethodID(cls, "pow", "(JI)J");
          mids$[mid_remainderUnsigned_92ecd94558bf0c68] = env->getStaticMethodID(cls, "remainderUnsigned", "(II)I");
          mids$[mid_remainderUnsigned_8f345e4204401ff5] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
          mids$[mid_subAndCheck_92ecd94558bf0c68] = env->getStaticMethodID(cls, "subAndCheck", "(II)I");
          mids$[mid_subAndCheck_8f345e4204401ff5] = env->getStaticMethodID(cls, "subAndCheck", "(JJ)J");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ArithmeticUtils::addAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_addAndCheck_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::addAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_addAndCheck_8f345e4204401ff5], a0, a1);
      }

      jint ArithmeticUtils::divideUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_divideUnsigned_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::divideUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_8f345e4204401ff5], a0, a1);
      }

      jint ArithmeticUtils::gcd(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_gcd_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::gcd(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_gcd_8f345e4204401ff5], a0, a1);
      }

      jboolean ArithmeticUtils::isPowerOfTwo(jlong a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isPowerOfTwo_ba9ecb578b8b76e7], a0);
      }

      jint ArithmeticUtils::lcm(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_lcm_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::lcm(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_lcm_8f345e4204401ff5], a0, a1);
      }

      jint ArithmeticUtils::mulAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_mulAndCheck_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::mulAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_mulAndCheck_8f345e4204401ff5], a0, a1);
      }

      jint ArithmeticUtils::pow(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_pow_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::pow(jlong a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_pow_a60a6e0b1c5dfa26], a0, a1);
      }

      jint ArithmeticUtils::remainderUnsigned(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_remainderUnsigned_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::remainderUnsigned(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_8f345e4204401ff5], a0, a1);
      }

      jint ArithmeticUtils::subAndCheck(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_subAndCheck_92ecd94558bf0c68], a0, a1);
      }

      jlong ArithmeticUtils::subAndCheck(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_subAndCheck_8f345e4204401ff5], a0, a1);
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
      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args);
      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_ArithmeticUtils__methods_[] = {
        DECLARE_METHOD(t_ArithmeticUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, addAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, divideUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, gcd, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, isPowerOfTwo, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, lcm, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, mulAndCheck, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, pow, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, remainderUnsigned, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ArithmeticUtils, subAndCheck, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ArithmeticUtils)[] = {
        { Py_tp_methods, t_ArithmeticUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ArithmeticUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ArithmeticUtils, t_ArithmeticUtils, ArithmeticUtils);

      void t_ArithmeticUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(ArithmeticUtils), &PY_TYPE_DEF(ArithmeticUtils), module, "ArithmeticUtils", 0);
      }

      void t_ArithmeticUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "class_", make_descriptor(ArithmeticUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "wrapfn_", make_descriptor(t_ArithmeticUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ArithmeticUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ArithmeticUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ArithmeticUtils::initializeClass, 1)))
          return NULL;
        return t_ArithmeticUtils::wrap_Object(ArithmeticUtils(((t_ArithmeticUtils *) arg)->object.this$));
      }
      static PyObject *t_ArithmeticUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ArithmeticUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ArithmeticUtils_addAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::addAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "addAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_divideUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::divideUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "divideUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_gcd(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::gcd(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "gcd", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_isPowerOfTwo(PyTypeObject *type, PyObject *arg)
      {
        jlong a0;
        jboolean result;

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::isPowerOfTwo(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "isPowerOfTwo", arg);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_lcm(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::lcm(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "lcm", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_mulAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::mulAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mulAndCheck", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_pow(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jint a1;
            jlong result;

            if (!parseArgs(args, "JI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::pow(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "pow", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_remainderUnsigned(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::remainderUnsigned(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "remainderUnsigned", args);
        return NULL;
      }

      static PyObject *t_ArithmeticUtils_subAndCheck(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::ArithmeticUtils::subAndCheck(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError(type, "subAndCheck", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$SessionStatistics::class$ = NULL;
        jmethodID *CRD$SessionStatistics::mids$ = NULL;
        bool CRD$SessionStatistics::live$ = false;

        jclass CRD$SessionStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$SessionStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_63ed8820ae480a9f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDDI)V");
            mids$[mid_getDataQulityIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getDataQulityIndicator", "()I");
            mids$[mid_getKurtosis_b74f83833fdad017] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getPeakMinusMean_b74f83833fdad017] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getRms_b74f83833fdad017] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getSkewness_b74f83833fdad017] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$SessionStatistics::CRD$SessionStatistics(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jint a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63ed8820ae480a9f, a0.this$, a1, a2, a3, a4, a5)) {}

        jint CRD$SessionStatistics::getDataQulityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataQulityIndicator_55546ef6a647f39b]);
        }

        jdouble CRD$SessionStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_b74f83833fdad017]);
        }

        jdouble CRD$SessionStatistics::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_b74f83833fdad017]);
        }

        jdouble CRD$SessionStatistics::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_b74f83833fdad017]);
        }

        jdouble CRD$SessionStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_b74f83833fdad017]);
        }

        ::java::lang::String CRD$SessionStatistics::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$SessionStatistics::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$SessionStatistics::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self);
        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args);
        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data);
        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data);
        static PyGetSetDef t_CRD$SessionStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, dataQulityIndicator),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, kurtosis),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, rms),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, skewness),
          DECLARE_GET_FIELD(t_CRD$SessionStatistics, systemConfigurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$SessionStatistics__methods_[] = {
          DECLARE_METHOD(t_CRD$SessionStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getDataQulityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$SessionStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$SessionStatistics)[] = {
          { Py_tp_methods, t_CRD$SessionStatistics__methods_ },
          { Py_tp_init, (void *) t_CRD$SessionStatistics_init_ },
          { Py_tp_getset, t_CRD$SessionStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$SessionStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$SessionStatistics, t_CRD$SessionStatistics, CRD$SessionStatistics);

        void t_CRD$SessionStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$SessionStatistics), &PY_TYPE_DEF(CRD$SessionStatistics), module, "CRD$SessionStatistics", 0);
        }

        void t_CRD$SessionStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "class_", make_descriptor(CRD$SessionStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "wrapfn_", make_descriptor(t_CRD$SessionStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$SessionStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$SessionStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$SessionStatistics::initializeClass, 1)))
            return NULL;
          return t_CRD$SessionStatistics::wrap_Object(CRD$SessionStatistics(((t_CRD$SessionStatistics *) arg)->object.this$));
        }
        static PyObject *t_CRD$SessionStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$SessionStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$SessionStatistics_init_(t_CRD$SessionStatistics *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jint a5;
          CRD$SessionStatistics object((jobject) NULL);

          if (!parseArgs(args, "sDDDDI", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = CRD$SessionStatistics(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$SessionStatistics_getDataQulityIndicator(t_CRD$SessionStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$SessionStatistics_getKurtosis(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getPeakMinusMean(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getRms(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSkewness(t_CRD$SessionStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$SessionStatistics_getSystemConfigurationId(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toCrdString(t_CRD$SessionStatistics *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$SessionStatistics_toString(t_CRD$SessionStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$SessionStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$SessionStatistics_get__dataQulityIndicator(t_CRD$SessionStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataQulityIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__kurtosis(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__peakMinusMean(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__rms(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__skewness(t_CRD$SessionStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$SessionStatistics_get__systemConfigurationId(t_CRD$SessionStatistics *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/events/handlers/EventMultipleHandler.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *EventMultipleHandler::class$ = NULL;
          jmethodID *EventMultipleHandler::mids$ = NULL;
          bool EventMultipleHandler::live$ = false;

          jclass EventMultipleHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/EventMultipleHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addHandler_2c3a580824587767] = env->getMethodID(cls, "addHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_addHandlers_66864790fef57ca5] = env->getMethodID(cls, "addHandlers", "([Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/handlers/EventMultipleHandler;");
              mids$[mid_eventOccurred_ae9b0131fefe6c67] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getHandlers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getHandlers", "()Ljava/util/List;");
              mids$[mid_init_0ac7022abb4b9f0c] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/propagation/events/EventDetector;)V");
              mids$[mid_resetState_ec159c1171338d74] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_setHandlers_0e7c3032c7c93ed3] = env->getMethodID(cls, "setHandlers", "(Ljava/util/List;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EventMultipleHandler::EventMultipleHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          EventMultipleHandler EventMultipleHandler::addHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandler_2c3a580824587767], a0.this$));
          }

          EventMultipleHandler EventMultipleHandler::addHandlers(const JArray< ::org::orekit::propagation::events::handlers::EventHandler > & a0) const
          {
            return EventMultipleHandler(env->callObjectMethod(this$, mids$[mid_addHandlers_66864790fef57ca5], a0.this$));
          }

          ::org::hipparchus::ode::events::Action EventMultipleHandler::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_ae9b0131fefe6c67], a0.this$, a1.this$, a2));
          }

          ::java::util::List EventMultipleHandler::getHandlers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getHandlers_e62d3bb06d56d7e3]));
          }

          void EventMultipleHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::propagation::events::EventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_0ac7022abb4b9f0c], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::SpacecraftState EventMultipleHandler::resetState(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_ec159c1171338d74], a0.this$, a1.this$));
          }

          void EventMultipleHandler::setHandlers(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHandlers_0e7c3032c7c93ed3], a0.this$);
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
      namespace events {
        namespace handlers {
          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self);
          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args);
          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg);
          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data);
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data);
          static PyGetSetDef t_EventMultipleHandler__fields_[] = {
            DECLARE_GETSET_FIELD(t_EventMultipleHandler, handlers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_EventMultipleHandler__methods_[] = {
            DECLARE_METHOD(t_EventMultipleHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EventMultipleHandler, addHandler, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, addHandlers, METH_O),
            DECLARE_METHOD(t_EventMultipleHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, getHandlers, METH_NOARGS),
            DECLARE_METHOD(t_EventMultipleHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, resetState, METH_VARARGS),
            DECLARE_METHOD(t_EventMultipleHandler, setHandlers, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EventMultipleHandler)[] = {
            { Py_tp_methods, t_EventMultipleHandler__methods_ },
            { Py_tp_init, (void *) t_EventMultipleHandler_init_ },
            { Py_tp_getset, t_EventMultipleHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EventMultipleHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EventMultipleHandler, t_EventMultipleHandler, EventMultipleHandler);

          void t_EventMultipleHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(EventMultipleHandler), &PY_TYPE_DEF(EventMultipleHandler), module, "EventMultipleHandler", 0);
          }

          void t_EventMultipleHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "class_", make_descriptor(EventMultipleHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "wrapfn_", make_descriptor(t_EventMultipleHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EventMultipleHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EventMultipleHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EventMultipleHandler::initializeClass, 1)))
              return NULL;
            return t_EventMultipleHandler::wrap_Object(EventMultipleHandler(((t_EventMultipleHandler *) arg)->object.this$));
          }
          static PyObject *t_EventMultipleHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EventMultipleHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EventMultipleHandler_init_(t_EventMultipleHandler *self, PyObject *args, PyObject *kwds)
          {
            EventMultipleHandler object((jobject) NULL);

            INT_CALL(object = EventMultipleHandler());
            self->object = object;

            return 0;
          }

          static PyObject *t_EventMultipleHandler_addHandler(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandler(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandler", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_addHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            JArray< ::org::orekit::propagation::events::handlers::EventHandler > a0((jobject) NULL);
            EventMultipleHandler result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addHandlers(a0));
              return t_EventMultipleHandler::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_eventOccurred(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_getHandlers(t_EventMultipleHandler *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(EventHandler));
          }

          static PyObject *t_EventMultipleHandler_init(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a2((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_resetState(t_EventMultipleHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_setHandlers(t_EventMultipleHandler *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setHandlers(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHandlers", arg);
            return NULL;
          }

          static PyObject *t_EventMultipleHandler_get__handlers(t_EventMultipleHandler *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getHandlers());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_EventMultipleHandler_set__handlers(t_EventMultipleHandler *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setHandlers(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "handlers", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$MeteorologicalMeasurement::class$ = NULL;
        jmethodID *CRD$MeteorologicalMeasurement::mids$ = NULL;
        bool CRD$MeteorologicalMeasurement::live$ = false;

        jclass CRD$MeteorologicalMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$MeteorologicalMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e314b98c669ecc36] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_init$_0f8eda121d1fd894] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDI)V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getHumidity_b74f83833fdad017] = env->getMethodID(cls, "getHumidity", "()D");
            mids$[mid_getOriginOfValues_55546ef6a647f39b] = env->getMethodID(cls, "getOriginOfValues", "()I");
            mids$[mid_getPressure_b74f83833fdad017] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getTemperature_b74f83833fdad017] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e314b98c669ecc36, a0.this$, a1, a2, a3)) {}

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f8eda121d1fd894, a0.this$, a1, a2, a3, a4)) {}

        ::org::orekit::time::AbsoluteDate CRD$MeteorologicalMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jdouble CRD$MeteorologicalMeasurement::getHumidity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHumidity_b74f83833fdad017]);
        }

        jint CRD$MeteorologicalMeasurement::getOriginOfValues() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginOfValues_55546ef6a647f39b]);
        }

        jdouble CRD$MeteorologicalMeasurement::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_b74f83833fdad017]);
        }

        jdouble CRD$MeteorologicalMeasurement::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_b74f83833fdad017]);
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyGetSetDef t_CRD$MeteorologicalMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, humidity),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, originOfValues),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, pressure),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$MeteorologicalMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getHumidity, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getOriginOfValues, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$MeteorologicalMeasurement)[] = {
          { Py_tp_methods, t_CRD$MeteorologicalMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$MeteorologicalMeasurement_init_ },
          { Py_tp_getset, t_CRD$MeteorologicalMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$MeteorologicalMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$MeteorologicalMeasurement, t_CRD$MeteorologicalMeasurement, CRD$MeteorologicalMeasurement);

        void t_CRD$MeteorologicalMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$MeteorologicalMeasurement), &PY_TYPE_DEF(CRD$MeteorologicalMeasurement), module, "CRD$MeteorologicalMeasurement", 0);
        }

        void t_CRD$MeteorologicalMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "class_", make_descriptor(CRD$MeteorologicalMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "wrapfn_", make_descriptor(t_CRD$MeteorologicalMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$MeteorologicalMeasurement::wrap_Object(CRD$MeteorologicalMeasurement(((t_CRD$MeteorologicalMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHumidity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginOfValues());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$MeteorologicalMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHumidity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginOfValues());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/Kurtosis.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Kurtosis::class$ = NULL;
          jmethodID *Kurtosis::mids$ = NULL;
          bool Kurtosis::live$ = false;

          jclass Kurtosis::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Kurtosis");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_8ca5de053d99cda1] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Kurtosis;");
              mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Kurtosis::Kurtosis() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          void Kurtosis::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
          }

          Kurtosis Kurtosis::copy() const
          {
            return Kurtosis(env->callObjectMethod(this$, mids$[mid_copy_8ca5de053d99cda1]));
          }

          jdouble Kurtosis::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
          }

          jlong Kurtosis::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
          }

          jdouble Kurtosis::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
          }

          void Kurtosis::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args);
          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data);
          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data);
          static PyGetSetDef t_Kurtosis__fields_[] = {
            DECLARE_GET_FIELD(t_Kurtosis, n),
            DECLARE_GET_FIELD(t_Kurtosis, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Kurtosis__methods_[] = {
            DECLARE_METHOD(t_Kurtosis, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Kurtosis, clear, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, copy, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getN, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Kurtosis, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Kurtosis)[] = {
            { Py_tp_methods, t_Kurtosis__methods_ },
            { Py_tp_init, (void *) t_Kurtosis_init_ },
            { Py_tp_getset, t_Kurtosis__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Kurtosis)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Kurtosis, t_Kurtosis, Kurtosis);

          void t_Kurtosis::install(PyObject *module)
          {
            installType(&PY_TYPE(Kurtosis), &PY_TYPE_DEF(Kurtosis), module, "Kurtosis", 0);
          }

          void t_Kurtosis::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "class_", make_descriptor(Kurtosis::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "wrapfn_", make_descriptor(t_Kurtosis::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Kurtosis), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Kurtosis_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Kurtosis::initializeClass, 1)))
              return NULL;
            return t_Kurtosis::wrap_Object(Kurtosis(((t_Kurtosis *) arg)->object.this$));
          }
          static PyObject *t_Kurtosis_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Kurtosis::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Kurtosis_init_(t_Kurtosis *self, PyObject *args, PyObject *kwds)
          {
            Kurtosis object((jobject) NULL);

            INT_CALL(object = Kurtosis());
            self->object = object;

            return 0;
          }

          static PyObject *t_Kurtosis_clear(t_Kurtosis *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Kurtosis_copy(t_Kurtosis *self, PyObject *args)
          {
            Kurtosis result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Kurtosis::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Kurtosis_evaluate(t_Kurtosis *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Kurtosis_getN(t_Kurtosis *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Kurtosis_getResult(t_Kurtosis *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Kurtosis_increment(t_Kurtosis *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Kurtosis), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Kurtosis_get__n(t_Kurtosis *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Kurtosis_get__result(t_Kurtosis *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalStateException.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldTimeStampedCache::class$ = NULL;
      jmethodID *PythonFieldTimeStampedCache::mids$ = NULL;
      bool PythonFieldTimeStampedCache::live$ = false;

      jclass PythonFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_e7a49be0190c3b40] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_e7a49be0190c3b40] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_fe526c9a9cb8189c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStampedCache::PythonFieldTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self);
      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data);
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStampedCache, t_PythonFieldTimeStampedCache, PythonFieldTimeStampedCache);
      PyObject *t_PythonFieldTimeStampedCache::wrap_Object(const PythonFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStampedCache), &PY_TYPE_DEF(PythonFieldTimeStampedCache), module, "PythonFieldTimeStampedCache", 1);
      }

      void t_PythonFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "class_", make_descriptor(PythonFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "wrapfn_", make_descriptor(t_PythonFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getLatest1 },
          { "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonFieldTimeStampedCache_getNeighbors2 },
          { "getNeighborsSize", "()I", (void *) t_PythonFieldTimeStampedCache_getNeighborsSize3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStampedCache_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStampedCache::wrap_Object(PythonFieldTimeStampedCache(((t_PythonFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
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

      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/OpenIntToFieldHashMap$Iterator.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *OpenIntToFieldHashMap::class$ = NULL;
      jmethodID *OpenIntToFieldHashMap::mids$ = NULL;
      bool OpenIntToFieldHashMap::live$ = false;

      jclass OpenIntToFieldHashMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/OpenIntToFieldHashMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_02ab84aa7626616d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_9127f23cedcce237] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;I)V");
          mids$[mid_init$_937cc4000c29b170] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_d0202e5a9d07b52f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/hipparchus/FieldElement;)V");
          mids$[mid_containsKey_96f51a3f36d3a2a7] = env->getMethodID(cls, "containsKey", "(I)Z");
          mids$[mid_get_6c5caf579ccf9ce5] = env->getMethodID(cls, "get", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_iterator_aa811963c8992453] = env->getMethodID(cls, "iterator", "()Lorg/hipparchus/util/OpenIntToFieldHashMap$Iterator;");
          mids$[mid_put_475a3dc033b0d5a5] = env->getMethodID(cls, "put", "(ILorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
          mids$[mid_remove_6c5caf579ccf9ce5] = env->getMethodID(cls, "remove", "(I)Lorg/hipparchus/FieldElement;");
          mids$[mid_size_55546ef6a647f39b] = env->getMethodID(cls, "size", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_02ab84aa7626616d, a0.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9127f23cedcce237, a0.this$, a1)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, const ::org::hipparchus::FieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_937cc4000c29b170, a0.this$, a1.this$)) {}

      OpenIntToFieldHashMap::OpenIntToFieldHashMap(const ::org::hipparchus::Field & a0, jint a1, const ::org::hipparchus::FieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0202e5a9d07b52f, a0.this$, a1, a2.this$)) {}

      jboolean OpenIntToFieldHashMap::containsKey(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_containsKey_96f51a3f36d3a2a7], a0);
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::get$(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_get_6c5caf579ccf9ce5], a0));
      }

      ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator OpenIntToFieldHashMap::iterator() const
      {
        return ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator(env->callObjectMethod(this$, mids$[mid_iterator_aa811963c8992453]));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::put(jint a0, const ::org::hipparchus::FieldElement & a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_put_475a3dc033b0d5a5], a0, a1.this$));
      }

      ::org::hipparchus::FieldElement OpenIntToFieldHashMap::remove(jint a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remove_6c5caf579ccf9ce5], a0));
      }

      jint OpenIntToFieldHashMap::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_55546ef6a647f39b]);
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
      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args);
      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args);
      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg);
      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self);
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data);
      static PyGetSetDef t_OpenIntToFieldHashMap__fields_[] = {
        DECLARE_GET_FIELD(t_OpenIntToFieldHashMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OpenIntToFieldHashMap__methods_[] = {
        DECLARE_METHOD(t_OpenIntToFieldHashMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, containsKey, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, get, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, iterator, METH_NOARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, put, METH_VARARGS),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, remove, METH_O),
        DECLARE_METHOD(t_OpenIntToFieldHashMap, size, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OpenIntToFieldHashMap)[] = {
        { Py_tp_methods, t_OpenIntToFieldHashMap__methods_ },
        { Py_tp_init, (void *) t_OpenIntToFieldHashMap_init_ },
        { Py_tp_getset, t_OpenIntToFieldHashMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OpenIntToFieldHashMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OpenIntToFieldHashMap, t_OpenIntToFieldHashMap, OpenIntToFieldHashMap);
      PyObject *t_OpenIntToFieldHashMap::wrap_Object(const OpenIntToFieldHashMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OpenIntToFieldHashMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OpenIntToFieldHashMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OpenIntToFieldHashMap *self = (t_OpenIntToFieldHashMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OpenIntToFieldHashMap::install(PyObject *module)
      {
        installType(&PY_TYPE(OpenIntToFieldHashMap), &PY_TYPE_DEF(OpenIntToFieldHashMap), module, "OpenIntToFieldHashMap", 0);
      }

      void t_OpenIntToFieldHashMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "class_", make_descriptor(OpenIntToFieldHashMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "wrapfn_", make_descriptor(t_OpenIntToFieldHashMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OpenIntToFieldHashMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OpenIntToFieldHashMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OpenIntToFieldHashMap::initializeClass, 1)))
          return NULL;
        return t_OpenIntToFieldHashMap::wrap_Object(OpenIntToFieldHashMap(((t_OpenIntToFieldHashMap *) arg)->object.this$));
      }
      static PyObject *t_OpenIntToFieldHashMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OpenIntToFieldHashMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OpenIntToFieldHashMap_of_(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_OpenIntToFieldHashMap_init_(t_OpenIntToFieldHashMap *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::FieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            OpenIntToFieldHashMap object((jobject) NULL);

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = OpenIntToFieldHashMap(a0, a1, a2));
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

      static PyObject *t_OpenIntToFieldHashMap_containsKey(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        jboolean result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.containsKey(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "containsKey", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_get(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_iterator(t_OpenIntToFieldHashMap *self)
      {
        ::org::hipparchus::util::OpenIntToFieldHashMap$Iterator result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::org::hipparchus::util::t_OpenIntToFieldHashMap$Iterator::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_OpenIntToFieldHashMap_put(t_OpenIntToFieldHashMap *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::FieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.put(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "put", args);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_remove(t_OpenIntToFieldHashMap *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.remove(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "remove", arg);
        return NULL;
      }

      static PyObject *t_OpenIntToFieldHashMap_size(t_OpenIntToFieldHashMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_OpenIntToFieldHashMap_get__parameters_(t_OpenIntToFieldHashMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DateDriver.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DateDriver::class$ = NULL;
      jmethodID *DateDriver::mids$ = NULL;
      bool DateDriver::live$ = false;

      jclass DateDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DateDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b2e2674a880038a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Ljava/lang/String;Z)V");
          mids$[mid_getBaseDate_c325492395d89b24] = env->getMethodID(cls, "getBaseDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_isStart_9ab94ac1dc23b105] = env->getMethodID(cls, "isStart", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DateDriver::DateDriver(const ::org::orekit::time::AbsoluteDate & a0, const ::java::lang::String & a1, jboolean a2) : ::org::orekit::utils::ParameterDriver(env->newObject(initializeClass, &mids$, mid_init$_b2e2674a880038a1, a0.this$, a1.this$, a2)) {}

      ::org::orekit::time::AbsoluteDate DateDriver::getBaseDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBaseDate_c325492395d89b24]));
      }

      ::org::orekit::time::AbsoluteDate DateDriver::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
      }

      jboolean DateDriver::isStart() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isStart_9ab94ac1dc23b105]);
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
      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self);
      static PyObject *t_DateDriver_getDate(t_DateDriver *self);
      static PyObject *t_DateDriver_isStart(t_DateDriver *self);
      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data);
      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data);
      static PyGetSetDef t_DateDriver__fields_[] = {
        DECLARE_GET_FIELD(t_DateDriver, baseDate),
        DECLARE_GET_FIELD(t_DateDriver, date),
        DECLARE_GET_FIELD(t_DateDriver, start),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DateDriver__methods_[] = {
        DECLARE_METHOD(t_DateDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DateDriver, getBaseDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DateDriver, isStart, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DateDriver)[] = {
        { Py_tp_methods, t_DateDriver__methods_ },
        { Py_tp_init, (void *) t_DateDriver_init_ },
        { Py_tp_getset, t_DateDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DateDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(DateDriver, t_DateDriver, DateDriver);

      void t_DateDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(DateDriver), &PY_TYPE_DEF(DateDriver), module, "DateDriver", 0);
      }

      void t_DateDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "class_", make_descriptor(DateDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "wrapfn_", make_descriptor(t_DateDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DateDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DateDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DateDriver::initializeClass, 1)))
          return NULL;
        return t_DateDriver::wrap_Object(DateDriver(((t_DateDriver *) arg)->object.this$));
      }
      static PyObject *t_DateDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DateDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DateDriver_init_(t_DateDriver *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        jboolean a2;
        DateDriver object((jobject) NULL);

        if (!parseArgs(args, "ksZ", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = DateDriver(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DateDriver_getBaseDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_getDate(t_DateDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DateDriver_isStart(t_DateDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isStart());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_DateDriver_get__baseDate(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__date(t_DateDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DateDriver_get__start(t_DateDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isStart());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/String.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Locale.h"
#include "java/lang/Iterable.h"
#include "java/util/Comparator.h"
#include "java/lang/CharSequence.h"
#include "java/io/Serializable.h"
#include "java/lang/StringBuffer.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *String::class$ = NULL;
    jmethodID *String::mids$ = NULL;
    bool String::live$ = false;
    ::java::util::Comparator *String::CASE_INSENSITIVE_ORDER = NULL;

    jclass String::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/String");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_c7b545693fad9323] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuffer;)V");
        mids$[mid_init$_7c8a8d7c52f9458f] = env->getMethodID(cls, "<init>", "(Ljava/lang/StringBuilder;)V");
        mids$[mid_init$_459771b03534868e] = env->getMethodID(cls, "<init>", "([B)V");
        mids$[mid_init$_dd3f254991df5d48] = env->getMethodID(cls, "<init>", "([C)V");
        mids$[mid_init$_6b491b52531e1592] = env->getMethodID(cls, "<init>", "([BLjava/lang/String;)V");
        mids$[mid_init$_fdec0c33477ce5f0] = env->getMethodID(cls, "<init>", "([BI)V");
        mids$[mid_init$_a9fddc59b07ce512] = env->getMethodID(cls, "<init>", "([BII)V");
        mids$[mid_init$_d23ba6c655e17478] = env->getMethodID(cls, "<init>", "([CII)V");
        mids$[mid_init$_a811d6c26b223197] = env->getMethodID(cls, "<init>", "([III)V");
        mids$[mid_init$_4be9f619cb439efa] = env->getMethodID(cls, "<init>", "([BIILjava/lang/String;)V");
        mids$[mid_init$_946b45b77d949193] = env->getMethodID(cls, "<init>", "([BIII)V");
        mids$[mid_charAt_f41af25e73e22f74] = env->getMethodID(cls, "charAt", "(I)C");
        mids$[mid_codePointAt_0e7cf35192c3effe] = env->getMethodID(cls, "codePointAt", "(I)I");
        mids$[mid_codePointBefore_0e7cf35192c3effe] = env->getMethodID(cls, "codePointBefore", "(I)I");
        mids$[mid_codePointCount_92ecd94558bf0c68] = env->getMethodID(cls, "codePointCount", "(II)I");
        mids$[mid_compareTo_f0ba70671b70c6e5] = env->getMethodID(cls, "compareTo", "(Ljava/lang/String;)I");
        mids$[mid_compareToIgnoreCase_f0ba70671b70c6e5] = env->getMethodID(cls, "compareToIgnoreCase", "(Ljava/lang/String;)I");
        mids$[mid_concat_6f0f3576df9f75ee] = env->getMethodID(cls, "concat", "(Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_contains_256f6bc28bb8672e] = env->getMethodID(cls, "contains", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_contentEquals_da9a9535ac5687c2] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/StringBuffer;)Z");
        mids$[mid_contentEquals_256f6bc28bb8672e] = env->getMethodID(cls, "contentEquals", "(Ljava/lang/CharSequence;)Z");
        mids$[mid_copyValueOf_9a53c61542f295a1] = env->getStaticMethodID(cls, "copyValueOf", "([C)Ljava/lang/String;");
        mids$[mid_copyValueOf_cd50bad0f18710de] = env->getStaticMethodID(cls, "copyValueOf", "([CII)Ljava/lang/String;");
        mids$[mid_endsWith_cde6b28e15c96b75] = env->getMethodID(cls, "endsWith", "(Ljava/lang/String;)Z");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_equalsIgnoreCase_cde6b28e15c96b75] = env->getMethodID(cls, "equalsIgnoreCase", "(Ljava/lang/String;)Z");
        mids$[mid_format_a04f4df1a34e49bc] = env->getStaticMethodID(cls, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_format_3e036a048b920b1c] = env->getStaticMethodID(cls, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_getBytes_b7afa59f65f6aa9b] = env->getMethodID(cls, "getBytes", "()[B");
        mids$[mid_getBytes_6d75204e3bcb0459] = env->getMethodID(cls, "getBytes", "(Ljava/lang/String;)[B");
        mids$[mid_getBytes_691cab49c6242e6d] = env->getMethodID(cls, "getBytes", "(II[BI)V");
        mids$[mid_getChars_cc06cb22124df445] = env->getMethodID(cls, "getChars", "(II[CI)V");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;)I");
        mids$[mid_indexOf_0e7cf35192c3effe] = env->getMethodID(cls, "indexOf", "(I)I");
        mids$[mid_indexOf_7c969bab81d289ef] = env->getMethodID(cls, "indexOf", "(Ljava/lang/String;I)I");
        mids$[mid_indexOf_92ecd94558bf0c68] = env->getMethodID(cls, "indexOf", "(II)I");
        mids$[mid_intern_1c1fa1e935d6cdcf] = env->getMethodID(cls, "intern", "()Ljava/lang/String;");
        mids$[mid_isBlank_9ab94ac1dc23b105] = env->getMethodID(cls, "isBlank", "()Z");
        mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_join_23872f907ebf329c] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;[Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_join_577a3534e2df5ab3] = env->getStaticMethodID(cls, "join", "(Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;");
        mids$[mid_lastIndexOf_f0ba70671b70c6e5] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;)I");
        mids$[mid_lastIndexOf_0e7cf35192c3effe] = env->getMethodID(cls, "lastIndexOf", "(I)I");
        mids$[mid_lastIndexOf_7c969bab81d289ef] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/String;I)I");
        mids$[mid_lastIndexOf_92ecd94558bf0c68] = env->getMethodID(cls, "lastIndexOf", "(II)I");
        mids$[mid_length_55546ef6a647f39b] = env->getMethodID(cls, "length", "()I");
        mids$[mid_lines_14e21bf777ff0ccf] = env->getMethodID(cls, "lines", "()Ljava/util/stream/Stream;");
        mids$[mid_matches_cde6b28e15c96b75] = env->getMethodID(cls, "matches", "(Ljava/lang/String;)Z");
        mids$[mid_offsetByCodePoints_92ecd94558bf0c68] = env->getMethodID(cls, "offsetByCodePoints", "(II)I");
        mids$[mid_regionMatches_345a9ae949824f63] = env->getMethodID(cls, "regionMatches", "(ILjava/lang/String;II)Z");
        mids$[mid_regionMatches_47186190fa4b45e3] = env->getMethodID(cls, "regionMatches", "(ZILjava/lang/String;II)Z");
        mids$[mid_repeat_2a9bffd3d5397f7c] = env->getMethodID(cls, "repeat", "(I)Ljava/lang/String;");
        mids$[mid_replace_630648127d9d065e] = env->getMethodID(cls, "replace", "(CC)Ljava/lang/String;");
        mids$[mid_replace_2643f345e997a30b] = env->getMethodID(cls, "replace", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;");
        mids$[mid_replaceAll_88f2f8c619f3cbd0] = env->getMethodID(cls, "replaceAll", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_replaceFirst_88f2f8c619f3cbd0] = env->getMethodID(cls, "replaceFirst", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
        mids$[mid_split_fb693b259486c655] = env->getMethodID(cls, "split", "(Ljava/lang/String;)[Ljava/lang/String;");
        mids$[mid_split_672f537cbc3e50a9] = env->getMethodID(cls, "split", "(Ljava/lang/String;I)[Ljava/lang/String;");
        mids$[mid_startsWith_cde6b28e15c96b75] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;)Z");
        mids$[mid_startsWith_e584c514b8852171] = env->getMethodID(cls, "startsWith", "(Ljava/lang/String;I)Z");
        mids$[mid_strip_1c1fa1e935d6cdcf] = env->getMethodID(cls, "strip", "()Ljava/lang/String;");
        mids$[mid_stripLeading_1c1fa1e935d6cdcf] = env->getMethodID(cls, "stripLeading", "()Ljava/lang/String;");
        mids$[mid_stripTrailing_1c1fa1e935d6cdcf] = env->getMethodID(cls, "stripTrailing", "()Ljava/lang/String;");
        mids$[mid_subSequence_e866f407305d4016] = env->getMethodID(cls, "subSequence", "(II)Ljava/lang/CharSequence;");
        mids$[mid_substring_2a9bffd3d5397f7c] = env->getMethodID(cls, "substring", "(I)Ljava/lang/String;");
        mids$[mid_substring_e91e53c42d39aef9] = env->getMethodID(cls, "substring", "(II)Ljava/lang/String;");
        mids$[mid_toCharArray_53a37b9a05d57059] = env->getMethodID(cls, "toCharArray", "()[C");
        mids$[mid_toLowerCase_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toLowerCase", "()Ljava/lang/String;");
        mids$[mid_toLowerCase_26070c28e6ea354d] = env->getMethodID(cls, "toLowerCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toUpperCase", "()Ljava/lang/String;");
        mids$[mid_toUpperCase_26070c28e6ea354d] = env->getMethodID(cls, "toUpperCase", "(Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_trim_1c1fa1e935d6cdcf] = env->getMethodID(cls, "trim", "()Ljava/lang/String;");
        mids$[mid_valueOf_9a53c61542f295a1] = env->getStaticMethodID(cls, "valueOf", "([C)Ljava/lang/String;");
        mids$[mid_valueOf_8603157c6408b5bf] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_935421dbce990c9c] = env->getStaticMethodID(cls, "valueOf", "(C)Ljava/lang/String;");
        mids$[mid_valueOf_11ae2994efd15504] = env->getStaticMethodID(cls, "valueOf", "(D)Ljava/lang/String;");
        mids$[mid_valueOf_2dfeb5b800d7df61] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_2a9bffd3d5397f7c] = env->getStaticMethodID(cls, "valueOf", "(I)Ljava/lang/String;");
        mids$[mid_valueOf_9a3ac03d9f8571c6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_valueOf_9078858c11a58b1e] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/String;");
        mids$[mid_valueOf_cd50bad0f18710de] = env->getStaticMethodID(cls, "valueOf", "([CII)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        CASE_INSENSITIVE_ORDER = new ::java::util::Comparator(env->getStaticObjectField(cls, "CASE_INSENSITIVE_ORDER", "Ljava/util/Comparator;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    String::String() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    String::String(const ::java::lang::StringBuffer & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c7b545693fad9323, a0.this$)) {}

    String::String(const ::java::lang::StringBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c8a8d7c52f9458f, a0.this$)) {}

    String::String(const JArray< jbyte > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_459771b03534868e, a0.this$)) {}

    String::String(const JArray< jchar > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dd3f254991df5d48, a0.this$)) {}

    String::String(const JArray< jbyte > & a0, const String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6b491b52531e1592, a0.this$, a1.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdec0c33477ce5f0, a0.this$, a1)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9fddc59b07ce512, a0.this$, a1, a2)) {}

    String::String(const JArray< jchar > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d23ba6c655e17478, a0.this$, a1, a2)) {}

    String::String(const JArray< jint > & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a811d6c26b223197, a0.this$, a1, a2)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, const String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4be9f619cb439efa, a0.this$, a1, a2, a3.this$)) {}

    String::String(const JArray< jbyte > & a0, jint a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_946b45b77d949193, a0.this$, a1, a2, a3)) {}

    jchar String::charAt(jint a0) const
    {
      return env->callCharMethod(this$, mids$[mid_charAt_f41af25e73e22f74], a0);
    }

    jint String::codePointAt(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointAt_0e7cf35192c3effe], a0);
    }

    jint String::codePointBefore(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointBefore_0e7cf35192c3effe], a0);
    }

    jint String::codePointCount(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_codePointCount_92ecd94558bf0c68], a0, a1);
    }

    jint String::compareTo(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f0ba70671b70c6e5], a0.this$);
    }

    jint String::compareToIgnoreCase(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareToIgnoreCase_f0ba70671b70c6e5], a0.this$);
    }

    String String::concat(const String & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_concat_6f0f3576df9f75ee], a0.this$));
    }

    jboolean String::contains(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_256f6bc28bb8672e], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::StringBuffer & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_da9a9535ac5687c2], a0.this$);
    }

    jboolean String::contentEquals(const ::java::lang::CharSequence & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contentEquals_256f6bc28bb8672e], a0.this$);
    }

    String String::copyValueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_9a53c61542f295a1], a0.this$));
    }

    String String::copyValueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_copyValueOf_cd50bad0f18710de], a0.this$, a1, a2));
    }

    jboolean String::endsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_endsWith_cde6b28e15c96b75], a0.this$);
    }

    jboolean String::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    jboolean String::equalsIgnoreCase(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equalsIgnoreCase_cde6b28e15c96b75], a0.this$);
    }

    String String::format(const String & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_a04f4df1a34e49bc], a0.this$, a1.this$));
    }

    String String::format(const ::java::util::Locale & a0, const String & a1, const JArray< ::java::lang::Object > & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_format_3e036a048b920b1c], a0.this$, a1.this$, a2.this$));
    }

    JArray< jbyte > String::getBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_b7afa59f65f6aa9b]));
    }

    JArray< jbyte > String::getBytes(const String & a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_getBytes_6d75204e3bcb0459], a0.this$));
    }

    void String::getBytes(jint a0, jint a1, const JArray< jbyte > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getBytes_691cab49c6242e6d], a0, a1, a2.this$, a3);
    }

    void String::getChars(jint a0, jint a1, const JArray< jchar > & a2, jint a3) const
    {
      env->callVoidMethod(this$, mids$[mid_getChars_cc06cb22124df445], a0, a1, a2.this$, a3);
    }

    jint String::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint String::indexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint String::indexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_0e7cf35192c3effe], a0);
    }

    jint String::indexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_7c969bab81d289ef], a0.this$, a1);
    }

    jint String::indexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_92ecd94558bf0c68], a0, a1);
    }

    String String::intern() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_intern_1c1fa1e935d6cdcf]));
    }

    jboolean String::isBlank() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isBlank_9ab94ac1dc23b105]);
    }

    jboolean String::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
    }

    String String::join(const ::java::lang::CharSequence & a0, const JArray< ::java::lang::CharSequence > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_23872f907ebf329c], a0.this$, a1.this$));
    }

    String String::join(const ::java::lang::CharSequence & a0, const ::java::lang::Iterable & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_join_577a3534e2df5ab3], a0.this$, a1.this$));
    }

    jint String::lastIndexOf(const String & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_f0ba70671b70c6e5], a0.this$);
    }

    jint String::lastIndexOf(jint a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_0e7cf35192c3effe], a0);
    }

    jint String::lastIndexOf(const String & a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_7c969bab81d289ef], a0.this$, a1);
    }

    jint String::lastIndexOf(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_92ecd94558bf0c68], a0, a1);
    }

    jint String::length() const
    {
      return env->callIntMethod(this$, mids$[mid_length_55546ef6a647f39b]);
    }

    ::java::util::stream::Stream String::lines() const
    {
      return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_lines_14e21bf777ff0ccf]));
    }

    jboolean String::matches(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_matches_cde6b28e15c96b75], a0.this$);
    }

    jint String::offsetByCodePoints(jint a0, jint a1) const
    {
      return env->callIntMethod(this$, mids$[mid_offsetByCodePoints_92ecd94558bf0c68], a0, a1);
    }

    jboolean String::regionMatches(jint a0, const String & a1, jint a2, jint a3) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_345a9ae949824f63], a0, a1.this$, a2, a3);
    }

    jboolean String::regionMatches(jboolean a0, jint a1, const String & a2, jint a3, jint a4) const
    {
      return env->callBooleanMethod(this$, mids$[mid_regionMatches_47186190fa4b45e3], a0, a1, a2.this$, a3, a4);
    }

    String String::repeat(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_repeat_2a9bffd3d5397f7c], a0));
    }

    String String::replace(jchar a0, jchar a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_630648127d9d065e], a0, a1));
    }

    String String::replace(const ::java::lang::CharSequence & a0, const ::java::lang::CharSequence & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replace_2643f345e997a30b], a0.this$, a1.this$));
    }

    String String::replaceAll(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceAll_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }

    String String::replaceFirst(const String & a0, const String & a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_replaceFirst_88f2f8c619f3cbd0], a0.this$, a1.this$));
    }

    JArray< String > String::split(const String & a0) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_fb693b259486c655], a0.this$));
    }

    JArray< String > String::split(const String & a0, jint a1) const
    {
      return JArray< String >(env->callObjectMethod(this$, mids$[mid_split_672f537cbc3e50a9], a0.this$, a1));
    }

    jboolean String::startsWith(const String & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_cde6b28e15c96b75], a0.this$);
    }

    jboolean String::startsWith(const String & a0, jint a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_startsWith_e584c514b8852171], a0.this$, a1);
    }

    String String::strip() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_strip_1c1fa1e935d6cdcf]));
    }

    String String::stripLeading() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripLeading_1c1fa1e935d6cdcf]));
    }

    String String::stripTrailing() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_stripTrailing_1c1fa1e935d6cdcf]));
    }

    ::java::lang::CharSequence String::subSequence(jint a0, jint a1) const
    {
      return ::java::lang::CharSequence(env->callObjectMethod(this$, mids$[mid_subSequence_e866f407305d4016], a0, a1));
    }

    String String::substring(jint a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_2a9bffd3d5397f7c], a0));
    }

    String String::substring(jint a0, jint a1) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_substring_e91e53c42d39aef9], a0, a1));
    }

    JArray< jchar > String::toCharArray() const
    {
      return JArray< jchar >(env->callObjectMethod(this$, mids$[mid_toCharArray_53a37b9a05d57059]));
    }

    String String::toLowerCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_1c1fa1e935d6cdcf]));
    }

    String String::toLowerCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toLowerCase_26070c28e6ea354d], a0.this$));
    }

    String String::toString() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
    }

    String String::toUpperCase() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_1c1fa1e935d6cdcf]));
    }

    String String::toUpperCase(const ::java::util::Locale & a0) const
    {
      return String(env->callObjectMethod(this$, mids$[mid_toUpperCase_26070c28e6ea354d], a0.this$));
    }

    String String::trim() const
    {
      return String(env->callObjectMethod(this$, mids$[mid_trim_1c1fa1e935d6cdcf]));
    }

    String String::valueOf(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a53c61542f295a1], a0.this$));
    }

    String String::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8603157c6408b5bf], a0));
    }

    String String::valueOf(jchar a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_935421dbce990c9c], a0));
    }

    String String::valueOf(jdouble a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_11ae2994efd15504], a0));
    }

    String String::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2dfeb5b800d7df61], a0));
    }

    String String::valueOf(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2a9bffd3d5397f7c], a0));
    }

    String String::valueOf(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a3ac03d9f8571c6], a0.this$));
    }

    String String::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9078858c11a58b1e], a0));
    }

    String String::valueOf(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return String(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cd50bad0f18710de], a0.this$, a1, a2));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg);
    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds);
    static PyObject *t_String_charAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg);
    static PyObject *t_String_codePointCount(t_String *self, PyObject *args);
    static PyObject *t_String_compareTo(t_String *self, PyObject *arg);
    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_concat(t_String *self, PyObject *arg);
    static PyObject *t_String_contains(t_String *self, PyObject *arg);
    static PyObject *t_String_contentEquals(t_String *self, PyObject *args);
    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_endsWith(t_String *self, PyObject *arg);
    static PyObject *t_String_equals(t_String *self, PyObject *args);
    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg);
    static PyObject *t_String_format(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_getBytes(t_String *self, PyObject *args);
    static PyObject *t_String_getChars(t_String *self, PyObject *args);
    static PyObject *t_String_hashCode(t_String *self, PyObject *args);
    static PyObject *t_String_indexOf(t_String *self, PyObject *args);
    static PyObject *t_String_intern(t_String *self);
    static PyObject *t_String_isBlank(t_String *self);
    static PyObject *t_String_isEmpty(t_String *self);
    static PyObject *t_String_join(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args);
    static PyObject *t_String_length(t_String *self);
    static PyObject *t_String_lines(t_String *self);
    static PyObject *t_String_matches(t_String *self, PyObject *arg);
    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args);
    static PyObject *t_String_regionMatches(t_String *self, PyObject *args);
    static PyObject *t_String_repeat(t_String *self, PyObject *arg);
    static PyObject *t_String_replace(t_String *self, PyObject *args);
    static PyObject *t_String_replaceAll(t_String *self, PyObject *args);
    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args);
    static PyObject *t_String_split(t_String *self, PyObject *args);
    static PyObject *t_String_startsWith(t_String *self, PyObject *args);
    static PyObject *t_String_strip(t_String *self);
    static PyObject *t_String_stripLeading(t_String *self);
    static PyObject *t_String_stripTrailing(t_String *self);
    static PyObject *t_String_subSequence(t_String *self, PyObject *args);
    static PyObject *t_String_substring(t_String *self, PyObject *args);
    static PyObject *t_String_toCharArray(t_String *self);
    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args);
    static PyObject *t_String_toString(t_String *self, PyObject *args);
    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args);
    static PyObject *t_String_trim(t_String *self);
    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_String_get__blank(t_String *self, void *data);
    static PyObject *t_String_get__bytes(t_String *self, void *data);
    static PyObject *t_String_get__empty(t_String *self, void *data);
    static PyGetSetDef t_String__fields_[] = {
      DECLARE_GET_FIELD(t_String, blank),
      DECLARE_GET_FIELD(t_String, bytes),
      DECLARE_GET_FIELD(t_String, empty),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_String__methods_[] = {
      DECLARE_METHOD(t_String, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_String, charAt, METH_O),
      DECLARE_METHOD(t_String, codePointAt, METH_O),
      DECLARE_METHOD(t_String, codePointBefore, METH_O),
      DECLARE_METHOD(t_String, codePointCount, METH_VARARGS),
      DECLARE_METHOD(t_String, compareTo, METH_O),
      DECLARE_METHOD(t_String, compareToIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, concat, METH_O),
      DECLARE_METHOD(t_String, contains, METH_O),
      DECLARE_METHOD(t_String, contentEquals, METH_VARARGS),
      DECLARE_METHOD(t_String, copyValueOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, endsWith, METH_O),
      DECLARE_METHOD(t_String, equals, METH_VARARGS),
      DECLARE_METHOD(t_String, equalsIgnoreCase, METH_O),
      DECLARE_METHOD(t_String, format, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, getBytes, METH_VARARGS),
      DECLARE_METHOD(t_String, getChars, METH_VARARGS),
      DECLARE_METHOD(t_String, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_String, indexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, intern, METH_NOARGS),
      DECLARE_METHOD(t_String, isBlank, METH_NOARGS),
      DECLARE_METHOD(t_String, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_String, join, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_String, lastIndexOf, METH_VARARGS),
      DECLARE_METHOD(t_String, length, METH_NOARGS),
      DECLARE_METHOD(t_String, lines, METH_NOARGS),
      DECLARE_METHOD(t_String, matches, METH_O),
      DECLARE_METHOD(t_String, offsetByCodePoints, METH_VARARGS),
      DECLARE_METHOD(t_String, regionMatches, METH_VARARGS),
      DECLARE_METHOD(t_String, repeat, METH_O),
      DECLARE_METHOD(t_String, replace, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceAll, METH_VARARGS),
      DECLARE_METHOD(t_String, replaceFirst, METH_VARARGS),
      DECLARE_METHOD(t_String, split, METH_VARARGS),
      DECLARE_METHOD(t_String, startsWith, METH_VARARGS),
      DECLARE_METHOD(t_String, strip, METH_NOARGS),
      DECLARE_METHOD(t_String, stripLeading, METH_NOARGS),
      DECLARE_METHOD(t_String, stripTrailing, METH_NOARGS),
      DECLARE_METHOD(t_String, subSequence, METH_VARARGS),
      DECLARE_METHOD(t_String, substring, METH_VARARGS),
      DECLARE_METHOD(t_String, toCharArray, METH_NOARGS),
      DECLARE_METHOD(t_String, toLowerCase, METH_VARARGS),
      DECLARE_METHOD(t_String, toString, METH_VARARGS),
      DECLARE_METHOD(t_String, toUpperCase, METH_VARARGS),
      DECLARE_METHOD(t_String, trim, METH_NOARGS),
      DECLARE_METHOD(t_String, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(String)[] = {
      { Py_tp_methods, t_String__methods_ },
      { Py_tp_init, (void *) t_String_init_ },
      { Py_tp_getset, t_String__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(String)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(String, t_String, String);

    void t_String::install(PyObject *module)
    {
      installType(&PY_TYPE(String), &PY_TYPE_DEF(String), module, "String", 0);
    }

    void t_String::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "class_", make_descriptor(String::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "wrapfn_", make_descriptor(unboxString));
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "boxfn_", make_descriptor(boxString));
      env->getClass(String::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(String), "CASE_INSENSITIVE_ORDER", make_descriptor(::java::util::t_Comparator::wrap_Object(*String::CASE_INSENSITIVE_ORDER)));
    }

    static PyObject *t_String_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, String::initializeClass, 1)))
        return NULL;
      return t_String::wrap_Object(String(((t_String *) arg)->object.this$));
    }
    static PyObject *t_String_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, String::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_String_init_(t_String *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String object((jobject) NULL);

          INT_CALL(object = String());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::StringBuilder a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::StringBuilder::initializeClass, &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            INT_CALL(object = String(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          String a1((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[Bs", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            INT_CALL(object = String(a0, a1));
            self->object = object;
            break;
          }
        }
        goto err;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          String object((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            INT_CALL(object = String(a0, a1, a2));
            self->object = object;
            break;
          }
        }
        goto err;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          String a3((jobject) NULL);
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIIs", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
            self->object = object;
            break;
          }
        }
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          String object((jobject) NULL);

          if (!parseArgs(args, "[BIII", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = String(a0, a1, a2, a3));
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

    static PyObject *t_String_charAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jchar result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.charAt(a0));
        return c2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "charAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointAt(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointAt(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointAt", arg);
      return NULL;
    }

    static PyObject *t_String_codePointBefore(t_String *self, PyObject *arg)
    {
      jint a0;
      jint result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.codePointBefore(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointBefore", arg);
      return NULL;
    }

    static PyObject *t_String_codePointCount(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.codePointCount(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "codePointCount", args);
      return NULL;
    }

    static PyObject *t_String_compareTo(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_String_compareToIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.compareToIgnoreCase(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareToIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_concat(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.concat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "concat", arg);
      return NULL;
    }

    static PyObject *t_String_contains(t_String *self, PyObject *arg)
    {
      ::java::lang::CharSequence a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_String_contentEquals(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::StringBuffer a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "k", ::java::lang::StringBuffer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
          {
            OBJ_CALL(result = self->object.contentEquals(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "contentEquals", args);
      return NULL;
    }

    static PyObject *t_String_copyValueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::copyValueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "copyValueOf", args);
      return NULL;
    }

    static PyObject *t_String_endsWith(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.endsWith(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "endsWith", arg);
      return NULL;
    }

    static PyObject *t_String_equals(t_String *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_String_equalsIgnoreCase(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.equalsIgnoreCase(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "equalsIgnoreCase", arg);
      return NULL;
    }

    static PyObject *t_String_format(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          String a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "s[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          ::java::util::Locale a0((jobject) NULL);
          String a1((jobject) NULL);
          JArray< ::java::lang::Object > a2((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "ks[o", ::java::util::Locale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::format(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "format", args);
      return NULL;
    }

    static PyObject *t_String_getBytes(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< jbyte > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBytes());
          return result.wrap();
        }
        break;
       case 1:
        {
          String a0((jobject) NULL);
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.getBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          jint a0;
          jint a1;
          JArray< jbyte > a2((jobject) NULL);
          jint a3;

          if (!parseArgs(args, "II[BI", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(self->object.getBytes(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "getBytes", args);
      return NULL;
    }

    static PyObject *t_String_getChars(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      JArray< jchar > a2((jobject) NULL);
      jint a3;

      if (!parseArgs(args, "II[CI", &a0, &a1, &a2, &a3))
      {
        OBJ_CALL(self->object.getChars(a0, a1, a2, a3));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "getChars", args);
      return NULL;
    }

    static PyObject *t_String_hashCode(t_String *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_String_indexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.indexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.indexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", args);
      return NULL;
    }

    static PyObject *t_String_intern(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.intern());
      return j2p(result);
    }

    static PyObject *t_String_isBlank(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isBlank());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_isEmpty(t_String *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_String_join(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          JArray< ::java::lang::CharSequence > a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "O[O", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::Iterable a1((jobject) NULL);
          PyTypeObject **p1;
          String result((jobject) NULL);

          if (!parseArgs(args, "OK", ::java::lang::PY_TYPE(CharSequence), ::java::lang::Iterable::initializeClass, &a0, &a1, &p1, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = ::java::lang::String::join(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "join", args);
      return NULL;
    }

    static PyObject *t_String_lastIndexOf(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          jint a0;
          jint a1;
          jint result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.lastIndexOf(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", args);
      return NULL;
    }

    static PyObject *t_String_length(t_String *self)
    {
      jint result;
      OBJ_CALL(result = self->object.length());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_String_lines(t_String *self)
    {
      ::java::util::stream::Stream result((jobject) NULL);
      OBJ_CALL(result = self->object.lines());
      return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(String));
    }

    static PyObject *t_String_matches(t_String *self, PyObject *arg)
    {
      String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.matches(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "matches", arg);
      return NULL;
    }

    static PyObject *t_String_offsetByCodePoints(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      jint result;

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.offsetByCodePoints(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "offsetByCodePoints", args);
      return NULL;
    }

    static PyObject *t_String_regionMatches(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 4:
        {
          jint a0;
          String a1((jobject) NULL);
          jint a2;
          jint a3;
          jboolean result;

          if (!parseArgs(args, "IsII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 5:
        {
          jboolean a0;
          jint a1;
          String a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean result;

          if (!parseArgs(args, "ZIsII", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.regionMatches(a0, a1, a2, a3, a4));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "regionMatches", args);
      return NULL;
    }

    static PyObject *t_String_repeat(t_String *self, PyObject *arg)
    {
      jint a0;
      String result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.repeat(a0));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "repeat", arg);
      return NULL;
    }

    static PyObject *t_String_replace(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          jchar a0;
          jchar a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "CC", &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          ::java::lang::CharSequence a1((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "OO", ::java::lang::PY_TYPE(CharSequence), ::java::lang::PY_TYPE(CharSequence), &a0, &a1))
          {
            OBJ_CALL(result = self->object.replace(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "replace", args);
      return NULL;
    }

    static PyObject *t_String_replaceAll(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceAll(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_String_replaceFirst(t_String *self, PyObject *args)
    {
      String a0((jobject) NULL);
      String a1((jobject) NULL);
      String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.replaceFirst(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "replaceFirst", args);
      return NULL;
    }

    static PyObject *t_String_split(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.split(a0));
            return JArray<jstring>(result.this$).wrap();
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          JArray< String > result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.split(a0, a1));
            return JArray<jstring>(result.this$).wrap();
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "split", args);
      return NULL;
    }

    static PyObject *t_String_startsWith(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.startsWith(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          String a0((jobject) NULL);
          jint a1;
          jboolean result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = self->object.startsWith(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "startsWith", args);
      return NULL;
    }

    static PyObject *t_String_strip(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.strip());
      return j2p(result);
    }

    static PyObject *t_String_stripLeading(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripLeading());
      return j2p(result);
    }

    static PyObject *t_String_stripTrailing(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.stripTrailing());
      return j2p(result);
    }

    static PyObject *t_String_subSequence(t_String *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::lang::CharSequence result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subSequence(a0, a1));
        return ::java::lang::t_CharSequence::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "subSequence", args);
      return NULL;
    }

    static PyObject *t_String_substring(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.substring(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          jint a1;
          String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.substring(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "substring", args);
      return NULL;
    }

    static PyObject *t_String_toCharArray(t_String *self)
    {
      JArray< jchar > result((jobject) NULL);
      OBJ_CALL(result = self->object.toCharArray());
      return result.wrap();
    }

    static PyObject *t_String_toLowerCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toLowerCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toLowerCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toLowerCase", args);
      return NULL;
    }

    static PyObject *t_String_toString(t_String *self, PyObject *args)
    {
      String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(String), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_String_toUpperCase(t_String *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          String result((jobject) NULL);
          OBJ_CALL(result = self->object.toUpperCase());
          return j2p(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.toUpperCase(a0));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "toUpperCase", args);
      return NULL;
    }

    static PyObject *t_String_trim(t_String *self)
    {
      String result((jobject) NULL);
      OBJ_CALL(result = self->object.trim());
      return j2p(result);
    }

    static PyObject *t_String_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jchar > a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jboolean a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jchar a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "C", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jdouble a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jfloat a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jint a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          String result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        {
          jlong a0;
          String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0));
            return j2p(result);
          }
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          String result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::lang::String::valueOf(a0, a1, a2));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_String_get__blank(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isBlank());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_String_get__bytes(t_String *self, void *data)
    {
      JArray< jbyte > value((jobject) NULL);
      OBJ_CALL(value = self->object.getBytes());
      return value.wrap();
    }

    static PyObject *t_String_get__empty(t_String *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToSensorMapping::class$ = NULL;
          jmethodID *SensorToSensorMapping::mids$ = NULL;
          bool SensorToSensorMapping::live$ = false;

          jclass SensorToSensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToSensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a627ad9c5959309d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_03ff9b80a9f63d81] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_init$_09d55289065fbca9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_a76ac05fceac20a9] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_addMapping_3b4fadd64e3c0457] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;)V");
              mids$[mid_addMapping_17efccddf9e5f19a] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;Ljava/lang/Double;)V");
              mids$[mid_getBodyConstraintWeight_b74f83833fdad017] = env->getMethodID(cls, "getBodyConstraintWeight", "()D");
              mids$[mid_getBodyDistance_92dad8b3e4c8a558] = env->getMethodID(cls, "getBodyDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getBodyDistances_e62d3bb06d56d7e3] = env->getMethodID(cls, "getBodyDistances", "()Ljava/util/List;");
              mids$[mid_getLosDistance_92dad8b3e4c8a558] = env->getMethodID(cls, "getLosDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getLosDistances_e62d3bb06d56d7e3] = env->getMethodID(cls, "getLosDistances", "()Ljava/util/List;");
              mids$[mid_getMapping_7e8f11dd23d1142c] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedNameA_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRuggedNameA", "()Ljava/lang/String;");
              mids$[mid_getRuggedNameB_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getRuggedNameB", "()Ljava/lang/String;");
              mids$[mid_getSensorNameA_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorNameA", "()Ljava/lang/String;");
              mids$[mid_getSensorNameB_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSensorNameB", "()Ljava/lang/String;");
              mids$[mid_setBodyConstraintWeight_8ba9fe7a847cecad] = env->getMethodID(cls, "setBodyConstraintWeight", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a627ad9c5959309d, a0.this$, a1.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03ff9b80a9f63d81, a0.this$, a1.this$, a2)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09d55289065fbca9, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a76ac05fceac20a9, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_3b4fadd64e3c0457], a0.this$, a1.this$, a2.this$);
          }

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2, const ::java::lang::Double & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_17efccddf9e5f19a], a0.this$, a1.this$, a2.this$, a3.this$);
          }

          jdouble SensorToSensorMapping::getBodyConstraintWeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBodyConstraintWeight_b74f83833fdad017]);
          }

          ::java::lang::Double SensorToSensorMapping::getBodyDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getBodyDistance_92dad8b3e4c8a558], a0));
          }

          ::java::util::List SensorToSensorMapping::getBodyDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBodyDistances_e62d3bb06d56d7e3]));
          }

          ::java::lang::Double SensorToSensorMapping::getLosDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getLosDistance_92dad8b3e4c8a558], a0));
          }

          ::java::util::List SensorToSensorMapping::getLosDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLosDistances_e62d3bb06d56d7e3]));
          }

          ::java::util::Set SensorToSensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_7e8f11dd23d1142c]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameA_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameB_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameA_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameB_1c1fa1e935d6cdcf]));
          }

          void SensorToSensorMapping::setBodyConstraintWeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setBodyConstraintWeight_8ba9fe7a847cecad], a0);
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args);
          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data);
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data);
          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data);
          static PyGetSetDef t_SensorToSensorMapping__fields_[] = {
            DECLARE_GETSET_FIELD(t_SensorToSensorMapping, bodyConstraintWeight),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, bodyDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, losDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameB),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameB),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToSensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToSensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyConstraintWeight, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, setBodyConstraintWeight, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToSensorMapping)[] = {
            { Py_tp_methods, t_SensorToSensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToSensorMapping_init_ },
            { Py_tp_getset, t_SensorToSensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToSensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToSensorMapping, t_SensorToSensorMapping, SensorToSensorMapping);

          void t_SensorToSensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToSensorMapping), &PY_TYPE_DEF(SensorToSensorMapping), module, "SensorToSensorMapping", 0);
          }

          void t_SensorToSensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "class_", make_descriptor(SensorToSensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "wrapfn_", make_descriptor(t_SensorToSensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToSensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToSensorMapping::wrap_Object(SensorToSensorMapping(((t_SensorToSensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToSensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                jdouble a2;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                jdouble a4;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssssD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3, a4));
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

          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);

                if (!parseArgs(args, "kkO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 4:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);
                ::java::lang::Double a3((jobject) NULL);

                if (!parseArgs(args, "kkOO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), ::java::lang::PY_TYPE(Double), &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2, a3));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getBodyDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBodyDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getLosDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getLosDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setBodyConstraintWeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBodyConstraintWeight", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setBodyConstraintWeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "bodyConstraintWeight", arg);
            return -1;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameB());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameB());
            return j2p(value);
          }
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
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_f804f816b79164cb] = env->getMethodID(cls, "value", "(DDD)D");
            mids$[mid_checkInputEdges_369b4c97255d5afa] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_f804f816b79164cb] = env->getMethodID(cls, "clampInput", "(DDD)D");
            mids$[mid_normalizeInput_f804f816b79164cb] = env->getMethodID(cls, "normalizeInput", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        jdouble SmoothStepFactory$SmoothStepFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_f804f816b79164cb], a0, a1, a2);
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
#include "org/orekit/files/general/PythonEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFile::class$ = NULL;
        jmethodID *PythonEphemerisFile::mids$ = NULL;
        bool PythonEphemerisFile::live$ = false;

        jclass PythonEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getSatellites_810bed48fafb0b9a] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFile::PythonEphemerisFile() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonEphemerisFile::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonEphemerisFile::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonEphemerisFile::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
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
        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self);
        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args);
        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data);
        static PyGetSetDef t_PythonEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFile, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFile, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFile, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFile)[] = {
          { Py_tp_methods, t_PythonEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFile_init_ },
          { Py_tp_getset, t_PythonEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFile, t_PythonEphemerisFile, PythonEphemerisFile);

        void t_PythonEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFile), &PY_TYPE_DEF(PythonEphemerisFile), module, "PythonEphemerisFile", 1);
        }

        void t_PythonEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "class_", make_descriptor(PythonEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "wrapfn_", make_descriptor(t_PythonEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFile), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFile::initializeClass);
          JNINativeMethod methods[] = {
            { "getSatellites", "()Ljava/util/Map;", (void *) t_PythonEphemerisFile_getSatellites0 },
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFile_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFile::wrap_Object(PythonEphemerisFile(((t_PythonEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFile_init_(t_PythonEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFile object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFile());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFile_finalize(t_PythonEphemerisFile *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFile_pythonExtension(t_PythonEphemerisFile *self, PyObject *args)
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

        static jobject JNICALL t_PythonEphemerisFile_getSatellites0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::Map value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::Map::initializeClass, &value))
          {
            throwTypeError("getSatellites", result);
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

        static void JNICALL t_PythonEphemerisFile_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFile::mids$[PythonEphemerisFile::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonEphemerisFile_get__self(t_PythonEphemerisFile *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/TrivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolatingFunction::class$ = NULL;
        jmethodID *TricubicInterpolatingFunction::mids$ = NULL;
        bool TricubicInterpolatingFunction::live$ = false;

        jclass TricubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_160e1964984c9e4a] = env->getMethodID(cls, "<init>", "([D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D)V");
            mids$[mid_isValidPoint_bf10cceb76af8f9c] = env->getMethodID(cls, "isValidPoint", "(DDD)Z");
            mids$[mid_value_f804f816b79164cb] = env->getMethodID(cls, "value", "(DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolatingFunction::TricubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3, const JArray< JArray< JArray< jdouble > > > & a4, const JArray< JArray< JArray< jdouble > > > & a5, const JArray< JArray< JArray< jdouble > > > & a6, const JArray< JArray< JArray< jdouble > > > & a7, const JArray< JArray< JArray< jdouble > > > & a8, const JArray< JArray< JArray< jdouble > > > & a9, const JArray< JArray< JArray< jdouble > > > & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_160e1964984c9e4a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$)) {}

        jboolean TricubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_bf10cceb76af8f9c], a0, a1, a2);
        }

        jdouble TricubicInterpolatingFunction::value(jdouble a0, jdouble a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_f804f816b79164cb], a0, a1, a2);
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
        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_TricubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_TricubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolatingFunction, t_TricubicInterpolatingFunction, TricubicInterpolatingFunction);

        void t_TricubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolatingFunction), &PY_TYPE_DEF(TricubicInterpolatingFunction), module, "TricubicInterpolatingFunction", 0);
        }

        void t_TricubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "class_", make_descriptor(TricubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "wrapfn_", make_descriptor(t_TricubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolatingFunction::wrap_Object(TricubicInterpolatingFunction(((t_TricubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolatingFunction_init_(t_TricubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a4((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a5((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a6((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a7((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a8((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a9((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a10((jobject) NULL);
          TricubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D[[[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
          {
            INT_CALL(object = TricubicInterpolatingFunction(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TricubicInterpolatingFunction_isValidPoint(t_TricubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jboolean result;

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_TricubicInterpolatingFunction_value(t_TricubicInterpolatingFunction *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$Calibration::class$ = NULL;
        jmethodID *CRD$Calibration::mids$ = NULL;
        bool CRD$Calibration::live$ = false;

        jclass CRD$Calibration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$Calibration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_962a82a1818ef660] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDelayShift_b74f83833fdad017] = env->getMethodID(cls, "getDelayShift", "()D");
            mids$[mid_getDetectorChannel_55546ef6a647f39b] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getKurtosis_b74f83833fdad017] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getNumberOfPointsRecorded_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfPointsRecorded", "()I");
            mids$[mid_getNumberOfPointsUsed_55546ef6a647f39b] = env->getMethodID(cls, "getNumberOfPointsUsed", "()I");
            mids$[mid_getOneWayDistance_b74f83833fdad017] = env->getMethodID(cls, "getOneWayDistance", "()D");
            mids$[mid_getPeakMinusMean_b74f83833fdad017] = env->getMethodID(cls, "getPeakMinusMean", "()D");
            mids$[mid_getReturnRate_b74f83833fdad017] = env->getMethodID(cls, "getReturnRate", "()D");
            mids$[mid_getRms_b74f83833fdad017] = env->getMethodID(cls, "getRms", "()D");
            mids$[mid_getShiftTypeIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getShiftTypeIndicator", "()I");
            mids$[mid_getSkew_b74f83833fdad017] = env->getMethodID(cls, "getSkew", "()D");
            mids$[mid_getSpan_55546ef6a647f39b] = env->getMethodID(cls, "getSpan", "()I");
            mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getSystemConfigurationId", "()Ljava/lang/String;");
            mids$[mid_getSystemDelay_b74f83833fdad017] = env->getMethodID(cls, "getSystemDelay", "()D");
            mids$[mid_getTypeIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getTypeIndicator", "()I");
            mids$[mid_getTypeOfData_55546ef6a647f39b] = env->getMethodID(cls, "getTypeOfData", "()I");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$Calibration::CRD$Calibration(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_962a82a1818ef660, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::org::orekit::time::AbsoluteDate CRD$Calibration::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jdouble CRD$Calibration::getDelayShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDelayShift_b74f83833fdad017]);
        }

        jint CRD$Calibration::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_55546ef6a647f39b]);
        }

        jdouble CRD$Calibration::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_b74f83833fdad017]);
        }

        jint CRD$Calibration::getNumberOfPointsRecorded() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsRecorded_55546ef6a647f39b]);
        }

        jint CRD$Calibration::getNumberOfPointsUsed() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfPointsUsed_55546ef6a647f39b]);
        }

        jdouble CRD$Calibration::getOneWayDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOneWayDistance_b74f83833fdad017]);
        }

        jdouble CRD$Calibration::getPeakMinusMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPeakMinusMean_b74f83833fdad017]);
        }

        jdouble CRD$Calibration::getReturnRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReturnRate_b74f83833fdad017]);
        }

        jdouble CRD$Calibration::getRms() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRms_b74f83833fdad017]);
        }

        jint CRD$Calibration::getShiftTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getShiftTypeIndicator_55546ef6a647f39b]);
        }

        jdouble CRD$Calibration::getSkew() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkew_b74f83833fdad017]);
        }

        jint CRD$Calibration::getSpan() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpan_55546ef6a647f39b]);
        }

        ::java::lang::String CRD$Calibration::getSystemConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSystemConfigurationId_1c1fa1e935d6cdcf]));
        }

        jdouble CRD$Calibration::getSystemDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSystemDelay_b74f83833fdad017]);
        }

        jint CRD$Calibration::getTypeIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeIndicator_55546ef6a647f39b]);
        }

        jint CRD$Calibration::getTypeOfData() const
        {
          return env->callIntMethod(this$, mids$[mid_getTypeOfData_55546ef6a647f39b]);
        }

        ::java::lang::String CRD$Calibration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$Calibration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
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
        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self);
        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args);
        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data);
        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data);
        static PyGetSetDef t_CRD$Calibration__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$Calibration, date),
          DECLARE_GET_FIELD(t_CRD$Calibration, delayShift),
          DECLARE_GET_FIELD(t_CRD$Calibration, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$Calibration, kurtosis),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsRecorded),
          DECLARE_GET_FIELD(t_CRD$Calibration, numberOfPointsUsed),
          DECLARE_GET_FIELD(t_CRD$Calibration, oneWayDistance),
          DECLARE_GET_FIELD(t_CRD$Calibration, peakMinusMean),
          DECLARE_GET_FIELD(t_CRD$Calibration, returnRate),
          DECLARE_GET_FIELD(t_CRD$Calibration, rms),
          DECLARE_GET_FIELD(t_CRD$Calibration, shiftTypeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, skew),
          DECLARE_GET_FIELD(t_CRD$Calibration, span),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemConfigurationId),
          DECLARE_GET_FIELD(t_CRD$Calibration, systemDelay),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeIndicator),
          DECLARE_GET_FIELD(t_CRD$Calibration, typeOfData),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$Calibration__methods_[] = {
          DECLARE_METHOD(t_CRD$Calibration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$Calibration, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDelayShift, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsRecorded, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getNumberOfPointsUsed, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getOneWayDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getPeakMinusMean, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getReturnRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getRms, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getShiftTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSkew, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSpan, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getSystemDelay, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, getTypeOfData, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$Calibration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$Calibration)[] = {
          { Py_tp_methods, t_CRD$Calibration__methods_ },
          { Py_tp_init, (void *) t_CRD$Calibration_init_ },
          { Py_tp_getset, t_CRD$Calibration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$Calibration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$Calibration, t_CRD$Calibration, CRD$Calibration);

        void t_CRD$Calibration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$Calibration), &PY_TYPE_DEF(CRD$Calibration), module, "CRD$Calibration", 0);
        }

        void t_CRD$Calibration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "class_", make_descriptor(CRD$Calibration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "wrapfn_", make_descriptor(t_CRD$Calibration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$Calibration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$Calibration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$Calibration::initializeClass, 1)))
            return NULL;
          return t_CRD$Calibration::wrap_Object(CRD$Calibration(((t_CRD$Calibration *) arg)->object.this$));
        }
        static PyObject *t_CRD$Calibration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$Calibration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$Calibration_init_(t_CRD$Calibration *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$Calibration object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$Calibration(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$Calibration_getDate(t_CRD$Calibration *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$Calibration_getDelayShift(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDelayShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getDetectorChannel(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getKurtosis(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsRecorded(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getNumberOfPointsUsed(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getOneWayDistance(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getPeakMinusMean(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getReturnRate(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReturnRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getRms(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRms());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getShiftTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSkew(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkew());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getSpan(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpan());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getSystemConfigurationId(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSystemConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_getSystemDelay(t_CRD$Calibration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$Calibration_getTypeIndicator(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_getTypeOfData(t_CRD$Calibration *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTypeOfData());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$Calibration_toCrdString(t_CRD$Calibration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$Calibration_toString(t_CRD$Calibration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$Calibration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$Calibration_get__date(t_CRD$Calibration *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$Calibration_get__delayShift(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDelayShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__detectorChannel(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__kurtosis(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsRecorded(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsRecorded());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__numberOfPointsUsed(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfPointsUsed());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__oneWayDistance(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOneWayDistance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__peakMinusMean(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPeakMinusMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__returnRate(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReturnRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__rms(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRms());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__shiftTypeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getShiftTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__skew(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkew());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__span(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpan());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__systemConfigurationId(t_CRD$Calibration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSystemConfigurationId());
          return j2p(value);
        }

        static PyObject *t_CRD$Calibration_get__systemDelay(t_CRD$Calibration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSystemDelay());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$Calibration_get__typeIndicator(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$Calibration_get__typeOfData(t_CRD$Calibration *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTypeOfData());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ProcessingState::class$ = NULL;
            jmethodID *ProcessingState::mids$ = NULL;
            bool ProcessingState::live$ = false;

            jclass ProcessingState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ProcessingState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_processToken_5949d4df22f33350] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ProcessingState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_5949d4df22f33350], a0.this$);
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
          namespace parsing {
            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg);

            static PyMethodDef t_ProcessingState__methods_[] = {
              DECLARE_METHOD(t_ProcessingState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ProcessingState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ProcessingState)[] = {
              { Py_tp_methods, t_ProcessingState__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ProcessingState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ProcessingState, t_ProcessingState, ProcessingState);

            void t_ProcessingState::install(PyObject *module)
            {
              installType(&PY_TYPE(ProcessingState), &PY_TYPE_DEF(ProcessingState), module, "ProcessingState", 0);
            }

            void t_ProcessingState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "class_", make_descriptor(ProcessingState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "wrapfn_", make_descriptor(t_ProcessingState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessingState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ProcessingState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ProcessingState::initializeClass, 1)))
                return NULL;
              return t_ProcessingState::wrap_Object(ProcessingState(((t_ProcessingState *) arg)->object.this$));
            }
            static PyObject *t_ProcessingState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ProcessingState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ProcessingState_processToken(t_ProcessingState *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.processToken(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "processToken", arg);
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
#include "org/hipparchus/linear/LUDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposer::class$ = NULL;
      jmethodID *LUDecomposer::mids$ = NULL;
      bool LUDecomposer::live$ = false;

      jclass LUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_decompose_8def7320d620ddc9] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposer::LUDecomposer(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

      ::org::hipparchus::linear::DecompositionSolver LUDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_8def7320d620ddc9], a0.this$));
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
      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg);

      static PyMethodDef t_LUDecomposer__methods_[] = {
        DECLARE_METHOD(t_LUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposer)[] = {
        { Py_tp_methods, t_LUDecomposer__methods_ },
        { Py_tp_init, (void *) t_LUDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposer, t_LUDecomposer, LUDecomposer);

      void t_LUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposer), &PY_TYPE_DEF(LUDecomposer), module, "LUDecomposer", 0);
      }

      void t_LUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "class_", make_descriptor(LUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "wrapfn_", make_descriptor(t_LUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposer::initializeClass, 1)))
          return NULL;
        return t_LUDecomposer::wrap_Object(LUDecomposer(((t_LUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposer_init_(t_LUDecomposer *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        LUDecomposer object((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          INT_CALL(object = LUDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LUDecomposer_decompose(t_LUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
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
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_4e5506cad079cc76] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_7996cf2c358d897a] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_KK_7996cf2c358d897a] = env->getMethodID(cls, "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeShiftable::PythonFieldTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonFieldTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonFieldTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonFieldTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }

      ::org::orekit::time::FieldTimeShiftable PythonFieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::time::FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_7996cf2c358d897a], a0.this$));
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_6c0ce7e438e5ded4]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_6c0ce7e438e5ded4]);
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
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tan::class$ = NULL;
        jmethodID *Tan::mids$ = NULL;
        bool Tan::live$ = false;

        jclass Tan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_04fd0666b613d2ab] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_a5332de4d4d64b08] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tan::Tan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        jdouble Tan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_04fd0666b613d2ab], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_a5332de4d4d64b08], a0.this$));
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
        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tan_value(t_Tan *self, PyObject *args);

        static PyMethodDef t_Tan__methods_[] = {
          DECLARE_METHOD(t_Tan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tan)[] = {
          { Py_tp_methods, t_Tan__methods_ },
          { Py_tp_init, (void *) t_Tan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tan, t_Tan, Tan);

        void t_Tan::install(PyObject *module)
        {
          installType(&PY_TYPE(Tan), &PY_TYPE_DEF(Tan), module, "Tan", 0);
        }

        void t_Tan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "class_", make_descriptor(Tan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "wrapfn_", make_descriptor(t_Tan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tan::initializeClass, 1)))
            return NULL;
          return t_Tan::wrap_Object(Tan(((t_Tan *) arg)->object.this$));
        }
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds)
        {
          Tan object((jobject) NULL);

          INT_CALL(object = Tan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tan_value(t_Tan *self, PyObject *args)
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
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *RotationXmlTokenBuilder::class$ = NULL;
            jmethodID *RotationXmlTokenBuilder::mids$ = NULL;
            bool RotationXmlTokenBuilder::live$ = false;

            jclass RotationXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_2c588550a962bd9d] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RotationXmlTokenBuilder::RotationXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

            ::java::util::List RotationXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_2c588550a962bd9d], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RotationXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RotationXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RotationXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RotationXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RotationXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RotationXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RotationXmlTokenBuilder, t_RotationXmlTokenBuilder, RotationXmlTokenBuilder);

            void t_RotationXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RotationXmlTokenBuilder), &PY_TYPE_DEF(RotationXmlTokenBuilder), module, "RotationXmlTokenBuilder", 0);
            }

            void t_RotationXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "class_", make_descriptor(RotationXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "wrapfn_", make_descriptor(t_RotationXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RotationXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RotationXmlTokenBuilder::wrap_Object(RotationXmlTokenBuilder(((t_RotationXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RotationXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RotationXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RotationXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeStampedCache::class$ = NULL;
      jmethodID *FieldTimeStampedCache::mids$ = NULL;
      bool FieldTimeStampedCache::live$ = false;

      jclass FieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_e7a49be0190c3b40] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_e7a49be0190c3b40] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_fe526c9a9cb8189c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_55546ef6a647f39b] = env->getMethodID(cls, "getNeighborsSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_e7a49be0190c3b40]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_e7a49be0190c3b40]));
      }

      ::java::util::stream::Stream FieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_fe526c9a9cb8189c], a0.this$));
      }

      jint FieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_55546ef6a647f39b]);
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
      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_FieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedCache)[] = {
        { Py_tp_methods, t_FieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedCache, t_FieldTimeStampedCache, FieldTimeStampedCache);
      PyObject *t_FieldTimeStampedCache::wrap_Object(const FieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedCache), &PY_TYPE_DEF(FieldTimeStampedCache), module, "FieldTimeStampedCache", 0);
      }

      void t_FieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "class_", make_descriptor(FieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "wrapfn_", make_descriptor(t_FieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedCache::wrap_Object(FieldTimeStampedCache(((t_FieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateVectorFunction::class$ = NULL;
      jmethodID *FieldMultivariateVectorFunction::mids$ = NULL;
      bool FieldMultivariateVectorFunction::live$ = false;

      jclass FieldMultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateVectorFunction_76640ca39ebe03a5] = env->getMethodID(cls, "toCalculusFieldMultivariateVectorFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateVectorFunction;");
          mids$[mid_value_1cc99f34da9b4a7b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction FieldMultivariateVectorFunction::toCalculusFieldMultivariateVectorFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateVectorFunction_76640ca39ebe03a5], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldMultivariateVectorFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_1cc99f34da9b4a7b], a0.this$));
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
      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, toCalculusFieldMultivariateVectorFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateVectorFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateVectorFunction, t_FieldMultivariateVectorFunction, FieldMultivariateVectorFunction);

      void t_FieldMultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateVectorFunction), &PY_TYPE_DEF(FieldMultivariateVectorFunction), module, "FieldMultivariateVectorFunction", 0);
      }

      void t_FieldMultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "class_", make_descriptor(FieldMultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "wrapfn_", make_descriptor(t_FieldMultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateVectorFunction::wrap_Object(FieldMultivariateVectorFunction(((t_FieldMultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateVectorFunction_toCalculusFieldMultivariateVectorFunction(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateVectorFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateVectorFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateVectorFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateVectorFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateVectorFunction_value(t_FieldMultivariateVectorFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerBounds::class$ = NULL;
        jmethodID *StepNormalizerBounds::mids$ = NULL;
        bool StepNormalizerBounds::live$ = false;
        StepNormalizerBounds *StepNormalizerBounds::BOTH = NULL;
        StepNormalizerBounds *StepNormalizerBounds::FIRST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::LAST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::NEITHER = NULL;

        jclass StepNormalizerBounds::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerBounds");

            mids$ = new jmethodID[max_mid];
            mids$[mid_firstIncluded_9ab94ac1dc23b105] = env->getMethodID(cls, "firstIncluded", "()Z");
            mids$[mid_lastIncluded_9ab94ac1dc23b105] = env->getMethodID(cls, "lastIncluded", "()Z");
            mids$[mid_valueOf_9030cb40d12d60f2] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");
            mids$[mid_values_2c48ec7f9a937b73] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new StepNormalizerBounds(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            FIRST = new StepNormalizerBounds(env->getStaticObjectField(cls, "FIRST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            LAST = new StepNormalizerBounds(env->getStaticObjectField(cls, "LAST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            NEITHER = new StepNormalizerBounds(env->getStaticObjectField(cls, "NEITHER", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean StepNormalizerBounds::firstIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_firstIncluded_9ab94ac1dc23b105]);
        }

        jboolean StepNormalizerBounds::lastIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_lastIncluded_9ab94ac1dc23b105]);
        }

        StepNormalizerBounds StepNormalizerBounds::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerBounds(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9030cb40d12d60f2], a0.this$));
        }

        JArray< StepNormalizerBounds > StepNormalizerBounds::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerBounds >(env->callStaticObjectMethod(cls, mids$[mid_values_2c48ec7f9a937b73]));
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
      namespace sampling {
        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args);
        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data);
        static PyGetSetDef t_StepNormalizerBounds__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerBounds, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerBounds__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerBounds, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, firstIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, lastIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerBounds)[] = {
          { Py_tp_methods, t_StepNormalizerBounds__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerBounds__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerBounds)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerBounds, t_StepNormalizerBounds, StepNormalizerBounds);
        PyObject *t_StepNormalizerBounds::wrap_Object(const StepNormalizerBounds& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerBounds::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerBounds::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerBounds), &PY_TYPE_DEF(StepNormalizerBounds), module, "StepNormalizerBounds", 0);
        }

        void t_StepNormalizerBounds::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "class_", make_descriptor(StepNormalizerBounds::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "wrapfn_", make_descriptor(t_StepNormalizerBounds::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerBounds::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "BOTH", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "FIRST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::FIRST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "LAST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::LAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "NEITHER", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::NEITHER)));
        }

        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerBounds::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerBounds::wrap_Object(StepNormalizerBounds(((t_StepNormalizerBounds *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerBounds::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.firstIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.lastIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerBounds result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::valueOf(a0));
            return t_StepNormalizerBounds::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type)
        {
          JArray< StepNormalizerBounds > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerBounds::wrap_jobject);
        }
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTree$LeafMerger.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$LeafMerger::class$ = NULL;
        jmethodID *BSPTree$LeafMerger::mids$ = NULL;
        bool BSPTree$LeafMerger::live$ = false;

        jclass BSPTree$LeafMerger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$LeafMerger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_merge_c94b5934b8b7596c] = env->getMethodID(cls, "merge", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/partitioning/BSPTree;ZZ)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$LeafMerger::merge(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, const ::org::hipparchus::geometry::partitioning::BSPTree & a1, const ::org::hipparchus::geometry::partitioning::BSPTree & a2, jboolean a3, jboolean a4) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_merge_c94b5934b8b7596c], a0.this$, a1.this$, a2.this$, a3, a4));
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
        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args);
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data);
        static PyGetSetDef t_BSPTree$LeafMerger__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$LeafMerger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$LeafMerger__methods_[] = {
          DECLARE_METHOD(t_BSPTree$LeafMerger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$LeafMerger, merge, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$LeafMerger)[] = {
          { Py_tp_methods, t_BSPTree$LeafMerger__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$LeafMerger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$LeafMerger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$LeafMerger, t_BSPTree$LeafMerger, BSPTree$LeafMerger);
        PyObject *t_BSPTree$LeafMerger::wrap_Object(const BSPTree$LeafMerger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$LeafMerger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$LeafMerger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$LeafMerger *self = (t_BSPTree$LeafMerger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$LeafMerger::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$LeafMerger), &PY_TYPE_DEF(BSPTree$LeafMerger), module, "BSPTree$LeafMerger", 0);
        }

        void t_BSPTree$LeafMerger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "class_", make_descriptor(BSPTree$LeafMerger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "wrapfn_", make_descriptor(t_BSPTree$LeafMerger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$LeafMerger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$LeafMerger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$LeafMerger::initializeClass, 1)))
            return NULL;
          return t_BSPTree$LeafMerger::wrap_Object(BSPTree$LeafMerger(((t_BSPTree$LeafMerger *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$LeafMerger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$LeafMerger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$LeafMerger_of_(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$LeafMerger_merge(t_BSPTree$LeafMerger *self, PyObject *args)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::partitioning::BSPTree a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean a3;
          jboolean a4;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArgs(args, "KKKZZ", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a3, &a4))
          {
            OBJ_CALL(result = self->object.merge(a0, a1, a2, a3, a4));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "merge", args);
          return NULL;
        }
        static PyObject *t_BSPTree$LeafMerger_get__parameters_(t_BSPTree$LeafMerger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ScaledConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *ScaledConstantThrustPropulsionModel::mids$ = NULL;
          bool ScaledConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR = NULL;
          ::java::lang::String *ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR = NULL;

          jclass ScaledConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ScaledConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c0d617667838be49] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_b74f83833fdad017] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_b060e4326765ccf1] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_ba5ea64a789ad864] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_fd347811007a6ba3] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_8b724f8b4fdad1a2] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_5dc321c3ba065f30] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b7e5bd35daed8b40] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_082e6346b274f880] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              THRUSTX_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTX_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTY_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTY_SCALE_FACTOR", "Ljava/lang/String;"));
              THRUSTZ_SCALE_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "THRUSTZ_SCALE_FACTOR", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ScaledConstantThrustPropulsionModel::ScaledConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_c0d617667838be49, a0, a1, a2.this$, a3.this$)) {}

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b74f83833fdad017]);
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b060e4326765ccf1], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement ScaledConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_ba5ea64a789ad864], a0.this$));
          }

          jdouble ScaledConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_fd347811007a6ba3], a0.this$);
          }

          ::java::util::List ScaledConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_8b724f8b4fdad1a2]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5dc321c3ba065f30], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ScaledConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b7e5bd35daed8b40], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ScaledConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_082e6346b274f880], a0.this$));
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
          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ScaledConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_ScaledConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ScaledConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_ScaledConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ScaledConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ScaledConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ScaledConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ScaledConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ScaledConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(ScaledConstantThrustPropulsionModel, t_ScaledConstantThrustPropulsionModel, ScaledConstantThrustPropulsionModel);

          void t_ScaledConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ScaledConstantThrustPropulsionModel), &PY_TYPE_DEF(ScaledConstantThrustPropulsionModel), module, "ScaledConstantThrustPropulsionModel", 0);
          }

          void t_ScaledConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "class_", make_descriptor(ScaledConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_ScaledConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(ScaledConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTX_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTX_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTY_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTY_SCALE_FACTOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ScaledConstantThrustPropulsionModel), "THRUSTZ_SCALE_FACTOR", make_descriptor(j2p(*ScaledConstantThrustPropulsionModel::THRUSTZ_SCALE_FACTOR)));
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ScaledConstantThrustPropulsionModel::wrap_Object(ScaledConstantThrustPropulsionModel(((t_ScaledConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ScaledConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ScaledConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ScaledConstantThrustPropulsionModel_init_(t_ScaledConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ScaledConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = ScaledConstantThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getFlowRate(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getParametersDrivers(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_getThrustVector(t_ScaledConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ScaledConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__flowRate(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__parametersDrivers(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_ScaledConstantThrustPropulsionModel_get__thrustVector(t_ScaledConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *InertiaAxis::class$ = NULL;
      jmethodID *InertiaAxis::mids$ = NULL;
      bool InertiaAxis::live$ = false;

      jclass InertiaAxis::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/InertiaAxis");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getA_8b724f8b4fdad1a2] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getI_b74f83833fdad017] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_negate_939384575c8392d2] = env->getMethodID(cls, "negate", "()Lorg/orekit/attitudes/InertiaAxis;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D InertiaAxis::getA() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getA_8b724f8b4fdad1a2]));
      }

      jdouble InertiaAxis::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_b74f83833fdad017]);
      }

      InertiaAxis InertiaAxis::negate() const
      {
        return InertiaAxis(env->callObjectMethod(this$, mids$[mid_negate_939384575c8392d2]));
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
      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self);
      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data);
      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data);
      static PyGetSetDef t_InertiaAxis__fields_[] = {
        DECLARE_GET_FIELD(t_InertiaAxis, a),
        DECLARE_GET_FIELD(t_InertiaAxis, i),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_InertiaAxis__methods_[] = {
        DECLARE_METHOD(t_InertiaAxis, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_InertiaAxis, getA, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, getI, METH_NOARGS),
        DECLARE_METHOD(t_InertiaAxis, negate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(InertiaAxis)[] = {
        { Py_tp_methods, t_InertiaAxis__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_InertiaAxis__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(InertiaAxis)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(InertiaAxis, t_InertiaAxis, InertiaAxis);

      void t_InertiaAxis::install(PyObject *module)
      {
        installType(&PY_TYPE(InertiaAxis), &PY_TYPE_DEF(InertiaAxis), module, "InertiaAxis", 0);
      }

      void t_InertiaAxis::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "class_", make_descriptor(InertiaAxis::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "wrapfn_", make_descriptor(t_InertiaAxis::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(InertiaAxis), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_InertiaAxis_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, InertiaAxis::initializeClass, 1)))
          return NULL;
        return t_InertiaAxis::wrap_Object(InertiaAxis(((t_InertiaAxis *) arg)->object.this$));
      }
      static PyObject *t_InertiaAxis_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, InertiaAxis::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_InertiaAxis_getA(t_InertiaAxis *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_getI(t_InertiaAxis *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_InertiaAxis_negate(t_InertiaAxis *self)
      {
        InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_InertiaAxis_get__a(t_InertiaAxis *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_InertiaAxis_get__i(t_InertiaAxis *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragSensitive::class$ = NULL;
        jmethodID *DragSensitive::mids$ = NULL;
        bool DragSensitive::live$ = false;
        ::java::lang::String *DragSensitive::DRAG_COEFFICIENT = NULL;
        ::java::lang::String *DragSensitive::GLOBAL_DRAG_FACTOR = NULL;
        ::java::lang::String *DragSensitive::LIFT_RATIO = NULL;

        jclass DragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dragAcceleration_7a2b875d7cdeb947] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_c95e6c4bf4979a1a] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRAG_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "DRAG_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_DRAG_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_DRAG_FACTOR", "Ljava/lang/String;"));
            LIFT_RATIO = new ::java::lang::String(env->getStaticObjectField(cls, "LIFT_RATIO", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_7a2b875d7cdeb947], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_c95e6c4bf4979a1a], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List DragSensitive::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_e62d3bb06d56d7e3]));
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
      namespace drag {
        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args);
        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self);
        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data);
        static PyGetSetDef t_DragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_DragSensitive, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragSensitive__methods_[] = {
          DECLARE_METHOD(t_DragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragSensitive, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragSensitive)[] = {
          { Py_tp_methods, t_DragSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DragSensitive, t_DragSensitive, DragSensitive);

        void t_DragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(DragSensitive), &PY_TYPE_DEF(DragSensitive), module, "DragSensitive", 0);
        }

        void t_DragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "class_", make_descriptor(DragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "wrapfn_", make_descriptor(t_DragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(DragSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "DRAG_COEFFICIENT", make_descriptor(j2p(*DragSensitive::DRAG_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "GLOBAL_DRAG_FACTOR", make_descriptor(j2p(*DragSensitive::GLOBAL_DRAG_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "LIFT_RATIO", make_descriptor(j2p(*DragSensitive::LIFT_RATIO)));
        }

        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragSensitive::initializeClass, 1)))
            return NULL;
          return t_DragSensitive::wrap_Object(DragSensitive(((t_DragSensitive *) arg)->object.this$));
        }
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kDk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KKK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.dragAcceleration(a0, a1, a2, a3));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "dragAcceleration", args);
          return NULL;
        }

        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/util/List.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *HarmonicAccelerationModel::class$ = NULL;
        jmethodID *HarmonicAccelerationModel::mids$ = NULL;
        bool HarmonicAccelerationModel::live$ = false;

        jclass HarmonicAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/HarmonicAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a56f4082b93e7815] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_getParametersDrivers_e62d3bb06d56d7e3] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_f867476668f8eb00] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_8e86371c61460f23] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicAccelerationModel::HarmonicAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a56f4082b93e7815, a0.this$, a1.this$, a2, a3)) {}

        ::java::util::List HarmonicAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_e62d3bb06d56d7e3]));
        }

        void HarmonicAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_f867476668f8eb00], a0.this$, a1.this$));
        }

        jdouble HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_8e86371c61460f23], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self);
        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data);
        static PyGetSetDef t_HarmonicAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_HarmonicAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HarmonicAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_HarmonicAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicAccelerationModel)[] = {
          { Py_tp_methods, t_HarmonicAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_HarmonicAccelerationModel_init_ },
          { Py_tp_getset, t_HarmonicAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicAccelerationModel, t_HarmonicAccelerationModel, HarmonicAccelerationModel);

        void t_HarmonicAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicAccelerationModel), &PY_TYPE_DEF(HarmonicAccelerationModel), module, "HarmonicAccelerationModel", 0);
        }

        void t_HarmonicAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "class_", make_descriptor(HarmonicAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "wrapfn_", make_descriptor(t_HarmonicAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_HarmonicAccelerationModel::wrap_Object(HarmonicAccelerationModel(((t_HarmonicAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jint a3;
          HarmonicAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = HarmonicAccelerationModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args)
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

        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data)
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
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic$Parametric::class$ = NULL;
        jmethodID *Logistic$Parametric::mids$ = NULL;
        bool Logistic$Parametric::live$ = false;

        jclass Logistic$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_91fbb4072ae7ce9a] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_e45651f63bcd931a] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic$Parametric::Logistic$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        JArray< jdouble > Logistic$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_91fbb4072ae7ce9a], a0, a1.this$));
        }

        jdouble Logistic$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_e45651f63bcd931a], a0, a1.this$);
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
        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args);
        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args);

        static PyMethodDef t_Logistic$Parametric__methods_[] = {
          DECLARE_METHOD(t_Logistic$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_Logistic$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic$Parametric)[] = {
          { Py_tp_methods, t_Logistic$Parametric__methods_ },
          { Py_tp_init, (void *) t_Logistic$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic$Parametric, t_Logistic$Parametric, Logistic$Parametric);

        void t_Logistic$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic$Parametric), &PY_TYPE_DEF(Logistic$Parametric), module, "Logistic$Parametric", 0);
        }

        void t_Logistic$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "class_", make_descriptor(Logistic$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "wrapfn_", make_descriptor(t_Logistic$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic$Parametric::initializeClass, 1)))
            return NULL;
          return t_Logistic$Parametric::wrap_Object(Logistic$Parametric(((t_Logistic$Parametric *) arg)->object.this$));
        }
        static PyObject *t_Logistic$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic$Parametric_init_(t_Logistic$Parametric *self, PyObject *args, PyObject *kwds)
        {
          Logistic$Parametric object((jobject) NULL);

          INT_CALL(object = Logistic$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_Logistic$Parametric_gradient(t_Logistic$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_Logistic$Parametric_value(t_Logistic$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubPlane::class$ = NULL;
          jmethodID *SubPlane::mids$ = NULL;
          bool SubPlane::live$ = false;

          jclass SubPlane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubPlane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6ae2db4be0bbe390] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_30674c36ae2fcf9f] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3d919cfe5b11c3d0] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubPlane::SubPlane(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_6ae2db4be0bbe390, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubPlane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_30674c36ae2fcf9f], a0.this$));
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
          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args);
          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args);
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data);
          static PyGetSetDef t_SubPlane__fields_[] = {
            DECLARE_GET_FIELD(t_SubPlane, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubPlane__methods_[] = {
            DECLARE_METHOD(t_SubPlane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubPlane, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubPlane, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubPlane)[] = {
            { Py_tp_methods, t_SubPlane__methods_ },
            { Py_tp_init, (void *) t_SubPlane_init_ },
            { Py_tp_getset, t_SubPlane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubPlane)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubPlane, t_SubPlane, SubPlane);
          PyObject *t_SubPlane::wrap_Object(const SubPlane& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubPlane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubPlane::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubPlane *self = (t_SubPlane *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubPlane::install(PyObject *module)
          {
            installType(&PY_TYPE(SubPlane), &PY_TYPE_DEF(SubPlane), module, "SubPlane", 0);
          }

          void t_SubPlane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "class_", make_descriptor(SubPlane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "wrapfn_", make_descriptor(t_SubPlane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubPlane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubPlane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubPlane::initializeClass, 1)))
              return NULL;
            return t_SubPlane::wrap_Object(SubPlane(((t_SubPlane *) arg)->object.this$));
          }
          static PyObject *t_SubPlane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubPlane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubPlane_of_(t_SubPlane *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubPlane_init_(t_SubPlane *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubPlane object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubPlane(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubPlane_split(t_SubPlane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            return callSuper(PY_TYPE(SubPlane), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubPlane_get__parameters_(t_SubPlane *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherFieldIntegrator::class$ = NULL;
        jmethodID *LutherFieldIntegrator::mids$ = NULL;
        bool LutherFieldIntegrator::live$ = false;

        jclass LutherFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a6f45ac0878ab87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_34ce7b2f6a50059b] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_883be608cfc68c26] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_883be608cfc68c26] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_6c3348fc9373b5dc] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegrator::LutherFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_2a6f45ac0878ab87, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > LutherFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_34ce7b2f6a50059b]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_883be608cfc68c26]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_883be608cfc68c26]));
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
        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args);
        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data);
        static PyGetSetDef t_LutherFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, a),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, b),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, c),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegrator)[] = {
          { Py_tp_methods, t_LutherFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegrator_init_ },
          { Py_tp_getset, t_LutherFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegrator, t_LutherFieldIntegrator, LutherFieldIntegrator);
        PyObject *t_LutherFieldIntegrator::wrap_Object(const LutherFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegrator), &PY_TYPE_DEF(LutherFieldIntegrator), module, "LutherFieldIntegrator", 0);
        }

        void t_LutherFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "class_", make_descriptor(LutherFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "wrapfn_", make_descriptor(t_LutherFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegrator::wrap_Object(LutherFieldIntegrator(((t_LutherFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          LutherFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = LutherFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeState.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/String.h"
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
                  mids$[mid_init$_5d84ed9eff763247] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getAttitudeType_53d1d57d6e9487ac] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getAvailableDerivatives_33d67d456ec94a0c] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getElements_25e1757a36c4dde2] = env->getMethodID(cls, "getElements", "()[D");
                  mids$[mid_getRateElementsType_7f391c24fe2095f0] = env->getMethodID(cls, "getRateElementsType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_toAngular_138e1d8d5c770a41] = env->getMethodID(cls, "toAngular", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeState::AttitudeState(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< ::java::lang::String > & a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d84ed9eff763247, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeState::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_53d1d57d6e9487ac]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AttitudeState::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_33d67d456ec94a0c]));
              }

              ::org::orekit::time::AbsoluteDate AttitudeState::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
              }

              JArray< jdouble > AttitudeState::getElements() const
              {
                return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_25e1757a36c4dde2]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeState::getRateElementsType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateElementsType_7f391c24fe2095f0]));
              }

              ::org::orekit::utils::TimeStampedAngularCoordinates AttitudeState::toAngular(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                return ::org::orekit::utils::TimeStampedAngularCoordinates(env->callObjectMethod(this$, mids$[mid_toAngular_138e1d8d5c770a41], a0.this$));
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
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsFieldIntegrator::class$ = NULL;
        jmethodID *AdamsFieldIntegrator::mids$ = NULL;
        bool AdamsFieldIntegrator::live$ = false;

        jclass AdamsFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_61c3648faaff623b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_fa4c97765f187051] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_75ca69013be095d1] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_7ec78cb4b1521bd4] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_66608a0c0bb66791] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");
            mids$[mid_errorEstimation_f9ae7f7ac73655c8] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_b4c879a61b350879] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");
            mids$[mid_initializeHighOrderDerivatives_3c657d6a3baa084a] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, const JArray< jdouble > & a6, const JArray< jdouble > & a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_61c3648faaff623b, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$, a7.this$)) {}

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_fa4c97765f187051, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::ode::FieldODEStateAndDerivative AdamsFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_75ca69013be095d1], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsFieldIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_7ec78cb4b1521bd4], a0.this$));
        }

        void AdamsFieldIntegrator::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_66608a0c0bb66791], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args);
        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsFieldIntegrator, t_AdamsFieldIntegrator, AdamsFieldIntegrator);
        PyObject *t_AdamsFieldIntegrator::wrap_Object(const AdamsFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsFieldIntegrator), &PY_TYPE_DEF(AdamsFieldIntegrator), module, "AdamsFieldIntegrator", 0);
        }

        void t_AdamsFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "class_", make_descriptor(AdamsFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsFieldIntegrator::wrap_Object(AdamsFieldIntegrator(((t_AdamsFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              JArray< jdouble > a6((jobject) NULL);
              JArray< jdouble > a7((jobject) NULL);
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(AdamsFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
