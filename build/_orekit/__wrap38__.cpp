#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *StateCovarianceBlender::class$ = NULL;
      jmethodID *StateCovarianceBlender::mids$ = NULL;
      bool StateCovarianceBlender::live$ = false;

      jclass StateCovarianceBlender::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/StateCovarianceBlender");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3691a7a656a731e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_6e413521e0652b3f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_b3673400c0fde69a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f3691a7a656a731e, a0.this$, a1.this$, a2.this$)) {}

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_6e413521e0652b3f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args);
      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds);
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data);
      static PyGetSetDef t_StateCovarianceBlender__fields_[] = {
        DECLARE_GET_FIELD(t_StateCovarianceBlender, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_StateCovarianceBlender__methods_[] = {
        DECLARE_METHOD(t_StateCovarianceBlender, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateCovarianceBlender, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateCovarianceBlender)[] = {
        { Py_tp_methods, t_StateCovarianceBlender__methods_ },
        { Py_tp_init, (void *) t_StateCovarianceBlender_init_ },
        { Py_tp_getset, t_StateCovarianceBlender__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateCovarianceBlender)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractStateCovarianceInterpolator),
        NULL
      };

      DEFINE_TYPE(StateCovarianceBlender, t_StateCovarianceBlender, StateCovarianceBlender);
      PyObject *t_StateCovarianceBlender::wrap_Object(const StateCovarianceBlender& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_StateCovarianceBlender::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_StateCovarianceBlender::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_StateCovarianceBlender *self = (t_StateCovarianceBlender *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_StateCovarianceBlender::install(PyObject *module)
      {
        installType(&PY_TYPE(StateCovarianceBlender), &PY_TYPE_DEF(StateCovarianceBlender), module, "StateCovarianceBlender", 0);
      }

      void t_StateCovarianceBlender::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "class_", make_descriptor(StateCovarianceBlender::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "wrapfn_", make_descriptor(t_StateCovarianceBlender::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateCovarianceBlender), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateCovarianceBlender_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateCovarianceBlender::initializeClass, 1)))
          return NULL;
        return t_StateCovarianceBlender::wrap_Object(StateCovarianceBlender(((t_StateCovarianceBlender *) arg)->object.this$));
      }
      static PyObject *t_StateCovarianceBlender_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateCovarianceBlender::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateCovarianceBlender_of_(t_StateCovarianceBlender *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_StateCovarianceBlender_init_(t_StateCovarianceBlender *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOFType a2((jobject) NULL);
            PyTypeObject **p2;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::LOFType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::org::orekit::frames::t_LOFType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction a0((jobject) NULL);
            ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            StateCovarianceBlender object((jobject) NULL);

            if (!parseArgs(args, "kKkKK", ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = StateCovarianceBlender(a0, a1, a2, a3, a4));
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
      static PyObject *t_StateCovarianceBlender_get__parameters_(t_StateCovarianceBlender *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonStateJacobian.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/StateJacobian.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateJacobian::class$ = NULL;
      jmethodID *PythonStateJacobian::mids$ = NULL;
      bool PythonStateJacobian::live$ = false;

      jclass PythonStateJacobian::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateJacobian");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_f910011805e7fdeb] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateJacobian::PythonStateJacobian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonStateJacobian::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonStateJacobian::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonStateJacobian::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self);
      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args);
      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data);
      static PyGetSetDef t_PythonStateJacobian__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateJacobian, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateJacobian__methods_[] = {
        DECLARE_METHOD(t_PythonStateJacobian, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateJacobian, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateJacobian, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateJacobian)[] = {
        { Py_tp_methods, t_PythonStateJacobian__methods_ },
        { Py_tp_init, (void *) t_PythonStateJacobian_init_ },
        { Py_tp_getset, t_PythonStateJacobian__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateJacobian)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateJacobian, t_PythonStateJacobian, PythonStateJacobian);

      void t_PythonStateJacobian::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateJacobian), &PY_TYPE_DEF(PythonStateJacobian), module, "PythonStateJacobian", 1);
      }

      void t_PythonStateJacobian::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "class_", make_descriptor(PythonStateJacobian::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "wrapfn_", make_descriptor(t_PythonStateJacobian::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateJacobian), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateJacobian::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateJacobian_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[[D", (void *) t_PythonStateJacobian_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateJacobian_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateJacobian::initializeClass, 1)))
          return NULL;
        return t_PythonStateJacobian::wrap_Object(PythonStateJacobian(((t_PythonStateJacobian *) arg)->object.this$));
      }
      static PyObject *t_PythonStateJacobian_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateJacobian::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateJacobian_init_(t_PythonStateJacobian *self, PyObject *args, PyObject *kwds)
      {
        PythonStateJacobian object((jobject) NULL);

        INT_CALL(object = PythonStateJacobian());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateJacobian_finalize(t_PythonStateJacobian *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateJacobian_pythonExtension(t_PythonStateJacobian *self, PyObject *args)
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

      static void JNICALL t_PythonStateJacobian_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateJacobian_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateJacobian::mids$[PythonStateJacobian::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
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

      static PyObject *t_PythonStateJacobian_get__self(t_PythonStateJacobian *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitFixedStepHandler::class$ = NULL;
        jmethodID *FieldOrekitFixedStepHandler::mids$ = NULL;
        bool FieldOrekitFixedStepHandler::live$ = false;

        jclass FieldOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_handleStep_1463d3d0d52f94dd] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_init_b32b9cbcae791ea7] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldOrekitFixedStepHandler::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_1463d3d0d52f94dd], a0.this$);
        }

        void FieldOrekitFixedStepHandler::handleStep(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_1463d3d0d52f94dd], a0.this$);
        }

        void FieldOrekitFixedStepHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_init_b32b9cbcae791ea7], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg);
        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args);
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_FieldOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitFixedStepHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_FieldOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitFixedStepHandler, t_FieldOrekitFixedStepHandler, FieldOrekitFixedStepHandler);
        PyObject *t_FieldOrekitFixedStepHandler::wrap_Object(const FieldOrekitFixedStepHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitFixedStepHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitFixedStepHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitFixedStepHandler *self = (t_FieldOrekitFixedStepHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitFixedStepHandler), &PY_TYPE_DEF(FieldOrekitFixedStepHandler), module, "FieldOrekitFixedStepHandler", 0);
        }

        void t_FieldOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "class_", make_descriptor(FieldOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_FieldOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitFixedStepHandler::wrap_Object(FieldOrekitFixedStepHandler(((t_FieldOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_of_(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldOrekitFixedStepHandler_finish(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_handleStep(t_FieldOrekitFixedStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitFixedStepHandler_init(t_FieldOrekitFixedStepHandler *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldOrekitFixedStepHandler_get__parameters_(t_FieldOrekitFixedStepHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *FieldMatrixPreservingVisitor::mids$ = NULL;
      bool FieldMatrixPreservingVisitor::live$ = false;

      jclass FieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_99097cb60cf2d774] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_d302e4fbc652587d] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::FieldElement FieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_99097cb60cf2d774]));
      }

      void FieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      void FieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_d302e4fbc652587d], a0, a1, a2.this$);
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
      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self);
      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_FieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_FieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_FieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_FieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMatrixPreservingVisitor, t_FieldMatrixPreservingVisitor, FieldMatrixPreservingVisitor);
      PyObject *t_FieldMatrixPreservingVisitor::wrap_Object(const FieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldMatrixPreservingVisitor *self = (t_FieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMatrixPreservingVisitor), &PY_TYPE_DEF(FieldMatrixPreservingVisitor), module, "FieldMatrixPreservingVisitor", 0);
      }

      void t_FieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "class_", make_descriptor(FieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_FieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_FieldMatrixPreservingVisitor::wrap_Object(FieldMatrixPreservingVisitor(((t_FieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_FieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMatrixPreservingVisitor_of_(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_end(t_FieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldMatrixPreservingVisitor_start(t_FieldMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_FieldMatrixPreservingVisitor_visit(t_FieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_FieldMatrixPreservingVisitor_get__parameters_(t_FieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/ErrorState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *ErrorState::class$ = NULL;
            jmethodID *ErrorState::mids$ = NULL;
            bool ErrorState::live$ = false;

            jclass ErrorState::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/ErrorState");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ErrorState::ErrorState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jboolean ErrorState::processToken(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_processToken_85d9863c57bc3b0c], a0.this$);
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
            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg);

            static PyMethodDef t_ErrorState__methods_[] = {
              DECLARE_METHOD(t_ErrorState, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ErrorState, processToken, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ErrorState)[] = {
              { Py_tp_methods, t_ErrorState__methods_ },
              { Py_tp_init, (void *) t_ErrorState_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ErrorState)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ErrorState, t_ErrorState, ErrorState);

            void t_ErrorState::install(PyObject *module)
            {
              installType(&PY_TYPE(ErrorState), &PY_TYPE_DEF(ErrorState), module, "ErrorState", 0);
            }

            void t_ErrorState::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "class_", make_descriptor(ErrorState::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "wrapfn_", make_descriptor(t_ErrorState::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ErrorState), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ErrorState_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ErrorState::initializeClass, 1)))
                return NULL;
              return t_ErrorState::wrap_Object(ErrorState(((t_ErrorState *) arg)->object.this$));
            }
            static PyObject *t_ErrorState_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ErrorState::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ErrorState_init_(t_ErrorState *self, PyObject *args, PyObject *kwds)
            {
              ErrorState object((jobject) NULL);

              INT_CALL(object = ErrorState());
              self->object = object;

              return 0;
            }

            static PyObject *t_ErrorState_processToken(t_ErrorState *self, PyObject *arg)
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
#include "java/util/AbstractCollection.h"
#include "java/util/Iterator.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractCollection::class$ = NULL;
    jmethodID *AbstractCollection::mids$ = NULL;
    bool AbstractCollection::live$ = false;

    jclass AbstractCollection::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractCollection");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_17e918edc999b3c7] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
        mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractCollection::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean AbstractCollection::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    void AbstractCollection::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    jboolean AbstractCollection::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    jboolean AbstractCollection::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_17e918edc999b3c7], a0.this$);
    }

    jboolean AbstractCollection::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator AbstractCollection::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jboolean AbstractCollection::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean AbstractCollection::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    jboolean AbstractCollection::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    jint AbstractCollection::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > AbstractCollection::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_72bb572e6638b43f], a0.this$));
    }

    ::java::lang::String AbstractCollection::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg);
    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self);
    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args);
    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data);
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data);
    static PyGetSetDef t_AbstractCollection__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractCollection, empty),
      DECLARE_GET_FIELD(t_AbstractCollection, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractCollection__methods_[] = {
      DECLARE_METHOD(t_AbstractCollection, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractCollection, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, add, METH_O),
      DECLARE_METHOD(t_AbstractCollection, addAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, clear, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, contains, METH_O),
      DECLARE_METHOD(t_AbstractCollection, containsAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, isEmpty, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, iterator, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, remove, METH_O),
      DECLARE_METHOD(t_AbstractCollection, removeAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, retainAll, METH_O),
      DECLARE_METHOD(t_AbstractCollection, size, METH_NOARGS),
      DECLARE_METHOD(t_AbstractCollection, toArray, METH_VARARGS),
      DECLARE_METHOD(t_AbstractCollection, toString, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractCollection)[] = {
      { Py_tp_methods, t_AbstractCollection__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractCollection__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractCollection *)) get_generic_iterator< t_AbstractCollection >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractCollection)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(AbstractCollection, t_AbstractCollection, AbstractCollection);
    PyObject *t_AbstractCollection::wrap_Object(const AbstractCollection& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractCollection::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractCollection::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractCollection *self = (t_AbstractCollection *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractCollection::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractCollection), &PY_TYPE_DEF(AbstractCollection), module, "AbstractCollection", 0);
    }

    void t_AbstractCollection::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "class_", make_descriptor(AbstractCollection::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "wrapfn_", make_descriptor(t_AbstractCollection::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCollection), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractCollection_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractCollection::initializeClass, 1)))
        return NULL;
      return t_AbstractCollection::wrap_Object(AbstractCollection(((t_AbstractCollection *) arg)->object.this$));
    }
    static PyObject *t_AbstractCollection_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractCollection::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractCollection_of_(t_AbstractCollection *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractCollection_add(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "add", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_addAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "addAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_clear(t_AbstractCollection *self)
    {
      OBJ_CALL(self->object.clear());
      Py_RETURN_NONE;
    }

    static PyObject *t_AbstractCollection_contains(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "contains", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_containsAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "containsAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_isEmpty(t_AbstractCollection *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isEmpty());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_AbstractCollection_iterator(t_AbstractCollection *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.iterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_AbstractCollection_remove(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "remove", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_removeAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_retainAll(t_AbstractCollection *self, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "retainAll", arg);
      return NULL;
    }

    static PyObject *t_AbstractCollection_size(t_AbstractCollection *self)
    {
      jint result;
      OBJ_CALL(result = self->object.size());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_AbstractCollection_toArray(t_AbstractCollection *self, PyObject *args)
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

      PyErr_SetArgsError((PyObject *) self, "toArray", args);
      return NULL;
    }

    static PyObject *t_AbstractCollection_toString(t_AbstractCollection *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(AbstractCollection), (PyObject *) self, "toString", args, 2);
    }
    static PyObject *t_AbstractCollection_get__parameters_(t_AbstractCollection *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_AbstractCollection_get__empty(t_AbstractCollection *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
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
              mids$[mid_getAODO_570ce0828f81a2c1] = env->getMethodID(cls, "getAODO", "()I");
              mids$[mid_getCrs_dff5885c2c873297] = env->getMethodID(cls, "getCrs", "()D");
              mids$[mid_getCuc_dff5885c2c873297] = env->getMethodID(cls, "getCuc", "()D");
              mids$[mid_getCus_dff5885c2c873297] = env->getMethodID(cls, "getCus", "()D");
              mids$[mid_getDeltaN_dff5885c2c873297] = env->getMethodID(cls, "getDeltaN", "()D");
              mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getFitInterval_570ce0828f81a2c1] = env->getMethodID(cls, "getFitInterval", "()I");
              mids$[mid_getIODE_570ce0828f81a2c1] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getM0_dff5885c2c873297] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getSqrtA_dff5885c2c873297] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getToe_570ce0828f81a2c1] = env->getMethodID(cls, "getToe", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame2::getAODO() const
          {
            return env->callIntMethod(this$, mids$[mid_getAODO_570ce0828f81a2c1]);
          }

          jdouble SubFrame2::getCrs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrs_dff5885c2c873297]);
          }

          jdouble SubFrame2::getCuc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCuc_dff5885c2c873297]);
          }

          jdouble SubFrame2::getCus() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCus_dff5885c2c873297]);
          }

          jdouble SubFrame2::getDeltaN() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltaN_dff5885c2c873297]);
          }

          jdouble SubFrame2::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
          }

          jint SubFrame2::getFitInterval() const
          {
            return env->callIntMethod(this$, mids$[mid_getFitInterval_570ce0828f81a2c1]);
          }

          jint SubFrame2::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_570ce0828f81a2c1]);
          }

          jdouble SubFrame2::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_dff5885c2c873297]);
          }

          jdouble SubFrame2::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_dff5885c2c873297]);
          }

          jint SubFrame2::getToe() const
          {
            return env->callIntMethod(this$, mids$[mid_getToe_570ce0828f81a2c1]);
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
#include "org/hipparchus/analysis/interpolation/SplineInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *SplineInterpolator::class$ = NULL;
        jmethodID *SplineInterpolator::mids$ = NULL;
        bool SplineInterpolator::live$ = false;

        jclass SplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/SplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_3eacf1659c4c06b1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_84261a97b5ff9d54] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SplineInterpolator::SplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction SplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3eacf1659c4c06b1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction SplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_84261a97b5ff9d54], a0.this$, a1.this$));
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
        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args);

        static PyMethodDef t_SplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_SplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SplineInterpolator)[] = {
          { Py_tp_methods, t_SplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_SplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SplineInterpolator, t_SplineInterpolator, SplineInterpolator);

        void t_SplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SplineInterpolator), &PY_TYPE_DEF(SplineInterpolator), module, "SplineInterpolator", 0);
        }

        void t_SplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "class_", make_descriptor(SplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "wrapfn_", make_descriptor(t_SplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_SplineInterpolator::wrap_Object(SplineInterpolator(((t_SplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SplineInterpolator_init_(t_SplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          SplineInterpolator object((jobject) NULL);

          INT_CALL(object = SplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_SplineInterpolator_interpolate(t_SplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersWriter::class$ = NULL;
            jmethodID *ODParametersWriter::mids$ = NULL;
            bool ODParametersWriter::live$ = false;

            jclass ODParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_6d745cf7b26e9f5d] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_ODParametersWriter__methods_[] = {
              DECLARE_METHOD(t_ODParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersWriter)[] = {
              { Py_tp_methods, t_ODParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(ODParametersWriter, t_ODParametersWriter, ODParametersWriter);

            void t_ODParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersWriter), &PY_TYPE_DEF(ODParametersWriter), module, "ODParametersWriter", 0);
            }

            void t_ODParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "class_", make_descriptor(ODParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "wrapfn_", make_descriptor(t_ODParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ODParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersWriter::initializeClass, 1)))
                return NULL;
              return t_ODParametersWriter::wrap_Object(ODParametersWriter(((t_ODParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_ODParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201::class$ = NULL;
              jmethodID *SsrIm201::mids$ = NULL;
              bool SsrIm201::live$ = false;

              jclass SsrIm201::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0c734337c05d710d] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header;Ljava/util/List;)V");
                  mids$[mid_getIonosphericModel_b0b95b21d6f179e3] = env->getMethodID(cls, "getIonosphericModel", "()Lorg/orekit/models/earth/ionosphere/SsrVtecIonosphericModel;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201::SsrIm201(jint a0, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_0c734337c05d710d, a0, a1.this$, a2.this$)) {}

              ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel SsrIm201::getIonosphericModel() const
              {
                return ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel(env->callObjectMethod(this$, mids$[mid_getIonosphericModel_b0b95b21d6f179e3]));
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
              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args);
              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self);
              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data);
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data);
              static PyGetSetDef t_SsrIm201__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIm201, ionosphericModel),
                DECLARE_GET_FIELD(t_SsrIm201, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201__methods_[] = {
                DECLARE_METHOD(t_SsrIm201, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIm201, getIonosphericModel, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201)[] = {
                { Py_tp_methods, t_SsrIm201__methods_ },
                { Py_tp_init, (void *) t_SsrIm201_init_ },
                { Py_tp_getset, t_SsrIm201__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIm201, t_SsrIm201, SsrIm201);
              PyObject *t_SsrIm201::wrap_Object(const SsrIm201& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIm201::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIm201::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201), &PY_TYPE_DEF(SsrIm201), module, "SsrIm201", 0);
              }

              void t_SsrIm201::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "class_", make_descriptor(SsrIm201::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "wrapfn_", make_descriptor(t_SsrIm201::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201::wrap_Object(SsrIm201(((t_SsrIm201 *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                SsrIm201 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIm201(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(result);
              }
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(value);
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
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *UniformIntegerDistribution::class$ = NULL;
        jmethodID *UniformIntegerDistribution::mids$ = NULL;
        bool UniformIntegerDistribution::live$ = false;

        jclass UniformIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/UniformIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformIntegerDistribution::UniformIntegerDistribution(jint a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        jdouble UniformIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jdouble UniformIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble UniformIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jint UniformIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint UniformIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean UniformIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble UniformIntegerDistribution::probability(jint a0) const
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
        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data);
        static PyGetSetDef t_UniformIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformIntegerDistribution)[] = {
          { Py_tp_methods, t_UniformIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformIntegerDistribution_init_ },
          { Py_tp_getset, t_UniformIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(UniformIntegerDistribution, t_UniformIntegerDistribution, UniformIntegerDistribution);

        void t_UniformIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformIntegerDistribution), &PY_TYPE_DEF(UniformIntegerDistribution), module, "UniformIntegerDistribution", 0);
        }

        void t_UniformIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "class_", make_descriptor(UniformIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "wrapfn_", make_descriptor(t_UniformIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformIntegerDistribution::wrap_Object(UniformIntegerDistribution(((t_UniformIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          UniformIntegerDistribution object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = UniformIntegerDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuver::class$ = NULL;
              jmethodID *AttitudeManeuver::mids$ = NULL;
              bool AttitudeManeuver::live$ = false;

              jclass AttitudeManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getActuatorUsed_11b109bd155ca898] = env->getMethodID(cls, "getActuatorUsed", "()Ljava/lang/String;");
                  mids$[mid_getBeginTime_dff5885c2c873297] = env->getMethodID(cls, "getBeginTime", "()D");
                  mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEndTime_dff5885c2c873297] = env->getMethodID(cls, "getEndTime", "()D");
                  mids$[mid_getID_11b109bd155ca898] = env->getMethodID(cls, "getID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_11b109bd155ca898] = env->getMethodID(cls, "getManPurpose", "()Ljava/lang/String;");
                  mids$[mid_getPrevID_11b109bd155ca898] = env->getMethodID(cls, "getPrevID", "()Ljava/lang/String;");
                  mids$[mid_getTargetAttitude_de86c7efc42eac14] = env->getMethodID(cls, "getTargetAttitude", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
                  mids$[mid_getTargetMomFrame_5d5dd95b04037824] = env->getMethodID(cls, "getTargetMomFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTargetMomentum_d52645e0d4c07563] = env->getMethodID(cls, "getTargetMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getTargetSpinRate_dff5885c2c873297] = env->getMethodID(cls, "getTargetSpinRate", "()D");
                  mids$[mid_setActuatorUsed_d0bc48d5b00dc40c] = env->getMethodID(cls, "setActuatorUsed", "(Ljava/lang/String;)V");
                  mids$[mid_setBeginTime_17db3a65980d3441] = env->getMethodID(cls, "setBeginTime", "(D)V");
                  mids$[mid_setDuration_17db3a65980d3441] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEndTime_17db3a65980d3441] = env->getMethodID(cls, "setEndTime", "(D)V");
                  mids$[mid_setID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManPurpose", "(Ljava/lang/String;)V");
                  mids$[mid_setPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setTargetAttitude_80a55d93aa5ecb9e] = env->getMethodID(cls, "setTargetAttitude", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
                  mids$[mid_setTargetMomFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setTargetMomFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTargetMomentum_029ff0cbf68ea054] = env->getMethodID(cls, "setTargetMomentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setTargetSpinRate_17db3a65980d3441] = env->getMethodID(cls, "setTargetSpinRate", "(D)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeManeuver::AttitudeManeuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::java::lang::String AttitudeManeuver::getActuatorUsed() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getActuatorUsed_11b109bd155ca898]));
              }

              jdouble AttitudeManeuver::getBeginTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBeginTime_dff5885c2c873297]);
              }

              jdouble AttitudeManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
              }

              jdouble AttitudeManeuver::getEndTime() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEndTime_dff5885c2c873297]);
              }

              ::java::lang::String AttitudeManeuver::getID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getID_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeManeuver::getManPurpose() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPurpose_11b109bd155ca898]));
              }

              ::java::lang::String AttitudeManeuver::getPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevID_11b109bd155ca898]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeManeuver::getTargetAttitude() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getTargetAttitude_de86c7efc42eac14]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeManeuver::getTargetMomFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getTargetMomFrame_5d5dd95b04037824]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudeManeuver::getTargetMomentum() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetMomentum_d52645e0d4c07563]));
              }

              jdouble AttitudeManeuver::getTargetSpinRate() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTargetSpinRate_dff5885c2c873297]);
              }

              void AttitudeManeuver::setActuatorUsed(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setActuatorUsed_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeManeuver::setBeginTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBeginTime_17db3a65980d3441], a0);
              }

              void AttitudeManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_17db3a65980d3441], a0);
              }

              void AttitudeManeuver::setEndTime(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEndTime_17db3a65980d3441], a0);
              }

              void AttitudeManeuver::setID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeManeuver::setManPurpose(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeManeuver::setPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeManeuver::setTargetAttitude(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetAttitude_80a55d93aa5ecb9e], a0.this$);
              }

              void AttitudeManeuver::setTargetMomFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AttitudeManeuver::setTargetMomentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetMomentum_029ff0cbf68ea054], a0.this$);
              }

              void AttitudeManeuver::setTargetSpinRate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTargetSpinRate_17db3a65980d3441], a0);
              }

              void AttitudeManeuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self);
              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg);
              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args);
              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data);
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeManeuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, actuatorUsed),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, beginTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, duration),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, endTime),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, iD),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, manPurpose),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, prevID),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetAttitude),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomFrame),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetMomentum),
                DECLARE_GETSET_FIELD(t_AttitudeManeuver, targetSpinRate),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuver__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuver, getActuatorUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getBeginTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getEndTime, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getPrevID, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetAttitude, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetMomentum, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, getTargetSpinRate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeManeuver, setActuatorUsed, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setBeginTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setEndTime, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setManPurpose, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setPrevID, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetAttitude, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomFrame, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetMomentum, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, setTargetSpinRate, METH_O),
                DECLARE_METHOD(t_AttitudeManeuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuver)[] = {
                { Py_tp_methods, t_AttitudeManeuver__methods_ },
                { Py_tp_init, (void *) t_AttitudeManeuver_init_ },
                { Py_tp_getset, t_AttitudeManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuver, t_AttitudeManeuver, AttitudeManeuver);

              void t_AttitudeManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuver), &PY_TYPE_DEF(AttitudeManeuver), module, "AttitudeManeuver", 0);
              }

              void t_AttitudeManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "class_", make_descriptor(AttitudeManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "wrapfn_", make_descriptor(t_AttitudeManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuver::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuver::wrap_Object(AttitudeManeuver(((t_AttitudeManeuver *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeManeuver_init_(t_AttitudeManeuver *self, PyObject *args, PyObject *kwds)
              {
                AttitudeManeuver object((jobject) NULL);

                INT_CALL(object = AttitudeManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeManeuver_getActuatorUsed(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getActuatorUsed());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getBeginTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBeginTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getDuration(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getEndTime(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEndTime());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_getID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getManPurpose(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getPrevID(t_AttitudeManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevID());
                return j2p(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetAttitude(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomFrame(t_AttitudeManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetMomentum(t_AttitudeManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudeManeuver_getTargetSpinRate(t_AttitudeManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeManeuver_setActuatorUsed(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setActuatorUsed(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setActuatorUsed", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setBeginTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBeginTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBeginTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setDuration(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setEndTime(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setEndTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEndTime", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setManPurpose(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setPrevID(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setPrevID", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetAttitude(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetAttitude(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetAttitude", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomFrame(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetMomentum(t_AttitudeManeuver *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setTargetMomentum(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetMomentum", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_setTargetSpinRate(t_AttitudeManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTargetSpinRate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTargetSpinRate", arg);
                return NULL;
              }

              static PyObject *t_AttitudeManeuver_validate(t_AttitudeManeuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeManeuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeManeuver_get__actuatorUsed(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getActuatorUsed());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__actuatorUsed(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setActuatorUsed(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "actuatorUsed", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__beginTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBeginTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__beginTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBeginTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "beginTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__duration(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__duration(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__endTime(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEndTime());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__endTime(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setEndTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "endTime", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__iD(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__iD(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "iD", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__manPurpose(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__manPurpose(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__prevID(t_AttitudeManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevID());
                return j2p(value);
              }
              static int t_AttitudeManeuver_set__prevID(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "prevID", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetAttitude(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetAttitude());
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetAttitude(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetAttitude(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetAttitude", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomFrame(t_AttitudeManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomFrame(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetMomentum(t_AttitudeManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTargetMomentum());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudeManeuver_set__targetMomentum(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setTargetMomentum(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetMomentum", arg);
                return -1;
              }

              static PyObject *t_AttitudeManeuver_get__targetSpinRate(t_AttitudeManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTargetSpinRate());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeManeuver_set__targetSpinRate(t_AttitudeManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTargetSpinRate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "targetSpinRate", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenZonalLinear::class$ = NULL;
              jmethodID *HansenZonalLinear::mids$ = NULL;
              bool HansenZonalLinear::live$ = false;

              jclass HansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_17db3a65980d3441] = env->getMethodID(cls, "computeInitValues", "(D)V");
                  mids$[mid_getDerivative_60d7624725a52590] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_60d7624725a52590] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenZonalLinear::HansenZonalLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

              void HansenZonalLinear::computeInitValues(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_17db3a65980d3441], a0);
              }

              jdouble HansenZonalLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_60d7624725a52590], a0, a1);
              }

              jdouble HansenZonalLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_60d7624725a52590], a0, a1);
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
              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg);
              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args);
              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args);

              static PyMethodDef t_HansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_HansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_HansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenZonalLinear)[] = {
                { Py_tp_methods, t_HansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_HansenZonalLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenZonalLinear, t_HansenZonalLinear, HansenZonalLinear);

              void t_HansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenZonalLinear), &PY_TYPE_DEF(HansenZonalLinear), module, "HansenZonalLinear", 0);
              }

              void t_HansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "class_", make_descriptor(HansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "wrapfn_", make_descriptor(t_HansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenZonalLinear::wrap_Object(HansenZonalLinear(((t_HansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenZonalLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *EphemerisOemWriter::class$ = NULL;
              jmethodID *EphemerisOemWriter::mids$ = NULL;
              bool EphemerisOemWriter::live$ = false;

              jclass EphemerisOemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/EphemerisOemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_eeefd7776bcd1b30] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemWriter;Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_2fe5901b7cb5a492] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");
                  mids$[mid_writeSegment_b5dc5008f70b538d] = env->getMethodID(cls, "writeSegment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/general/EphemerisFile$EphemerisSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              EphemerisOemWriter::EphemerisOemWriter(const ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter & a0, const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a1, const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eeefd7776bcd1b30, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void EphemerisOemWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::EphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_2fe5901b7cb5a492], a0.this$, a1.this$);
              }

              void EphemerisOemWriter::writeSegment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::general::EphemerisFile$EphemerisSegment & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_writeSegment_b5dc5008f70b538d], a0.this$, a1.this$);
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
              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args);
              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args);

              static PyMethodDef t_EphemerisOemWriter__methods_[] = {
                DECLARE_METHOD(t_EphemerisOemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_EphemerisOemWriter, write, METH_VARARGS),
                DECLARE_METHOD(t_EphemerisOemWriter, writeSegment, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(EphemerisOemWriter)[] = {
                { Py_tp_methods, t_EphemerisOemWriter__methods_ },
                { Py_tp_init, (void *) t_EphemerisOemWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(EphemerisOemWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(EphemerisOemWriter, t_EphemerisOemWriter, EphemerisOemWriter);

              void t_EphemerisOemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(EphemerisOemWriter), &PY_TYPE_DEF(EphemerisOemWriter), module, "EphemerisOemWriter", 0);
              }

              void t_EphemerisOemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "class_", make_descriptor(EphemerisOemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "wrapfn_", make_descriptor(t_EphemerisOemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisOemWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_EphemerisOemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, EphemerisOemWriter::initializeClass, 1)))
                  return NULL;
                return t_EphemerisOemWriter::wrap_Object(EphemerisOemWriter(((t_EphemerisOemWriter *) arg)->object.this$));
              }
              static PyObject *t_EphemerisOemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, EphemerisOemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_EphemerisOemWriter_init_(t_EphemerisOemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                EphemerisOemWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::odm::oem::OemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::oem::t_OemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = EphemerisOemWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_EphemerisOemWriter_write(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::EphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
                return NULL;
              }

              static PyObject *t_EphemerisOemWriter_writeSegment(t_EphemerisOemWriter *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
                ::org::orekit::files::general::EphemerisFile$EphemerisSegment a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::general::EphemerisFile$EphemerisSegment::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_EphemerisFile$EphemerisSegment::parameters_))
                {
                  OBJ_CALL(self->object.writeSegment(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "writeSegment", args);
                return NULL;
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
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *FDOA::class$ = NULL;
        jmethodID *FDOA::mids$ = NULL;
        bool FDOA::live$ = false;
        ::java::lang::String *FDOA::MEASUREMENT_TYPE = NULL;

        jclass FDOA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/FDOA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f72bbcaa5f6505b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimeStation_58e3efb0e9576916] = env->getMethodID(cls, "getPrimeStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondStation_58e3efb0e9576916] = env->getMethodID(cls, "getSecondStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDOA::FDOA(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_f72bbcaa5f6505b0, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation FDOA::getPrimeStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimeStation_58e3efb0e9576916]));
        }

        ::org::orekit::estimation::measurements::GroundStation FDOA::getSecondStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondStation_58e3efb0e9576916]));
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
        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args);
        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self);
        static PyObject *t_FDOA_getSecondStation(t_FDOA *self);
        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data);
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data);
        static PyGetSetDef t_FDOA__fields_[] = {
          DECLARE_GET_FIELD(t_FDOA, primeStation),
          DECLARE_GET_FIELD(t_FDOA, secondStation),
          DECLARE_GET_FIELD(t_FDOA, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDOA__methods_[] = {
          DECLARE_METHOD(t_FDOA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDOA, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDOA, getPrimeStation, METH_NOARGS),
          DECLARE_METHOD(t_FDOA, getSecondStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDOA)[] = {
          { Py_tp_methods, t_FDOA__methods_ },
          { Py_tp_init, (void *) t_FDOA_init_ },
          { Py_tp_getset, t_FDOA__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDOA)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(FDOA, t_FDOA, FDOA);
        PyObject *t_FDOA::wrap_Object(const FDOA& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDOA::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDOA::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDOA *self = (t_FDOA *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDOA::install(PyObject *module)
        {
          installType(&PY_TYPE(FDOA), &PY_TYPE_DEF(FDOA), module, "FDOA", 0);
        }

        void t_FDOA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "class_", make_descriptor(FDOA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "wrapfn_", make_descriptor(t_FDOA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "boxfn_", make_descriptor(boxObject));
          env->getClass(FDOA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDOA), "MEASUREMENT_TYPE", make_descriptor(j2p(*FDOA::MEASUREMENT_TYPE)));
        }

        static PyObject *t_FDOA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDOA::initializeClass, 1)))
            return NULL;
          return t_FDOA::wrap_Object(FDOA(((t_FDOA *) arg)->object.this$));
        }
        static PyObject *t_FDOA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDOA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDOA_of_(t_FDOA *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDOA_init_(t_FDOA *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;
          jdouble a5;
          jdouble a6;
          ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
          FDOA object((jobject) NULL);

          if (!parseArgs(args, "kkDkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = FDOA(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDOA_getPrimeStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_FDOA_getSecondStation(t_FDOA *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_FDOA_get__parameters_(t_FDOA *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDOA_get__primeStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimeStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_FDOA_get__secondStation(t_FDOA *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *AbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *AbstractGNSSAttitudeProvider::mids$ = NULL;
        bool AbstractGNSSAttitudeProvider::live$ = false;

        jclass AbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_validityEnd_85703d13e302437e] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_85703d13e302437e] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getSun_6c6c680f468e3316] = env->getMethodID(cls, "getSun", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
            mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::Attitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::attitudes::FieldAttitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_85703d13e302437e]));
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
      namespace attitude {
        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self);

        static PyMethodDef t_AbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, getAttitude, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_AbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGNSSAttitudeProvider, t_AbstractGNSSAttitudeProvider, AbstractGNSSAttitudeProvider);

        void t_AbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGNSSAttitudeProvider), &PY_TYPE_DEF(AbstractGNSSAttitudeProvider), module, "AbstractGNSSAttitudeProvider", 0);
        }

        void t_AbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "class_", make_descriptor(AbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_AbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractGNSSAttitudeProvider::wrap_Object(AbstractGNSSAttitudeProvider(((t_AbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args)
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

        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *SimpleCurveFitter::class$ = NULL;
      jmethodID *SimpleCurveFitter::mids$ = NULL;
      bool SimpleCurveFitter::live$ = false;

      jclass SimpleCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/SimpleCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_13447df349ed5164] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/ParametricUnivariateFunction;[D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withMaxIterations_dc1310a4d7b105fa] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withStartPoint_49c1fdac2f42ec60] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_getProblem_c197708a453e8034] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleCurveFitter SimpleCurveFitter::create(const ::org::hipparchus::analysis::ParametricUnivariateFunction & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_13447df349ed5164], a0.this$, a1.this$));
      }

      SimpleCurveFitter SimpleCurveFitter::withMaxIterations(jint a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_dc1310a4d7b105fa], a0));
      }

      SimpleCurveFitter SimpleCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_49c1fdac2f42ec60], a0.this$));
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
      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg);

      static PyMethodDef t_SimpleCurveFitter__methods_[] = {
        DECLARE_METHOD(t_SimpleCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_SimpleCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleCurveFitter)[] = {
        { Py_tp_methods, t_SimpleCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(SimpleCurveFitter, t_SimpleCurveFitter, SimpleCurveFitter);

      void t_SimpleCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleCurveFitter), &PY_TYPE_DEF(SimpleCurveFitter), module, "SimpleCurveFitter", 0);
      }

      void t_SimpleCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "class_", make_descriptor(SimpleCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "wrapfn_", make_descriptor(t_SimpleCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleCurveFitter::initializeClass, 1)))
          return NULL;
        return t_SimpleCurveFitter::wrap_Object(SimpleCurveFitter(((t_SimpleCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::ParametricUnivariateFunction a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::ParametricUnivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::SimpleCurveFitter::create(a0, a1));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg)
      {
        jint a0;
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Writer.h"
#include "java/io/IOException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/sp3/SP3.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Writer::class$ = NULL;
        jmethodID *SP3Writer::mids$ = NULL;
        bool SP3Writer::live$ = false;

        jclass SP3Writer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Writer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_90c3127910aa39b7] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;Lorg/orekit/time/TimeScales;)V");
            mids$[mid_write_dcc7ce1f19d79b1d] = env->getMethodID(cls, "write", "(Lorg/orekit/files/sp3/SP3;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Writer::SP3Writer(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScales & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_90c3127910aa39b7, a0.this$, a1.this$, a2.this$)) {}

        void SP3Writer::write(const ::org::orekit::files::sp3::SP3 & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_write_dcc7ce1f19d79b1d], a0.this$);
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
        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg);

        static PyMethodDef t_SP3Writer__methods_[] = {
          DECLARE_METHOD(t_SP3Writer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Writer, write, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Writer)[] = {
          { Py_tp_methods, t_SP3Writer__methods_ },
          { Py_tp_init, (void *) t_SP3Writer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Writer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Writer, t_SP3Writer, SP3Writer);

        void t_SP3Writer::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Writer), &PY_TYPE_DEF(SP3Writer), module, "SP3Writer", 0);
        }

        void t_SP3Writer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "class_", make_descriptor(SP3Writer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "wrapfn_", make_descriptor(t_SP3Writer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Writer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Writer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Writer::initializeClass, 1)))
            return NULL;
          return t_SP3Writer::wrap_Object(SP3Writer(((t_SP3Writer *) arg)->object.this$));
        }
        static PyObject *t_SP3Writer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Writer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Writer_init_(t_SP3Writer *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::Appendable a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::TimeScales a2((jobject) NULL);
          SP3Writer object((jobject) NULL);

          if (!parseArgs(args, "ksk", ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = SP3Writer(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Writer_write(t_SP3Writer *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3 a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3::initializeClass, &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AbstractStorelessUnivariateStatistic::class$ = NULL;
        jmethodID *AbstractStorelessUnivariateStatistic::mids$ = NULL;
        bool AbstractStorelessUnivariateStatistic::live$ = false;

        jclass AbstractStorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AbstractStorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_ac0cb19696f2f20f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractStorelessUnivariateStatistic::AbstractStorelessUnivariateStatistic() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void AbstractStorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic AbstractStorelessUnivariateStatistic::copy() const
        {
          return ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_ac0cb19696f2f20f]));
        }

        jboolean AbstractStorelessUnivariateStatistic::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        jdouble AbstractStorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
        }

        jint AbstractStorelessUnivariateStatistic::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        void AbstractStorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
        }

        ::java::lang::String AbstractStorelessUnivariateStatistic::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self);
        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_AbstractStorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractStorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractStorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, copy, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, equals, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_AbstractStorelessUnivariateStatistic, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractStorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_AbstractStorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) t_AbstractStorelessUnivariateStatistic_init_ },
          { Py_tp_getset, t_AbstractStorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractStorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractStorelessUnivariateStatistic, t_AbstractStorelessUnivariateStatistic, AbstractStorelessUnivariateStatistic);

        void t_AbstractStorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractStorelessUnivariateStatistic), &PY_TYPE_DEF(AbstractStorelessUnivariateStatistic), module, "AbstractStorelessUnivariateStatistic", 0);
        }

        void t_AbstractStorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "class_", make_descriptor(AbstractStorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_AbstractStorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractStorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_AbstractStorelessUnivariateStatistic::wrap_Object(AbstractStorelessUnivariateStatistic(((t_AbstractStorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_AbstractStorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractStorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractStorelessUnivariateStatistic_init_(t_AbstractStorelessUnivariateStatistic *self, PyObject *args, PyObject *kwds)
        {
          AbstractStorelessUnivariateStatistic object((jobject) NULL);

          INT_CALL(object = AbstractStorelessUnivariateStatistic());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_clear(t_AbstractStorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_copy(t_AbstractStorelessUnivariateStatistic *self)
        {
          ::org::hipparchus::stat::descriptive::StorelessUnivariateStatistic result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::stat::descriptive::t_StorelessUnivariateStatistic::wrap_Object(result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_equals(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_getResult(t_AbstractStorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_hashCode(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_increment(t_AbstractStorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.increment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "increment", arg);
          return NULL;
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_toString(t_AbstractStorelessUnivariateStatistic *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(AbstractStorelessUnivariateStatistic), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_AbstractStorelessUnivariateStatistic_get__result(t_AbstractStorelessUnivariateStatistic *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getResult());
          return PyFloat_FromDouble((double) value);
        }
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
          mids$[mid_getMaxGrowth_dff5885c2c873297] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_dff5885c2c873297] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_570ce0828f81a2c1] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_dff5885c2c873297] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_1a7e520947392fba] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
          mids$[mid_setMaxGrowth_17db3a65980d3441] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_17db3a65980d3441] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_17db3a65980d3441] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_16720c819e7ee0c1] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_05286ba32ad1612e] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_dcbc7ce2902fa136] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_17db3a65980d3441] = env->getMethodID(cls, "rescale", "(D)V");
          mids$[mid_start_23d55d78be072c04] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_dff5885c2c873297]);
      }

      jdouble MultistepIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_dff5885c2c873297]);
      }

      jint MultistepIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_570ce0828f81a2c1]);
      }

      jdouble MultistepIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_dff5885c2c873297]);
      }

      ::org::hipparchus::ode::ODEIntegrator MultistepIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::ODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_1a7e520947392fba]));
      }

      void MultistepIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_17db3a65980d3441], a0);
      }

      void MultistepIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_17db3a65980d3441], a0);
      }

      void MultistepIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_17db3a65980d3441], a0);
      }

      void MultistepIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_16720c819e7ee0c1], a0.this$);
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
#include "org/hipparchus/analysis/solvers/MullerSolver.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *MullerSolver::class$ = NULL;
        jmethodID *MullerSolver::mids$ = NULL;
        bool MullerSolver::live$ = false;

        jclass MullerSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/MullerSolver");

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

        MullerSolver::MullerSolver() : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        MullerSolver::MullerSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        MullerSolver::MullerSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractUnivariateSolver(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}
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
        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args);
        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data);
        static PyGetSetDef t_MullerSolver__fields_[] = {
          DECLARE_GET_FIELD(t_MullerSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MullerSolver__methods_[] = {
          DECLARE_METHOD(t_MullerSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MullerSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MullerSolver)[] = {
          { Py_tp_methods, t_MullerSolver__methods_ },
          { Py_tp_init, (void *) t_MullerSolver_init_ },
          { Py_tp_getset, t_MullerSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MullerSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(MullerSolver, t_MullerSolver, MullerSolver);
        PyObject *t_MullerSolver::wrap_Object(const MullerSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MullerSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MullerSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MullerSolver *self = (t_MullerSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MullerSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(MullerSolver), &PY_TYPE_DEF(MullerSolver), module, "MullerSolver", 0);
        }

        void t_MullerSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "class_", make_descriptor(MullerSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "wrapfn_", make_descriptor(t_MullerSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MullerSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MullerSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MullerSolver::initializeClass, 1)))
            return NULL;
          return t_MullerSolver::wrap_Object(MullerSolver(((t_MullerSolver *) arg)->object.this$));
        }
        static PyObject *t_MullerSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MullerSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MullerSolver_of_(t_MullerSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MullerSolver_init_(t_MullerSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              MullerSolver object((jobject) NULL);

              INT_CALL(object = MullerSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::PY_TYPE(UnivariateFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MullerSolver(a0));
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
              MullerSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = MullerSolver(a0, a1));
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
        static PyObject *t_MullerSolver_get__parameters_(t_MullerSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::MM = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::MM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NS = NULL;
          ::org::orekit::utils::units::Unit *Units::SEMI_CIRCLE = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              MM = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              MM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "MM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NS", "Lorg/orekit/utils/units/Unit;"));
              SEMI_CIRCLE = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "SEMI_CIRCLE", "Lorg/orekit/utils/units/Unit;"));
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "MM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::MM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "SEMI_CIRCLE", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::SEMI_CIRCLE)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmWriter::class$ = NULL;
              jmethodID *OmmWriter::mids$ = NULL;
              bool OmmWriter::live$ = false;
              jdouble OmmWriter::CCSDS_OMM_VERS = (jdouble) 0;
              jint OmmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OmmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f30abb95e05bcdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_a4679b5cde76d825] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OMM_VERS = env->getStaticDoubleField(cls, "CCSDS_OMM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmWriter::OmmWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6f30abb95e05bcdd, a0.this$, a1.this$, a2.this$)) {}
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
            namespace omm {
              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args);
              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data);
              static PyGetSetDef t_OmmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OmmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmWriter__methods_[] = {
                DECLARE_METHOD(t_OmmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmWriter)[] = {
                { Py_tp_methods, t_OmmWriter__methods_ },
                { Py_tp_init, (void *) t_OmmWriter_init_ },
                { Py_tp_getset, t_OmmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OmmWriter, t_OmmWriter, OmmWriter);
              PyObject *t_OmmWriter::wrap_Object(const OmmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OmmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OmmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmWriter *self = (t_OmmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OmmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmWriter), &PY_TYPE_DEF(OmmWriter), module, "OmmWriter", 0);
              }

              void t_OmmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "class_", make_descriptor(OmmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "wrapfn_", make_descriptor(t_OmmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "CCSDS_OMM_VERS", make_descriptor(OmmWriter::CCSDS_OMM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmWriter), "KVN_PADDING_WIDTH", make_descriptor(OmmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OmmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmWriter::initializeClass, 1)))
                  return NULL;
                return t_OmmWriter::wrap_Object(OmmWriter(((t_OmmWriter *) arg)->object.this$));
              }
              static PyObject *t_OmmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmWriter_of_(t_OmmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OmmWriter_init_(t_OmmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OmmWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OmmWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::omm::PY_TYPE(Omm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OmmWriter_get__parameters_(t_OmmWriter *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GalileoNavigationMessage::class$ = NULL;
            jmethodID *GalileoNavigationMessage::mids$ = NULL;
            bool GalileoNavigationMessage::live$ = false;

            jclass GalileoNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getBGDE1E5a_dff5885c2c873297] = env->getMethodID(cls, "getBGDE1E5a", "()D");
                mids$[mid_getBGDE5bE1_dff5885c2c873297] = env->getMethodID(cls, "getBGDE5bE1", "()D");
                mids$[mid_getDataSource_570ce0828f81a2c1] = env->getMethodID(cls, "getDataSource", "()I");
                mids$[mid_getIODNav_570ce0828f81a2c1] = env->getMethodID(cls, "getIODNav", "()I");
                mids$[mid_getSisa_dff5885c2c873297] = env->getMethodID(cls, "getSisa", "()D");
                mids$[mid_getSvHealth_dff5885c2c873297] = env->getMethodID(cls, "getSvHealth", "()D");
                mids$[mid_setBGDE1E5a_17db3a65980d3441] = env->getMethodID(cls, "setBGDE1E5a", "(D)V");
                mids$[mid_setBGDE5bE1_17db3a65980d3441] = env->getMethodID(cls, "setBGDE5bE1", "(D)V");
                mids$[mid_setDataSource_99803b0791f320ff] = env->getMethodID(cls, "setDataSource", "(I)V");
                mids$[mid_setIODNav_99803b0791f320ff] = env->getMethodID(cls, "setIODNav", "(I)V");
                mids$[mid_setSisa_17db3a65980d3441] = env->getMethodID(cls, "setSisa", "(D)V");
                mids$[mid_setSvHealth_17db3a65980d3441] = env->getMethodID(cls, "setSvHealth", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GalileoNavigationMessage::GalileoNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            jdouble GalileoNavigationMessage::getBGDE1E5a() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE1E5a_dff5885c2c873297]);
            }

            jdouble GalileoNavigationMessage::getBGDE5bE1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBGDE5bE1_dff5885c2c873297]);
            }

            jint GalileoNavigationMessage::getDataSource() const
            {
              return env->callIntMethod(this$, mids$[mid_getDataSource_570ce0828f81a2c1]);
            }

            jint GalileoNavigationMessage::getIODNav() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODNav_570ce0828f81a2c1]);
            }

            jdouble GalileoNavigationMessage::getSisa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSisa_dff5885c2c873297]);
            }

            jdouble GalileoNavigationMessage::getSvHealth() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvHealth_dff5885c2c873297]);
            }

            void GalileoNavigationMessage::setBGDE1E5a(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE1E5a_17db3a65980d3441], a0);
            }

            void GalileoNavigationMessage::setBGDE5bE1(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setBGDE5bE1_17db3a65980d3441], a0);
            }

            void GalileoNavigationMessage::setDataSource(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDataSource_99803b0791f320ff], a0);
            }

            void GalileoNavigationMessage::setIODNav(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODNav_99803b0791f320ff], a0);
            }

            void GalileoNavigationMessage::setSisa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSisa_17db3a65980d3441], a0);
            }

            void GalileoNavigationMessage::setSvHealth(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_17db3a65980d3441], a0);
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
            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self);
            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg);
            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data);
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_GalileoNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE1E5a),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, bGDE5bE1),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, dataSource),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, iODNav),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, sisa),
              DECLARE_GETSET_FIELD(t_GalileoNavigationMessage, svHealth),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GalileoNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GalileoNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE1E5a, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getBGDE5bE1, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getDataSource, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getIODNav, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSisa, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE1E5a, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setBGDE5bE1, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setDataSource, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setIODNav, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSisa, METH_O),
              DECLARE_METHOD(t_GalileoNavigationMessage, setSvHealth, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GalileoNavigationMessage)[] = {
              { Py_tp_methods, t_GalileoNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GalileoNavigationMessage_init_ },
              { Py_tp_getset, t_GalileoNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GalileoNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GalileoNavigationMessage, t_GalileoNavigationMessage, GalileoNavigationMessage);

            void t_GalileoNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GalileoNavigationMessage), &PY_TYPE_DEF(GalileoNavigationMessage), module, "GalileoNavigationMessage", 0);
            }

            void t_GalileoNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "class_", make_descriptor(GalileoNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "wrapfn_", make_descriptor(t_GalileoNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GalileoNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GalileoNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GalileoNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GalileoNavigationMessage::wrap_Object(GalileoNavigationMessage(((t_GalileoNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GalileoNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GalileoNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GalileoNavigationMessage_init_(t_GalileoNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GalileoNavigationMessage object((jobject) NULL);

              INT_CALL(object = GalileoNavigationMessage());
              self->object = object;

              return 0;
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE1E5a(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getBGDE5bE1(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getDataSource(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDataSource());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getIODNav(t_GalileoNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODNav());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSisa(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSisa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_getSvHealth(t_GalileoNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE1E5a(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE1E5a", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setBGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setBGDE5bE1(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setBGDE5bE1", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setDataSource(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDataSource", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setIODNav(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODNav(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODNav", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSisa(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSisa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSisa", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_setSvHealth(t_GalileoNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE1E5a(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE1E5a());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE1E5a(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE1E5a(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE1E5a", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__bGDE5bE1(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBGDE5bE1());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__bGDE5bE1(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setBGDE5bE1(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "bGDE5bE1", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__dataSource(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDataSource());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__dataSource(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dataSource", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__iODNav(t_GalileoNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODNav());
              return PyLong_FromLong((long) value);
            }
            static int t_GalileoNavigationMessage_set__iODNav(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODNav(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODNav", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__sisa(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSisa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__sisa(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSisa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "sisa", arg);
              return -1;
            }

            static PyObject *t_GalileoNavigationMessage_get__svHealth(t_GalileoNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyFloat_FromDouble((double) value);
            }
            static int t_GalileoNavigationMessage_set__svHealth(t_GalileoNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
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
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *GzipFilter::class$ = NULL;
      jmethodID *GzipFilter::mids$ = NULL;
      bool GzipFilter::live$ = false;

      jclass GzipFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/GzipFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_716adf7a6da8b4d7] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GzipFilter::GzipFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ::org::orekit::data::DataSource GzipFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_716adf7a6da8b4d7], a0.this$));
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
      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg);

      static PyMethodDef t_GzipFilter__methods_[] = {
        DECLARE_METHOD(t_GzipFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GzipFilter)[] = {
        { Py_tp_methods, t_GzipFilter__methods_ },
        { Py_tp_init, (void *) t_GzipFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GzipFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GzipFilter, t_GzipFilter, GzipFilter);

      void t_GzipFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(GzipFilter), &PY_TYPE_DEF(GzipFilter), module, "GzipFilter", 0);
      }

      void t_GzipFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "class_", make_descriptor(GzipFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "wrapfn_", make_descriptor(t_GzipFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GzipFilter::initializeClass, 1)))
          return NULL;
        return t_GzipFilter::wrap_Object(GzipFilter(((t_GzipFilter *) arg)->object.this$));
      }
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GzipFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds)
      {
        GzipFilter object((jobject) NULL);

        INT_CALL(object = GzipFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg)
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
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *CombinedDerivatives::class$ = NULL;
        jmethodID *CombinedDerivatives::mids$ = NULL;
        bool CombinedDerivatives::live$ = false;

        jclass CombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/CombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e1f4b15468f5564a] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_getAdditionalDerivatives_60c7040667a7dc5c] = env->getMethodID(cls, "getAdditionalDerivatives", "()[D");
            mids$[mid_getMainStateDerivativesIncrements_60c7040667a7dc5c] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CombinedDerivatives::CombinedDerivatives(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e1f4b15468f5564a, a0.this$, a1.this$)) {}

        JArray< jdouble > CombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_60c7040667a7dc5c]));
        }

        JArray< jdouble > CombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_60c7040667a7dc5c]));
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
        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data);
        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data);
        static PyGetSetDef t_CombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_CombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_CombinedDerivatives, mainStateDerivativesIncrements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_CombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CombinedDerivatives)[] = {
          { Py_tp_methods, t_CombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_CombinedDerivatives_init_ },
          { Py_tp_getset, t_CombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CombinedDerivatives, t_CombinedDerivatives, CombinedDerivatives);

        void t_CombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(CombinedDerivatives), &PY_TYPE_DEF(CombinedDerivatives), module, "CombinedDerivatives", 0);
        }

        void t_CombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "class_", make_descriptor(CombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "wrapfn_", make_descriptor(t_CombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_CombinedDerivatives::wrap_Object(CombinedDerivatives(((t_CombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          CombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = CombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return value.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/GLSMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *GLSMultipleLinearRegression::class$ = NULL;
        jmethodID *GLSMultipleLinearRegression::mids$ = NULL;
        bool GLSMultipleLinearRegression::live$ = false;

        jclass GLSMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/GLSMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_newSampleData_6faea01a29e89571] = env->getMethodID(cls, "newSampleData", "([D[[D[[D)V");
            mids$[mid_newCovarianceData_a0befc7f3dc19e41] = env->getMethodID(cls, "newCovarianceData", "([[D)V");
            mids$[mid_getOmegaInverse_688b496048ff947b] = env->getMethodID(cls, "getOmegaInverse", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateBeta_aab4fbf77867daa8] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_688b496048ff947b] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateErrorVariance_dff5885c2c873297] = env->getMethodID(cls, "calculateErrorVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLSMultipleLinearRegression::GLSMultipleLinearRegression() : ::org::hipparchus::stat::regression::AbstractMultipleLinearRegression(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void GLSMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_6faea01a29e89571], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args);

        static PyMethodDef t_GLSMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_GLSMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLSMultipleLinearRegression, newSampleData, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLSMultipleLinearRegression)[] = {
          { Py_tp_methods, t_GLSMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_GLSMultipleLinearRegression_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLSMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::regression::AbstractMultipleLinearRegression),
          NULL
        };

        DEFINE_TYPE(GLSMultipleLinearRegression, t_GLSMultipleLinearRegression, GLSMultipleLinearRegression);

        void t_GLSMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(GLSMultipleLinearRegression), &PY_TYPE_DEF(GLSMultipleLinearRegression), module, "GLSMultipleLinearRegression", 0);
        }

        void t_GLSMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "class_", make_descriptor(GLSMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "wrapfn_", make_descriptor(t_GLSMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLSMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLSMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLSMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_GLSMultipleLinearRegression::wrap_Object(GLSMultipleLinearRegression(((t_GLSMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_GLSMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLSMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLSMultipleLinearRegression_init_(t_GLSMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          GLSMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = GLSMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_GLSMultipleLinearRegression_newSampleData(t_GLSMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< JArray< jdouble > > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "[D[[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(GLSMultipleLinearRegression), (PyObject *) self, "newSampleData", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFieldStaticTransform.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFieldStaticTransform::class$ = NULL;
      jmethodID *PythonFieldStaticTransform::mids$ = NULL;
      bool PythonFieldStaticTransform::live$ = false;

      jclass PythonFieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_b4e9bd069b43219a] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_1d339a2ee3a3323a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_716f50c86ffc8da7] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldStaticTransform::PythonFieldStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args);
      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self);
      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data);
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data);
      static PyGetSetDef t_PythonFieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, self),
        DECLARE_GET_FIELD(t_PythonFieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonFieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldStaticTransform)[] = {
        { Py_tp_methods, t_PythonFieldStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonFieldStaticTransform_init_ },
        { Py_tp_getset, t_PythonFieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldStaticTransform, t_PythonFieldStaticTransform, PythonFieldStaticTransform);
      PyObject *t_PythonFieldStaticTransform::wrap_Object(const PythonFieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldStaticTransform *self = (t_PythonFieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldStaticTransform), &PY_TYPE_DEF(PythonFieldStaticTransform), module, "PythonFieldStaticTransform", 1);
      }

      void t_PythonFieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "class_", make_descriptor(PythonFieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "wrapfn_", make_descriptor(t_PythonFieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonFieldStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;", (void *) t_PythonFieldStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonFieldStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonFieldStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonFieldStaticTransform::wrap_Object(PythonFieldStaticTransform(((t_PythonFieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldStaticTransform_of_(t_PythonFieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldStaticTransform_init_(t_PythonFieldStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonFieldStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldStaticTransform_finalize(t_PythonFieldStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldStaticTransform_pythonExtension(t_PythonFieldStaticTransform *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FieldStaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FieldStaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
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

      static jobject JNICALL t_PythonFieldStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
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

      static void JNICALL t_PythonFieldStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldStaticTransform::mids$[PythonFieldStaticTransform::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldStaticTransform_get__self(t_PythonFieldStaticTransform *self, void *data)
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
      static PyObject *t_PythonFieldStaticTransform_get__parameters_(t_PythonFieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Rint::class$ = NULL;
        jmethodID *Rint::mids$ = NULL;
        bool Rint::live$ = false;

        jclass Rint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Rint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Rint::Rint() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Rint::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Rint::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Rint_value(t_Rint *self, PyObject *args);

        static PyMethodDef t_Rint__methods_[] = {
          DECLARE_METHOD(t_Rint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rint)[] = {
          { Py_tp_methods, t_Rint__methods_ },
          { Py_tp_init, (void *) t_Rint_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rint, t_Rint, Rint);

        void t_Rint::install(PyObject *module)
        {
          installType(&PY_TYPE(Rint), &PY_TYPE_DEF(Rint), module, "Rint", 0);
        }

        void t_Rint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "class_", make_descriptor(Rint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "wrapfn_", make_descriptor(t_Rint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rint::initializeClass, 1)))
            return NULL;
          return t_Rint::wrap_Object(Rint(((t_Rint *) arg)->object.this$));
        }
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds)
        {
          Rint object((jobject) NULL);

          INT_CALL(object = Rint());
          self->object = object;

          return 0;
        }

        static PyObject *t_Rint_value(t_Rint *self, PyObject *args)
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
