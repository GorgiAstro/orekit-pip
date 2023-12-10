#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricGaussIntegrator::mids$ = NULL;
          bool SymmetricGaussIntegrator::live$ = false;

          jclass SymmetricGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_832c28cb3cc4d660] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_integrate_96e94d14952261a3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/UnivariateFunction;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_832c28cb3cc4d660, a0.this$)) {}

          SymmetricGaussIntegrator::SymmetricGaussIntegrator(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::analysis::integration::gauss::GaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

          jdouble SymmetricGaussIntegrator::integrate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_integrate_96e94d14952261a3], a0.this$);
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args);

          static PyMethodDef t_SymmetricGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricGaussIntegrator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::GaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricGaussIntegrator, t_SymmetricGaussIntegrator, SymmetricGaussIntegrator);

          void t_SymmetricGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricGaussIntegrator), &PY_TYPE_DEF(SymmetricGaussIntegrator), module, "SymmetricGaussIntegrator", 0);
          }

          void t_SymmetricGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "class_", make_descriptor(SymmetricGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricGaussIntegrator::wrap_Object(SymmetricGaussIntegrator(((t_SymmetricGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SymmetricGaussIntegrator_init_(t_SymmetricGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                SymmetricGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = SymmetricGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricGaussIntegrator_integrate(t_SymmetricGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SymmetricGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonLOF::class$ = NULL;
      jmethodID *PythonLOF::mids$ = NULL;
      bool PythonLOF::live$ = false;

      jclass PythonLOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonLOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_rotationFromInertial_95b12e29918a648c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_346e8a02c9c839ea] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLOF::PythonLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonLOF::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonLOF::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonLOF::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self);
      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args);
      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data);
      static PyGetSetDef t_PythonLOF__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLOF, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLOF__methods_[] = {
        DECLARE_METHOD(t_PythonLOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLOF, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLOF)[] = {
        { Py_tp_methods, t_PythonLOF__methods_ },
        { Py_tp_init, (void *) t_PythonLOF_init_ },
        { Py_tp_getset, t_PythonLOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLOF, t_PythonLOF, PythonLOF);

      void t_PythonLOF::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLOF), &PY_TYPE_DEF(PythonLOF), module, "PythonLOF", 1);
      }

      void t_PythonLOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "class_", make_descriptor(PythonLOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "wrapfn_", make_descriptor(t_PythonLOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLOF::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonLOF_getName0 },
          { "pythonDecRef", "()V", (void *) t_PythonLOF_pythonDecRef1 },
          { "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonLOF_rotationFromInertial2 },
          { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonLOF_rotationFromInertial3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLOF::initializeClass, 1)))
          return NULL;
        return t_PythonLOF::wrap_Object(PythonLOF(((t_PythonLOF *) arg)->object.this$));
      }
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds)
      {
        PythonLOF object((jobject) NULL);

        INT_CALL(object = PythonLOF());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args)
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

      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_a27fc9afd27e559d]);
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

      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
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

      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data)
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
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField$RoundingMode::class$ = NULL;
      jmethodID *DfpField$RoundingMode::mids$ = NULL;
      bool DfpField$RoundingMode::live$ = false;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_CEIL = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_FLOOR = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_EVEN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_ODD = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_UP = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_UP = NULL;

      jclass DfpField$RoundingMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField$RoundingMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_83ded841db171824] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_values_16b47472f5afd3e2] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/dfp/DfpField$RoundingMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ROUND_CEIL = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_CEIL", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_FLOOR = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_FLOOR", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_EVEN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_EVEN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_ODD = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_ODD", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField$RoundingMode DfpField$RoundingMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DfpField$RoundingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_83ded841db171824], a0.this$));
      }

      JArray< DfpField$RoundingMode > DfpField$RoundingMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DfpField$RoundingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_16b47472f5afd3e2]));
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
      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type);
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data);
      static PyGetSetDef t_DfpField$RoundingMode__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField$RoundingMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField$RoundingMode__methods_[] = {
        DECLARE_METHOD(t_DfpField$RoundingMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_DfpField$RoundingMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField$RoundingMode)[] = {
        { Py_tp_methods, t_DfpField$RoundingMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DfpField$RoundingMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField$RoundingMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DfpField$RoundingMode, t_DfpField$RoundingMode, DfpField$RoundingMode);
      PyObject *t_DfpField$RoundingMode::wrap_Object(const DfpField$RoundingMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DfpField$RoundingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DfpField$RoundingMode::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField$RoundingMode), &PY_TYPE_DEF(DfpField$RoundingMode), module, "DfpField$RoundingMode", 0);
      }

      void t_DfpField$RoundingMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "class_", make_descriptor(DfpField$RoundingMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "wrapfn_", make_descriptor(t_DfpField$RoundingMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField$RoundingMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_CEIL", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_CEIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_FLOOR", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_FLOOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_EVEN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_EVEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_ODD", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_ODD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_UP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_UP)));
      }

      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField$RoundingMode::initializeClass, 1)))
          return NULL;
        return t_DfpField$RoundingMode::wrap_Object(DfpField$RoundingMode(((t_DfpField$RoundingMode *) arg)->object.this$));
      }
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField$RoundingMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DfpField$RoundingMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::valueOf(a0));
          return t_DfpField$RoundingMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type)
      {
        JArray< DfpField$RoundingMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::values());
        return JArray<jobject>(result.this$).wrap(t_DfpField$RoundingMode::wrap_jobject);
      }
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
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
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonAbstractManeuverTriggers::class$ = NULL;
          jmethodID *PythonAbstractManeuverTriggers::mids$ = NULL;
          bool PythonAbstractManeuverTriggers::live$ = false;

          jclass PythonAbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_isFiringOnInitialState_795d7e54d4c58d83] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractManeuverTriggers::PythonAbstractManeuverTriggers() : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonAbstractManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self);
          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonAbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonAbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonAbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(PythonAbstractManeuverTriggers, t_PythonAbstractManeuverTriggers, PythonAbstractManeuverTriggers);

          void t_PythonAbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractManeuverTriggers), &PY_TYPE_DEF(PythonAbstractManeuverTriggers), module, "PythonAbstractManeuverTriggers", 1);
          }

          void t_PythonAbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "class_", make_descriptor(PythonAbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "wrapfn_", make_descriptor(t_PythonAbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getEventDetectors0 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getFieldEventDetectors1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractManeuverTriggers_getParametersDrivers2 },
              { "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z", (void *) t_PythonAbstractManeuverTriggers_isFiringOnInitialState3 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractManeuverTriggers_pythonDecRef4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractManeuverTriggers::wrap_Object(PythonAbstractManeuverTriggers(((t_PythonAbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonAbstractManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "isFiringOnInitialState", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiringOnInitialState", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarD::class$ = NULL;
          jmethodID *CopolarD::mids$ = NULL;
          bool CopolarD::live$ = false;

          jclass CopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_456d9a2f64d6b28d] = env->getMethodID(cls, "cd", "()D");
              mids$[mid_nd_456d9a2f64d6b28d] = env->getMethodID(cls, "nd", "()D");
              mids$[mid_sd_456d9a2f64d6b28d] = env->getMethodID(cls, "sd", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarD::cd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cd_456d9a2f64d6b28d]);
          }

          jdouble CopolarD::nd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_nd_456d9a2f64d6b28d]);
          }

          jdouble CopolarD::sd() const
          {
            return env->callDoubleMethod(this$, mids$[mid_sd_456d9a2f64d6b28d]);
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
          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarD_cd(t_CopolarD *self);
          static PyObject *t_CopolarD_nd(t_CopolarD *self);
          static PyObject *t_CopolarD_sd(t_CopolarD *self);

          static PyMethodDef t_CopolarD__methods_[] = {
            DECLARE_METHOD(t_CopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_CopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarD)[] = {
            { Py_tp_methods, t_CopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarD, t_CopolarD, CopolarD);

          void t_CopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarD), &PY_TYPE_DEF(CopolarD), module, "CopolarD", 0);
          }

          void t_CopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "class_", make_descriptor(CopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "wrapfn_", make_descriptor(t_CopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarD::initializeClass, 1)))
              return NULL;
            return t_CopolarD::wrap_Object(CopolarD(((t_CopolarD *) arg)->object.this$));
          }
          static PyObject *t_CopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarD_cd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_nd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.nd());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarD_sd(t_CopolarD *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.sd());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well44497a.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497a::class$ = NULL;
      jmethodID *Well44497a::mids$ = NULL;
      bool Well44497a::live$ = false;

      jclass Well44497a::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497a");

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

      Well44497a::Well44497a() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well44497a::Well44497a(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well44497a::Well44497a(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well44497a::Well44497a(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well44497a::nextInt() const
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
      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args);

      static PyMethodDef t_Well44497a__methods_[] = {
        DECLARE_METHOD(t_Well44497a, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497a, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497a)[] = {
        { Py_tp_methods, t_Well44497a__methods_ },
        { Py_tp_init, (void *) t_Well44497a_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497a)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497a, t_Well44497a, Well44497a);

      void t_Well44497a::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497a), &PY_TYPE_DEF(Well44497a), module, "Well44497a", 0);
      }

      void t_Well44497a::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "class_", make_descriptor(Well44497a::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "wrapfn_", make_descriptor(t_Well44497a::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497a), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497a_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497a::initializeClass, 1)))
          return NULL;
        return t_Well44497a::wrap_Object(Well44497a(((t_Well44497a *) arg)->object.this$));
      }
      static PyObject *t_Well44497a_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497a::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497a_init_(t_Well44497a *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497a object((jobject) NULL);

            INT_CALL(object = Well44497a());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497a(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497a object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497a(a0));
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

      static PyObject *t_Well44497a_nextInt(t_Well44497a *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497a), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/io/IOException.h"
#include "java/lang/InstantiationException.h"
#include "java/util/Locale.h"
#include "java/util/List.h"
#include "java/util/ResourceBundle.h"
#include "java/lang/IllegalAccessException.h"
#include "java/util/ResourceBundle$Control.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/ClassLoader.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ResourceBundle$Control::class$ = NULL;
    jmethodID *ResourceBundle$Control::mids$ = NULL;
    bool ResourceBundle$Control::live$ = false;
    ::java::util::List *ResourceBundle$Control::FORMAT_CLASS = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_DEFAULT = NULL;
    ::java::util::List *ResourceBundle$Control::FORMAT_PROPERTIES = NULL;
    jlong ResourceBundle$Control::TTL_DONT_CACHE = (jlong) 0;
    jlong ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL = (jlong) 0;

    jclass ResourceBundle$Control::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ResourceBundle$Control");

        mids$ = new jmethodID[max_mid];
        mids$[mid_getCandidateLocales_d6f8f3609cdfccf0] = env->getMethodID(cls, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
        mids$[mid_getControl_a81f6e1a0459dc63] = env->getStaticMethodID(cls, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getFallbackLocale_6238ace714e14692] = env->getMethodID(cls, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
        mids$[mid_getFormats_720e76ad3b86a46a] = env->getMethodID(cls, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
        mids$[mid_getNoFallbackControl_a81f6e1a0459dc63] = env->getStaticMethodID(cls, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
        mids$[mid_getTimeToLive_a864564391643f04] = env->getMethodID(cls, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
        mids$[mid_needsReload_ef511abc02bc1228] = env->getMethodID(cls, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
        mids$[mid_newBundle_155ef0911ce0f838] = env->getMethodID(cls, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
        mids$[mid_toBundleName_094e27372a3ca38c] = env->getMethodID(cls, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
        mids$[mid_toResourceName_01d87ea922ecee51] = env->getMethodID(cls, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FORMAT_CLASS = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_CLASS", "Ljava/util/List;"));
        FORMAT_DEFAULT = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_DEFAULT", "Ljava/util/List;"));
        FORMAT_PROPERTIES = new ::java::util::List(env->getStaticObjectField(cls, "FORMAT_PROPERTIES", "Ljava/util/List;"));
        TTL_DONT_CACHE = env->getStaticLongField(cls, "TTL_DONT_CACHE");
        TTL_NO_EXPIRATION_CONTROL = env->getStaticLongField(cls, "TTL_NO_EXPIRATION_CONTROL");
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List ResourceBundle$Control::getCandidateLocales(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCandidateLocales_d6f8f3609cdfccf0], a0.this$, a1.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getControl_a81f6e1a0459dc63], a0.this$));
    }

    ::java::util::Locale ResourceBundle$Control::getFallbackLocale(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::util::Locale(env->callObjectMethod(this$, mids$[mid_getFallbackLocale_6238ace714e14692], a0.this$, a1.this$));
    }

    ::java::util::List ResourceBundle$Control::getFormats(const ::java::lang::String & a0) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFormats_720e76ad3b86a46a], a0.this$));
    }

    ResourceBundle$Control ResourceBundle$Control::getNoFallbackControl(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ResourceBundle$Control(env->callStaticObjectMethod(cls, mids$[mid_getNoFallbackControl_a81f6e1a0459dc63], a0.this$));
    }

    jlong ResourceBundle$Control::getTimeToLive(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return env->callLongMethod(this$, mids$[mid_getTimeToLive_a864564391643f04], a0.this$, a1.this$);
    }

    jboolean ResourceBundle$Control::needsReload(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, const ::java::util::ResourceBundle & a4, jlong a5) const
    {
      return env->callBooleanMethod(this$, mids$[mid_needsReload_ef511abc02bc1228], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5);
    }

    ::java::util::ResourceBundle ResourceBundle$Control::newBundle(const ::java::lang::String & a0, const ::java::util::Locale & a1, const ::java::lang::String & a2, const ::java::lang::ClassLoader & a3, jboolean a4) const
    {
      return ::java::util::ResourceBundle(env->callObjectMethod(this$, mids$[mid_newBundle_155ef0911ce0f838], a0.this$, a1.this$, a2.this$, a3.this$, a4));
    }

    ::java::lang::String ResourceBundle$Control::toBundleName(const ::java::lang::String & a0, const ::java::util::Locale & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toBundleName_094e27372a3ca38c], a0.this$, a1.this$));
    }

    ::java::lang::String ResourceBundle$Control::toResourceName(const ::java::lang::String & a0, const ::java::lang::String & a1) const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toResourceName_01d87ea922ecee51], a0.this$, a1.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args);
    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args);

    static PyMethodDef t_ResourceBundle$Control__methods_[] = {
      DECLARE_METHOD(t_ResourceBundle$Control, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getCandidateLocales, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFallbackLocale, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, getFormats, METH_O),
      DECLARE_METHOD(t_ResourceBundle$Control, getNoFallbackControl, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ResourceBundle$Control, getTimeToLive, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, needsReload, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, newBundle, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toBundleName, METH_VARARGS),
      DECLARE_METHOD(t_ResourceBundle$Control, toResourceName, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ResourceBundle$Control)[] = {
      { Py_tp_methods, t_ResourceBundle$Control__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ResourceBundle$Control)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(ResourceBundle$Control, t_ResourceBundle$Control, ResourceBundle$Control);

    void t_ResourceBundle$Control::install(PyObject *module)
    {
      installType(&PY_TYPE(ResourceBundle$Control), &PY_TYPE_DEF(ResourceBundle$Control), module, "ResourceBundle$Control", 0);
    }

    void t_ResourceBundle$Control::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "class_", make_descriptor(ResourceBundle$Control::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "wrapfn_", make_descriptor(t_ResourceBundle$Control::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "boxfn_", make_descriptor(boxObject));
      env->getClass(ResourceBundle$Control::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_CLASS", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_CLASS)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_DEFAULT", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_DEFAULT)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "FORMAT_PROPERTIES", make_descriptor(::java::util::t_List::wrap_Object(*ResourceBundle$Control::FORMAT_PROPERTIES)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_DONT_CACHE", make_descriptor(ResourceBundle$Control::TTL_DONT_CACHE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ResourceBundle$Control), "TTL_NO_EXPIRATION_CONTROL", make_descriptor(ResourceBundle$Control::TTL_NO_EXPIRATION_CONTROL));
    }

    static PyObject *t_ResourceBundle$Control_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ResourceBundle$Control::initializeClass, 1)))
        return NULL;
      return t_ResourceBundle$Control::wrap_Object(ResourceBundle$Control(((t_ResourceBundle$Control *) arg)->object.this$));
    }
    static PyObject *t_ResourceBundle$Control_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ResourceBundle$Control::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ResourceBundle$Control_getCandidateLocales(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getCandidateLocales(a0, a1));
        return ::java::util::t_List::wrap_Object(result, ::java::util::PY_TYPE(Locale));
      }

      PyErr_SetArgsError((PyObject *) self, "getCandidateLocales", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFallbackLocale(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::util::Locale result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getFallbackLocale(a0, a1));
        return ::java::util::t_Locale::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "getFallbackLocale", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getFormats(t_ResourceBundle$Control *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = self->object.getFormats(a0));
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      PyErr_SetArgsError((PyObject *) self, "getFormats", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getNoFallbackControl(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ResourceBundle$Control result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::ResourceBundle$Control::getNoFallbackControl(a0));
        return t_ResourceBundle$Control::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "getNoFallbackControl", arg);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_getTimeToLive(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      jlong result;

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.getTimeToLive(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "getTimeToLive", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_needsReload(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      ::java::util::ResourceBundle a4((jobject) NULL);
      jlong a5;
      jboolean result;

      if (!parseArgs(args, "skskkJ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, ::java::util::ResourceBundle::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
      {
        OBJ_CALL(result = self->object.needsReload(a0, a1, a2, a3, a4, a5));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "needsReload", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_newBundle(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String a2((jobject) NULL);
      ::java::lang::ClassLoader a3((jobject) NULL);
      jboolean a4;
      ::java::util::ResourceBundle result((jobject) NULL);

      if (!parseArgs(args, "skskZ", ::java::util::Locale::initializeClass, ::java::lang::ClassLoader::initializeClass, &a0, &a1, &a2, &a3, &a4))
      {
        OBJ_CALL(result = self->object.newBundle(a0, a1, a2, a3, a4));
        return ::java::util::t_ResourceBundle::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newBundle", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toBundleName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::util::Locale a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
      {
        OBJ_CALL(result = self->object.toBundleName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toBundleName", args);
      return NULL;
    }

    static PyObject *t_ResourceBundle$Control_toResourceName(t_ResourceBundle$Control *self, PyObject *args)
    {
      ::java::lang::String a0((jobject) NULL);
      ::java::lang::String a1((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "ss", &a0, &a1))
      {
        OBJ_CALL(result = self->object.toResourceName(a0, a1));
        return j2p(result);
      }

      PyErr_SetArgsError((PyObject *) self, "toResourceName", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConfigurableLowThrustManeuver::class$ = NULL;
        jmethodID *ConfigurableLowThrustManeuver::mids$ = NULL;
        bool ConfigurableLowThrustManeuver::live$ = false;

        jclass ConfigurableLowThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_00ba12d1782ad211] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;DD)V");
            mids$[mid_getIsp_456d9a2f64d6b28d] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_e912d21057defe63] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustDirectionProvider_06b368b722325f57] = env->getMethodID(cls, "getThrustDirectionProvider", "()Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
            mids$[mid_getThrustMagnitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_e912d21057defe63] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfigurableLowThrustManeuver::ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, jdouble a2, jdouble a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_00ba12d1782ad211, a0.this$, a1.this$, a2, a3)) {}

        jdouble ConfigurableLowThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_456d9a2f64d6b28d]);
        }

        jdouble ConfigurableLowThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_e912d21057defe63], a0.this$);
        }

        ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider ConfigurableLowThrustManeuver::getThrustDirectionProvider() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getThrustDirectionProvider_06b368b722325f57]));
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_456d9a2f64d6b28d]);
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_e912d21057defe63], a0.this$);
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
        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyGetSetDef t_ConfigurableLowThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustDirectionProvider),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustMagnitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfigurableLowThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustDirectionProvider, METH_NOARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustMagnitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfigurableLowThrustManeuver)[] = {
          { Py_tp_methods, t_ConfigurableLowThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConfigurableLowThrustManeuver_init_ },
          { Py_tp_getset, t_ConfigurableLowThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfigurableLowThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConfigurableLowThrustManeuver, t_ConfigurableLowThrustManeuver, ConfigurableLowThrustManeuver);

        void t_ConfigurableLowThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfigurableLowThrustManeuver), &PY_TYPE_DEF(ConfigurableLowThrustManeuver), module, "ConfigurableLowThrustManeuver", 0);
        }

        void t_ConfigurableLowThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "class_", make_descriptor(ConfigurableLowThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "wrapfn_", make_descriptor(t_ConfigurableLowThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConfigurableLowThrustManeuver::wrap_Object(ConfigurableLowThrustManeuver(((t_ConfigurableLowThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          ConfigurableLowThrustManeuver object((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = ConfigurableLowThrustManeuver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/linear/LinearEvolution.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace linear {

          ::java::lang::Class *LinearEvolution::class$ = NULL;
          jmethodID *LinearEvolution::mids$ = NULL;
          bool LinearEvolution::live$ = false;

          jclass LinearEvolution::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/linear/LinearEvolution");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_402b66b81e5a8616] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCommand_6d9adf1d5b463928] = env->getMethodID(cls, "getCommand", "()Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getControlMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getControlMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearEvolution::LinearEvolution(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_402b66b81e5a8616, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::hipparchus::linear::RealVector LinearEvolution::getCommand() const
          {
            return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCommand_6d9adf1d5b463928]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getControlMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getControlMatrix_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getMeasurementJacobian() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix LinearEvolution::getStateTransitionMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_7116bbecdd8ceb21]));
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
        namespace linear {
          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self);
          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data);
          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data);
          static PyGetSetDef t_LinearEvolution__fields_[] = {
            DECLARE_GET_FIELD(t_LinearEvolution, command),
            DECLARE_GET_FIELD(t_LinearEvolution, controlMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, measurementJacobian),
            DECLARE_GET_FIELD(t_LinearEvolution, processNoiseMatrix),
            DECLARE_GET_FIELD(t_LinearEvolution, stateTransitionMatrix),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_LinearEvolution__methods_[] = {
            DECLARE_METHOD(t_LinearEvolution, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LinearEvolution, getCommand, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getControlMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getMeasurementJacobian, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getProcessNoiseMatrix, METH_NOARGS),
            DECLARE_METHOD(t_LinearEvolution, getStateTransitionMatrix, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LinearEvolution)[] = {
            { Py_tp_methods, t_LinearEvolution__methods_ },
            { Py_tp_init, (void *) t_LinearEvolution_init_ },
            { Py_tp_getset, t_LinearEvolution__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LinearEvolution)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LinearEvolution, t_LinearEvolution, LinearEvolution);

          void t_LinearEvolution::install(PyObject *module)
          {
            installType(&PY_TYPE(LinearEvolution), &PY_TYPE_DEF(LinearEvolution), module, "LinearEvolution", 0);
          }

          void t_LinearEvolution::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "class_", make_descriptor(LinearEvolution::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "wrapfn_", make_descriptor(t_LinearEvolution::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LinearEvolution), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LinearEvolution_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LinearEvolution::initializeClass, 1)))
              return NULL;
            return t_LinearEvolution::wrap_Object(LinearEvolution(((t_LinearEvolution *) arg)->object.this$));
          }
          static PyObject *t_LinearEvolution_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LinearEvolution::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LinearEvolution_init_(t_LinearEvolution *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
            LinearEvolution object((jobject) NULL);

            if (!parseArgs(args, "kkkkk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = LinearEvolution(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_LinearEvolution_getCommand(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealVector result((jobject) NULL);
            OBJ_CALL(result = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getControlMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getMeasurementJacobian(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getProcessNoiseMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_getStateTransitionMatrix(t_LinearEvolution *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_LinearEvolution_get__command(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealVector value((jobject) NULL);
            OBJ_CALL(value = self->object.getCommand());
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__controlMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getControlMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__measurementJacobian(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementJacobian());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__processNoiseMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getProcessNoiseMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_LinearEvolution_get__stateTransitionMatrix(t_LinearEvolution *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getStateTransitionMatrix());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/WeightedObservedPoint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *HarmonicCurveFitter$ParameterGuesser::class$ = NULL;
      jmethodID *HarmonicCurveFitter$ParameterGuesser::mids$ = NULL;
      bool HarmonicCurveFitter$ParameterGuesser::live$ = false;

      jclass HarmonicCurveFitter$ParameterGuesser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/HarmonicCurveFitter$ParameterGuesser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
          mids$[mid_guess_7cdc325af0834901] = env->getMethodID(cls, "guess", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HarmonicCurveFitter$ParameterGuesser::HarmonicCurveFitter$ParameterGuesser(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

      JArray< jdouble > HarmonicCurveFitter$ParameterGuesser::guess() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_guess_7cdc325af0834901]));
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
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self);

      static PyMethodDef t_HarmonicCurveFitter$ParameterGuesser__methods_[] = {
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HarmonicCurveFitter$ParameterGuesser, guess, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HarmonicCurveFitter$ParameterGuesser)[] = {
        { Py_tp_methods, t_HarmonicCurveFitter$ParameterGuesser__methods_ },
        { Py_tp_init, (void *) t_HarmonicCurveFitter$ParameterGuesser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HarmonicCurveFitter$ParameterGuesser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HarmonicCurveFitter$ParameterGuesser, t_HarmonicCurveFitter$ParameterGuesser, HarmonicCurveFitter$ParameterGuesser);

      void t_HarmonicCurveFitter$ParameterGuesser::install(PyObject *module)
      {
        installType(&PY_TYPE(HarmonicCurveFitter$ParameterGuesser), &PY_TYPE_DEF(HarmonicCurveFitter$ParameterGuesser), module, "HarmonicCurveFitter$ParameterGuesser", 0);
      }

      void t_HarmonicCurveFitter$ParameterGuesser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "class_", make_descriptor(HarmonicCurveFitter$ParameterGuesser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "wrapfn_", make_descriptor(t_HarmonicCurveFitter$ParameterGuesser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicCurveFitter$ParameterGuesser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 1)))
          return NULL;
        return t_HarmonicCurveFitter$ParameterGuesser::wrap_Object(HarmonicCurveFitter$ParameterGuesser(((t_HarmonicCurveFitter$ParameterGuesser *) arg)->object.this$));
      }
      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HarmonicCurveFitter$ParameterGuesser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HarmonicCurveFitter$ParameterGuesser_init_(t_HarmonicCurveFitter$ParameterGuesser *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::Collection a0((jobject) NULL);
        PyTypeObject **p0;
        HarmonicCurveFitter$ParameterGuesser object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
        {
          INT_CALL(object = HarmonicCurveFitter$ParameterGuesser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HarmonicCurveFitter$ParameterGuesser_guess(t_HarmonicCurveFitter$ParameterGuesser *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.guess());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/MultistepIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepIntegrator::class$ = NULL;
      jmethodID *MultistepIntegrator::mids$ = NULL;
      bool MultistepIntegrator::live$ = false;

      jclass MultistepIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_f2f64475e4580546] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_456d9a2f64d6b28d] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_8d1d211a59943275] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
          mids$[mid_setMaxGrowth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_8b1272a4b400cfb6] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_3307b1e87a2ed966] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_rescale_77e0f9a1f260e2e5] = env->getMethodID(cls, "rescale", "(D)V");
          mids$[mid_computeStepGrowShrinkFactor_0ba5fed9597b693e] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_start_283940df19049d89] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_456d9a2f64d6b28d]);
      }

      jdouble MultistepIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_456d9a2f64d6b28d]);
      }

      jint MultistepIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_f2f64475e4580546]);
      }

      jdouble MultistepIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::ode::ODEIntegrator MultistepIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::ODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_8d1d211a59943275]));
      }

      void MultistepIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_77e0f9a1f260e2e5], a0);
      }

      void MultistepIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_77e0f9a1f260e2e5], a0);
      }

      void MultistepIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_77e0f9a1f260e2e5], a0);
      }

      void MultistepIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_8b1272a4b400cfb6], a0.this$);
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
      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data);
      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyGetSetDef t_MultistepIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, starterIntegrator),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepIntegrator)[] = {
        { Py_tp_methods, t_MultistepIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepIntegrator, t_MultistepIntegrator, MultistepIntegrator);

      void t_MultistepIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepIntegrator), &PY_TYPE_DEF(MultistepIntegrator), module, "MultistepIntegrator", 0);
      }

      void t_MultistepIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "class_", make_descriptor(MultistepIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "wrapfn_", make_descriptor(t_MultistepIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepIntegrator::wrap_Object(MultistepIntegrator(((t_MultistepIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self)
      {
        ::org::hipparchus::ode::ODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(result);
      }

      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &value))
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
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
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
              mids$[mid_init$_f0f36dfd3c952abf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_components_4a363a7423fa6ac8] = env->getMethodID(cls, "components", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateTimeComponents;");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeScale_63ac10047983bd43] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_offset_e912d21057defe63] = env->getMethodID(cls, "offset", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_parse_a7e270765e35aadf] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeConverter::TimeConverter(const ::org::orekit::time::TimeScale & a0, const ::org::orekit::time::AbsoluteDate & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f0f36dfd3c952abf, a0.this$, a1.this$)) {}

          ::org::orekit::time::DateTimeComponents TimeConverter::components(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::time::DateTimeComponents(env->callObjectMethod(this$, mids$[mid_components_4a363a7423fa6ac8], a0.this$));
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
          }

          ::org::orekit::time::TimeScale TimeConverter::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_63ac10047983bd43]));
          }

          jdouble TimeConverter::offset(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_e912d21057defe63], a0.this$);
          }

          ::org::orekit::time::AbsoluteDate TimeConverter::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_parse_a7e270765e35aadf], a0.this$));
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
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/raster/UpdatableTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TileUpdater::class$ = NULL;
        jmethodID *TileUpdater::mids$ = NULL;
        bool TileUpdater::live$ = false;

        jclass TileUpdater::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TileUpdater");

            mids$ = new jmethodID[max_mid];
            mids$[mid_updateTile_76542305a171ddb6] = env->getMethodID(cls, "updateTile", "(DDLorg/orekit/rugged/raster/UpdatableTile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TileUpdater::updateTile(jdouble a0, jdouble a1, const ::org::orekit::rugged::raster::UpdatableTile & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateTile_76542305a171ddb6], a0, a1, a2.this$);
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
      namespace raster {
        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args);

        static PyMethodDef t_TileUpdater__methods_[] = {
          DECLARE_METHOD(t_TileUpdater, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TileUpdater, updateTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TileUpdater)[] = {
          { Py_tp_methods, t_TileUpdater__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TileUpdater)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TileUpdater, t_TileUpdater, TileUpdater);

        void t_TileUpdater::install(PyObject *module)
        {
          installType(&PY_TYPE(TileUpdater), &PY_TYPE_DEF(TileUpdater), module, "TileUpdater", 0);
        }

        void t_TileUpdater::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "class_", make_descriptor(TileUpdater::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "wrapfn_", make_descriptor(t_TileUpdater::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TileUpdater), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TileUpdater_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TileUpdater::initializeClass, 1)))
            return NULL;
          return t_TileUpdater::wrap_Object(TileUpdater(((t_TileUpdater *) arg)->object.this$));
        }
        static PyObject *t_TileUpdater_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TileUpdater::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TileUpdater_updateTile(t_TileUpdater *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::UpdatableTile a2((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::rugged::raster::UpdatableTile::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateTile(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateTile", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool FieldAbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2844b958be24763f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8ee7bc978fec63e6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_237181d932324188] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_950edaaab1d71d10] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2844b958be24763f, a0, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinatesHermiteInterpolator::FieldAbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8ee7bc978fec63e6, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldAbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_237181d932324188]));
      }

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_c8fe21bcdac65bf6]));
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
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator, t_FieldAbsolutePVCoordinatesHermiteInterpolator, FieldAbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const FieldAbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinatesHermiteInterpolator *self = (t_FieldAbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(FieldAbsolutePVCoordinatesHermiteInterpolator), module, "FieldAbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_FieldAbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinatesHermiteInterpolator::wrap_Object(FieldAbsolutePVCoordinatesHermiteInterpolator(((t_FieldAbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_of_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinatesHermiteInterpolator_init_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getFilter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__filter(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_FieldAbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTrackingCoordinates::class$ = NULL;
      jmethodID *FieldTrackingCoordinates::mids$ = NULL;
      bool FieldTrackingCoordinates::live$ = false;

      jclass FieldTrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5b191078c5a85105] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getAzimuth_e6d4d3215c30992a] = env->getMethodID(cls, "getAzimuth", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_e6d4d3215c30992a] = env->getMethodID(cls, "getElevation", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_e6d4d3215c30992a] = env->getMethodID(cls, "getRange", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTrackingCoordinates::FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b191078c5a85105, a0.this$, a1.this$, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getAzimuth() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getElevation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getRange() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_e6d4d3215c30992a]));
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
      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args);
      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data);
      static PyGetSetDef t_FieldTrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, range),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldTrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTrackingCoordinates)[] = {
        { Py_tp_methods, t_FieldTrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldTrackingCoordinates_init_ },
        { Py_tp_getset, t_FieldTrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTrackingCoordinates, t_FieldTrackingCoordinates, FieldTrackingCoordinates);
      PyObject *t_FieldTrackingCoordinates::wrap_Object(const FieldTrackingCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTrackingCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTrackingCoordinates), &PY_TYPE_DEF(FieldTrackingCoordinates), module, "FieldTrackingCoordinates", 0);
      }

      void t_FieldTrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "class_", make_descriptor(FieldTrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "wrapfn_", make_descriptor(t_FieldTrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldTrackingCoordinates::wrap_Object(FieldTrackingCoordinates(((t_FieldTrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldTrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAzimuth());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRange());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAzimuth());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRange());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Exception.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Exception::class$ = NULL;
    jmethodID *Exception::mids$ = NULL;
    bool Exception::live$ = false;

    jclass Exception::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Exception");

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

    Exception::Exception() : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    Exception::Exception(const ::java::lang::String & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Exception::Exception(const ::java::lang::Throwable & a0) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_ea7f4d04e27238a7, a0.this$)) {}

    Exception::Exception(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Throwable(env->newObject(initializeClass, &mids$, mid_init$_fd4c96defa578a22, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_Exception__methods_[] = {
      DECLARE_METHOD(t_Exception, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Exception, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Exception)[] = {
      { Py_tp_methods, t_Exception__methods_ },
      { Py_tp_init, (void *) t_Exception_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Exception)[] = {
      &PY_TYPE_DEF(::java::lang::Throwable),
      NULL
    };

    DEFINE_TYPE(Exception, t_Exception, Exception);

    void t_Exception::install(PyObject *module)
    {
      installType(&PY_TYPE(Exception), &PY_TYPE_DEF(Exception), module, "Exception", 0);
    }

    void t_Exception::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "class_", make_descriptor(Exception::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "wrapfn_", make_descriptor(t_Exception::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Exception), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Exception_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Exception::initializeClass, 1)))
        return NULL;
      return t_Exception::wrap_Object(Exception(((t_Exception *) arg)->object.this$));
    }
    static PyObject *t_Exception_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Exception::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Exception_init_(t_Exception *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Exception object((jobject) NULL);

          INT_CALL(object = Exception());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = Exception(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          Exception object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = Exception(a0, a1));
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
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *BinomialDistribution::class$ = NULL;
        jmethodID *BinomialDistribution::mids$ = NULL;
        bool BinomialDistribution::live$ = false;

        jclass BinomialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/BinomialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_987a5fb872043b12] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfTrials_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfTrials", "()I");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialDistribution::BinomialDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_987a5fb872043b12, a0, a1)) {}

        jdouble BinomialDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jint BinomialDistribution::getNumberOfTrials() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfTrials_f2f64475e4580546]);
        }

        jdouble BinomialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble BinomialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble BinomialDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_456d9a2f64d6b28d]);
        }

        jint BinomialDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint BinomialDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean BinomialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble BinomialDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble BinomialDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
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
        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data);
        static PyGetSetDef t_BinomialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BinomialDistribution, numberOfTrials),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BinomialDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BinomialDistribution__methods_[] = {
          DECLARE_METHOD(t_BinomialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumberOfTrials, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialDistribution)[] = {
          { Py_tp_methods, t_BinomialDistribution__methods_ },
          { Py_tp_init, (void *) t_BinomialDistribution_init_ },
          { Py_tp_getset, t_BinomialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(BinomialDistribution, t_BinomialDistribution, BinomialDistribution);

        void t_BinomialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialDistribution), &PY_TYPE_DEF(BinomialDistribution), module, "BinomialDistribution", 0);
        }

        void t_BinomialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "class_", make_descriptor(BinomialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "wrapfn_", make_descriptor(t_BinomialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialDistribution::initializeClass, 1)))
            return NULL;
          return t_BinomialDistribution::wrap_Object(BinomialDistribution(((t_BinomialDistribution *) arg)->object.this$));
        }
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          BinomialDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = BinomialDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data)
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
#include "org/orekit/gnss/DOP.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOP::class$ = NULL;
      jmethodID *DOP::mids$ = NULL;
      bool DOP::live$ = false;

      jclass DOP::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOP");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c39c0edb2fdf00ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;IDDDDD)V");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getGdop", "()D");
          mids$[mid_getGnssNb_f2f64475e4580546] = env->getMethodID(cls, "getGnssNb", "()I");
          mids$[mid_getHdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getHdop", "()D");
          mids$[mid_getLocation_fabc97b1aefe5844] = env->getMethodID(cls, "getLocation", "()Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getPdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getPdop", "()D");
          mids$[mid_getTdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getTdop", "()D");
          mids$[mid_getVdop_456d9a2f64d6b28d] = env->getMethodID(cls, "getVdop", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DOP::DOP(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c39c0edb2fdf00ae, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

      ::org::orekit::time::AbsoluteDate DOP::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble DOP::getGdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGdop_456d9a2f64d6b28d]);
      }

      jint DOP::getGnssNb() const
      {
        return env->callIntMethod(this$, mids$[mid_getGnssNb_f2f64475e4580546]);
      }

      jdouble DOP::getHdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHdop_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::GeodeticPoint DOP::getLocation() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getLocation_fabc97b1aefe5844]));
      }

      jdouble DOP::getPdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPdop_456d9a2f64d6b28d]);
      }

      jdouble DOP::getTdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTdop_456d9a2f64d6b28d]);
      }

      jdouble DOP::getVdop() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getVdop_456d9a2f64d6b28d]);
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
      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DOP_getDate(t_DOP *self);
      static PyObject *t_DOP_getGdop(t_DOP *self);
      static PyObject *t_DOP_getGnssNb(t_DOP *self);
      static PyObject *t_DOP_getHdop(t_DOP *self);
      static PyObject *t_DOP_getLocation(t_DOP *self);
      static PyObject *t_DOP_getPdop(t_DOP *self);
      static PyObject *t_DOP_getTdop(t_DOP *self);
      static PyObject *t_DOP_getVdop(t_DOP *self);
      static PyObject *t_DOP_get__date(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data);
      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__location(t_DOP *self, void *data);
      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data);
      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data);
      static PyGetSetDef t_DOP__fields_[] = {
        DECLARE_GET_FIELD(t_DOP, date),
        DECLARE_GET_FIELD(t_DOP, gdop),
        DECLARE_GET_FIELD(t_DOP, gnssNb),
        DECLARE_GET_FIELD(t_DOP, hdop),
        DECLARE_GET_FIELD(t_DOP, location),
        DECLARE_GET_FIELD(t_DOP, pdop),
        DECLARE_GET_FIELD(t_DOP, tdop),
        DECLARE_GET_FIELD(t_DOP, vdop),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOP__methods_[] = {
        DECLARE_METHOD(t_DOP, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOP, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getGnssNb, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getHdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getLocation, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getPdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getTdop, METH_NOARGS),
        DECLARE_METHOD(t_DOP, getVdop, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOP)[] = {
        { Py_tp_methods, t_DOP__methods_ },
        { Py_tp_init, (void *) t_DOP_init_ },
        { Py_tp_getset, t_DOP__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOP)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOP, t_DOP, DOP);

      void t_DOP::install(PyObject *module)
      {
        installType(&PY_TYPE(DOP), &PY_TYPE_DEF(DOP), module, "DOP", 0);
      }

      void t_DOP::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "class_", make_descriptor(DOP::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "wrapfn_", make_descriptor(t_DOP::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOP), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DOP_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOP::initializeClass, 1)))
          return NULL;
        return t_DOP::wrap_Object(DOP(((t_DOP *) arg)->object.this$));
      }
      static PyObject *t_DOP_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOP::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DOP_init_(t_DOP *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jint a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        DOP object((jobject) NULL);

        if (!parseArgs(args, "kkIDDDDD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
        {
          INT_CALL(object = DOP(a0, a1, a2, a3, a4, a5, a6, a7));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DOP_getDate(t_DOP *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DOP_getGdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getGnssNb(t_DOP *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getGnssNb());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DOP_getHdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getLocation(t_DOP *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_DOP_getPdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getPdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getTdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_getVdop(t_DOP *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getVdop());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOP_get__date(t_DOP *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DOP_get__gdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__gnssNb(t_DOP *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getGnssNb());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DOP_get__hdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__location(t_DOP *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocation());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }

      static PyObject *t_DOP_get__pdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getPdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__tdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTdop());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DOP_get__vdop(t_DOP *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getVdop());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringListConsumer::class$ = NULL;
            jmethodID *ParseToken$StringListConsumer::mids$ = NULL;
            bool ParseToken$StringListConsumer::live$ = false;

            jclass ParseToken$StringListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_65de9727799c5641] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_65de9727799c5641], a0.this$);
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
            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringListConsumer, t_ParseToken$StringListConsumer, ParseToken$StringListConsumer);

            void t_ParseToken$StringListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringListConsumer), &PY_TYPE_DEF(ParseToken$StringListConsumer), module, "ParseToken$StringListConsumer", 0);
            }

            void t_ParseToken$StringListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "class_", make_descriptor(ParseToken$StringListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringListConsumer::wrap_Object(ParseToken$StringListConsumer(((t_ParseToken$StringListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringListConsumer_accept(t_ParseToken$StringListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
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
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TorqueFree::class$ = NULL;
      jmethodID *TorqueFree::mids$ = NULL;
      bool TorqueFree::live$ = false;

      jclass TorqueFree::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TorqueFree");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5e90c783355f621f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;Lorg/orekit/attitudes/Inertia;)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getInertia_3602ee5088404a9b] = env->getMethodID(cls, "getInertia", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_getInitialAttitude_78dca83e076ede35] = env->getMethodID(cls, "getInitialAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TorqueFree::TorqueFree(const ::org::orekit::attitudes::Attitude & a0, const ::org::orekit::attitudes::Inertia & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e90c783355f621f, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude TorqueFree::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude TorqueFree::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Inertia TorqueFree::getInertia() const
      {
        return ::org::orekit::attitudes::Inertia(env->callObjectMethod(this$, mids$[mid_getInertia_3602ee5088404a9b]));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getInitialAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getInitialAttitude_78dca83e076ede35]));
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
      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args);
      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self);
      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self);
      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data);
      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data);
      static PyGetSetDef t_TorqueFree__fields_[] = {
        DECLARE_GET_FIELD(t_TorqueFree, inertia),
        DECLARE_GET_FIELD(t_TorqueFree, initialAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TorqueFree__methods_[] = {
        DECLARE_METHOD(t_TorqueFree, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TorqueFree, getInertia, METH_NOARGS),
        DECLARE_METHOD(t_TorqueFree, getInitialAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TorqueFree)[] = {
        { Py_tp_methods, t_TorqueFree__methods_ },
        { Py_tp_init, (void *) t_TorqueFree_init_ },
        { Py_tp_getset, t_TorqueFree__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TorqueFree)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TorqueFree, t_TorqueFree, TorqueFree);

      void t_TorqueFree::install(PyObject *module)
      {
        installType(&PY_TYPE(TorqueFree), &PY_TYPE_DEF(TorqueFree), module, "TorqueFree", 0);
      }

      void t_TorqueFree::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "class_", make_descriptor(TorqueFree::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "wrapfn_", make_descriptor(t_TorqueFree::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TorqueFree::initializeClass, 1)))
          return NULL;
        return t_TorqueFree::wrap_Object(TorqueFree(((t_TorqueFree *) arg)->object.this$));
      }
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TorqueFree::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        ::org::orekit::attitudes::Inertia a1((jobject) NULL);
        TorqueFree object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::attitudes::Inertia::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TorqueFree(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args)
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

      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Inertia value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(value);
      }

      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/RungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
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
            mids$[mid_getDefaultStep_e6d4d3215c30992a] = env->getMethodID(cls, "getDefaultStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_668e072c435ebb6b] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_singleStep_304eba4bc698c756] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_5a12ffbd2c0d2689] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_fraction_3e44951e1cc3e6e3] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement RungeKuttaFieldIntegrator::getDefaultStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDefaultStep_e6d4d3215c30992a]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative RungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_668e072c435ebb6b], a0.this$, a1.this$, a2.this$));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > RungeKuttaFieldIntegrator::singleStep(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_singleStep_304eba4bc698c756], a0.this$, a1.this$, a2.this$, a3.this$));
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
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckFieldTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckFieldTransformer::mids$ = NULL;
        bool AdamsNordsieckFieldTransformer::live$ = false;

        jclass AdamsNordsieckFieldTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_e0757bc2387b5b44] = env->getStaticMethodID(cls, "getInstance", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckFieldTransformer;");
            mids$[mid_initializeHighOrderDerivatives_306bab15a17e087f] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_ca86c76185a43b52] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_094bd675aa407249] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckFieldTransformer AdamsNordsieckFieldTransformer::getInstance(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckFieldTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_e0757bc2387b5b44], a0.this$, a1));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::initializeHighOrderDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_306bab15a17e087f], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_ca86c76185a43b52], a0.this$));
        }

        void AdamsNordsieckFieldTransformer::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_094bd675aa407249], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data);
        static PyGetSetDef t_AdamsNordsieckFieldTransformer__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsNordsieckFieldTransformer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsNordsieckFieldTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, getInstance, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckFieldTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckFieldTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckFieldTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AdamsNordsieckFieldTransformer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckFieldTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckFieldTransformer, t_AdamsNordsieckFieldTransformer, AdamsNordsieckFieldTransformer);
        PyObject *t_AdamsNordsieckFieldTransformer::wrap_Object(const AdamsNordsieckFieldTransformer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsNordsieckFieldTransformer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsNordsieckFieldTransformer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsNordsieckFieldTransformer *self = (t_AdamsNordsieckFieldTransformer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsNordsieckFieldTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckFieldTransformer), &PY_TYPE_DEF(AdamsNordsieckFieldTransformer), module, "AdamsNordsieckFieldTransformer", 0);
        }

        void t_AdamsNordsieckFieldTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "class_", make_descriptor(AdamsNordsieckFieldTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckFieldTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckFieldTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckFieldTransformer::wrap_Object(AdamsNordsieckFieldTransformer(((t_AdamsNordsieckFieldTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckFieldTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckFieldTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_of_(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_getInstance(PyTypeObject *type, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          AdamsNordsieckFieldTransformer result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckFieldTransformer::getInstance(a0, a1));
            return t_AdamsNordsieckFieldTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArgs(args, "K[K[[K[[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckFieldTransformer *self, PyObject *arg)
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

        static PyObject *t_AdamsNordsieckFieldTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckFieldTransformer *self, PyObject *args)
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
        static PyObject *t_AdamsNordsieckFieldTransformer_get__parameters_(t_AdamsNordsieckFieldTransformer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateJacobian.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateJacobian::class$ = NULL;
      jmethodID *StateJacobian::mids$ = NULL;
      bool StateJacobian::live$ = false;

      jclass StateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_2f2af053a5858dd9] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > StateJacobian::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_value_2f2af053a5858dd9], a0.this$));
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
      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg);

      static PyMethodDef t_StateJacobian__methods_[] = {
        DECLARE_METHOD(t_StateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateJacobian, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateJacobian)[] = {
        { Py_tp_methods, t_StateJacobian__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateJacobian, t_StateJacobian, StateJacobian);

      void t_StateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(StateJacobian), &PY_TYPE_DEF(StateJacobian), module, "StateJacobian", 0);
      }

      void t_StateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "class_", make_descriptor(StateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "wrapfn_", make_descriptor(t_StateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateJacobian), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateJacobian::initializeClass, 1)))
          return NULL;
        return t_StateJacobian::wrap_Object(StateJacobian(((t_StateJacobian *) arg)->object.this$));
      }
      static PyObject *t_StateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateJacobian_value(t_StateJacobian *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/YawSteering.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawSteering::class$ = NULL;
      jmethodID *YawSteering::mids$ = NULL;
      bool YawSteering::live$ = false;

      jclass YawSteering::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawSteering");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2aaf2e11b5dbdf5a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_5341a8481841f90c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_455b5c75f9292826] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_5341a8481841f90c] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_455b5c75f9292826] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_ab0341569f219f18] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_99b96e260ceb5fe3] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawSteering::YawSteering(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_2aaf2e11b5dbdf5a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::Attitude YawSteering::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawSteering::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_5341a8481841f90c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawSteering::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_455b5c75f9292826], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ab0341569f219f18], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawSteering::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_99b96e260ceb5fe3], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawSteering::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_5cce95036ae870ba]));
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
      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args);
      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self);
      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data);
      static PyGetSetDef t_YawSteering__fields_[] = {
        DECLARE_GET_FIELD(t_YawSteering, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawSteering__methods_[] = {
        DECLARE_METHOD(t_YawSteering, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawSteering, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawSteering, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawSteering)[] = {
        { Py_tp_methods, t_YawSteering__methods_ },
        { Py_tp_init, (void *) t_YawSteering_init_ },
        { Py_tp_getset, t_YawSteering__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawSteering)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawSteering, t_YawSteering, YawSteering);

      void t_YawSteering::install(PyObject *module)
      {
        installType(&PY_TYPE(YawSteering), &PY_TYPE_DEF(YawSteering), module, "YawSteering", 0);
      }

      void t_YawSteering::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "class_", make_descriptor(YawSteering::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "wrapfn_", make_descriptor(t_YawSteering::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawSteering), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawSteering_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawSteering::initializeClass, 1)))
          return NULL;
        return t_YawSteering::wrap_Object(YawSteering(((t_YawSteering *) arg)->object.this$));
      }
      static PyObject *t_YawSteering_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawSteering::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawSteering_init_(t_YawSteering *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        YawSteering object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = YawSteering(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawSteering_getAttitude(t_YawSteering *self, PyObject *args)
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

        return callSuper(PY_TYPE(YawSteering), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawSteering_getBaseState(t_YawSteering *self, PyObject *args)
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
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
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getTargetPV(t_YawSteering *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawSteering_getUnderlyingAttitudeProvider(t_YawSteering *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawSteering_get__underlyingAttitudeProvider(t_YawSteering *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractConstituentParser::class$ = NULL;
            jmethodID *AbstractConstituentParser::mids$ = NULL;
            bool AbstractConstituentParser::live$ = false;

            jclass AbstractConstituentParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_finalizeData_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getConventions_f657aa17e72227da] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
                mids$[mid_getDataContext_fc8fc85e38e59042] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
                mids$[mid_getHeader_2764986a35b07524] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
                mids$[mid_getParsedUnitsBehavior_edbef281f8882e84] = env->getMethodID(cls, "getParsedUnitsBehavior", "()Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
                mids$[mid_inData_e470b6d9e0d979db] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_e470b6d9e0d979db] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_isSimpleEOP_e470b6d9e0d979db] = env->getMethodID(cls, "isSimpleEOP", "()Z");
                mids$[mid_prepareData_e470b6d9e0d979db] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_e470b6d9e0d979db] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_e470b6d9e0d979db] = env->getMethodID(cls, "prepareMetadata", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AbstractConstituentParser::finalizeData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeData_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::finalizeHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::finalizeMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_e470b6d9e0d979db]);
            }

            ::org::orekit::utils::IERSConventions AbstractConstituentParser::getConventions() const
            {
              return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_f657aa17e72227da]));
            }

            ::org::orekit::data::DataContext AbstractConstituentParser::getDataContext() const
            {
              return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_fc8fc85e38e59042]));
            }

            ::org::orekit::files::ccsds::section::Header AbstractConstituentParser::getHeader() const
            {
              return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_2764986a35b07524]));
            }

            ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior AbstractConstituentParser::getParsedUnitsBehavior() const
            {
              return ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior(env->callObjectMethod(this$, mids$[mid_getParsedUnitsBehavior_edbef281f8882e84]));
            }

            jboolean AbstractConstituentParser::inData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inData_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::inHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inHeader_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::inMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_inMetadata_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::isSimpleEOP() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSimpleEOP_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::prepareData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareData_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::prepareHeader() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareHeader_e470b6d9e0d979db]);
            }

            jboolean AbstractConstituentParser::prepareMetadata() const
            {
              return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_e470b6d9e0d979db]);
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
            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args);
            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self);
            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data);
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data);
            static PyGetSetDef t_AbstractConstituentParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConstituentParser, conventions),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, dataContext),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, header),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parsedUnitsBehavior),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, simpleEOP),
              DECLARE_GET_FIELD(t_AbstractConstituentParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConstituentParser__methods_[] = {
              DECLARE_METHOD(t_AbstractConstituentParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConstituentParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, finalizeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getConventions, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getDataContext, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, getParsedUnitsBehavior, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, inMetadata, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, isSimpleEOP, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareData, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareHeader, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConstituentParser, prepareMetadata, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConstituentParser)[] = {
              { Py_tp_methods, t_AbstractConstituentParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConstituentParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConstituentParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(AbstractConstituentParser, t_AbstractConstituentParser, AbstractConstituentParser);
            PyObject *t_AbstractConstituentParser::wrap_Object(const AbstractConstituentParser& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            PyObject *t_AbstractConstituentParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
            {
              PyObject *obj = t_AbstractConstituentParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractConstituentParser *self = (t_AbstractConstituentParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
                self->parameters[2] = p2;
              }
              return obj;
            }

            void t_AbstractConstituentParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConstituentParser), &PY_TYPE_DEF(AbstractConstituentParser), module, "AbstractConstituentParser", 0);
            }

            void t_AbstractConstituentParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "class_", make_descriptor(AbstractConstituentParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "wrapfn_", make_descriptor(t_AbstractConstituentParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstituentParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConstituentParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConstituentParser::initializeClass, 1)))
                return NULL;
              return t_AbstractConstituentParser::wrap_Object(AbstractConstituentParser(((t_AbstractConstituentParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractConstituentParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConstituentParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConstituentParser_of_(t_AbstractConstituentParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 3, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractConstituentParser_finalizeData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_finalizeMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.finalizeMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_getConventions(t_AbstractConstituentParser *self)
            {
              ::org::orekit::utils::IERSConventions result((jobject) NULL);
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getDataContext(t_AbstractConstituentParser *self)
            {
              ::org::orekit::data::DataContext result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getHeader(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_getParsedUnitsBehavior(t_AbstractConstituentParser *self)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior result((jobject) NULL);
              OBJ_CALL(result = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(result);
            }

            static PyObject *t_AbstractConstituentParser_inData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_inMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.inMetadata());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_isSimpleEOP(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSimpleEOP());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareData(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareData());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareHeader(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareHeader());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConstituentParser_prepareMetadata(t_AbstractConstituentParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.prepareMetadata());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractConstituentParser_get__parameters_(t_AbstractConstituentParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractConstituentParser_get__conventions(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::utils::IERSConventions value((jobject) NULL);
              OBJ_CALL(value = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__dataContext(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::data::DataContext value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__header(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__parsedUnitsBehavior(t_AbstractConstituentParser *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior value((jobject) NULL);
              OBJ_CALL(value = self->object.getParsedUnitsBehavior());
              return ::org::orekit::files::ccsds::ndm::t_ParsedUnitsBehavior::wrap_Object(value);
            }

            static PyObject *t_AbstractConstituentParser_get__simpleEOP(t_AbstractConstituentParser *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSimpleEOP());
              Py_RETURN_BOOL(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractGradientConverter::mids$ = NULL;
        bool PythonAbstractGradientConverter::live$ = false;

        jclass PythonAbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_extend_dfa45db96c83f3d1] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_extend_209b6960e4c6fdfa] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_a1fdce8979c90dfc] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFreeStateParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeStateParameters", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGradientConverter::PythonAbstractGradientConverter(jint a0) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

        ::org::hipparchus::analysis::differentiation::Gradient PythonAbstractGradientConverter::extend(const ::org::hipparchus::analysis::differentiation::Gradient & a0, jint a1) const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_extend_dfa45db96c83f3d1], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_extend_209b6960e4c6fdfa], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_extend_a1fdce8979c90dfc], a0.this$, a1));
        }

        jint PythonAbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_f2f64475e4580546]);
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
        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, extend, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, getFreeStateParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGradientConverter, t_PythonAbstractGradientConverter, PythonAbstractGradientConverter);

        void t_PythonAbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGradientConverter), &PY_TYPE_DEF(PythonAbstractGradientConverter), module, "PythonAbstractGradientConverter", 0);
        }

        void t_PythonAbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "class_", make_descriptor(PythonAbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGradientConverter::wrap_Object(PythonAbstractGradientConverter(((t_PythonAbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          PythonAbstractGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = PythonAbstractGradientConverter(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::differentiation::Gradient a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extend", args);
          return NULL;
        }

        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFreeStateParameters());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractGradientConverter), (PyObject *) self, "getFreeStateParameters", args, 2);
        }

        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldTheta::class$ = NULL;
          jmethodID *FieldTheta::mids$ = NULL;
          bool FieldTheta::live$ = false;

          jclass FieldTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_e6d4d3215c30992a] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta2_e6d4d3215c30992a] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta3_e6d4d3215c30992a] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta4_e6d4d3215c30992a] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta1_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta2_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta3_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta4() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta4_e6d4d3215c30992a]));
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
          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args);
          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self);
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data);
          static PyGetSetDef t_FieldTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTheta__methods_[] = {
            DECLARE_METHOD(t_FieldTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTheta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTheta)[] = {
            { Py_tp_methods, t_FieldTheta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTheta, t_FieldTheta, FieldTheta);
          PyObject *t_FieldTheta::wrap_Object(const FieldTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTheta), &PY_TYPE_DEF(FieldTheta), module, "FieldTheta", 0);
          }

          void t_FieldTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "class_", make_descriptor(FieldTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "wrapfn_", make_descriptor(t_FieldTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTheta::initializeClass, 1)))
              return NULL;
            return t_FieldTheta::wrap_Object(FieldTheta(((t_FieldTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data)
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
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatStepHandler::mids$ = NULL;
        bool PythonMultiSatStepHandler::live$ = false;

        jclass PythonMultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_65de9727799c5641] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_65de9727799c5641] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_9864bb25319e03a0] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatStepHandler::PythonMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonMultiSatStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonMultiSatStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonMultiSatStepHandler::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace sampling {
        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self);
        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatStepHandler, t_PythonMultiSatStepHandler, PythonMultiSatStepHandler);

        void t_PythonMultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatStepHandler), &PY_TYPE_DEF(PythonMultiSatStepHandler), module, "PythonMultiSatStepHandler", 1);
        }

        void t_PythonMultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "class_", make_descriptor(PythonMultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMultiSatStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatStepHandler::wrap_Object(PythonMultiSatStepHandler(((t_PythonMultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data)
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
