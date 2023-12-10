#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/CombinatoricsUtils.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *CombinatoricsUtils::class$ = NULL;
      jmethodID *CombinatoricsUtils::mids$ = NULL;
      bool CombinatoricsUtils::live$ = false;
      jint CombinatoricsUtils::MAX_BELL = (jint) 0;

      jclass CombinatoricsUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/CombinatoricsUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_bellNumber_a1cf8c47dc9c5883] = env->getStaticMethodID(cls, "bellNumber", "(I)J");
          mids$[mid_binomialCoefficient_30f7d12d17ddfa28] = env->getStaticMethodID(cls, "binomialCoefficient", "(II)J");
          mids$[mid_binomialCoefficientDouble_dbbe5f05149dbf73] = env->getStaticMethodID(cls, "binomialCoefficientDouble", "(II)D");
          mids$[mid_binomialCoefficientLog_dbbe5f05149dbf73] = env->getStaticMethodID(cls, "binomialCoefficientLog", "(II)D");
          mids$[mid_checkBinomial_6f37635c3285dbdf] = env->getStaticMethodID(cls, "checkBinomial", "(II)V");
          mids$[mid_combinationsIterator_6103faf4afbc1801] = env->getStaticMethodID(cls, "combinationsIterator", "(II)Ljava/util/Iterator;");
          mids$[mid_factorial_a1cf8c47dc9c5883] = env->getStaticMethodID(cls, "factorial", "(I)J");
          mids$[mid_factorialDouble_46f85b53d9aedd96] = env->getStaticMethodID(cls, "factorialDouble", "(I)D");
          mids$[mid_factorialLog_46f85b53d9aedd96] = env->getStaticMethodID(cls, "factorialLog", "(I)D");
          mids$[mid_partitions_7659b9c52e25aa5d] = env->getStaticMethodID(cls, "partitions", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_permutations_7659b9c52e25aa5d] = env->getStaticMethodID(cls, "permutations", "(Ljava/util/List;)Ljava/util/stream/Stream;");
          mids$[mid_stirlingS2_30f7d12d17ddfa28] = env->getStaticMethodID(cls, "stirlingS2", "(II)J");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MAX_BELL = env->getStaticIntField(cls, "MAX_BELL");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jlong CombinatoricsUtils::bellNumber(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_bellNumber_a1cf8c47dc9c5883], a0);
      }

      jlong CombinatoricsUtils::binomialCoefficient(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_binomialCoefficient_30f7d12d17ddfa28], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientDouble(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientDouble_dbbe5f05149dbf73], a0, a1);
      }

      jdouble CombinatoricsUtils::binomialCoefficientLog(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_binomialCoefficientLog_dbbe5f05149dbf73], a0, a1);
      }

      void CombinatoricsUtils::checkBinomial(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkBinomial_6f37635c3285dbdf], a0, a1);
      }

      ::java::util::Iterator CombinatoricsUtils::combinationsIterator(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_combinationsIterator_6103faf4afbc1801], a0, a1));
      }

      jlong CombinatoricsUtils::factorial(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_factorial_a1cf8c47dc9c5883], a0);
      }

      jdouble CombinatoricsUtils::factorialDouble(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialDouble_46f85b53d9aedd96], a0);
      }

      jdouble CombinatoricsUtils::factorialLog(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_factorialLog_46f85b53d9aedd96], a0);
      }

      ::java::util::stream::Stream CombinatoricsUtils::partitions(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_partitions_7659b9c52e25aa5d], a0.this$));
      }

      ::java::util::stream::Stream CombinatoricsUtils::permutations(const ::java::util::List & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_permutations_7659b9c52e25aa5d], a0.this$));
      }

      jlong CombinatoricsUtils::stirlingS2(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_stirlingS2_30f7d12d17ddfa28], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/util/CombinatoricsUtils$FactorialLog.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args);
      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_CombinatoricsUtils__methods_[] = {
        DECLARE_METHOD(t_CombinatoricsUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, bellNumber, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficient, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientDouble, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, binomialCoefficientLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, checkBinomial, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, combinationsIterator, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorial, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialDouble, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, factorialLog, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, partitions, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, permutations, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CombinatoricsUtils, stirlingS2, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CombinatoricsUtils)[] = {
        { Py_tp_methods, t_CombinatoricsUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CombinatoricsUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CombinatoricsUtils, t_CombinatoricsUtils, CombinatoricsUtils);

      void t_CombinatoricsUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(CombinatoricsUtils), &PY_TYPE_DEF(CombinatoricsUtils), module, "CombinatoricsUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "FactorialLog", make_descriptor(&PY_TYPE_DEF(CombinatoricsUtils$FactorialLog)));
      }

      void t_CombinatoricsUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "class_", make_descriptor(CombinatoricsUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "wrapfn_", make_descriptor(t_CombinatoricsUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(CombinatoricsUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CombinatoricsUtils), "MAX_BELL", make_descriptor(CombinatoricsUtils::MAX_BELL));
      }

      static PyObject *t_CombinatoricsUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CombinatoricsUtils::initializeClass, 1)))
          return NULL;
        return t_CombinatoricsUtils::wrap_Object(CombinatoricsUtils(((t_CombinatoricsUtils *) arg)->object.this$));
      }
      static PyObject *t_CombinatoricsUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CombinatoricsUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CombinatoricsUtils_bellNumber(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::bellNumber(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "bellNumber", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficient(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficient(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficient", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientDouble(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientDouble(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientDouble", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_binomialCoefficientLog(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::binomialCoefficientLog(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "binomialCoefficientLog", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_checkBinomial(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::CombinatoricsUtils::checkBinomial(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkBinomial", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_combinationsIterator(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        ::java::util::Iterator result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::combinationsIterator(a0, a1));
          return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
        }

        PyErr_SetArgsError(type, "combinationsIterator", args);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorial(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jlong result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorial(a0));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "factorial", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialDouble(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialDouble(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialDouble", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_factorialLog(PyTypeObject *type, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::factorialLog(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "factorialLog", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_partitions(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::partitions(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "partitions", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_permutations(PyTypeObject *type, PyObject *arg)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::permutations(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "permutations", arg);
        return NULL;
      }

      static PyObject *t_CombinatoricsUtils_stirlingS2(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        jlong result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::CombinatoricsUtils::stirlingS2(a0, a1));
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        PyErr_SetArgsError(type, "stirlingS2", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/AngularCoordinates.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/io/Serializable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *Transform::class$ = NULL;
      jmethodID *Transform::mids$ = NULL;
      bool Transform::live$ = false;
      Transform *Transform::IDENTITY = NULL;

      jclass Transform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/Transform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_22bdf1805e44a194] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_3d7cc17d4ec11a9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_9769af8992f7d7c2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_db8760ebddf85268] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_a2dd53dc024aec2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_d039183b82af87d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_b94b4993c5720e0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_f151b980508072a7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/AngularCoordinates;)V");
          mids$[mid_init$_bc95563ddeee02cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_1c345cf73262affe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_freeze_09afc11266121652] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngular_8a604053f4d4c39e] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/AngularCoordinates;");
          mids$[mid_getCartesian_9b7c658c14883c84] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_09afc11266121652] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/Transform;");
          mids$[mid_getJacobian_162d7740b4935bd5] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[D)V");
          mids$[mid_getRotation_de86c7efc42eac14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getRotationAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getRotationRate_d52645e0d4c07563] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getTranslation_d52645e0d4c07563] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_interpolate_017020b36f2073a7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/frames/Transform;");
          mids$[mid_interpolate_4e9cc70946705b1a] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/Transform;");
          mids$[mid_shiftedBy_4f5cde3777cd20a7] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/Transform;");
          mids$[mid_staticShiftedBy_1862d3e05bd21533] = env->getMethodID(cls, "staticShiftedBy", "(D)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_toStaticTransform_892837e768e813bc] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_transformPVCoordinates_2c604bfeb0a28a2f] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_fe87e6eba6ef42f9] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_transformPVCoordinates_f76646e67e6a0632] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_44abf30654d86934] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY = new Transform(env->getStaticObjectField(cls, "IDENTITY", "Lorg/orekit/frames/Transform;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_22bdf1805e44a194, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7cc17d4ec11a9f, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::AngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9769af8992f7d7c2, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_db8760ebddf85268, a0.this$, a1.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a2dd53dc024aec2d, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d039183b82af87d6, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const Transform & a1, const Transform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b94b4993c5720e0b, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::AngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f151b980508072a7, a0.this$, a1.this$, a2.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc95563ddeee02cc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform::Transform(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1c345cf73262affe, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      Transform Transform::freeze() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_freeze_09afc11266121652]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_d52645e0d4c07563]));
      }

      ::org::orekit::utils::AngularCoordinates Transform::getAngular() const
      {
        return ::org::orekit::utils::AngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_8a604053f4d4c39e]));
      }

      ::org::orekit::utils::PVCoordinates Transform::getCartesian() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_9b7c658c14883c84]));
      }

      ::org::orekit::time::AbsoluteDate Transform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      Transform Transform::getInverse() const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_getInverse_09afc11266121652]));
      }

      void Transform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_162d7740b4935bd5], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation Transform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getRotation_de86c7efc42eac14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_d52645e0d4c07563]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Transform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d52645e0d4c07563]));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_interpolate_017020b36f2073a7], a0.this$, a1.this$));
      }

      Transform Transform::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return Transform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_4e9cc70946705b1a], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Transform Transform::shiftedBy(jdouble a0) const
      {
        return Transform(env->callObjectMethod(this$, mids$[mid_shiftedBy_4f5cde3777cd20a7], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::staticShiftedBy(jdouble a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_1862d3e05bd21533], a0));
      }

      ::org::orekit::frames::StaticTransform Transform::toStaticTransform() const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_892837e768e813bc]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_2c604bfeb0a28a2f], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_fe87e6eba6ef42f9], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_f76646e67e6a0632], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates Transform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_44abf30654d86934], a0.this$));
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
      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Transform_freeze(t_Transform *self);
      static PyObject *t_Transform_getAcceleration(t_Transform *self);
      static PyObject *t_Transform_getAngular(t_Transform *self);
      static PyObject *t_Transform_getCartesian(t_Transform *self);
      static PyObject *t_Transform_getDate(t_Transform *self);
      static PyObject *t_Transform_getInverse(t_Transform *self);
      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_getRotation(t_Transform *self);
      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self);
      static PyObject *t_Transform_getRotationRate(t_Transform *self);
      static PyObject *t_Transform_getTranslation(t_Transform *self);
      static PyObject *t_Transform_getVelocity(t_Transform *self);
      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args);
      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg);
      static PyObject *t_Transform_toStaticTransform(t_Transform *self);
      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args);
      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__angular(t_Transform *self, void *data);
      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data);
      static PyObject *t_Transform_get__date(t_Transform *self, void *data);
      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data);
      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data);
      static PyObject *t_Transform_get__translation(t_Transform *self, void *data);
      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data);
      static PyGetSetDef t_Transform__fields_[] = {
        DECLARE_GET_FIELD(t_Transform, acceleration),
        DECLARE_GET_FIELD(t_Transform, angular),
        DECLARE_GET_FIELD(t_Transform, cartesian),
        DECLARE_GET_FIELD(t_Transform, date),
        DECLARE_GET_FIELD(t_Transform, inverse),
        DECLARE_GET_FIELD(t_Transform, rotation),
        DECLARE_GET_FIELD(t_Transform, rotationAcceleration),
        DECLARE_GET_FIELD(t_Transform, rotationRate),
        DECLARE_GET_FIELD(t_Transform, translation),
        DECLARE_GET_FIELD(t_Transform, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Transform__methods_[] = {
        DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Transform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_Transform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_Transform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_Transform, interpolate, METH_VARARGS),
        DECLARE_METHOD(t_Transform, interpolate_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Transform, shiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_Transform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_Transform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
        { Py_tp_methods, t_Transform__methods_ },
        { Py_tp_init, (void *) t_Transform_init_ },
        { Py_tp_getset, t_Transform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Transform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Transform, t_Transform, Transform);

      void t_Transform::install(PyObject *module)
      {
        installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
      }

      void t_Transform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        env->getClass(Transform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "IDENTITY", make_descriptor(t_Transform::wrap_Object(*Transform::IDENTITY)));
      }

      static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
          return NULL;
        return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
      }
      static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Transform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Transform_init_(t_Transform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Transform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            Transform a1((jobject) NULL);
            Transform a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, Transform::initializeClass, Transform::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::AngularCoordinates a2((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::AngularCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Transform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            Transform object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = Transform(a0, a1, a2, a3));
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

      static PyObject *t_Transform_freeze(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getAngular(t_Transform *self)
      {
        ::org::orekit::utils::AngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getCartesian(t_Transform *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_Transform_getDate(t_Transform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Transform_getInverse(t_Transform *self)
      {
        Transform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_Transform::wrap_Object(result);
      }

      static PyObject *t_Transform_getJacobian(t_Transform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_Transform_getRotation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationAcceleration(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getRotationRate(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getTranslation(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_getVelocity(t_Transform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_Transform_interpolate(t_Transform *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::stream::Stream a1((jobject) NULL);
        PyTypeObject **p1;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
        {
          OBJ_CALL(result = self->object.interpolate(a0, a1));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }

      static PyObject *t_Transform_interpolate_(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
        PyTypeObject **p2;
        ::java::util::Collection a3((jobject) NULL);
        PyTypeObject **p3;
        Transform result((jobject) NULL);

        if (!parseArgs(args, "kKKK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::Transform::interpolate(a0, a1, a2, a3));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "interpolate_", args);
        return NULL;
      }

      static PyObject *t_Transform_shiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        Transform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Transform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_staticShiftedBy(t_Transform *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::frames::StaticTransform result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Transform_toStaticTransform(t_Transform *self)
      {
        ::org::orekit::frames::StaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
      }

      static PyObject *t_Transform_transformPVCoordinates(t_Transform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Transform_get__acceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__angular(t_Transform *self, void *data)
      {
        ::org::orekit::utils::AngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_AngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__cartesian(t_Transform *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Transform_get__date(t_Transform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Transform_get__inverse(t_Transform *self, void *data)
      {
        Transform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_Transform::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationAcceleration(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__rotationRate(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__translation(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Transform_get__velocity(t_Transform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *LaguerreRuleFactory::class$ = NULL;
          jmethodID *LaguerreRuleFactory::mids$ = NULL;
          bool LaguerreRuleFactory::live$ = false;

          jclass LaguerreRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/LaguerreRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LaguerreRuleFactory::LaguerreRuleFactory() : ::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
        namespace gauss {
          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LaguerreRuleFactory__methods_[] = {
            DECLARE_METHOD(t_LaguerreRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LaguerreRuleFactory, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LaguerreRuleFactory)[] = {
            { Py_tp_methods, t_LaguerreRuleFactory__methods_ },
            { Py_tp_init, (void *) t_LaguerreRuleFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LaguerreRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::AbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(LaguerreRuleFactory, t_LaguerreRuleFactory, LaguerreRuleFactory);

          void t_LaguerreRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(LaguerreRuleFactory), &PY_TYPE_DEF(LaguerreRuleFactory), module, "LaguerreRuleFactory", 0);
          }

          void t_LaguerreRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "class_", make_descriptor(LaguerreRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "wrapfn_", make_descriptor(t_LaguerreRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LaguerreRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LaguerreRuleFactory::initializeClass, 1)))
              return NULL;
            return t_LaguerreRuleFactory::wrap_Object(LaguerreRuleFactory(((t_LaguerreRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_LaguerreRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LaguerreRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LaguerreRuleFactory_init_(t_LaguerreRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            LaguerreRuleFactory object((jobject) NULL);

            INT_CALL(object = LaguerreRuleFactory());
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
#include "org/orekit/gnss/metric/ntrip/StreamMonitor.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "java/lang/Runnable.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *StreamMonitor::class$ = NULL;
          jmethodID *StreamMonitor::mids$ = NULL;
          bool StreamMonitor::live$ = false;

          jclass StreamMonitor::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/StreamMonitor");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_33aa1131f657fa07] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/metric/ntrip/NtripClient;Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZDDI)V");
              mids$[mid_addObserver_ec8f9baf591d2d70] = env->getMethodID(cls, "addObserver", "(ILorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_getException_ca14d9b754aefde3] = env->getMethodID(cls, "getException", "()Lorg/orekit/errors/OrekitException;");
              mids$[mid_run_0fa09c18fee449d5] = env->getMethodID(cls, "run", "()V");
              mids$[mid_stopMonitoring_0fa09c18fee449d5] = env->getMethodID(cls, "stopMonitoring", "()V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StreamMonitor::StreamMonitor(const ::org::orekit::gnss::metric::ntrip::NtripClient & a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::Type & a2, jboolean a3, jboolean a4, jdouble a5, jdouble a6, jint a7) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_33aa1131f657fa07, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7)) {}

          void StreamMonitor::addObserver(jint a0, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_ec8f9baf591d2d70], a0, a1.this$);
          }

          ::org::orekit::errors::OrekitException StreamMonitor::getException() const
          {
            return ::org::orekit::errors::OrekitException(env->callObjectMethod(this$, mids$[mid_getException_ca14d9b754aefde3]));
          }

          void StreamMonitor::run() const
          {
            env->callVoidMethod(this$, mids$[mid_run_0fa09c18fee449d5]);
          }

          void StreamMonitor::stopMonitoring() const
          {
            env->callVoidMethod(this$, mids$[mid_stopMonitoring_0fa09c18fee449d5]);
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
          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args);
          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self);
          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data);
          static PyGetSetDef t_StreamMonitor__fields_[] = {
            DECLARE_GET_FIELD(t_StreamMonitor, exception),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StreamMonitor__methods_[] = {
            DECLARE_METHOD(t_StreamMonitor, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StreamMonitor, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_StreamMonitor, getException, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, run, METH_NOARGS),
            DECLARE_METHOD(t_StreamMonitor, stopMonitoring, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StreamMonitor)[] = {
            { Py_tp_methods, t_StreamMonitor__methods_ },
            { Py_tp_init, (void *) t_StreamMonitor_init_ },
            { Py_tp_getset, t_StreamMonitor__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StreamMonitor)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(StreamMonitor, t_StreamMonitor, StreamMonitor);

          void t_StreamMonitor::install(PyObject *module)
          {
            installType(&PY_TYPE(StreamMonitor), &PY_TYPE_DEF(StreamMonitor), module, "StreamMonitor", 0);
          }

          void t_StreamMonitor::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "class_", make_descriptor(StreamMonitor::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "wrapfn_", make_descriptor(t_StreamMonitor::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StreamMonitor), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StreamMonitor_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StreamMonitor::initializeClass, 1)))
              return NULL;
            return t_StreamMonitor::wrap_Object(StreamMonitor(((t_StreamMonitor *) arg)->object.this$));
          }
          static PyObject *t_StreamMonitor_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StreamMonitor::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StreamMonitor_init_(t_StreamMonitor *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::metric::ntrip::NtripClient a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a2((jobject) NULL);
            PyTypeObject **p2;
            jboolean a3;
            jboolean a4;
            jdouble a5;
            jdouble a6;
            jint a7;
            StreamMonitor object((jobject) NULL);

            if (!parseArgs(args, "ksKZZDDI", ::org::orekit::gnss::metric::ntrip::NtripClient::initializeClass, ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = StreamMonitor(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_StreamMonitor_addObserver(t_StreamMonitor *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::metric::ntrip::MessageObserver a1((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addObserver(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_StreamMonitor_getException(t_StreamMonitor *self)
          {
            ::org::orekit::errors::OrekitException result((jobject) NULL);
            OBJ_CALL(result = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(result);
          }

          static PyObject *t_StreamMonitor_run(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.run());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_stopMonitoring(t_StreamMonitor *self)
          {
            OBJ_CALL(self->object.stopMonitoring());
            Py_RETURN_NONE;
          }

          static PyObject *t_StreamMonitor_get__exception(t_StreamMonitor *self, void *data)
          {
            ::org::orekit::errors::OrekitException value((jobject) NULL);
            OBJ_CALL(value = self->object.getException());
            return ::org::orekit::errors::t_OrekitException::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *StartStopEventsTrigger::class$ = NULL;
          jmethodID *StartStopEventsTrigger::mids$ = NULL;
          bool StartStopEventsTrigger::live$ = false;

          jclass StartStopEventsTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/StartStopEventsTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getStartDetector_900a1fd995808d92] = env->getMethodID(cls, "getStartDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_getStopDetector_900a1fd995808d92] = env->getMethodID(cls, "getStopDetector", "()Lorg/orekit/propagation/events/AbstractDetector;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiringOnInitialState_6501154ab0a356a8] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_convertStartDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertStartDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_convertStopDetector_904dccaacafa0db1] = env->getMethodID(cls, "convertStopDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
          }

          ::java::util::stream::Stream StartStopEventsTrigger::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStartDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStartDetector_900a1fd995808d92]));
          }

          ::org::orekit::propagation::events::AbstractDetector StartStopEventsTrigger::getStopDetector() const
          {
            return ::org::orekit::propagation::events::AbstractDetector(env->callObjectMethod(this$, mids$[mid_getStopDetector_900a1fd995808d92]));
          }

          void StartStopEventsTrigger::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        namespace trigger {
          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self);
          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args);
          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data);
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data);
          static PyGetSetDef t_StartStopEventsTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, eventDetectors),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, startDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, stopDetector),
            DECLARE_GET_FIELD(t_StartStopEventsTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_StartStopEventsTrigger__methods_[] = {
            DECLARE_METHOD(t_StartStopEventsTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StartStopEventsTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getFieldEventDetectors, METH_VARARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStartDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, getStopDetector, METH_NOARGS),
            DECLARE_METHOD(t_StartStopEventsTrigger, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StartStopEventsTrigger)[] = {
            { Py_tp_methods, t_StartStopEventsTrigger__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_StartStopEventsTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StartStopEventsTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(StartStopEventsTrigger, t_StartStopEventsTrigger, StartStopEventsTrigger);
          PyObject *t_StartStopEventsTrigger::wrap_Object(const StartStopEventsTrigger& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_StartStopEventsTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_StartStopEventsTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_StartStopEventsTrigger *self = (t_StartStopEventsTrigger *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_StartStopEventsTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(StartStopEventsTrigger), &PY_TYPE_DEF(StartStopEventsTrigger), module, "StartStopEventsTrigger", 0);
          }

          void t_StartStopEventsTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "class_", make_descriptor(StartStopEventsTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "wrapfn_", make_descriptor(t_StartStopEventsTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StartStopEventsTrigger), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StartStopEventsTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StartStopEventsTrigger::initializeClass, 1)))
              return NULL;
            return t_StartStopEventsTrigger::wrap_Object(StartStopEventsTrigger(((t_StartStopEventsTrigger *) arg)->object.this$));
          }
          static PyObject *t_StartStopEventsTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StartStopEventsTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StartStopEventsTrigger_of_(t_StartStopEventsTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_StartStopEventsTrigger_getEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getEventDetectors());
              return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getFieldEventDetectors(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "getFieldEventDetectors", args, 2);
          }

          static PyObject *t_StartStopEventsTrigger_getStartDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStartDetector());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_getStopDetector(t_StartStopEventsTrigger *self)
          {
            ::org::orekit::propagation::events::AbstractDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getStopDetector());
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(result);
          }

          static PyObject *t_StartStopEventsTrigger_init(t_StartStopEventsTrigger *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(StartStopEventsTrigger), (PyObject *) self, "init", args, 2);
          }
          static PyObject *t_StartStopEventsTrigger_get__parameters_(t_StartStopEventsTrigger *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_StartStopEventsTrigger_get__eventDetectors(t_StartStopEventsTrigger *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__startDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStartDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }

          static PyObject *t_StartStopEventsTrigger_get__stopDetector(t_StartStopEventsTrigger *self, void *data)
          {
            ::org::orekit::propagation::events::AbstractDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getStopDetector());
            return ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/RegulaFalsiSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *RegulaFalsiSolver::class$ = NULL;
        jmethodID *RegulaFalsiSolver::mids$ = NULL;
        bool RegulaFalsiSolver::live$ = false;

        jclass RegulaFalsiSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/RegulaFalsiSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegulaFalsiSolver::RegulaFalsiSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}
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
        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args);
        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data);
        static PyGetSetDef t_RegulaFalsiSolver__fields_[] = {
          DECLARE_GET_FIELD(t_RegulaFalsiSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RegulaFalsiSolver__methods_[] = {
          DECLARE_METHOD(t_RegulaFalsiSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RegulaFalsiSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RegulaFalsiSolver)[] = {
          { Py_tp_methods, t_RegulaFalsiSolver__methods_ },
          { Py_tp_init, (void *) t_RegulaFalsiSolver_init_ },
          { Py_tp_getset, t_RegulaFalsiSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RegulaFalsiSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseSecantSolver),
          NULL
        };

        DEFINE_TYPE(RegulaFalsiSolver, t_RegulaFalsiSolver, RegulaFalsiSolver);
        PyObject *t_RegulaFalsiSolver::wrap_Object(const RegulaFalsiSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RegulaFalsiSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RegulaFalsiSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RegulaFalsiSolver *self = (t_RegulaFalsiSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RegulaFalsiSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(RegulaFalsiSolver), &PY_TYPE_DEF(RegulaFalsiSolver), module, "RegulaFalsiSolver", 0);
        }

        void t_RegulaFalsiSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "class_", make_descriptor(RegulaFalsiSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "wrapfn_", make_descriptor(t_RegulaFalsiSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RegulaFalsiSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RegulaFalsiSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RegulaFalsiSolver::initializeClass, 1)))
            return NULL;
          return t_RegulaFalsiSolver::wrap_Object(RegulaFalsiSolver(((t_RegulaFalsiSolver *) arg)->object.this$));
        }
        static PyObject *t_RegulaFalsiSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RegulaFalsiSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RegulaFalsiSolver_of_(t_RegulaFalsiSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RegulaFalsiSolver_init_(t_RegulaFalsiSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RegulaFalsiSolver object((jobject) NULL);

              INT_CALL(object = RegulaFalsiSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = RegulaFalsiSolver(a0));
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
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              RegulaFalsiSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = RegulaFalsiSolver(a0, a1, a2));
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
        static PyObject *t_RegulaFalsiSolver_get__parameters_(t_RegulaFalsiSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *CompositeDataContext::class$ = NULL;
      jmethodID *CompositeDataContext::mids$ = NULL;
      bool CompositeDataContext::live$ = false;

      jclass CompositeDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/CompositeDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_455641eb1c719876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frames;Lorg/orekit/bodies/CelestialBodies;Lorg/orekit/forces/gravity/potential/GravityFields;Lorg/orekit/models/earth/GeoMagneticFields;)V");
          mids$[mid_getCelestialBodies_c39e314555ec4f4c] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_e688bb8e310f8431] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_a3d479393ff4185d] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_b0af77e046f460cf] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_f0675560047d99cd] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompositeDataContext::CompositeDataContext(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::frames::Frames & a1, const ::org::orekit::bodies::CelestialBodies & a2, const ::org::orekit::forces::gravity::potential::GravityFields & a3, const ::org::orekit::models::earth::GeoMagneticFields & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_455641eb1c719876, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::bodies::CelestialBodies CompositeDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_c39e314555ec4f4c]));
      }

      ::org::orekit::frames::Frames CompositeDataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_e688bb8e310f8431]));
      }

      ::org::orekit::models::earth::GeoMagneticFields CompositeDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_a3d479393ff4185d]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields CompositeDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_b0af77e046f460cf]));
      }

      ::org::orekit::time::TimeScales CompositeDataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_f0675560047d99cd]));
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
      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data);
      static PyGetSetDef t_CompositeDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_CompositeDataContext, frames),
        DECLARE_GET_FIELD(t_CompositeDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, gravityFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeDataContext__methods_[] = {
        DECLARE_METHOD(t_CompositeDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeDataContext)[] = {
        { Py_tp_methods, t_CompositeDataContext__methods_ },
        { Py_tp_init, (void *) t_CompositeDataContext_init_ },
        { Py_tp_getset, t_CompositeDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeDataContext, t_CompositeDataContext, CompositeDataContext);

      void t_CompositeDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeDataContext), &PY_TYPE_DEF(CompositeDataContext), module, "CompositeDataContext", 0);
      }

      void t_CompositeDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "class_", make_descriptor(CompositeDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "wrapfn_", make_descriptor(t_CompositeDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeDataContext::initializeClass, 1)))
          return NULL;
        return t_CompositeDataContext::wrap_Object(CompositeDataContext(((t_CompositeDataContext *) arg)->object.this$));
      }
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::frames::Frames a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        ::org::orekit::forces::gravity::potential::GravityFields a3((jobject) NULL);
        ::org::orekit::models::earth::GeoMagneticFields a4((jobject) NULL);
        CompositeDataContext object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frames::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CompositeDataContext(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIllegalStateException::class$ = NULL;
      jmethodID *OrekitIllegalStateException::mids$ = NULL;
      bool OrekitIllegalStateException::live$ = false;

      jclass OrekitIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIllegalStateException::OrekitIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::IllegalStateException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIllegalStateException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
      }

      ::java::lang::String OrekitIllegalStateException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIllegalStateException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
      }

      ::org::hipparchus::exception::Localizable OrekitIllegalStateException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args);
      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self);
      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data);
      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data);
      static PyGetSetDef t_OrekitIllegalStateException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, message),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, parts),
        DECLARE_GET_FIELD(t_OrekitIllegalStateException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_OrekitIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIllegalStateException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIllegalStateException)[] = {
        { Py_tp_methods, t_OrekitIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_OrekitIllegalStateException_init_ },
        { Py_tp_getset, t_OrekitIllegalStateException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIllegalStateException)[] = {
        &PY_TYPE_DEF(::java::lang::IllegalStateException),
        NULL
      };

      DEFINE_TYPE(OrekitIllegalStateException, t_OrekitIllegalStateException, OrekitIllegalStateException);

      void t_OrekitIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIllegalStateException), &PY_TYPE_DEF(OrekitIllegalStateException), module, "OrekitIllegalStateException", 0);
      }

      void t_OrekitIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "class_", make_descriptor(OrekitIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "wrapfn_", make_descriptor(t_OrekitIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_OrekitIllegalStateException::wrap_Object(OrekitIllegalStateException(((t_OrekitIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIllegalStateException_init_(t_OrekitIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIllegalStateException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIllegalStateException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIllegalStateException_getLocalizedMessage(t_OrekitIllegalStateException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getMessage(t_OrekitIllegalStateException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIllegalStateException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIllegalStateException_getParts(t_OrekitIllegalStateException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_getSpecifier(t_OrekitIllegalStateException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIllegalStateException_get__localizedMessage(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__message(t_OrekitIllegalStateException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIllegalStateException_get__parts(t_OrekitIllegalStateException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIllegalStateException_get__specifier(t_OrekitIllegalStateException *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Segment.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *ConvexHull2D::class$ = NULL;
            jmethodID *ConvexHull2D::mids$ = NULL;
            bool ConvexHull2D::live$ = false;

            jclass ConvexHull2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4566161917de7b46] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
                mids$[mid_createRegion_b72f8ac992e26582] = env->getMethodID(cls, "createRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
                mids$[mid_getLineSegments_79fa15dd644a16a1] = env->getMethodID(cls, "getLineSegments", "()[Lorg/hipparchus/geometry/euclidean/twod/Segment;");
                mids$[mid_getVertices_d4a46c71e7ff1166] = env->getMethodID(cls, "getVertices", "()[Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ConvexHull2D::ConvexHull2D(const JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4566161917de7b46, a0.this$, a1)) {}

            ::org::hipparchus::geometry::partitioning::Region ConvexHull2D::createRegion() const
            {
              return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_createRegion_b72f8ac992e26582]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > ConvexHull2D::getLineSegments() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Segment >(env->callObjectMethod(this$, mids$[mid_getLineSegments_79fa15dd644a16a1]));
            }

            JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > ConvexHull2D::getVertices() const
            {
              return JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D >(env->callObjectMethod(this$, mids$[mid_getVertices_d4a46c71e7ff1166]));
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
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self);
            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data);
            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data);
            static PyGetSetDef t_ConvexHull2D__fields_[] = {
              DECLARE_GET_FIELD(t_ConvexHull2D, lineSegments),
              DECLARE_GET_FIELD(t_ConvexHull2D, vertices),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ConvexHull2D__methods_[] = {
              DECLARE_METHOD(t_ConvexHull2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ConvexHull2D, createRegion, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getLineSegments, METH_NOARGS),
              DECLARE_METHOD(t_ConvexHull2D, getVertices, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ConvexHull2D)[] = {
              { Py_tp_methods, t_ConvexHull2D__methods_ },
              { Py_tp_init, (void *) t_ConvexHull2D_init_ },
              { Py_tp_getset, t_ConvexHull2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ConvexHull2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ConvexHull2D, t_ConvexHull2D, ConvexHull2D);

            void t_ConvexHull2D::install(PyObject *module)
            {
              installType(&PY_TYPE(ConvexHull2D), &PY_TYPE_DEF(ConvexHull2D), module, "ConvexHull2D", 0);
            }

            void t_ConvexHull2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "class_", make_descriptor(ConvexHull2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "wrapfn_", make_descriptor(t_ConvexHull2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHull2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ConvexHull2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ConvexHull2D::initializeClass, 1)))
                return NULL;
              return t_ConvexHull2D::wrap_Object(ConvexHull2D(((t_ConvexHull2D *) arg)->object.this$));
            }
            static PyObject *t_ConvexHull2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ConvexHull2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ConvexHull2D_init_(t_ConvexHull2D *self, PyObject *args, PyObject *kwds)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > a0((jobject) NULL);
              jdouble a1;
              ConvexHull2D object((jobject) NULL);

              if (!parseArgs(args, "[kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
              {
                INT_CALL(object = ConvexHull2D(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ConvexHull2D_createRegion(t_ConvexHull2D *self)
            {
              ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
              OBJ_CALL(result = self->object.createRegion());
              return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            static PyObject *t_ConvexHull2D_getLineSegments(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > result((jobject) NULL);
              OBJ_CALL(result = self->object.getLineSegments());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_getVertices(t_ConvexHull2D *self)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > result((jobject) NULL);
              OBJ_CALL(result = self->object.getVertices());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__lineSegments(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Segment > value((jobject) NULL);
              OBJ_CALL(value = self->object.getLineSegments());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Segment::wrap_jobject);
            }

            static PyObject *t_ConvexHull2D_get__vertices(t_ConvexHull2D *self, void *data)
            {
              JArray< ::org::hipparchus::geometry::euclidean::twod::Vector2D > value((jobject) NULL);
              OBJ_CALL(value = self->object.getVertices());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_jobject);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/twod/SubLine.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/twod/PolygonsSet.h"
#include "org/hipparchus/geometry/euclidean/twod/Line.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_9e348818a9543cf1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_init$_05f32db2daa9c7a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;DD)V");
              mids$[mid_contains_7af1c8b167be0423] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)Z");
              mids$[mid_copySelf_4dee9d21a28a0b70] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_distance_1b5717d3483243c3] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_emptyHyperplane_1f609e73389d4cda] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_getAngle_dff5885c2c873297] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getOffset_f5f1256fc86329c5] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)D");
              mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_b4822d5266bca26e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOriginOffset_dff5885c2c873297] = env->getMethodID(cls, "getOriginOffset", "()D");
              mids$[mid_getPointAt_3e5a9728959ace85] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_getReverse_4dee9d21a28a0b70] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/euclidean/twod/Line;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_d2ac69175fff569b] = env->getStaticMethodID(cls, "getTransform", "(DDDDDD)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_intersection_4a2ad0902b8bc9e4] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_isParallelTo_3e38059ed4e79195] = env->getMethodID(cls, "isParallelTo", "(Lorg/hipparchus/geometry/euclidean/twod/Line;)Z");
              mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_e3d5559701692566] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_reset_268b82d2b2be6bb4] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)V");
              mids$[mid_revertSelf_0fa09c18fee449d5] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_setAngle_17db3a65980d3441] = env->getMethodID(cls, "setAngle", "(D)V");
              mids$[mid_setOriginOffset_17db3a65980d3441] = env->getMethodID(cls, "setOriginOffset", "(D)V");
              mids$[mid_toSpace_02aa1f4808a162d3] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSpace_8144ab28b67d94ff] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_d43a3b6426dc1754] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_b46f57fa6217d00f] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_translateToPoint_6008d3447ce702ca] = env->getMethodID(cls, "translateToPoint", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_wholeHyperplane_1f609e73389d4cda] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/twod/SubLine;");
              mids$[mid_wholeSpace_cd159e87cc5dab72] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/twod/PolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9e348818a9543cf1, a0.this$, a1.this$, a2)) {}

          Line::Line(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_05f32db2daa9c7a1, a0.this$, a1, a2)) {}

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_7af1c8b167be0423], a0.this$);
          }

          Line Line::copySelf() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_copySelf_4dee9d21a28a0b70]));
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_1b5717d3483243c3], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_1f609e73389d4cda]));
          }

          jdouble Line::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_dff5885c2c873297]);
          }

          jdouble Line::getOffset(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_f5f1256fc86329c5], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Line::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_b4822d5266bca26e], a0.this$);
          }

          jdouble Line::getOriginOffset() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOriginOffset_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::getPointAt(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_getPointAt_3e5a9728959ace85], a0.this$, a1));
          }

          Line Line::getReverse() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_getReverse_4dee9d21a28a0b70]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Line::getTransform(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_d2ac69175fff569b], a0, a1, a2, a3, a4, a5));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_intersection_4a2ad0902b8bc9e4], a0.this$));
          }

          jboolean Line::isParallelTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isParallelTo_3e38059ed4e79195], a0.this$);
          }

          ::org::hipparchus::geometry::Point Line::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_e3d5559701692566], a0.this$, a1.this$);
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_268b82d2b2be6bb4], a0.this$, a1);
          }

          void Line::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0fa09c18fee449d5]);
          }

          jboolean Line::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
          }

          void Line::setAngle(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAngle_17db3a65980d3441], a0);
          }

          void Line::setOriginOffset(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginOffset_17db3a65980d3441], a0);
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_02aa1f4808a162d3], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSpace_8144ab28b67d94ff], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_d43a3b6426dc1754], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b46f57fa6217d00f], a0.this$));
          }

          void Line::translateToPoint(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_translateToPoint_6008d3447ce702ca], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::twod::SubLine Line::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::SubLine(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_1f609e73389d4cda]));
          }

          ::org::hipparchus::geometry::euclidean::twod::PolygonsSet Line::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::twod::PolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_cd159e87cc5dab72]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_copySelf(t_Line *self);
          static PyObject *t_Line_distance(t_Line *self, PyObject *arg);
          static PyObject *t_Line_emptyHyperplane(t_Line *self);
          static PyObject *t_Line_getAngle(t_Line *self);
          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args);
          static PyObject *t_Line_getOriginOffset(t_Line *self);
          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args);
          static PyObject *t_Line_getReverse(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_project(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revertSelf(t_Line *self);
          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg);
          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_wholeHyperplane(t_Line *self);
          static PyObject *t_Line_wholeSpace(t_Line *self);
          static PyObject *t_Line_get__angle(t_Line *self, void *data);
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__originOffset(t_Line *self, void *data);
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data);
          static PyObject *t_Line_get__reverse(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GETSET_FIELD(t_Line, angle),
            DECLARE_GETSET_FIELD(t_Line, originOffset),
            DECLARE_GET_FIELD(t_Line, reverse),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, distance, METH_O),
            DECLARE_METHOD(t_Line, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Line, getOriginOffset, METH_NOARGS),
            DECLARE_METHOD(t_Line, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Line, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isParallelTo, METH_O),
            DECLARE_METHOD(t_Line, project, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Line, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Line, setAngle, METH_O),
            DECLARE_METHOD(t_Line, setOriginOffset, METH_O),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, translateToPoint, METH_O),
            DECLARE_METHOD(t_Line, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Line, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                Line object((jobject) NULL);

                if (!parseArgs(args, "kDD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Line(a0, a1, a2));
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

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_copySelf(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Line_emptyHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_getAngle(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getOffset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Line_getOriginOffset(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getPointAt(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Line_getReverse(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_getTransform(PyTypeObject *type, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Line::getTransform(a0, a1, a2, a3, a4, a5));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isParallelTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isParallelTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isParallelTo", arg);
            return NULL;
          }

          static PyObject *t_Line_project(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                jdouble a1;

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revertSelf(t_Line *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Line_sameOrientationAs(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Line_setAngle(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setAngle(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAngle", arg);
            return NULL;
          }

          static PyObject *t_Line_setOriginOffset(t_Line *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOriginOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOriginOffset", arg);
            return NULL;
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_translateToPoint(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.translateToPoint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "translateToPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_wholeHyperplane(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::twod::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_wholeSpace(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::twod::PolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::twod::t_PolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Line_get__angle(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__angle(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setAngle(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "angle", arg);
            return -1;
          }

          static PyObject *t_Line_get__originOffset(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOriginOffset());
            return PyFloat_FromDouble((double) value);
          }
          static int t_Line_set__originOffset(t_Line *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOriginOffset(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "originOffset", arg);
            return -1;
          }

          static PyObject *t_Line_get__reverse(t_Line *self, void *data)
          {
            Line value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Line::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversProvider::class$ = NULL;
      jmethodID *ParameterDriversProvider::mids$ = NULL;
      bool ParameterDriversProvider::live$ = false;

      jclass ParameterDriversProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNbParametersDriversValue_570ce0828f81a2c1] = env->getMethodID(cls, "getNbParametersDriversValue", "()I");
          mids$[mid_getParameterDriver_32a37bc1292372ac] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_2b9aa40de0a696a4] = env->getMethodID(cls, "getParameters", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_getParameters_f040a403cffae196] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParameters_34a9acc5b042d8a8] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersAllValues_60c7040667a7dc5c] = env->getMethodID(cls, "getParametersAllValues", "()[D");
          mids$[mid_getParametersAllValues_f040a403cffae196] = env->getMethodID(cls, "getParametersAllValues", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_isSupported_7edad2c2f64f4d68] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint ParameterDriversProvider::getNbParametersDriversValue() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParametersDriversValue_570ce0828f81a2c1]);
      }

      ::org::orekit::utils::ParameterDriver ParameterDriversProvider::getParameterDriver(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getParameterDriver_32a37bc1292372ac], a0.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_60c7040667a7dc5c]));
      }

      JArray< jdouble > ParameterDriversProvider::getParameters(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParameters_2b9aa40de0a696a4], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_f040a403cffae196], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParameters(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParameters_34a9acc5b042d8a8], a0.this$, a1.this$));
      }

      JArray< jdouble > ParameterDriversProvider::getParametersAllValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_60c7040667a7dc5c]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > ParameterDriversProvider::getParametersAllValues(const ::org::hipparchus::Field & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getParametersAllValues_f040a403cffae196], a0.this$));
      }

      ::java::util::List ParameterDriversProvider::getParametersDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
      }

      jboolean ParameterDriversProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_7edad2c2f64f4d68], a0.this$);
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
      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args);
      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self);
      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg);
      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data);
      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data);
      static PyGetSetDef t_ParameterDriversProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversProvider, nbParametersDriversValue),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parameters),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersAllValues),
        DECLARE_GET_FIELD(t_ParameterDriversProvider, parametersDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversProvider__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversProvider, getNbParametersDriversValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameterDriver, METH_O),
        DECLARE_METHOD(t_ParameterDriversProvider, getParameters, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersAllValues, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, getParametersDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversProvider)[] = {
        { Py_tp_methods, t_ParameterDriversProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversProvider, t_ParameterDriversProvider, ParameterDriversProvider);

      void t_ParameterDriversProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversProvider), &PY_TYPE_DEF(ParameterDriversProvider), module, "ParameterDriversProvider", 0);
      }

      void t_ParameterDriversProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "class_", make_descriptor(ParameterDriversProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "wrapfn_", make_descriptor(t_ParameterDriversProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversProvider::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversProvider::wrap_Object(ParameterDriversProvider(((t_ParameterDriversProvider *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversProvider_getNbParametersDriversValue(t_ParameterDriversProvider *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversProvider_getParameterDriver(t_ParameterDriversProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getParameterDriver(a0));
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getParameterDriver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParameters(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParameters());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return result.wrap();
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getParameters(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParameters", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersAllValues(t_ParameterDriversProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersAllValues());
            return result.wrap();
          }
          break;
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getParametersAllValues(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getParametersAllValues", args);
        return NULL;
      }

      static PyObject *t_ParameterDriversProvider_getParametersDrivers(t_ParameterDriversProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversProvider_isSupported(t_ParameterDriversProvider *self, PyObject *arg)
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

      static PyObject *t_ParameterDriversProvider_get__nbParametersDriversValue(t_ParameterDriversProvider *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParametersDriversValue());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversProvider_get__parameters(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParameters());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersAllValues(t_ParameterDriversProvider *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersAllValues());
        return value.wrap();
      }

      static PyObject *t_ParameterDriversProvider_get__parametersDrivers(t_ParameterDriversProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeRateIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateIonosphericDelayModifier::BistaticRangeRateIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          void BistaticRangeRateIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void BistaticRangeRateIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeRateIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeRateIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateIonosphericDelayModifier, t_BistaticRangeRateIonosphericDelayModifier, BistaticRangeRateIonosphericDelayModifier);

          void t_BistaticRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeRateIonosphericDelayModifier), module, "BistaticRangeRateIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateIonosphericDelayModifier::wrap_Object(BistaticRangeRateIonosphericDelayModifier(((t_BistaticRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeRateIonosphericDelayModifier_init_(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeRateIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeRateIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modify(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeRateIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeRateIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *ObservationsBlock::class$ = NULL;
            jmethodID *ObservationsBlock::mids$ = NULL;
            bool ObservationsBlock::live$ = false;

            jclass ObservationsBlock::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/ObservationsBlock");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_addObservation_cd94b1e055e4d212] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/Observation;)V");
                mids$[mid_addObservation_2d550fb141a705f2] = env->getMethodID(cls, "addObservation", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getObservations_2afa36052df4765d] = env->getMethodID(cls, "getObservations", "()Ljava/util/List;");
                mids$[mid_setObservations_de3e021e7266b71e] = env->getMethodID(cls, "setObservations", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ObservationsBlock::ObservationsBlock() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::Observation & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_cd94b1e055e4d212], a0.this$);
            }

            void ObservationsBlock::addObservation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_addObservation_2d550fb141a705f2], a0.this$, a1.this$, a2);
            }

            ::java::util::List ObservationsBlock::getObservations() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservations_2afa36052df4765d]));
            }

            void ObservationsBlock::setObservations(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setObservations_de3e021e7266b71e], a0.this$);
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
          namespace tdm {
            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args);
            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self);
            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg);
            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data);
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data);
            static PyGetSetDef t_ObservationsBlock__fields_[] = {
              DECLARE_GETSET_FIELD(t_ObservationsBlock, observations),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ObservationsBlock__methods_[] = {
              DECLARE_METHOD(t_ObservationsBlock, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ObservationsBlock, addObservation, METH_VARARGS),
              DECLARE_METHOD(t_ObservationsBlock, getObservations, METH_NOARGS),
              DECLARE_METHOD(t_ObservationsBlock, setObservations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ObservationsBlock)[] = {
              { Py_tp_methods, t_ObservationsBlock__methods_ },
              { Py_tp_init, (void *) t_ObservationsBlock_init_ },
              { Py_tp_getset, t_ObservationsBlock__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ObservationsBlock)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(ObservationsBlock, t_ObservationsBlock, ObservationsBlock);

            void t_ObservationsBlock::install(PyObject *module)
            {
              installType(&PY_TYPE(ObservationsBlock), &PY_TYPE_DEF(ObservationsBlock), module, "ObservationsBlock", 0);
            }

            void t_ObservationsBlock::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "class_", make_descriptor(ObservationsBlock::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "wrapfn_", make_descriptor(t_ObservationsBlock::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationsBlock), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ObservationsBlock_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ObservationsBlock::initializeClass, 1)))
                return NULL;
              return t_ObservationsBlock::wrap_Object(ObservationsBlock(((t_ObservationsBlock *) arg)->object.this$));
            }
            static PyObject *t_ObservationsBlock_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ObservationsBlock::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ObservationsBlock_init_(t_ObservationsBlock *self, PyObject *args, PyObject *kwds)
            {
              ObservationsBlock object((jobject) NULL);

              INT_CALL(object = ObservationsBlock());
              self->object = object;

              return 0;
            }

            static PyObject *t_ObservationsBlock_addObservation(t_ObservationsBlock *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::Observation a0((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::tdm::Observation::initializeClass, &a0))
                  {
                    OBJ_CALL(self->object.addObservation(a0));
                    Py_RETURN_NONE;
                  }
                }
                break;
               case 3:
                {
                  ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                  jdouble a2;

                  if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(self->object.addObservation(a0, a1, a2));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "addObservation", args);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_getObservations(t_ObservationsBlock *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::tdm::PY_TYPE(Observation));
            }

            static PyObject *t_ObservationsBlock_setObservations(t_ObservationsBlock *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(self->object.setObservations(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setObservations", arg);
              return NULL;
            }

            static PyObject *t_ObservationsBlock_get__observations(t_ObservationsBlock *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getObservations());
              return ::java::util::t_List::wrap_Object(value);
            }
            static int t_ObservationsBlock_set__observations(t_ObservationsBlock *self, PyObject *arg, void *data)
            {
              {
                ::java::util::List value((jobject) NULL);
                if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                {
                  INT_CALL(self->object.setObservations(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "observations", arg);
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
#include "org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *KvnLexicalAnalyzer::class$ = NULL;
            jmethodID *KvnLexicalAnalyzer::mids$ = NULL;
            bool KvnLexicalAnalyzer::live$ = false;

            jclass KvnLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/KvnLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_579dcb2bf229954b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_accept_94f8bc3acabdf0ba] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KvnLexicalAnalyzer::KvnLexicalAnalyzer(const ::org::orekit::data::DataSource & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_579dcb2bf229954b, a0.this$)) {}

            ::java::lang::Object KvnLexicalAnalyzer::accept(const ::org::orekit::files::ccsds::utils::lexical::MessageParser & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_accept_94f8bc3acabdf0ba], a0.this$));
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
            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg);

            static PyMethodDef t_KvnLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_KvnLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KvnLexicalAnalyzer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KvnLexicalAnalyzer)[] = {
              { Py_tp_methods, t_KvnLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_KvnLexicalAnalyzer_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KvnLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(KvnLexicalAnalyzer, t_KvnLexicalAnalyzer, KvnLexicalAnalyzer);

            void t_KvnLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(KvnLexicalAnalyzer), &PY_TYPE_DEF(KvnLexicalAnalyzer), module, "KvnLexicalAnalyzer", 0);
            }

            void t_KvnLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "class_", make_descriptor(KvnLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "wrapfn_", make_descriptor(t_KvnLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KvnLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KvnLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KvnLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_KvnLexicalAnalyzer::wrap_Object(KvnLexicalAnalyzer(((t_KvnLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_KvnLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KvnLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KvnLexicalAnalyzer_init_(t_KvnLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              KvnLexicalAnalyzer object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                INT_CALL(object = KvnLexicalAnalyzer(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_KvnLexicalAnalyzer_accept(t_KvnLexicalAnalyzer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::MessageParser a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::utils::lexical::MessageParser::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::parameters_))
              {
                OBJ_CALL(result = self->object.accept(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
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
#include "org/hipparchus/analysis/interpolation/TricubicInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TrivariateGridInterpolator.h"
#include "org/hipparchus/analysis/interpolation/TricubicInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *TricubicInterpolator::class$ = NULL;
        jmethodID *TricubicInterpolator::mids$ = NULL;
        bool TricubicInterpolator::live$ = false;

        jclass TricubicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/TricubicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_70e6d9ebfd0eec38] = env->getMethodID(cls, "interpolate", "([D[D[D[[[D)Lorg/hipparchus/analysis/interpolation/TricubicInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TricubicInterpolator::TricubicInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction TricubicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const JArray< JArray< JArray< jdouble > > > & a3) const
        {
          return ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_70e6d9ebfd0eec38], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args);

        static PyMethodDef t_TricubicInterpolator__methods_[] = {
          DECLARE_METHOD(t_TricubicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TricubicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TricubicInterpolator)[] = {
          { Py_tp_methods, t_TricubicInterpolator__methods_ },
          { Py_tp_init, (void *) t_TricubicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TricubicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TricubicInterpolator, t_TricubicInterpolator, TricubicInterpolator);

        void t_TricubicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(TricubicInterpolator), &PY_TYPE_DEF(TricubicInterpolator), module, "TricubicInterpolator", 0);
        }

        void t_TricubicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "class_", make_descriptor(TricubicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "wrapfn_", make_descriptor(t_TricubicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TricubicInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TricubicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TricubicInterpolator::initializeClass, 1)))
            return NULL;
          return t_TricubicInterpolator::wrap_Object(TricubicInterpolator(((t_TricubicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_TricubicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TricubicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TricubicInterpolator_init_(t_TricubicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          TricubicInterpolator object((jobject) NULL);

          INT_CALL(object = TricubicInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_TricubicInterpolator_interpolate(t_TricubicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< JArray< JArray< jdouble > > > a3((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::TricubicInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[D[[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2, a3));
            return ::org::hipparchus::analysis::interpolation::t_TricubicInterpolatingFunction::wrap_Object(result);
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
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/Circle.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *Circle::class$ = NULL;
          jmethodID *Circle::mids$ = NULL;
          bool Circle::live$ = false;

          jclass Circle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/Circle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_71a7c3cfed678f9d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_875d266deedb47de] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;D)V");
              mids$[mid_copySelf_32f0886c61f7154f] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_emptyHyperplane_4f34c6c1db57a3eb] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_getArc_d617d5c3c078b007] = env->getMethodID(cls, "getArc", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getInsideArc_99bf345db36fbfd3] = env->getMethodID(cls, "getInsideArc", "(Lorg/hipparchus/geometry/spherical/twod/Circle;)Lorg/hipparchus/geometry/spherical/oned/Arc;");
              mids$[mid_getOffset_bf473e7c74e5ce2b] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getOffset_07bb97c2794cf6b1] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getPhase_bf473e7c74e5ce2b] = env->getMethodID(cls, "getPhase", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getPointAt_9137bba253a33d9c] = env->getMethodID(cls, "getPointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPole_d52645e0d4c07563] = env->getMethodID(cls, "getPole", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getReverse_32f0886c61f7154f] = env->getMethodID(cls, "getReverse", "()Lorg/hipparchus/geometry/spherical/twod/Circle;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getTransform_d50fe3393e82058b] = env->getStaticMethodID(cls, "getTransform", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/partitioning/Transform;");
              mids$[mid_getXAxis_d52645e0d4c07563] = env->getMethodID(cls, "getXAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getYAxis_d52645e0d4c07563] = env->getMethodID(cls, "getYAxis", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_project_c48805c2dda937c6] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_029ff0cbf68ea054] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_0fa09c18fee449d5] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_5bc340c02d9ac484] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_77cb6153d008c1ec] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toSubSpace_ffd4c8161efaa32f] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/spherical/oned/S1Point;");
              mids$[mid_wholeHyperplane_4f34c6c1db57a3eb] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/spherical/twod/SubCircle;");
              mids$[mid_wholeSpace_5a6ba0b36fb0268c] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Circle::Circle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71a7c3cfed678f9d, a0.this$, a1)) {}

          Circle::Circle(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_875d266deedb47de, a0.this$, a1.this$, a2)) {}

          Circle Circle::copySelf() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_copySelf_32f0886c61f7154f]));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_4f34c6c1db57a3eb]));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getArc(const ::org::hipparchus::geometry::spherical::twod::S2Point & a0, const ::org::hipparchus::geometry::spherical::twod::S2Point & a1) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getArc_d617d5c3c078b007], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::Arc Circle::getInsideArc(const Circle & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::Arc(env->callObjectMethod(this$, mids$[mid_getInsideArc_99bf345db36fbfd3], a0.this$));
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_bf473e7c74e5ce2b], a0.this$);
          }

          jdouble Circle::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Circle::getPhase(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhase_bf473e7c74e5ce2b], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_9137bba253a33d9c], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getPole() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_d52645e0d4c07563]));
          }

          Circle Circle::getReverse() const
          {
            return Circle(env->callObjectMethod(this$, mids$[mid_getReverse_32f0886c61f7154f]));
          }

          jdouble Circle::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::partitioning::Transform Circle::getTransform(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::partitioning::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_d50fe3393e82058b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getXAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getXAxis_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Circle::getYAxis() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getYAxis_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::Point Circle::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_c48805c2dda937c6], a0.this$));
          }

          void Circle::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_029ff0cbf68ea054], a0.this$);
          }

          void Circle::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_0fa09c18fee449d5]);
          }

          jboolean Circle::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_5bc340c02d9ac484], a0.this$);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Circle::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_toSpace_77cb6153d008c1ec], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::oned::S1Point Circle::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::spherical::oned::S1Point(env->callObjectMethod(this$, mids$[mid_toSubSpace_ffd4c8161efaa32f], a0.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SubCircle Circle::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SubCircle(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_4f34c6c1db57a3eb]));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet Circle::wholeSpace() const
          {
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_5a6ba0b36fb0268c]));
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
          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Circle_copySelf(t_Circle *self);
          static PyObject *t_Circle_emptyHyperplane(t_Circle *self);
          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args);
          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_getPole(t_Circle *self);
          static PyObject *t_Circle_getReverse(t_Circle *self);
          static PyObject *t_Circle_getTolerance(t_Circle *self);
          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Circle_getXAxis(t_Circle *self);
          static PyObject *t_Circle_getYAxis(t_Circle *self);
          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_revertSelf(t_Circle *self);
          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg);
          static PyObject *t_Circle_wholeHyperplane(t_Circle *self);
          static PyObject *t_Circle_wholeSpace(t_Circle *self);
          static PyObject *t_Circle_get__pole(t_Circle *self, void *data);
          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data);
          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data);
          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data);
          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data);
          static PyGetSetDef t_Circle__fields_[] = {
            DECLARE_GET_FIELD(t_Circle, pole),
            DECLARE_GET_FIELD(t_Circle, reverse),
            DECLARE_GET_FIELD(t_Circle, tolerance),
            DECLARE_GET_FIELD(t_Circle, xAxis),
            DECLARE_GET_FIELD(t_Circle, yAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Circle__methods_[] = {
            DECLARE_METHOD(t_Circle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getArc, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getInsideArc, METH_O),
            DECLARE_METHOD(t_Circle, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Circle, getPhase, METH_O),
            DECLARE_METHOD(t_Circle, getPointAt, METH_O),
            DECLARE_METHOD(t_Circle, getPole, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getReverse, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getTransform, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Circle, getXAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, getYAxis, METH_NOARGS),
            DECLARE_METHOD(t_Circle, project, METH_O),
            DECLARE_METHOD(t_Circle, reset, METH_O),
            DECLARE_METHOD(t_Circle, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Circle, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Circle, toSpace, METH_O),
            DECLARE_METHOD(t_Circle, toSubSpace, METH_O),
            DECLARE_METHOD(t_Circle, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Circle, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Circle)[] = {
            { Py_tp_methods, t_Circle__methods_ },
            { Py_tp_init, (void *) t_Circle_init_ },
            { Py_tp_getset, t_Circle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Circle)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Circle, t_Circle, Circle);

          void t_Circle::install(PyObject *module)
          {
            installType(&PY_TYPE(Circle), &PY_TYPE_DEF(Circle), module, "Circle", 0);
          }

          void t_Circle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "class_", make_descriptor(Circle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "wrapfn_", make_descriptor(t_Circle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Circle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Circle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Circle::initializeClass, 1)))
              return NULL;
            return t_Circle::wrap_Object(Circle(((t_Circle *) arg)->object.this$));
          }
          static PyObject *t_Circle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Circle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Circle_init_(t_Circle *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Circle(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
                jdouble a2;
                Circle object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Circle(a0, a1, a2));
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

          static PyObject *t_Circle_copySelf(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_emptyHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_getArc(t_Circle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::S2Point a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::twod::S2Point a1((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getArc(a0, a1));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getArc", args);
            return NULL;
          }

          static PyObject *t_Circle_getInsideArc(t_Circle *self, PyObject *arg)
          {
            Circle a0((jobject) NULL);
            ::org::hipparchus::geometry::spherical::oned::Arc result((jobject) NULL);

            if (!parseArg(arg, "k", Circle::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getInsideArc(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_Arc::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getInsideArc", arg);
            return NULL;
          }

          static PyObject *t_Circle_getOffset(t_Circle *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Circle_getPhase(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPhase(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPhase", arg);
            return NULL;
          }

          static PyObject *t_Circle_getPointAt(t_Circle *self, PyObject *arg)
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

          static PyObject *t_Circle_getPole(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getReverse(t_Circle *self)
          {
            Circle result((jobject) NULL);
            OBJ_CALL(result = self->object.getReverse());
            return t_Circle::wrap_Object(result);
          }

          static PyObject *t_Circle_getTolerance(t_Circle *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Circle_getTransform(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::Transform result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::Circle::getTransform(a0));
              return ::org::hipparchus::geometry::partitioning::t_Transform::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D));
            }

            PyErr_SetArgsError(type, "getTransform", arg);
            return NULL;
          }

          static PyObject *t_Circle_getXAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_getYAxis(t_Circle *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Circle_project(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Circle_reset(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", arg);
            return NULL;
          }

          static PyObject *t_Circle_revertSelf(t_Circle *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Circle_sameOrientationAs(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::twod::S2Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSpace(a0));
              return ::org::hipparchus::geometry::spherical::twod::t_S2Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_toSubSpace(t_Circle *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::spherical::oned::S1Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.toSubSpace(a0));
              return ::org::hipparchus::geometry::spherical::oned::t_S1Point::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", arg);
            return NULL;
          }

          static PyObject *t_Circle_wholeHyperplane(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SubCircle result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::spherical::twod::t_SubCircle::wrap_Object(result);
          }

          static PyObject *t_Circle_wholeSpace(t_Circle *self)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
          }

          static PyObject *t_Circle_get__pole(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getPole());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__reverse(t_Circle *self, void *data)
          {
            Circle value((jobject) NULL);
            OBJ_CALL(value = self->object.getReverse());
            return t_Circle::wrap_Object(value);
          }

          static PyObject *t_Circle_get__tolerance(t_Circle *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Circle_get__xAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getXAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Circle_get__yAxis(t_Circle *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getYAxis());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationParser::class$ = NULL;
          jmethodID *RinexObservationParser::mids$ = NULL;
          bool RinexObservationParser::live$ = false;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_2_NAMES = NULL;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_3_NAMES = NULL;

          jclass RinexObservationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8736fe4ec3234d8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_cbc0707f42c3623c] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/observation/RinexObservation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_RINEX_2_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_2_NAMES", "Ljava/lang/String;"));
              DEFAULT_RINEX_3_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_3_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationParser::RinexObservationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          RinexObservationParser::RinexObservationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8736fe4ec3234d8c, a0.this$)) {}

          ::org::orekit::files::rinex::observation::RinexObservation RinexObservationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::observation::RinexObservation(env->callObjectMethod(this$, mids$[mid_parse_cbc0707f42c3623c], a0.this$));
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
          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg);

          static PyMethodDef t_RinexObservationParser__methods_[] = {
            DECLARE_METHOD(t_RinexObservationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationParser)[] = {
            { Py_tp_methods, t_RinexObservationParser__methods_ },
            { Py_tp_init, (void *) t_RinexObservationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationParser, t_RinexObservationParser, RinexObservationParser);

          void t_RinexObservationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationParser), &PY_TYPE_DEF(RinexObservationParser), module, "RinexObservationParser", 0);
          }

          void t_RinexObservationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "class_", make_descriptor(RinexObservationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "wrapfn_", make_descriptor(t_RinexObservationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexObservationParser::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_2_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_2_NAMES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_3_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_3_NAMES)));
          }

          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationParser::initializeClass, 1)))
              return NULL;
            return t_RinexObservationParser::wrap_Object(RinexObservationParser(((t_RinexObservationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexObservationParser object((jobject) NULL);

                INT_CALL(object = RinexObservationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexObservationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexObservationParser(a0));
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

          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::RinexObservation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::observation::t_RinexObservation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *S2Point::class$ = NULL;
          jmethodID *S2Point::mids$ = NULL;
          bool S2Point::live$ = false;
          S2Point *S2Point::MINUS_I = NULL;
          S2Point *S2Point::MINUS_J = NULL;
          S2Point *S2Point::MINUS_K = NULL;
          S2Point *S2Point::NaN = NULL;
          S2Point *S2Point::PLUS_I = NULL;
          S2Point *S2Point::PLUS_J = NULL;
          S2Point *S2Point::PLUS_K = NULL;

          jclass S2Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/S2Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_029ff0cbf68ea054] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_7906933611969296] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)D");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_65c7d273e80d497a] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getPhi_dff5885c2c873297] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getTheta_dff5885c2c873297] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_getVector_d52645e0d4c07563] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_fe1c7ad511d8448b] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new S2Point(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_J = new S2Point(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_K = new S2Point(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              NaN = new S2Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_I = new S2Point(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_J = new S2Point(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_K = new S2Point(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S2Point::S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_029ff0cbf68ea054, a0.this$)) {}

          S2Point::S2Point(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

          jdouble S2Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
          }

          jdouble S2Point::distance(const S2Point & a0, const S2Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_7906933611969296], a0.this$, a1.this$);
          }

          jboolean S2Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jboolean S2Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_65c7d273e80d497a], a0.this$);
          }

          jdouble S2Point::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::Space S2Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
          }

          jdouble S2Point::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D S2Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVector_d52645e0d4c07563]));
          }

          jint S2Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean S2Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          S2Point S2Point::negate() const
          {
            return S2Point(env->callObjectMethod(this$, mids$[mid_negate_fe1c7ad511d8448b]));
          }

          ::java::lang::String S2Point::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_getPhi(t_S2Point *self);
          static PyObject *t_S2Point_getSpace(t_S2Point *self);
          static PyObject *t_S2Point_getTheta(t_S2Point *self);
          static PyObject *t_S2Point_getVector(t_S2Point *self);
          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_isNaN(t_S2Point *self);
          static PyObject *t_S2Point_negate(t_S2Point *self);
          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data);
          static PyGetSetDef t_S2Point__fields_[] = {
            DECLARE_GET_FIELD(t_S2Point, naN),
            DECLARE_GET_FIELD(t_S2Point, phi),
            DECLARE_GET_FIELD(t_S2Point, space),
            DECLARE_GET_FIELD(t_S2Point, theta),
            DECLARE_GET_FIELD(t_S2Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S2Point__methods_[] = {
            DECLARE_METHOD(t_S2Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, distance, METH_O),
            DECLARE_METHOD(t_S2Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S2Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S2Point, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, negate, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S2Point)[] = {
            { Py_tp_methods, t_S2Point__methods_ },
            { Py_tp_init, (void *) t_S2Point_init_ },
            { Py_tp_getset, t_S2Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S2Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S2Point, t_S2Point, S2Point);

          void t_S2Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S2Point), &PY_TYPE_DEF(S2Point), module, "S2Point", 0);
          }

          void t_S2Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "class_", make_descriptor(S2Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "wrapfn_", make_descriptor(t_S2Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S2Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "NaN", make_descriptor(t_S2Point::wrap_Object(*S2Point::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_K)));
          }

          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S2Point::initializeClass, 1)))
              return NULL;
            return t_S2Point::wrap_Object(S2Point(((t_S2Point *) arg)->object.this$));
          }
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S2Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = S2Point(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                jdouble a1;
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = S2Point(a0, a1));
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

          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S2Point a0((jobject) NULL);
            S2Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S2Point::initializeClass, S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::S2Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_S2Point_getPhi(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getSpace(t_S2Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S2Point_getTheta(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getVector(t_S2Point *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S2Point_isNaN(t_S2Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S2Point_negate(t_S2Point *self)
          {
            S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_S2Point::wrap_Object(result);
          }

          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStreamReader.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStreamReader::class$ = NULL;
    jmethodID *InputStreamReader::mids$ = NULL;
    bool InputStreamReader::live$ = false;

    jclass InputStreamReader::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStreamReader");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_42871fcf824ad25f] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
        mids$[mid_init$_1815f85c118161ad] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
        mids$[mid_close_0fa09c18fee449d5] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getEncoding_11b109bd155ca898] = env->getMethodID(cls, "getEncoding", "()Ljava/lang/String;");
        mids$[mid_read_570ce0828f81a2c1] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_e1525dbb996fb0b1] = env->getMethodID(cls, "read", "([CII)I");
        mids$[mid_ready_b108b35ef48e27bd] = env->getMethodID(cls, "ready", "()Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_42871fcf824ad25f, a0.this$)) {}

    InputStreamReader::InputStreamReader(const ::java::io::InputStream & a0, const ::java::lang::String & a1) : ::java::io::Reader(env->newObject(initializeClass, &mids$, mid_init$_1815f85c118161ad, a0.this$, a1.this$)) {}

    void InputStreamReader::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0fa09c18fee449d5]);
    }

    ::java::lang::String InputStreamReader::getEncoding() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getEncoding_11b109bd155ca898]));
    }

    jint InputStreamReader::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_570ce0828f81a2c1]);
    }

    jint InputStreamReader::read(const JArray< jchar > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_e1525dbb996fb0b1], a0.this$, a1, a2);
    }

    jboolean InputStreamReader::ready() const
    {
      return env->callBooleanMethod(this$, mids$[mid_ready_b108b35ef48e27bd]);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self);
    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args);
    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data);
    static PyGetSetDef t_InputStreamReader__fields_[] = {
      DECLARE_GET_FIELD(t_InputStreamReader, encoding),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_InputStreamReader__methods_[] = {
      DECLARE_METHOD(t_InputStreamReader, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStreamReader, close, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, getEncoding, METH_NOARGS),
      DECLARE_METHOD(t_InputStreamReader, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStreamReader, ready, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStreamReader)[] = {
      { Py_tp_methods, t_InputStreamReader__methods_ },
      { Py_tp_init, (void *) t_InputStreamReader_init_ },
      { Py_tp_getset, t_InputStreamReader__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStreamReader)[] = {
      &PY_TYPE_DEF(::java::io::Reader),
      NULL
    };

    DEFINE_TYPE(InputStreamReader, t_InputStreamReader, InputStreamReader);

    void t_InputStreamReader::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStreamReader), &PY_TYPE_DEF(InputStreamReader), module, "InputStreamReader", 0);
    }

    void t_InputStreamReader::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "class_", make_descriptor(InputStreamReader::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "wrapfn_", make_descriptor(t_InputStreamReader::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamReader), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStreamReader_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStreamReader::initializeClass, 1)))
        return NULL;
      return t_InputStreamReader::wrap_Object(InputStreamReader(((t_InputStreamReader *) arg)->object.this$));
    }
    static PyObject *t_InputStreamReader_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStreamReader::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStreamReader_init_(t_InputStreamReader *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::InputStream a0((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            INT_CALL(object = InputStreamReader(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::io::InputStream a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          InputStreamReader object((jobject) NULL);

          if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
          {
            INT_CALL(object = InputStreamReader(a0, a1));
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

    static PyObject *t_InputStreamReader_close(t_InputStreamReader *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_InputStreamReader_getEncoding(t_InputStreamReader *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getEncoding());
      return j2p(result);
    }

    static PyObject *t_InputStreamReader_read(t_InputStreamReader *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 3:
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_InputStreamReader_ready(t_InputStreamReader *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.ready());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(InputStreamReader), (PyObject *) self, "ready", args, 2);
    }

    static PyObject *t_InputStreamReader_get__encoding(t_InputStreamReader *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getEncoding());
      return j2p(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *DataField::class$ = NULL;
          jmethodID *DataField::mids$ = NULL;
          bool DataField::live$ = false;

          jclass DataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/DataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_booleanValue_d49bc9d47765325e] = env->getMethodID(cls, "booleanValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)Z");
              mids$[mid_doubleValue_da56bd267e07cff8] = env->getMethodID(cls, "doubleValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)D");
              mids$[mid_intValue_4c406d8a749d0c0c] = env->getMethodID(cls, "intValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;)I");
              mids$[mid_stringValue_b40431a8be22e156] = env->getMethodID(cls, "stringValue", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean DataField::booleanValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_booleanValue_d49bc9d47765325e], a0.this$);
          }

          jdouble DataField::doubleValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_doubleValue_da56bd267e07cff8], a0.this$);
          }

          jint DataField::intValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_intValue_4c406d8a749d0c0c], a0.this$);
          }

          ::java::lang::String DataField::stringValue(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_stringValue_b40431a8be22e156], a0.this$, a1));
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
          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg);
          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args);

          static PyMethodDef t_DataField__methods_[] = {
            DECLARE_METHOD(t_DataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DataField, booleanValue, METH_O),
            DECLARE_METHOD(t_DataField, doubleValue, METH_O),
            DECLARE_METHOD(t_DataField, intValue, METH_O),
            DECLARE_METHOD(t_DataField, stringValue, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DataField)[] = {
            { Py_tp_methods, t_DataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DataField)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DataField, t_DataField, DataField);

          void t_DataField::install(PyObject *module)
          {
            installType(&PY_TYPE(DataField), &PY_TYPE_DEF(DataField), module, "DataField", 0);
          }

          void t_DataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "class_", make_descriptor(DataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "wrapfn_", make_descriptor(t_DataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DataField), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DataField::initializeClass, 1)))
              return NULL;
            return t_DataField::wrap_Object(DataField(((t_DataField *) arg)->object.this$));
          }
          static PyObject *t_DataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DataField_booleanValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.booleanValue(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "booleanValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_doubleValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.doubleValue(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "doubleValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_intValue(t_DataField *self, PyObject *arg)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint result;

            if (!parseArg(arg, "k", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intValue(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "intValue", arg);
            return NULL;
          }

          static PyObject *t_DataField_stringValue(t_DataField *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.stringValue(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "stringValue", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "java/io/File.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Boolean.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpManager::class$ = NULL;
        jmethodID *DumpManager::mids$ = NULL;
        bool DumpManager::live$ = false;

        jclass DumpManager::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpManager");

            mids$ = new jmethodID[max_mid];
            mids$[mid_activate_0613af62f2ba5dba] = env->getStaticMethodID(cls, "activate", "(Ljava/io/File;)V");
            mids$[mid_deactivate_0fa09c18fee449d5] = env->getStaticMethodID(cls, "deactivate", "()V");
            mids$[mid_dumpAlgorithm_bf8b5dae4ed03a23] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)V");
            mids$[mid_dumpAlgorithm_ae3e3a99fa2baadd] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;D)V");
            mids$[mid_dumpDirectLocation_59f76e44cd6c2fd4] = env->getStaticMethodID(cls, "dumpDirectLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZZZ)V");
            mids$[mid_dumpDirectLocationResult_083a0f582ac2c846] = env->getStaticMethodID(cls, "dumpDirectLocationResult", "(Lorg/orekit/bodies/GeodeticPoint;)V");
            mids$[mid_dumpEllipsoid_323cca21b3806954] = env->getStaticMethodID(cls, "dumpEllipsoid", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_dumpInverseLocation_8027d207ff6378d8] = env->getStaticMethodID(cls, "dumpInverseLocation", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/rugged/utils/ExtendedEllipsoid;IIZZZ)V");
            mids$[mid_dumpInverseLocationResult_0fc18d1cc8c4a1a6] = env->getStaticMethodID(cls, "dumpInverseLocationResult", "(Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_dumpSensorDatation_8ab2a5996db1732e] = env->getStaticMethodID(cls, "dumpSensorDatation", "(Lorg/orekit/rugged/linesensor/LineSensor;DLorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dumpSensorLOS_0a886226d4f13cd0] = env->getStaticMethodID(cls, "dumpSensorLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_dumpSensorMeanPlane_2020c547641e3f1d] = env->getStaticMethodID(cls, "dumpSensorMeanPlane", "(Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing;)V");
            mids$[mid_dumpSensorRate_a06c5b9fb71931a3] = env->getStaticMethodID(cls, "dumpSensorRate", "(Lorg/orekit/rugged/linesensor/LineSensor;DD)V");
            mids$[mid_dumpTileCell_a38e6192c4ef3a41] = env->getStaticMethodID(cls, "dumpTileCell", "(Lorg/orekit/rugged/raster/Tile;IID)V");
            mids$[mid_dumpTransform_221d25b63c6d70bd] = env->getStaticMethodID(cls, "dumpTransform", "(Lorg/orekit/rugged/utils/SpacecraftToObservedBody;ILorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
            mids$[mid_endNicely_0fa09c18fee449d5] = env->getStaticMethodID(cls, "endNicely", "()V");
            mids$[mid_isActive_b108b35ef48e27bd] = env->getStaticMethodID(cls, "isActive", "()Z");
            mids$[mid_resume_39ded4df2e865a26] = env->getStaticMethodID(cls, "resume", "(Ljava/lang/Boolean;)V");
            mids$[mid_suspend_32e0a2327c4a0419] = env->getStaticMethodID(cls, "suspend", "()Ljava/lang/Boolean;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DumpManager::activate(const ::java::io::File & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_activate_0613af62f2ba5dba], a0.this$);
        }

        void DumpManager::deactivate()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_deactivate_0fa09c18fee449d5]);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_bf8b5dae4ed03a23], a0.this$);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_ae3e3a99fa2baadd], a0.this$, a1);
        }

        void DumpManager::dumpDirectLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jboolean a3, jboolean a4, jboolean a5)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocation_59f76e44cd6c2fd4], a0.this$, a1.this$, a2.this$, a3, a4, a5);
        }

        void DumpManager::dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocationResult_083a0f582ac2c846], a0.this$);
        }

        void DumpManager::dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpEllipsoid_323cca21b3806954], a0.this$);
        }

        void DumpManager::dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::rugged::utils::ExtendedEllipsoid & a2, jint a3, jint a4, jboolean a5, jboolean a6, jboolean a7)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocation_8027d207ff6378d8], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7);
        }

        void DumpManager::dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocationResult_0fc18d1cc8c4a1a6], a0.this$);
        }

        void DumpManager::dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorDatation_8ab2a5996db1732e], a0.this$, a1, a2.this$);
        }

        void DumpManager::dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorLOS_0a886226d4f13cd0], a0.this$, a1.this$, a2, a3.this$);
        }

        void DumpManager::dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorMeanPlane_2020c547641e3f1d], a0.this$);
        }

        void DumpManager::dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorRate_a06c5b9fb71931a3], a0.this$, a1, a2);
        }

        void DumpManager::dumpTileCell(const ::org::orekit::rugged::raster::Tile & a0, jint a1, jint a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTileCell_a38e6192c4ef3a41], a0.this$, a1, a2, a3);
        }

        void DumpManager::dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a0, jint a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::frames::Transform & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTransform_221d25b63c6d70bd], a0.this$, a1, a2.this$, a3.this$);
        }

        void DumpManager::endNicely()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_endNicely_0fa09c18fee449d5]);
        }

        jboolean DumpManager::isActive()
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isActive_b108b35ef48e27bd]);
        }

        void DumpManager::resume(const ::java::lang::Boolean & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_resume_39ded4df2e865a26], a0.this$);
        }

        ::java::lang::Boolean DumpManager::suspend()
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::Boolean(env->callStaticObjectMethod(cls, mids$[mid_suspend_32e0a2327c4a0419]));
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
        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_deactivate(PyTypeObject *type);
        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_endNicely(PyTypeObject *type);
        static PyObject *t_DumpManager_isActive(PyTypeObject *type);
        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_suspend(PyTypeObject *type);
        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data);
        static PyGetSetDef t_DumpManager__fields_[] = {
          DECLARE_GET_FIELD(t_DumpManager, active),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpManager__methods_[] = {
          DECLARE_METHOD(t_DumpManager, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, activate, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, deactivate, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpAlgorithm, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpEllipsoid, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorDatation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorLOS, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorMeanPlane, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorRate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTileCell, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTransform, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, endNicely, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, isActive, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, resume, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, suspend, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpManager)[] = {
          { Py_tp_methods, t_DumpManager__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpManager__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpManager)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpManager, t_DumpManager, DumpManager);

        void t_DumpManager::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpManager), &PY_TYPE_DEF(DumpManager), module, "DumpManager", 0);
        }

        void t_DumpManager::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "class_", make_descriptor(DumpManager::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "wrapfn_", make_descriptor(t_DumpManager::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpManager::initializeClass, 1)))
            return NULL;
          return t_DumpManager::wrap_Object(DumpManager(((t_DumpManager *) arg)->object.this$));
        }
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpManager::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::activate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "activate", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_deactivate(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::deactivate());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;

              if (!parseArgs(args, "KD", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_, &a1))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError(type, "dumpAlgorithm", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jboolean a3;
          jboolean a4;
          jboolean a5;

          if (!parseArgs(args, "kkkZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocation(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpEllipsoid(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpEllipsoid", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          ::org::orekit::rugged::utils::ExtendedEllipsoid a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean a5;
          jboolean a6;
          jboolean a7;

          if (!parseArgs(args, "kkkIIZZZ", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocation(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorDatation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorDatation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);

          if (!parseArgs(args, "kkIk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorLOS(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorLOS", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorMeanPlane(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorMeanPlane", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorRate(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorRate", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::raster::Tile a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "kIID", ::org::orekit::rugged::raster::Tile::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTileCell(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTileCell", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a0((jobject) NULL);
          jint a1;
          ::org::orekit::frames::Transform a2((jobject) NULL);
          ::org::orekit::frames::Transform a3((jobject) NULL);

          if (!parseArgs(args, "kIkk", ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTransform(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTransform", args);
          return NULL;
        }

        static PyObject *t_DumpManager_endNicely(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::endNicely());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_isActive(PyTypeObject *type)
        {
          jboolean result;
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::isActive());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::Boolean a0((jobject) NULL);

          if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::resume(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "resume", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_suspend(PyTypeObject *type)
        {
          ::java::lang::Boolean result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::suspend());
          return ::java::lang::t_Boolean::wrap_Object(result);
        }

        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isActive());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/SBASPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *SBASNavigationMessage::class$ = NULL;
            jmethodID *SBASNavigationMessage::mids$ = NULL;
            bool SBASNavigationMessage::live$ = false;

            jclass SBASNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getAGf0_dff5885c2c873297] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_dff5885c2c873297] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getIODN_570ce0828f81a2c1] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPropagator_9dcd848e51dbc12c] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_ae714d22f6e1d72f] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getPropagator_c8d67577d76c2250] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/frames/Frames;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;DD)Lorg/orekit/propagation/analytical/gnss/SBASPropagator;");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getURA_dff5885c2c873297] = env->getMethodID(cls, "getURA", "()D");
                mids$[mid_getWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_setAGf0_17db3a65980d3441] = env->getMethodID(cls, "setAGf0", "(D)V");
                mids$[mid_setAGf1_17db3a65980d3441] = env->getMethodID(cls, "setAGf1", "(D)V");
                mids$[mid_setIODN_17db3a65980d3441] = env->getMethodID(cls, "setIODN", "(D)V");
                mids$[mid_setTime_17db3a65980d3441] = env->getMethodID(cls, "setTime", "(D)V");
                mids$[mid_setURA_17db3a65980d3441] = env->getMethodID(cls, "setURA", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SBASNavigationMessage::SBASNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble SBASNavigationMessage::getAGf0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf0_dff5885c2c873297]);
            }

            jdouble SBASNavigationMessage::getAGf1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAGf1_dff5885c2c873297]);
            }

            jint SBASNavigationMessage::getIODN() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODN_570ce0828f81a2c1]);
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator() const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_9dcd848e51dbc12c]));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ae714d22f6e1d72f], a0.this$));
            }

            ::org::orekit::propagation::analytical::gnss::SBASPropagator SBASNavigationMessage::getPropagator(const ::org::orekit::frames::Frames & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::frames::Frame & a3, jdouble a4, jdouble a5) const
            {
              return ::org::orekit::propagation::analytical::gnss::SBASPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_c8d67577d76c2250], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
            }

            jdouble SBASNavigationMessage::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
            }

            jdouble SBASNavigationMessage::getURA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getURA_dff5885c2c873297]);
            }

            jint SBASNavigationMessage::getWeek() const
            {
              return env->callIntMethod(this$, mids$[mid_getWeek_570ce0828f81a2c1]);
            }

            void SBASNavigationMessage::setAGf0(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf0_17db3a65980d3441], a0);
            }

            void SBASNavigationMessage::setAGf1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAGf1_17db3a65980d3441], a0);
            }

            void SBASNavigationMessage::setIODN(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODN_17db3a65980d3441], a0);
            }

            void SBASNavigationMessage::setTime(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTime_17db3a65980d3441], a0);
            }

            void SBASNavigationMessage::setURA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setURA_17db3a65980d3441], a0);
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
            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args);
            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self);
            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg);
            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data);
            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data);
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data);
            static PyGetSetDef t_SBASNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf0),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, aGf1),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, iODN),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, propagator),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, time),
              DECLARE_GETSET_FIELD(t_SBASNavigationMessage, uRA),
              DECLARE_GET_FIELD(t_SBASNavigationMessage, week),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SBASNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_SBASNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf0, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getAGf1, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getIODN, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getPropagator, METH_VARARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getTime, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getURA, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, getWeek, METH_NOARGS),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf0, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setAGf1, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setIODN, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setTime, METH_O),
              DECLARE_METHOD(t_SBASNavigationMessage, setURA, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SBASNavigationMessage)[] = {
              { Py_tp_methods, t_SBASNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_SBASNavigationMessage_init_ },
              { Py_tp_getset, t_SBASNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SBASNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractEphemerisMessage),
              NULL
            };

            DEFINE_TYPE(SBASNavigationMessage, t_SBASNavigationMessage, SBASNavigationMessage);

            void t_SBASNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SBASNavigationMessage), &PY_TYPE_DEF(SBASNavigationMessage), module, "SBASNavigationMessage", 0);
            }

            void t_SBASNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "class_", make_descriptor(SBASNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "wrapfn_", make_descriptor(t_SBASNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SBASNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SBASNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SBASNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_SBASNavigationMessage::wrap_Object(SBASNavigationMessage(((t_SBASNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_SBASNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SBASNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SBASNavigationMessage_init_(t_SBASNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              SBASNavigationMessage object((jobject) NULL);

              INT_CALL(object = SBASNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_SBASNavigationMessage_getAGf0(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getAGf1(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAGf1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getIODN(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODN());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_getPropagator(t_SBASNavigationMessage *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);
                  OBJ_CALL(result = self->object.getPropagator());
                  return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                }
                break;
               case 1:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::frames::Frames::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
                break;
               case 6:
                {
                  ::org::orekit::frames::Frames a0((jobject) NULL);
                  ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                  ::org::orekit::frames::Frame a2((jobject) NULL);
                  ::org::orekit::frames::Frame a3((jobject) NULL);
                  jdouble a4;
                  jdouble a5;
                  ::org::orekit::propagation::analytical::gnss::SBASPropagator result((jobject) NULL);

                  if (!parseArgs(args, "kkkkDD", ::org::orekit::frames::Frames::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = self->object.getPropagator(a0, a1, a2, a3, a4, a5));
                    return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_getTime(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getURA(t_SBASNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getURA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_SBASNavigationMessage_getWeek(t_SBASNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getWeek());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_SBASNavigationMessage_setAGf0(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf0(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf0", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setAGf1(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAGf1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAGf1", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setIODN(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODN(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODN", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setTime(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTime(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTime", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_setURA(t_SBASNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setURA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setURA", arg);
              return NULL;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf0(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf0());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf0(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf0(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf0", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__aGf1(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAGf1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__aGf1(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAGf1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "aGf1", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__iODN(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODN());
              return PyLong_FromLong((long) value);
            }
            static int t_SBASNavigationMessage_set__iODN(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODN(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODN", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__propagator(t_SBASNavigationMessage *self, void *data)
            {
              ::org::orekit::propagation::analytical::gnss::SBASPropagator value((jobject) NULL);
              OBJ_CALL(value = self->object.getPropagator());
              return ::org::orekit::propagation::analytical::gnss::t_SBASPropagator::wrap_Object(value);
            }

            static PyObject *t_SBASNavigationMessage_get__time(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__time(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTime(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "time", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__uRA(t_SBASNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getURA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_SBASNavigationMessage_set__uRA(t_SBASNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setURA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "uRA", arg);
              return -1;
            }

            static PyObject *t_SBASNavigationMessage_get__week(t_SBASNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getWeek());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *ComplexOrdinaryDifferentialEquation::mids$ = NULL;
      bool ComplexOrdinaryDifferentialEquation::live$ = false;

      jclass ComplexOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_205a0588bf1b379d] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_7cbf20925feb48fd] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexOrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_205a0588bf1b379d], a0, a1.this$));
      }

      jint ComplexOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void ComplexOrdinaryDifferentialEquation::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_7cbf20925feb48fd], a0, a1.this$, a2);
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
      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_ComplexOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexOrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_ComplexOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexOrdinaryDifferentialEquation, t_ComplexOrdinaryDifferentialEquation, ComplexOrdinaryDifferentialEquation);

      void t_ComplexOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexOrdinaryDifferentialEquation), &PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation), module, "ComplexOrdinaryDifferentialEquation", 0);
      }

      void t_ComplexOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "class_", make_descriptor(ComplexOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_ComplexOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_ComplexOrdinaryDifferentialEquation::wrap_Object(ComplexOrdinaryDifferentialEquation(((t_ComplexOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[kD", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data)
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
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance::class$ = NULL;
          jmethodID *SemiVariance::mids$ = NULL;
          bool SemiVariance::live$ = false;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::DOWNSIDE_VARIANCE = NULL;
          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction *SemiVariance::UPSIDE_VARIANCE = NULL;

          jclass SemiVariance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_83338c53b7ac5804] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
              mids$[mid_init$_918564a3303f9ffd] = env->getMethodID(cls, "<init>", "(ZLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)V");
              mids$[mid_copy_fe8982514928923b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_evaluate_300ffa2091a31441] = env->getMethodID(cls, "evaluate", "([DLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_1c41301ff6e224e7] = env->getMethodID(cls, "evaluate", "([DD)D");
              mids$[mid_evaluate_4e25eca381ebfe40] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)D");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_1c36be0f6c01add1] = env->getMethodID(cls, "evaluate", "([DDLorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;ZII)D");
              mids$[mid_getVarianceDirection_56815956fb99b83e] = env->getMethodID(cls, "getVarianceDirection", "()Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_isBiasCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isBiasCorrected", "()Z");
              mids$[mid_withBiasCorrected_966ea0d2157c4e9f] = env->getMethodID(cls, "withBiasCorrected", "(Z)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");
              mids$[mid_withVarianceDirection_cfff35f852434f45] = env->getMethodID(cls, "withVarianceDirection", "(Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE_VARIANCE = new ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE_VARIANCE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance::SemiVariance() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          SemiVariance::SemiVariance(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_83338c53b7ac5804, a0.this$)) {}

          SemiVariance::SemiVariance(jboolean a0) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

          SemiVariance::SemiVariance(jboolean a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_918564a3303f9ffd, a0, a1.this$)) {}

          SemiVariance SemiVariance::copy() const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_copy_fe8982514928923b]));
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_300ffa2091a31441], a0.this$, a1.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1c41301ff6e224e7], a0.this$, a1);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_4e25eca381ebfe40], a0.this$, a1, a2.this$);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble SemiVariance::evaluate(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a2, jboolean a3, jint a4, jint a5) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_1c36be0f6c01add1], a0.this$, a1, a2.this$, a3, a4, a5);
          }

          ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction SemiVariance::getVarianceDirection() const
          {
            return ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction(env->callObjectMethod(this$, mids$[mid_getVarianceDirection_56815956fb99b83e]));
          }

          jboolean SemiVariance::isBiasCorrected() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isBiasCorrected_b108b35ef48e27bd]);
          }

          SemiVariance SemiVariance::withBiasCorrected(jboolean a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withBiasCorrected_966ea0d2157c4e9f], a0));
          }

          SemiVariance SemiVariance::withVarianceDirection(const ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction & a0) const
          {
            return SemiVariance(env->callObjectMethod(this$, mids$[mid_withVarianceDirection_cfff35f852434f45], a0.this$));
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
          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args);
          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self);
          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self);
          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg);
          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data);
          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data);
          static PyGetSetDef t_SemiVariance__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance, biasCorrected),
            DECLARE_GET_FIELD(t_SemiVariance, varianceDirection),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance__methods_[] = {
            DECLARE_METHOD(t_SemiVariance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance, copy, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance, getVarianceDirection, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, isBiasCorrected, METH_NOARGS),
            DECLARE_METHOD(t_SemiVariance, withBiasCorrected, METH_O),
            DECLARE_METHOD(t_SemiVariance, withVarianceDirection, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance)[] = {
            { Py_tp_methods, t_SemiVariance__methods_ },
            { Py_tp_init, (void *) t_SemiVariance_init_ },
            { Py_tp_getset, t_SemiVariance__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SemiVariance, t_SemiVariance, SemiVariance);

          void t_SemiVariance::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance), &PY_TYPE_DEF(SemiVariance), module, "SemiVariance", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "Direction", make_descriptor(&PY_TYPE_DEF(SemiVariance$Direction)));
          }

          void t_SemiVariance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "class_", make_descriptor(SemiVariance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "wrapfn_", make_descriptor(t_SemiVariance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "DOWNSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::DOWNSIDE_VARIANCE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance), "UPSIDE_VARIANCE", make_descriptor(::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(*SemiVariance::UPSIDE_VARIANCE)));
          }

          static PyObject *t_SemiVariance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance::initializeClass, 1)))
              return NULL;
            return t_SemiVariance::wrap_Object(SemiVariance(((t_SemiVariance *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SemiVariance_init_(t_SemiVariance *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                SemiVariance object((jobject) NULL);

                INT_CALL(object = SemiVariance());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
                PyTypeObject **p0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              {
                jboolean a0;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "Z", &a0))
                {
                  INT_CALL(object = SemiVariance(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jboolean a0;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                SemiVariance object((jobject) NULL);

                if (!parseArgs(args, "ZK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  INT_CALL(object = SemiVariance(a0, a1));
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

          static PyObject *t_SemiVariance_copy(t_SemiVariance *self, PyObject *args)
          {
            SemiVariance result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SemiVariance::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SemiVariance_evaluate(t_SemiVariance *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble result;

                if (!parseArgs(args, "[DK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &p1, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "[DD", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jdouble result;

                if (!parseArgs(args, "[DDK", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
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
              }
              break;
             case 6:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a2((jobject) NULL);
                PyTypeObject **p2;
                jboolean a3;
                jint a4;
                jint a5;
                jdouble result;

                if (!parseArgs(args, "[DDKZII", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_, &a3, &a4, &a5))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3, a4, a5));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(SemiVariance), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SemiVariance_getVarianceDirection(t_SemiVariance *self)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction result((jobject) NULL);
            OBJ_CALL(result = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(result);
          }

          static PyObject *t_SemiVariance_isBiasCorrected(t_SemiVariance *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isBiasCorrected());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_SemiVariance_withBiasCorrected(t_SemiVariance *self, PyObject *arg)
          {
            jboolean a0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(result = self->object.withBiasCorrected(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withBiasCorrected", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_withVarianceDirection(t_SemiVariance *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction a0((jobject) NULL);
            PyTypeObject **p0;
            SemiVariance result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::parameters_))
            {
              OBJ_CALL(result = self->object.withVarianceDirection(a0));
              return t_SemiVariance::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withVarianceDirection", arg);
            return NULL;
          }

          static PyObject *t_SemiVariance_get__biasCorrected(t_SemiVariance *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isBiasCorrected());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_SemiVariance_get__varianceDirection(t_SemiVariance *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction value((jobject) NULL);
            OBJ_CALL(value = self->object.getVarianceDirection());
            return ::org::hipparchus::stat::descriptive::moment::t_SemiVariance$Direction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStateInterpolator::class$ = NULL;
        jmethodID *ODEStateInterpolator::mids$ = NULL;
        bool ODEStateInterpolator::live$ = false;

        jclass ODEStateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCurrentState_72cfc96c3e58d15e] = env->getMethodID(cls, "getCurrentState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getInterpolatedState_f01efdb3ab1bad7f] = env->getMethodID(cls, "getInterpolatedState", "(D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_getPreviousState_72cfc96c3e58d15e] = env->getMethodID(cls, "getPreviousState", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isCurrentStateInterpolated", "()Z");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd] = env->getMethodID(cls, "isPreviousStateInterpolated", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getCurrentState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getCurrentState_72cfc96c3e58d15e]));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getInterpolatedState(jdouble a0) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_f01efdb3ab1bad7f], a0));
        }

        ::org::hipparchus::ode::ODEStateAndDerivative ODEStateInterpolator::getPreviousState() const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getPreviousState_72cfc96c3e58d15e]));
        }

        jboolean ODEStateInterpolator::isCurrentStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCurrentStateInterpolated_b108b35ef48e27bd]);
        }

        jboolean ODEStateInterpolator::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        jboolean ODEStateInterpolator::isPreviousStateInterpolated() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isPreviousStateInterpolated_b108b35ef48e27bd]);
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
        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg);
        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self);
        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data);
        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data);
        static PyGetSetDef t_ODEStateInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, currentStateInterpolated),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, forward),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousState),
          DECLARE_GET_FIELD(t_ODEStateInterpolator, previousStateInterpolated),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ODEStateInterpolator__methods_[] = {
          DECLARE_METHOD(t_ODEStateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStateInterpolator, getCurrentState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, getInterpolatedState, METH_O),
          DECLARE_METHOD(t_ODEStateInterpolator, getPreviousState, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isCurrentStateInterpolated, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isForward, METH_NOARGS),
          DECLARE_METHOD(t_ODEStateInterpolator, isPreviousStateInterpolated, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStateInterpolator)[] = {
          { Py_tp_methods, t_ODEStateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ODEStateInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStateInterpolator)[] = {
          &PY_TYPE_DEF(::java::io::Serializable),
          NULL
        };

        DEFINE_TYPE(ODEStateInterpolator, t_ODEStateInterpolator, ODEStateInterpolator);

        void t_ODEStateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStateInterpolator), &PY_TYPE_DEF(ODEStateInterpolator), module, "ODEStateInterpolator", 0);
        }

        void t_ODEStateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "class_", make_descriptor(ODEStateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "wrapfn_", make_descriptor(t_ODEStateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStateInterpolator::initializeClass, 1)))
            return NULL;
          return t_ODEStateInterpolator::wrap_Object(ODEStateInterpolator(((t_ODEStateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_ODEStateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStateInterpolator_getCurrentState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_getInterpolatedState(t_ODEStateInterpolator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getInterpolatedState(a0));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
          return NULL;
        }

        static PyObject *t_ODEStateInterpolator_getPreviousState(t_ODEStateInterpolator *self)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
          OBJ_CALL(result = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
        }

        static PyObject *t_ODEStateInterpolator_isCurrentStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isForward(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_isPreviousStateInterpolated(t_ODEStateInterpolator *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_ODEStateInterpolator_get__currentState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__currentStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCurrentStateInterpolated());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__forward(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousState(t_ODEStateInterpolator *self, void *data)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
          OBJ_CALL(value = self->object.getPreviousState());
          return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
        }

        static PyObject *t_ODEStateInterpolator_get__previousStateInterpolated(t_ODEStateInterpolator *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isPreviousStateInterpolated());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/ZipfDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *ZipfDistribution::class$ = NULL;
        jmethodID *ZipfDistribution::mids$ = NULL;
        bool ZipfDistribution::live$ = false;

        jclass ZipfDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/ZipfDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getExponent_dff5885c2c873297] = env->getMethodID(cls, "getExponent", "()D");
            mids$[mid_getNumberOfElements_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfElements", "()I");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_calculateNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "calculateNumericalMean", "()D");
            mids$[mid_calculateNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "calculateNumericalVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ZipfDistribution::ZipfDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

        jdouble ZipfDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jdouble ZipfDistribution::getExponent() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getExponent_dff5885c2c873297]);
        }

        jint ZipfDistribution::getNumberOfElements() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfElements_570ce0828f81a2c1]);
        }

        jdouble ZipfDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble ZipfDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jint ZipfDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint ZipfDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean ZipfDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble ZipfDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble ZipfDistribution::probability(jint a0) const
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
        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self);
        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args);
        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data);
        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data);
        static PyGetSetDef t_ZipfDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ZipfDistribution, exponent),
          DECLARE_GET_FIELD(t_ZipfDistribution, numberOfElements),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ZipfDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ZipfDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ZipfDistribution__methods_[] = {
          DECLARE_METHOD(t_ZipfDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ZipfDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumberOfElements, METH_NOARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_ZipfDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ZipfDistribution)[] = {
          { Py_tp_methods, t_ZipfDistribution__methods_ },
          { Py_tp_init, (void *) t_ZipfDistribution_init_ },
          { Py_tp_getset, t_ZipfDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ZipfDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(ZipfDistribution, t_ZipfDistribution, ZipfDistribution);

        void t_ZipfDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ZipfDistribution), &PY_TYPE_DEF(ZipfDistribution), module, "ZipfDistribution", 0);
        }

        void t_ZipfDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "class_", make_descriptor(ZipfDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "wrapfn_", make_descriptor(t_ZipfDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ZipfDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ZipfDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ZipfDistribution::initializeClass, 1)))
            return NULL;
          return t_ZipfDistribution::wrap_Object(ZipfDistribution(((t_ZipfDistribution *) arg)->object.this$));
        }
        static PyObject *t_ZipfDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ZipfDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ZipfDistribution_init_(t_ZipfDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          ZipfDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = ZipfDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ZipfDistribution_cumulativeProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_getExponent(t_ZipfDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getExponent());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ZipfDistribution_getNumberOfElements(t_ZipfDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfElements());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_ZipfDistribution_getNumericalMean(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ZipfDistribution_getNumericalVariance(t_ZipfDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportLowerBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_getSupportUpperBound(t_ZipfDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ZipfDistribution_isSupportConnected(t_ZipfDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ZipfDistribution_logProbability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_ZipfDistribution_probability(t_ZipfDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ZipfDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_ZipfDistribution_get__exponent(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getExponent());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numberOfElements(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfElements());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalMean(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__numericalVariance(t_ZipfDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ZipfDistribution_get__supportConnected(t_ZipfDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ZipfDistribution_get__supportLowerBound(t_ZipfDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_ZipfDistribution_get__supportUpperBound(t_ZipfDistribution *self, void *data)
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
#include "org/orekit/propagation/events/EventState$EventOccurrence.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventState$EventOccurrence::class$ = NULL;
        jmethodID *EventState$EventOccurrence::mids$ = NULL;
        bool EventState$EventOccurrence::live$ = false;

        jclass EventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_4aa421fecbe7eed3] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_c6311115fea01a34] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStopDate_85703d13e302437e] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action EventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_4aa421fecbe7eed3]));
        }

        ::org::orekit::propagation::SpacecraftState EventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_c6311115fea01a34]));
        }

        ::org::orekit::time::AbsoluteDate EventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_85703d13e302437e]));
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
        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self);
        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data);
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_EventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_EventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_EventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_EventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventState$EventOccurrence)[] = {
          { Py_tp_methods, t_EventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventState$EventOccurrence, t_EventState$EventOccurrence, EventState$EventOccurrence);
        PyObject *t_EventState$EventOccurrence::wrap_Object(const EventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventState$EventOccurrence *self = (t_EventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(EventState$EventOccurrence), &PY_TYPE_DEF(EventState$EventOccurrence), module, "EventState$EventOccurrence", 0);
        }

        void t_EventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "class_", make_descriptor(EventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "wrapfn_", make_descriptor(t_EventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_EventState$EventOccurrence::wrap_Object(EventState$EventOccurrence(((t_EventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_EventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventState$EventOccurrence_of_(t_EventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EventState$EventOccurrence_getAction(t_EventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getNewState(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventState$EventOccurrence_getStopDate(t_EventState$EventOccurrence *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
        static PyObject *t_EventState$EventOccurrence_get__parameters_(t_EventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventState$EventOccurrence_get__action(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__newState(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_EventState$EventOccurrence_get__stopDate(t_EventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *AbstractDualFrequencyCombination::mids$ = NULL;
          bool AbstractDualFrequencyCombination::live$ = false;
          jdouble AbstractDualFrequencyCombination::MHZ_TO_HZ = (jdouble) 0;

          jclass AbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_38fa214a925f8e7a] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_5803930ce6c7d9f1] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MHZ_TO_HZ = env->getStaticDoubleField(cls, "MHZ_TO_HZ");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_38fa214a925f8e7a], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_5803930ce6c7d9f1], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractDualFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self);
          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractDualFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractDualFrequencyCombination, t_AbstractDualFrequencyCombination, AbstractDualFrequencyCombination);

          void t_AbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractDualFrequencyCombination), &PY_TYPE_DEF(AbstractDualFrequencyCombination), module, "AbstractDualFrequencyCombination", 0);
          }

          void t_AbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "class_", make_descriptor(AbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            env->getClass(AbstractDualFrequencyCombination::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "MHZ_TO_HZ", make_descriptor(AbstractDualFrequencyCombination::MHZ_TO_HZ));
          }

          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractDualFrequencyCombination::wrap_Object(AbstractDualFrequencyCombination(((t_AbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateMatrixFunction::class$ = NULL;
      jmethodID *UnivariateMatrixFunction::mids$ = NULL;
      bool UnivariateMatrixFunction::live$ = false;

      jclass UnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_a1f5c9dbe0a195af] = env->getMethodID(cls, "value", "(D)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > UnivariateMatrixFunction::value(jdouble a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_a1f5c9dbe0a195af], a0));
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
      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_UnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateMatrixFunction, t_UnivariateMatrixFunction, UnivariateMatrixFunction);

      void t_UnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateMatrixFunction), &PY_TYPE_DEF(UnivariateMatrixFunction), module, "UnivariateMatrixFunction", 0);
      }

      void t_UnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "class_", make_descriptor(UnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "wrapfn_", make_descriptor(t_UnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateMatrixFunction::wrap_Object(UnivariateMatrixFunction(((t_UnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateMatrixFunction_value(t_UnivariateMatrixFunction *self, PyObject *arg)
      {
        jdouble a0;
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
