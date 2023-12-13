#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonMatricesHarvester.h"
#include "java/util/List.h"
#include "org/orekit/propagation/MatricesHarvester.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonMatricesHarvester::class$ = NULL;
      jmethodID *PythonMatricesHarvester::mids$ = NULL;
      bool PythonMatricesHarvester::live$ = false;

      jclass PythonMatricesHarvester::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonMatricesHarvester");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getJacobiansColumnsNames_e62d3bb06d56d7e3] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
          mids$[mid_getOrbitType_c7d4737d7afca612] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getParametersJacobian_b7aa5791b069a41f] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getStateTransitionMatrix_b7aa5791b069a41f] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_setReferenceState_280c3390961e0a50] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonMatricesHarvester::PythonMatricesHarvester() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonMatricesHarvester::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonMatricesHarvester::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonMatricesHarvester::pythonExtension(jlong a0) const
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
    namespace propagation {
      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self);
      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args);
      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data);
      static PyGetSetDef t_PythonMatricesHarvester__fields_[] = {
        DECLARE_GET_FIELD(t_PythonMatricesHarvester, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonMatricesHarvester__methods_[] = {
        DECLARE_METHOD(t_PythonMatricesHarvester, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonMatricesHarvester, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonMatricesHarvester, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonMatricesHarvester)[] = {
        { Py_tp_methods, t_PythonMatricesHarvester__methods_ },
        { Py_tp_init, (void *) t_PythonMatricesHarvester_init_ },
        { Py_tp_getset, t_PythonMatricesHarvester__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonMatricesHarvester)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonMatricesHarvester, t_PythonMatricesHarvester, PythonMatricesHarvester);

      void t_PythonMatricesHarvester::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonMatricesHarvester), &PY_TYPE_DEF(PythonMatricesHarvester), module, "PythonMatricesHarvester", 1);
      }

      void t_PythonMatricesHarvester::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "class_", make_descriptor(PythonMatricesHarvester::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "wrapfn_", make_descriptor(t_PythonMatricesHarvester::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonMatricesHarvester::initializeClass);
        JNINativeMethod methods[] = {
          { "getJacobiansColumnsNames", "()Ljava/util/List;", (void *) t_PythonMatricesHarvester_getJacobiansColumnsNames0 },
          { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonMatricesHarvester_getOrbitType1 },
          { "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getParametersJacobian2 },
          { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonMatricesHarvester_getPositionAngleType3 },
          { "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;", (void *) t_PythonMatricesHarvester_getStateTransitionMatrix4 },
          { "pythonDecRef", "()V", (void *) t_PythonMatricesHarvester_pythonDecRef5 },
          { "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonMatricesHarvester_setReferenceState6 },
        };
        env->registerNatives(cls, methods, 7);
      }

      static PyObject *t_PythonMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonMatricesHarvester::initializeClass, 1)))
          return NULL;
        return t_PythonMatricesHarvester::wrap_Object(PythonMatricesHarvester(((t_PythonMatricesHarvester *) arg)->object.this$));
      }
      static PyObject *t_PythonMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonMatricesHarvester::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonMatricesHarvester_init_(t_PythonMatricesHarvester *self, PyObject *args, PyObject *kwds)
      {
        PythonMatricesHarvester object((jobject) NULL);

        INT_CALL(object = PythonMatricesHarvester());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonMatricesHarvester_finalize(t_PythonMatricesHarvester *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonMatricesHarvester_pythonExtension(t_PythonMatricesHarvester *self, PyObject *args)
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

      static jobject JNICALL t_PythonMatricesHarvester_getJacobiansColumnsNames0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getJacobiansColumnsNames", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getJacobiansColumnsNames", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getOrbitType1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getOrbitType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getParametersJacobian2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParametersJacobian", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getParametersJacobian", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getPositionAngleType3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
        {
          throwTypeError("getPositionAngleType", result);
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

      static jobject JNICALL t_PythonMatricesHarvester_getStateTransitionMatrix4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getStateTransitionMatrix", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &value))
        {
          throwTypeError("getStateTransitionMatrix", result);
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

      static void JNICALL t_PythonMatricesHarvester_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonMatricesHarvester_setReferenceState6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonMatricesHarvester::mids$[PythonMatricesHarvester::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "setReferenceState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonMatricesHarvester_get__self(t_PythonMatricesHarvester *self, void *data)
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
#include "org/orekit/propagation/conversion/PythonODEIntegratorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildIntegrator_916fa199ca08d656] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonODEIntegratorBuilder::PythonODEIntegratorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonODEIntegratorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonODEIntegratorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonODEIntegratorBuilder::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonODEIntegratorBuilder::mids$[PythonODEIntegratorBuilder::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
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
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *DerivativeGenerator::class$ = NULL;
        jmethodID *DerivativeGenerator::mids$ = NULL;
        bool DerivativeGenerator::live$ = false;

        jclass DerivativeGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/DerivativeGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_constant_9c238320e7e75505] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/Derivative;");
            mids$[mid_getField_04d1f63e17d5c5d4] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getSelected_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSelected", "()Ljava/util/List;");
            mids$[mid_variable_6ed5c290251c003e] = env->getMethodID(cls, "variable", "(Lorg/orekit/utils/ParameterDriver;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_constant_9c238320e7e75505], a0));
        }

        ::org::hipparchus::Field DerivativeGenerator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_04d1f63e17d5c5d4]));
        }

        ::java::util::List DerivativeGenerator::getSelected() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSelected_e62d3bb06d56d7e3]));
        }

        ::org::hipparchus::analysis::differentiation::Derivative DerivativeGenerator::variable(const ::org::orekit::utils::ParameterDriver & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_variable_6ed5c290251c003e], a0.this$));
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
      namespace utils {
        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args);
        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self);
        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg);
        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data);
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data);
        static PyGetSetDef t_DerivativeGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeGenerator, field),
          DECLARE_GET_FIELD(t_DerivativeGenerator, selected),
          DECLARE_GET_FIELD(t_DerivativeGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeGenerator__methods_[] = {
          DECLARE_METHOD(t_DerivativeGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeGenerator, constant, METH_O),
          DECLARE_METHOD(t_DerivativeGenerator, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, getSelected, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeGenerator, variable, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeGenerator)[] = {
          { Py_tp_methods, t_DerivativeGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeGenerator, t_DerivativeGenerator, DerivativeGenerator);
        PyObject *t_DerivativeGenerator::wrap_Object(const DerivativeGenerator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DerivativeGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DerivativeGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DerivativeGenerator *self = (t_DerivativeGenerator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DerivativeGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeGenerator), &PY_TYPE_DEF(DerivativeGenerator), module, "DerivativeGenerator", 0);
        }

        void t_DerivativeGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "class_", make_descriptor(DerivativeGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "wrapfn_", make_descriptor(t_DerivativeGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeGenerator::initializeClass, 1)))
            return NULL;
          return t_DerivativeGenerator::wrap_Object(DerivativeGenerator(((t_DerivativeGenerator *) arg)->object.this$));
        }
        static PyObject *t_DerivativeGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeGenerator_of_(t_DerivativeGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_DerivativeGenerator_constant(t_DerivativeGenerator *self, PyObject *arg)
        {
          jdouble a0;
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.constant(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "constant", arg);
          return NULL;
        }

        static PyObject *t_DerivativeGenerator_getField(t_DerivativeGenerator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_DerivativeGenerator_getSelected(t_DerivativeGenerator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DerivativeGenerator_variable(t_DerivativeGenerator *self, PyObject *arg)
        {
          ::org::orekit::utils::ParameterDriver a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.variable(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "variable", arg);
          return NULL;
        }
        static PyObject *t_DerivativeGenerator_get__parameters_(t_DerivativeGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DerivativeGenerator_get__field(t_DerivativeGenerator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeGenerator_get__selected(t_DerivativeGenerator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelected());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexComment::class$ = NULL;
          jmethodID *RinexComment::mids$ = NULL;
          bool RinexComment::live$ = false;

          jclass RinexComment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexComment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5817b937d38eafc1] = env->getMethodID(cls, "<init>", "(ILjava/lang/String;)V");
              mids$[mid_getLineNumber_55546ef6a647f39b] = env->getMethodID(cls, "getLineNumber", "()I");
              mids$[mid_getText_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexComment::RinexComment(jint a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5817b937d38eafc1, a0, a1.this$)) {}

          jint RinexComment::getLineNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLineNumber_55546ef6a647f39b]);
          }

          ::java::lang::String RinexComment::getText() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_1c1fa1e935d6cdcf]));
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
        namespace section {
          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self);
          static PyObject *t_RinexComment_getText(t_RinexComment *self);
          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data);
          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data);
          static PyGetSetDef t_RinexComment__fields_[] = {
            DECLARE_GET_FIELD(t_RinexComment, lineNumber),
            DECLARE_GET_FIELD(t_RinexComment, text),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexComment__methods_[] = {
            DECLARE_METHOD(t_RinexComment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, getLineNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexComment, getText, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexComment)[] = {
            { Py_tp_methods, t_RinexComment__methods_ },
            { Py_tp_init, (void *) t_RinexComment_init_ },
            { Py_tp_getset, t_RinexComment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexComment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexComment, t_RinexComment, RinexComment);

          void t_RinexComment::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexComment), &PY_TYPE_DEF(RinexComment), module, "RinexComment", 0);
          }

          void t_RinexComment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "class_", make_descriptor(RinexComment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "wrapfn_", make_descriptor(t_RinexComment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexComment::initializeClass, 1)))
              return NULL;
            return t_RinexComment::wrap_Object(RinexComment(((t_RinexComment *) arg)->object.this$));
          }
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexComment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            RinexComment object((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              INT_CALL(object = RinexComment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLineNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexComment_getText(t_RinexComment *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getText());
            return j2p(result);
          }

          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLineNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getText());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonAbstractKalmanEstimator.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonAbstractKalmanEstimator::class$ = NULL;
        jmethodID *PythonAbstractKalmanEstimator::mids$ = NULL;
        bool PythonAbstractKalmanEstimator::live$ = false;

        jclass PythonAbstractKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonAbstractKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getKalmanEstimation_10690b877ea302f7] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractKalmanEstimator::PythonAbstractKalmanEstimator(const ::java::util::List & a0) : ::org::orekit::estimation::sequential::AbstractKalmanEstimator(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

        void PythonAbstractKalmanEstimator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonAbstractKalmanEstimator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonAbstractKalmanEstimator::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self);
        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data);
        static PyGetSetDef t_PythonAbstractKalmanEstimator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractKalmanEstimator, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractKalmanEstimator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractKalmanEstimator)[] = {
          { Py_tp_methods, t_PythonAbstractKalmanEstimator__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractKalmanEstimator_init_ },
          { Py_tp_getset, t_PythonAbstractKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(PythonAbstractKalmanEstimator, t_PythonAbstractKalmanEstimator, PythonAbstractKalmanEstimator);

        void t_PythonAbstractKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractKalmanEstimator), &PY_TYPE_DEF(PythonAbstractKalmanEstimator), module, "PythonAbstractKalmanEstimator", 1);
        }

        void t_PythonAbstractKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "class_", make_descriptor(PythonAbstractKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "wrapfn_", make_descriptor(t_PythonAbstractKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractKalmanEstimator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractKalmanEstimator::initializeClass);
          JNINativeMethod methods[] = {
            { "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;", (void *) t_PythonAbstractKalmanEstimator_getKalmanEstimation0 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractKalmanEstimator_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonAbstractKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractKalmanEstimator::wrap_Object(PythonAbstractKalmanEstimator(((t_PythonAbstractKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractKalmanEstimator_init_(t_PythonAbstractKalmanEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          PythonAbstractKalmanEstimator object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = PythonAbstractKalmanEstimator(a0));
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

        static PyObject *t_PythonAbstractKalmanEstimator_finalize(t_PythonAbstractKalmanEstimator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractKalmanEstimator_pythonExtension(t_PythonAbstractKalmanEstimator *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractKalmanEstimator_getKalmanEstimation0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanEstimation value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getKalmanEstimation", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &value))
          {
            throwTypeError("getKalmanEstimation", result);
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

        static void JNICALL t_PythonAbstractKalmanEstimator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractKalmanEstimator::mids$[PythonAbstractKalmanEstimator::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractKalmanEstimator_get__self(t_PythonAbstractKalmanEstimator *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$AnglesMeasurement::class$ = NULL;
        jmethodID *CRD$AnglesMeasurement::mids$ = NULL;
        bool CRD$AnglesMeasurement::live$ = false;

        jclass CRD$AnglesMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$AnglesMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ed44afdd035b61a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDIIZDD)V");
            mids$[mid_getAzimuth_b74f83833fdad017] = env->getMethodID(cls, "getAzimuth", "()D");
            mids$[mid_getAzimuthRate_b74f83833fdad017] = env->getMethodID(cls, "getAzimuthRate", "()D");
            mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDirectionFlag_55546ef6a647f39b] = env->getMethodID(cls, "getDirectionFlag", "()I");
            mids$[mid_getElevation_b74f83833fdad017] = env->getMethodID(cls, "getElevation", "()D");
            mids$[mid_getElevationRate_b74f83833fdad017] = env->getMethodID(cls, "getElevationRate", "()D");
            mids$[mid_getOriginIndicator_55546ef6a647f39b] = env->getMethodID(cls, "getOriginIndicator", "()I");
            mids$[mid_isRefractionCorrected_9ab94ac1dc23b105] = env->getMethodID(cls, "isRefractionCorrected", "()Z");
            mids$[mid_toCrdString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$AnglesMeasurement::CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jint a3, jint a4, jboolean a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ed44afdd035b61a, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        jdouble CRD$AnglesMeasurement::getAzimuth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuth_b74f83833fdad017]);
        }

        jdouble CRD$AnglesMeasurement::getAzimuthRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuthRate_b74f83833fdad017]);
        }

        ::org::orekit::time::AbsoluteDate CRD$AnglesMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_c325492395d89b24]));
        }

        jint CRD$AnglesMeasurement::getDirectionFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDirectionFlag_55546ef6a647f39b]);
        }

        jdouble CRD$AnglesMeasurement::getElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_b74f83833fdad017]);
        }

        jdouble CRD$AnglesMeasurement::getElevationRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationRate_b74f83833fdad017]);
        }

        jint CRD$AnglesMeasurement::getOriginIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginIndicator_55546ef6a647f39b]);
        }

        jboolean CRD$AnglesMeasurement::isRefractionCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRefractionCorrected_9ab94ac1dc23b105]);
        }

        ::java::lang::String CRD$AnglesMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_1c1fa1e935d6cdcf]));
        }

        ::java::lang::String CRD$AnglesMeasurement::toString() const
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
        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data);
        static PyGetSetDef t_CRD$AnglesMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuth),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuthRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, directionFlag),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevation),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevationRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, originIndicator),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, refractionCorrected),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$AnglesMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$AnglesMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuth, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuthRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDirectionFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevation, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevationRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getOriginIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, isRefractionCorrected, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$AnglesMeasurement)[] = {
          { Py_tp_methods, t_CRD$AnglesMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$AnglesMeasurement_init_ },
          { Py_tp_getset, t_CRD$AnglesMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$AnglesMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$AnglesMeasurement, t_CRD$AnglesMeasurement, CRD$AnglesMeasurement);

        void t_CRD$AnglesMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$AnglesMeasurement), &PY_TYPE_DEF(CRD$AnglesMeasurement), module, "CRD$AnglesMeasurement", 0);
        }

        void t_CRD$AnglesMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "class_", make_descriptor(CRD$AnglesMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "wrapfn_", make_descriptor(t_CRD$AnglesMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$AnglesMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$AnglesMeasurement::wrap_Object(CRD$AnglesMeasurement(((t_CRD$AnglesMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$AnglesMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint a3;
          jint a4;
          jboolean a5;
          jdouble a6;
          jdouble a7;
          CRD$AnglesMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDIIZDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = CRD$AnglesMeasurement(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDirectionFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevationRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$AnglesMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuth());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDirectionFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevationRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCircularOrbit::class$ = NULL;
      jmethodID *FieldCircularOrbit::mids$ = NULL;
      bool FieldCircularOrbit::live$ = false;

      jclass FieldCircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_01b80e5fc8224f27] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_a2642de5f3f6bdfa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CircularOrbit;)V");
          mids$[mid_init$_e1cf5518a92ef935] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_77de91c247081784] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_16a0bc6b5307ef8d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_6ae44f82428ce0df] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_aee57b9535eb9d66] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_99dd76219aa0c8c0] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_eccentricToMean_8a93710b1b1536a6] = env->getStaticMethodID(cls, "eccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_eccentricToTrue_8a93710b1b1536a6] = env->getStaticMethodID(cls, "eccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_81520b552cb3fa26] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_81520b552cb3fa26] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlpha_dd259b88fa6c00bb] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaDot_dd259b88fa6c00bb] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaE_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaEDot_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaM_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaMDot_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaV_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaV", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAlphaVDot_81520b552cb3fa26] = env->getMethodID(cls, "getAlphaVDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_c25055891f180348] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_81520b552cb3fa26] = env->getMethodID(cls, "getCircularEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularExDot_81520b552cb3fa26] = env->getMethodID(cls, "getCircularExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEy_81520b552cb3fa26] = env->getMethodID(cls, "getCircularEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCircularEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getCircularEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_81520b552cb3fa26] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_81520b552cb3fa26] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_81520b552cb3fa26] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_81520b552cb3fa26] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_81520b552cb3fa26] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_81520b552cb3fa26] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_81520b552cb3fa26] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_81520b552cb3fa26] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_81520b552cb3fa26] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_81520b552cb3fa26] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_81520b552cb3fa26] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_81520b552cb3fa26] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_81520b552cb3fa26] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_81520b552cb3fa26] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_81520b552cb3fa26] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_81520b552cb3fa26] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_c7d4737d7afca612] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_9ab94ac1dc23b105] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_9ab94ac1dc23b105] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_8a93710b1b1536a6] = env->getStaticMethodID(cls, "meanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_removeRates_4465959f228cf02d] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_acb3306fcc402f4a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_shiftedBy_1fb80bff01bdf967] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCircularOrbit;");
          mids$[mid_toOrbit_ff9c43e14d9834f4] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_1c1fa1e935d6cdcf] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_8a93710b1b1536a6] = env->getStaticMethodID(cls, "trueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_initPosition_ff5ac73a7b43eddd] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_34ce7b2f6a50059b] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_01b80e5fc8224f27, a0.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CircularOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_a2642de5f3f6bdfa, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_e1cf5518a92ef935, a0.this$, a1.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_77de91c247081784, a0.this$, a1.this$, a2.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_16a0bc6b5307ef8d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_6ae44f82428ce0df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldCircularOrbit::FieldCircularOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_aee57b9535eb9d66, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldCircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_99dd76219aa0c8c0], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToMean_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::eccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_eccentricToTrue_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_dd259b88fa6c00bb], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaDot_dd259b88fa6c00bb], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaV() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaV_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getAlphaVDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlphaVDot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::PositionAngleType FieldCircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_c25055891f180348]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getCircularEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCircularEyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_81520b552cb3fa26]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_81520b552cb3fa26]));
      }

      ::org::orekit::orbits::OrbitType FieldCircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_c7d4737d7afca612]));
      }

      jboolean FieldCircularOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_9ab94ac1dc23b105]);
      }

      jboolean FieldCircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_9ab94ac1dc23b105]);
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::meanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_meanToEccentric_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }

      FieldCircularOrbit FieldCircularOrbit::removeRates() const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_4465959f228cf02d]));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_acb3306fcc402f4a], a0));
      }

      FieldCircularOrbit FieldCircularOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_1fb80bff01bdf967], a0.this$));
      }

      ::org::orekit::orbits::CircularOrbit FieldCircularOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CircularOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_ff9c43e14d9834f4]));
      }

      ::java::lang::String FieldCircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_1c1fa1e935d6cdcf]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCircularOrbit::trueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trueToEccentric_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args);
      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg);
      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self);
      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args);
      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data);
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data);
      static PyGetSetDef t_FieldCircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCircularOrbit, a),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, e),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, i),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, type),
        DECLARE_GET_FIELD(t_FieldCircularOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCircularOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldCircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldCircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCircularOrbit)[] = {
        { Py_tp_methods, t_FieldCircularOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCircularOrbit_init_ },
        { Py_tp_getset, t_FieldCircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCircularOrbit, t_FieldCircularOrbit, FieldCircularOrbit);
      PyObject *t_FieldCircularOrbit::wrap_Object(const FieldCircularOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCircularOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCircularOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCircularOrbit *self = (t_FieldCircularOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCircularOrbit), &PY_TYPE_DEF(FieldCircularOrbit), module, "FieldCircularOrbit", 0);
      }

      void t_FieldCircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "class_", make_descriptor(FieldCircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "wrapfn_", make_descriptor(t_FieldCircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCircularOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCircularOrbit::wrap_Object(FieldCircularOrbit(((t_FieldCircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCircularOrbit_of_(t_FieldCircularOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCircularOrbit_init_(t_FieldCircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CircularOrbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CircularOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldCircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldCircularOrbit_addKeplerContribution(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToMean(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::eccentricToTrue(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getA(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getADot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getAlpha(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaDot(t_FieldCircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_getAlphaE(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaEDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaEDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaM(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaMDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaMDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaV(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaV());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getAlphaVDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlphaVDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCachedPositionAngleType(t_FieldCircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEx(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularExDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularExDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEy(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getCircularEyDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getCircularEyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialExDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getEquinoctialEyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHx(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHxDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHy(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getHyDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getI(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getIDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLE(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLEDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLM(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLMDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLv(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getLvDot(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNode(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getRightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldCircularOrbit_getType(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasDerivatives(t_FieldCircularOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_hasRates(t_FieldCircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldCircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::meanToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldCircularOrbit_removeRates(t_FieldCircularOrbit *self)
      {
        FieldCircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldCircularOrbit_shiftedBy(t_FieldCircularOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCircularOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCircularOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toOrbit(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_toString(t_FieldCircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldCircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldCircularOrbit::trueToEccentric(a0, a1, a2));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }
      static PyObject *t_FieldCircularOrbit_get__parameters_(t_FieldCircularOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCircularOrbit_get__a(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__aDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaV(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaV());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__alphaVDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlphaVDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__cachedPositionAngleType(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__circularEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getCircularEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__e(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__eDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialExDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__equinoctialEyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hx(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hxDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hy(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__hyDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__i(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__iDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lE(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lEDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lM(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lMDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lv(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__lvDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNode(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldCircularOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCircularOrbit_get__type(t_FieldCircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpDec.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpDec::class$ = NULL;
      jmethodID *DfpDec::mids$ = NULL;
      bool DfpDec::live$ = false;

      jclass DfpDec::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpDec");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d77491573342a7ca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/dfp/Dfp;)V");
          mids$[mid_newInstance_2b93193437c3f00d] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_844df78cba5c1168] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_a714269abf022321] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_3dbae42c27edb89e] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_757f32f1791cffc4] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_026cdd2d1c22b25b] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_a276979b31da24ca] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_65a23ba49b68f64d] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_a714269abf022321] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getDecimalDigits_55546ef6a647f39b] = env->getMethodID(cls, "getDecimalDigits", "()I");
          mids$[mid_round_0e7cf35192c3effe] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpDec::DfpDec(const ::org::hipparchus::dfp::Dfp & a0) : ::org::hipparchus::dfp::Dfp(env->newObject(initializeClass, &mids$, mid_init$_d77491573342a7ca, a0.this$)) {}

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_2b93193437c3f00d]));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_844df78cba5c1168], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_a714269abf022321], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_3dbae42c27edb89e], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_757f32f1791cffc4], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_026cdd2d1c22b25b], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_a276979b31da24ca], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::newInstance(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_65a23ba49b68f64d], a0, a1));
      }

      ::org::hipparchus::dfp::Dfp DfpDec::nextAfter(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_a714269abf022321], a0.this$));
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
      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args);
      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args);

      static PyMethodDef t_DfpDec__methods_[] = {
        DECLARE_METHOD(t_DfpDec, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpDec, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_DfpDec, nextAfter, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpDec)[] = {
        { Py_tp_methods, t_DfpDec__methods_ },
        { Py_tp_init, (void *) t_DfpDec_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpDec)[] = {
        &PY_TYPE_DEF(::org::hipparchus::dfp::Dfp),
        NULL
      };

      DEFINE_TYPE(DfpDec, t_DfpDec, DfpDec);

      void t_DfpDec::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpDec), &PY_TYPE_DEF(DfpDec), module, "DfpDec", 0);
      }

      void t_DfpDec::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "class_", make_descriptor(DfpDec::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "wrapfn_", make_descriptor(t_DfpDec::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpDec), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DfpDec_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpDec::initializeClass, 1)))
          return NULL;
        return t_DfpDec::wrap_Object(DfpDec(((t_DfpDec *) arg)->object.this$));
      }
      static PyObject *t_DfpDec_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpDec::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpDec_init_(t_DfpDec *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        DfpDec object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          INT_CALL(object = DfpDec(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpDec_newInstance(t_DfpDec *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "newInstance", args, 2);
      }

      static PyObject *t_DfpDec_nextAfter(t_DfpDec *self, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        return callSuper(PY_TYPE(DfpDec), (PyObject *) self, "nextAfter", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/AbstractListCrawler.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractListCrawler::class$ = NULL;
      jmethodID *AbstractListCrawler::mids$ = NULL;
      bool AbstractListCrawler::live$ = false;

      jclass AbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addInput_55f3c894852c27a3] = env->getMethodID(cls, "addInput", "(Ljava/lang/Object;)V");
          mids$[mid_getInputs_e62d3bb06d56d7e3] = env->getMethodID(cls, "getInputs", "()Ljava/util/List;");
          mids$[mid_getStream_0382569eb62554bd] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_af9c1f2da4a68b37] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_9a3ac03d9f8571c6] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_9a3ac03d9f8571c6] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractListCrawler::addInput(const ::java::lang::Object & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addInput_55f3c894852c27a3], a0.this$);
      }

      ::java::util::List AbstractListCrawler::getInputs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getInputs_e62d3bb06d56d7e3]));
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
      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args);
      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg);
      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self);
      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data);
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data);
      static PyGetSetDef t_AbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractListCrawler, inputs),
        DECLARE_GET_FIELD(t_AbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_AbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractListCrawler, addInput, METH_O),
        DECLARE_METHOD(t_AbstractListCrawler, getInputs, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractListCrawler)[] = {
        { Py_tp_methods, t_AbstractListCrawler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractListCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractListCrawler, t_AbstractListCrawler, AbstractListCrawler);
      PyObject *t_AbstractListCrawler::wrap_Object(const AbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractListCrawler), &PY_TYPE_DEF(AbstractListCrawler), module, "AbstractListCrawler", 0);
      }

      void t_AbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "class_", make_descriptor(AbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "wrapfn_", make_descriptor(t_AbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_AbstractListCrawler::wrap_Object(AbstractListCrawler(((t_AbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(self->object.addInput(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addInput", arg);
        return NULL;
      }

      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/PolynomialRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/stream/Stream.h"
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
            mids$[mid_init$_55952f809071fe32] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;[D)V");
            mids$[mid_init$_35036eebee87138e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
            mids$[mid_getParametersDrivers_14e21bf777ff0ccf] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_355979cbd37ce923] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_d764ada7ab62136f] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55952f809071fe32, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        PolynomialRotation::PolynomialRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_35036eebee87138e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        ::java::util::stream::Stream PolynomialRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_14e21bf777ff0ccf]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_355979cbd37ce923], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PolynomialRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::rugged::utils::DerivativeGenerator & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_d764ada7ab62136f], a0, a1.this$, a2.this$, a3.this$));
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
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventDetector::class$ = NULL;
        jmethodID *FieldODEEventDetector::mids$ = NULL;
        bool FieldODEEventDetector::live$ = false;

        jclass FieldODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_751903dc38e0b7e8] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_daa4dcd20dd895b8] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_9e96a56f8b6efe47] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_95522f52875c5391] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_55fdeef582303a99] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldODEEventDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_751903dc38e0b7e8], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler FieldODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_daa4dcd20dd895b8]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval FieldODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_9e96a56f8b6efe47]));
        }

        jint FieldODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver FieldODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_95522f52875c5391]));
        }

        void FieldODEEventDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_55fdeef582303a99], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data);
        static PyGetSetDef t_FieldODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, solver),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventDetector)[] = {
          { Py_tp_methods, t_FieldODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventDetector, t_FieldODEEventDetector, FieldODEEventDetector);
        PyObject *t_FieldODEEventDetector::wrap_Object(const FieldODEEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventDetector), &PY_TYPE_DEF(FieldODEEventDetector), module, "FieldODEEventDetector", 0);
        }

        void t_FieldODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "class_", make_descriptor(FieldODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "wrapfn_", make_descriptor(t_FieldODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventDetector::wrap_Object(FieldODEEventDetector(((t_FieldODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ocm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmWriter::class$ = NULL;
              jmethodID *OcmWriter::mids$ = NULL;
              bool OcmWriter::live$ = false;
              jdouble OcmWriter::CCSDS_OCM_VERS = (jdouble) 0;
              jint OcmWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OcmWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ec721292a5bded45] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;DDLorg/orekit/data/DataContext;)V");
                  mids$[mid_getEquatorialRadius_b74f83833fdad017] = env->getMethodID(cls, "getEquatorialRadius", "()D");
                  mids$[mid_getFlattening_b74f83833fdad017] = env->getMethodID(cls, "getFlattening", "()D");
                  mids$[mid_writeSegmentContent_309d7ce7156c8c23] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/section/Segment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OCM_VERS = env->getStaticDoubleField(cls, "CCSDS_OCM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmWriter::OcmWriter(const ::org::orekit::utils::IERSConventions & a0, jdouble a1, jdouble a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_ec721292a5bded45, a0.this$, a1, a2, a3.this$)) {}

              jdouble OcmWriter::getEquatorialRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getEquatorialRadius_b74f83833fdad017]);
              }

              jdouble OcmWriter::getFlattening() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getFlattening_b74f83833fdad017]);
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
              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args);
              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self);
              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self);
              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data);
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data);
              static PyGetSetDef t_OcmWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OcmWriter, equatorialRadius),
                DECLARE_GET_FIELD(t_OcmWriter, flattening),
                DECLARE_GET_FIELD(t_OcmWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmWriter__methods_[] = {
                DECLARE_METHOD(t_OcmWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmWriter, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmWriter, getEquatorialRadius, METH_NOARGS),
                DECLARE_METHOD(t_OcmWriter, getFlattening, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmWriter)[] = {
                { Py_tp_methods, t_OcmWriter__methods_ },
                { Py_tp_init, (void *) t_OcmWriter_init_ },
                { Py_tp_getset, t_OcmWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OcmWriter, t_OcmWriter, OcmWriter);
              PyObject *t_OcmWriter::wrap_Object(const OcmWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OcmWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OcmWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmWriter *self = (t_OcmWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OcmWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmWriter), &PY_TYPE_DEF(OcmWriter), module, "OcmWriter", 0);
              }

              void t_OcmWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "class_", make_descriptor(OcmWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "wrapfn_", make_descriptor(t_OcmWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "CCSDS_OCM_VERS", make_descriptor(OcmWriter::CCSDS_OCM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmWriter), "KVN_PADDING_WIDTH", make_descriptor(OcmWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OcmWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmWriter::initializeClass, 1)))
                  return NULL;
                return t_OcmWriter::wrap_Object(OcmWriter(((t_OcmWriter *) arg)->object.this$));
              }
              static PyObject *t_OcmWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmWriter_of_(t_OcmWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OcmWriter_init_(t_OcmWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                jdouble a2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                OcmWriter object((jobject) NULL);

                if (!parseArgs(args, "KDDk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = OcmWriter(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(Ocm);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OcmWriter_getEquatorialRadius(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OcmWriter_getFlattening(t_OcmWriter *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlattening());
                return PyFloat_FromDouble((double) result);
              }
              static PyObject *t_OcmWriter_get__parameters_(t_OcmWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OcmWriter_get__equatorialRadius(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getEquatorialRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OcmWriter_get__flattening(t_OcmWriter *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getFlattening());
                return PyFloat_FromDouble((double) value);
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
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "org/orekit/files/ccsds/ndm/tdm/CorrectionApplied.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *CorrectionApplied::class$ = NULL;
            jmethodID *CorrectionApplied::mids$ = NULL;
            bool CorrectionApplied::live$ = false;
            CorrectionApplied *CorrectionApplied::NO = NULL;
            CorrectionApplied *CorrectionApplied::YES = NULL;

            jclass CorrectionApplied::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/CorrectionApplied");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_f6417342984ad32f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");
                mids$[mid_values_0dcafd59278b6c8a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new CorrectionApplied(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                YES = new CorrectionApplied(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/tdm/CorrectionApplied;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CorrectionApplied CorrectionApplied::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CorrectionApplied(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f6417342984ad32f], a0.this$));
            }

            JArray< CorrectionApplied > CorrectionApplied::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CorrectionApplied >(env->callStaticObjectMethod(cls, mids$[mid_values_0dcafd59278b6c8a]));
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
            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args);
            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CorrectionApplied_values(PyTypeObject *type);
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data);
            static PyGetSetDef t_CorrectionApplied__fields_[] = {
              DECLARE_GET_FIELD(t_CorrectionApplied, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CorrectionApplied__methods_[] = {
              DECLARE_METHOD(t_CorrectionApplied, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, of_, METH_VARARGS),
              DECLARE_METHOD(t_CorrectionApplied, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CorrectionApplied, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CorrectionApplied)[] = {
              { Py_tp_methods, t_CorrectionApplied__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CorrectionApplied__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CorrectionApplied)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CorrectionApplied, t_CorrectionApplied, CorrectionApplied);
            PyObject *t_CorrectionApplied::wrap_Object(const CorrectionApplied& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CorrectionApplied::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CorrectionApplied::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CorrectionApplied *self = (t_CorrectionApplied *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CorrectionApplied::install(PyObject *module)
            {
              installType(&PY_TYPE(CorrectionApplied), &PY_TYPE_DEF(CorrectionApplied), module, "CorrectionApplied", 0);
            }

            void t_CorrectionApplied::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "class_", make_descriptor(CorrectionApplied::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "wrapfn_", make_descriptor(t_CorrectionApplied::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "boxfn_", make_descriptor(boxObject));
              env->getClass(CorrectionApplied::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "NO", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CorrectionApplied), "YES", make_descriptor(t_CorrectionApplied::wrap_Object(*CorrectionApplied::YES)));
            }

            static PyObject *t_CorrectionApplied_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CorrectionApplied::initializeClass, 1)))
                return NULL;
              return t_CorrectionApplied::wrap_Object(CorrectionApplied(((t_CorrectionApplied *) arg)->object.this$));
            }
            static PyObject *t_CorrectionApplied_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CorrectionApplied::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CorrectionApplied_of_(t_CorrectionApplied *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CorrectionApplied_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CorrectionApplied result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::valueOf(a0));
                return t_CorrectionApplied::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CorrectionApplied_values(PyTypeObject *type)
            {
              JArray< CorrectionApplied > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::CorrectionApplied::values());
              return JArray<jobject>(result.this$).wrap(t_CorrectionApplied::wrap_jobject);
            }
            static PyObject *t_CorrectionApplied_get__parameters_(t_CorrectionApplied *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTNewtonianAttractionContext::class$ = NULL;
            jmethodID *DSSTNewtonianAttractionContext::mids$ = NULL;
            bool DSSTNewtonianAttractionContext::live$ = false;

            jclass DSSTNewtonianAttractionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTNewtonianAttractionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fd1cd6a4cd6e52a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)V");
                mids$[mid_getGM_b74f83833fdad017] = env->getMethodID(cls, "getGM", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTNewtonianAttractionContext::DSSTNewtonianAttractionContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const JArray< jdouble > & a1) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_fd1cd6a4cd6e52a8, a0.this$, a1.this$)) {}

            jdouble DSSTNewtonianAttractionContext::getGM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGM_b74f83833fdad017]);
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
            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self);
            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data);
            static PyGetSetDef t_DSSTNewtonianAttractionContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTNewtonianAttractionContext, gM),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTNewtonianAttractionContext__methods_[] = {
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTNewtonianAttractionContext, getGM, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTNewtonianAttractionContext)[] = {
              { Py_tp_methods, t_DSSTNewtonianAttractionContext__methods_ },
              { Py_tp_init, (void *) t_DSSTNewtonianAttractionContext_init_ },
              { Py_tp_getset, t_DSSTNewtonianAttractionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTNewtonianAttractionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTNewtonianAttractionContext, t_DSSTNewtonianAttractionContext, DSSTNewtonianAttractionContext);

            void t_DSSTNewtonianAttractionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTNewtonianAttractionContext), &PY_TYPE_DEF(DSSTNewtonianAttractionContext), module, "DSSTNewtonianAttractionContext", 0);
            }

            void t_DSSTNewtonianAttractionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "class_", make_descriptor(DSSTNewtonianAttractionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "wrapfn_", make_descriptor(t_DSSTNewtonianAttractionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTNewtonianAttractionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTNewtonianAttractionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 1)))
                return NULL;
              return t_DSSTNewtonianAttractionContext::wrap_Object(DSSTNewtonianAttractionContext(((t_DSSTNewtonianAttractionContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTNewtonianAttractionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTNewtonianAttractionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTNewtonianAttractionContext_init_(t_DSSTNewtonianAttractionContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              DSSTNewtonianAttractionContext object((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTNewtonianAttractionContext(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTNewtonianAttractionContext_getGM(t_DSSTNewtonianAttractionContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTNewtonianAttractionContext_get__gM(t_DSSTNewtonianAttractionContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGM());
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
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor$Order::class$ = NULL;
        jmethodID *BSPTreeVisitor$Order::mids$ = NULL;
        bool BSPTreeVisitor$Order::live$ = false;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_PLUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::MINUS_SUB_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_MINUS_SUB = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::PLUS_SUB_MINUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_MINUS_PLUS = NULL;
        BSPTreeVisitor$Order *BSPTreeVisitor$Order::SUB_PLUS_MINUS = NULL;

        jclass BSPTreeVisitor$Order::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_7454b166b2cebb8c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");
            mids$[mid_values_8cb82798402ba620] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MINUS_PLUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_PLUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            MINUS_SUB_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "MINUS_SUB_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_MINUS_SUB = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_MINUS_SUB", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            PLUS_SUB_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "PLUS_SUB_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_MINUS_PLUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_MINUS_PLUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            SUB_PLUS_MINUS = new BSPTreeVisitor$Order(env->getStaticObjectField(cls, "SUB_PLUS_MINUS", "Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BSPTreeVisitor$Order BSPTreeVisitor$Order::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BSPTreeVisitor$Order(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7454b166b2cebb8c], a0.this$));
        }

        JArray< BSPTreeVisitor$Order > BSPTreeVisitor$Order::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< BSPTreeVisitor$Order >(env->callStaticObjectMethod(cls, mids$[mid_values_8cb82798402ba620]));
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
        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type);
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor$Order__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor$Order, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor$Order__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor$Order, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor$Order, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor$Order)[] = {
          { Py_tp_methods, t_BSPTreeVisitor$Order__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor$Order__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor$Order)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor$Order, t_BSPTreeVisitor$Order, BSPTreeVisitor$Order);
        PyObject *t_BSPTreeVisitor$Order::wrap_Object(const BSPTreeVisitor$Order& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor$Order::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor$Order::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor$Order *self = (t_BSPTreeVisitor$Order *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor$Order::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor$Order), &PY_TYPE_DEF(BSPTreeVisitor$Order), module, "BSPTreeVisitor$Order", 0);
        }

        void t_BSPTreeVisitor$Order::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "class_", make_descriptor(BSPTreeVisitor$Order::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "wrapfn_", make_descriptor(t_BSPTreeVisitor$Order::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "boxfn_", make_descriptor(boxObject));
          env->getClass(BSPTreeVisitor$Order::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_PLUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_PLUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "MINUS_SUB_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::MINUS_SUB_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_MINUS_SUB", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_MINUS_SUB)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "PLUS_SUB_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::PLUS_SUB_MINUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_MINUS_PLUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_MINUS_PLUS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor$Order), "SUB_PLUS_MINUS", make_descriptor(t_BSPTreeVisitor$Order::wrap_Object(*BSPTreeVisitor$Order::SUB_PLUS_MINUS)));
        }

        static PyObject *t_BSPTreeVisitor$Order_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor$Order::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor$Order::wrap_Object(BSPTreeVisitor$Order(((t_BSPTreeVisitor$Order *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor$Order_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor$Order::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor$Order_of_(t_BSPTreeVisitor$Order *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor$Order_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::valueOf(a0));
            return t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_BSPTreeVisitor$Order_values(PyTypeObject *type)
        {
          JArray< BSPTreeVisitor$Order > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order::values());
          return JArray<jobject>(result.this$).wrap(t_BSPTreeVisitor$Order::wrap_jobject);
        }
        static PyObject *t_BSPTreeVisitor$Order_get__parameters_(t_BSPTreeVisitor$Order *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *GeneratedMeasurementSubscriber::mids$ = NULL;
          bool GeneratedMeasurementSubscriber::live$ = false;

          jclass GeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_handleGeneratedMeasurement_1640bf51befb0c77] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_f89af00fc113b524] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GeneratedMeasurementSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_1640bf51befb0c77], a0.this$);
          }

          void GeneratedMeasurementSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_f89af00fc113b524], a0.this$, a1.this$);
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
        namespace generation {
          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args);

          static PyMethodDef t_GeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_GeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GeneratedMeasurementSubscriber, t_GeneratedMeasurementSubscriber, GeneratedMeasurementSubscriber);

          void t_GeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GeneratedMeasurementSubscriber), &PY_TYPE_DEF(GeneratedMeasurementSubscriber), module, "GeneratedMeasurementSubscriber", 0);
          }

          void t_GeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "class_", make_descriptor(GeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_GeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_GeneratedMeasurementSubscriber::wrap_Object(GeneratedMeasurementSubscriber(((t_GeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAdditionalStateProvider.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonAdditionalStateProvider::mids$ = NULL;
      bool PythonAdditionalStateProvider::live$ = false;

      jclass PythonAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_f227e5f48720b798] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
          mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_97df9017614a1945] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/SpacecraftState;)Z");
          mids$[mid_yield__97df9017614a1945] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAdditionalStateProvider::PythonAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }

      jboolean PythonAdditionalStateProvider::yield(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_97df9017614a1945], a0.this$);
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
      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self);
      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAdditionalStateProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAdditionalStateProvider, t_PythonAdditionalStateProvider, PythonAdditionalStateProvider);

      void t_PythonAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAdditionalStateProvider), &PY_TYPE_DEF(PythonAdditionalStateProvider), module, "PythonAdditionalStateProvider", 1);
      }

      void t_PythonAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "class_", make_descriptor(PythonAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/SpacecraftState;)Z", (void *) t_PythonAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonAdditionalStateProvider::wrap_Object(PythonAdditionalStateProvider(((t_PythonAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAdditionalStateProvider_init_(t_PythonAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_finalize(t_PythonAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAdditionalStateProvider_pythonExtension(t_PythonAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonAdditionalStateProvider_yield(t_PythonAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
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

      static void JNICALL t_PythonAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAdditionalStateProvider::mids$[PythonAdditionalStateProvider::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonAdditionalStateProvider_get__self(t_PythonAdditionalStateProvider *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/TimeSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$TimeSystemConsumer::class$ = NULL;
            jmethodID *ParseToken$TimeSystemConsumer::mids$ = NULL;
            bool ParseToken$TimeSystemConsumer::live$ = false;

            jclass ParseToken$TimeSystemConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$TimeSystemConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_00f5ccc3311d9b97] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/definitions/TimeSystem;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$TimeSystemConsumer::accept(const ::org::orekit::files::ccsds::definitions::TimeSystem & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_00f5ccc3311d9b97], a0.this$);
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
            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$TimeSystemConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$TimeSystemConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$TimeSystemConsumer)[] = {
              { Py_tp_methods, t_ParseToken$TimeSystemConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$TimeSystemConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$TimeSystemConsumer, t_ParseToken$TimeSystemConsumer, ParseToken$TimeSystemConsumer);

            void t_ParseToken$TimeSystemConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$TimeSystemConsumer), &PY_TYPE_DEF(ParseToken$TimeSystemConsumer), module, "ParseToken$TimeSystemConsumer", 0);
            }

            void t_ParseToken$TimeSystemConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "class_", make_descriptor(ParseToken$TimeSystemConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "wrapfn_", make_descriptor(t_ParseToken$TimeSystemConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$TimeSystemConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$TimeSystemConsumer::wrap_Object(ParseToken$TimeSystemConsumer(((t_ParseToken$TimeSystemConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$TimeSystemConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$TimeSystemConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$TimeSystemConsumer_accept(t_ParseToken$TimeSystemConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::TimeSystem a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_TimeSystem::parameters_))
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
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_b5167f35b2521627] = env->getMethodID(cls, "<init>", "(DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RegulaFalsiSolver::RegulaFalsiSolver() : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        RegulaFalsiSolver::RegulaFalsiSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::BaseSecantSolver(env->newObject(initializeClass, &mids$, mid_init$_b5167f35b2521627, a0, a1, a2)) {}
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
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeInterpolator.h"
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
          mids$[mid_init$_0c39569b67ad4297] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_804bce5809bbc06f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_6e94f93e19d6364d] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_0c39569b67ad4297, a0.this$, a1.this$, a2.this$)) {}

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_804bce5809bbc06f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "org/hipparchus/stat/descriptive/StorelessUnivariateStatistic.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessUnivariateStatistic::class$ = NULL;
        jmethodID *StorelessUnivariateStatistic::mids$ = NULL;
        bool StorelessUnivariateStatistic::live$ = false;

        jclass StorelessUnivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessUnivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_2b25c166f19a0def] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/StorelessUnivariateStatistic;");
            mids$[mid_evaluate_1567a80062adb31b] = env->getMethodID(cls, "evaluate", "([DII)D");
            mids$[mid_getN_6c0ce7e438e5ded4] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_b74f83833fdad017] = env->getMethodID(cls, "getResult", "()D");
            mids$[mid_increment_8ba9fe7a847cecad] = env->getMethodID(cls, "increment", "(D)V");
            mids$[mid_incrementAll_ab69da052b88f50c] = env->getMethodID(cls, "incrementAll", "([D)V");
            mids$[mid_incrementAll_4484ad1f15b73c7a] = env->getMethodID(cls, "incrementAll", "([DII)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessUnivariateStatistic::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
        }

        void StorelessUnivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
        }

        StorelessUnivariateStatistic StorelessUnivariateStatistic::copy() const
        {
          return StorelessUnivariateStatistic(env->callObjectMethod(this$, mids$[mid_copy_2b25c166f19a0def]));
        }

        jdouble StorelessUnivariateStatistic::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_1567a80062adb31b], a0.this$, a1, a2);
        }

        jlong StorelessUnivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_6c0ce7e438e5ded4]);
        }

        jdouble StorelessUnivariateStatistic::getResult() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getResult_b74f83833fdad017]);
        }

        void StorelessUnivariateStatistic::increment(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_8ba9fe7a847cecad], a0);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_ab69da052b88f50c], a0.this$);
        }

        void StorelessUnivariateStatistic::incrementAll(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_incrementAll_4484ad1f15b73c7a], a0.this$, a1, a2);
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
        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self);
        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args);
        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data);
        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessUnivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessUnivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessUnivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessUnivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, accept, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, copy, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, increment, METH_O),
          DECLARE_METHOD(t_StorelessUnivariateStatistic, incrementAll, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessUnivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessUnivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessUnivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessUnivariateStatistic)[] = {
          &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::UnivariateStatistic),
          NULL
        };

        DEFINE_TYPE(StorelessUnivariateStatistic, t_StorelessUnivariateStatistic, StorelessUnivariateStatistic);

        void t_StorelessUnivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessUnivariateStatistic), &PY_TYPE_DEF(StorelessUnivariateStatistic), module, "StorelessUnivariateStatistic", 0);
        }

        void t_StorelessUnivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "class_", make_descriptor(StorelessUnivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "wrapfn_", make_descriptor(t_StorelessUnivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessUnivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessUnivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessUnivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessUnivariateStatistic::wrap_Object(StorelessUnivariateStatistic(((t_StorelessUnivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessUnivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessUnivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessUnivariateStatistic_accept(t_StorelessUnivariateStatistic *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.accept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "accept", arg);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_clear(t_StorelessUnivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessUnivariateStatistic_copy(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          StorelessUnivariateStatistic result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_StorelessUnivariateStatistic::wrap_Object(result);
          }

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_evaluate(t_StorelessUnivariateStatistic *self, PyObject *args)
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

          return callSuper(PY_TYPE(StorelessUnivariateStatistic), (PyObject *) self, "evaluate", args, 2);
        }

        static PyObject *t_StorelessUnivariateStatistic_getN(t_StorelessUnivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_getResult(t_StorelessUnivariateStatistic *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getResult());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StorelessUnivariateStatistic_increment(t_StorelessUnivariateStatistic *self, PyObject *arg)
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

        static PyObject *t_StorelessUnivariateStatistic_incrementAll(t_StorelessUnivariateStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(self->object.incrementAll(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;

              if (!parseArgs(args, "[DII", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.incrementAll(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "incrementAll", args);
          return NULL;
        }

        static PyObject *t_StorelessUnivariateStatistic_get__n(t_StorelessUnivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessUnivariateStatistic_get__result(t_StorelessUnivariateStatistic *self, void *data)
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
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericRefraction::class$ = NULL;
        jmethodID *AtmosphericRefraction::mids$ = NULL;
        bool AtmosphericRefraction::live$ = false;

        jclass AtmosphericRefraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericRefraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyCorrection_88676b739a4ea0ca] = env->getMethodID(cls, "applyCorrection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/orekit/rugged/intersection/IntersectionAlgorithm;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_computeGridCorrectionFunctions_100b59f5a1608878] = env->getMethodID(cls, "computeGridCorrectionFunctions", "([[Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_configureCorrectionGrid_6998202d78aaf9b3] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_deactivateComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "deactivateComputation", "()V");
            mids$[mid_getBifLine_39d5e04e66a73298] = env->getMethodID(cls, "getBifLine", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getBifPixel_39d5e04e66a73298] = env->getMethodID(cls, "getBifPixel", "()Lorg/hipparchus/analysis/interpolation/BilinearInterpolatingFunction;");
            mids$[mid_getComputationParameters_c0286b645a347da0] = env->getMethodID(cls, "getComputationParameters", "()Lorg/orekit/rugged/refraction/AtmosphericComputationParameters;");
            mids$[mid_isSameContext_dd98a0a85f82fe3f] = env->getMethodID(cls, "isSameContext", "(Ljava/lang/String;II)Ljava/lang/Boolean;");
            mids$[mid_mustBeComputed_9ab94ac1dc23b105] = env->getMethodID(cls, "mustBeComputed", "()Z");
            mids$[mid_reactivateComputation_a1fa5dae97ea5ed2] = env->getMethodID(cls, "reactivateComputation", "()V");
            mids$[mid_setGridSteps_3313c75e3e16c428] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_8ba9fe7a847cecad] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint AtmosphericRefraction::applyCorrection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a2, const ::org::orekit::rugged::intersection::IntersectionAlgorithm & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_applyCorrection_88676b739a4ea0ca], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        void AtmosphericRefraction::computeGridCorrectionFunctions(const JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_computeGridCorrectionFunctions_100b59f5a1608878], a0.this$);
        }

        void AtmosphericRefraction::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_6998202d78aaf9b3], a0.this$, a1, a2);
        }

        void AtmosphericRefraction::deactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_deactivateComputation_a1fa5dae97ea5ed2]);
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifLine() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifLine_39d5e04e66a73298]));
        }

        ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction AtmosphericRefraction::getBifPixel() const
        {
          return ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_getBifPixel_39d5e04e66a73298]));
        }

        ::org::orekit::rugged::refraction::AtmosphericComputationParameters AtmosphericRefraction::getComputationParameters() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericComputationParameters(env->callObjectMethod(this$, mids$[mid_getComputationParameters_c0286b645a347da0]));
        }

        ::java::lang::Boolean AtmosphericRefraction::isSameContext(const ::java::lang::String & a0, jint a1, jint a2) const
        {
          return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isSameContext_dd98a0a85f82fe3f], a0.this$, a1, a2));
        }

        jboolean AtmosphericRefraction::mustBeComputed() const
        {
          return env->callBooleanMethod(this$, mids$[mid_mustBeComputed_9ab94ac1dc23b105]);
        }

        void AtmosphericRefraction::reactivateComputation() const
        {
          env->callVoidMethod(this$, mids$[mid_reactivateComputation_a1fa5dae97ea5ed2]);
        }

        void AtmosphericRefraction::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_3313c75e3e16c428], a0, a1);
        }

        void AtmosphericRefraction::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_8ba9fe7a847cecad], a0);
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
      namespace refraction {
        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self);
        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args);
        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg);
        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data);
        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data);
        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data);
        static PyGetSetDef t_AtmosphericRefraction__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifLine),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, bifPixel),
          DECLARE_GET_FIELD(t_AtmosphericRefraction, computationParameters),
          DECLARE_SET_FIELD(t_AtmosphericRefraction, inverseLocMargin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericRefraction__methods_[] = {
          DECLARE_METHOD(t_AtmosphericRefraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericRefraction, applyCorrection, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, computeGridCorrectionFunctions, METH_O),
          DECLARE_METHOD(t_AtmosphericRefraction, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, deactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifLine, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getBifPixel, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, getComputationParameters, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, isSameContext, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, mustBeComputed, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, reactivateComputation, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericRefraction, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericRefraction)[] = {
          { Py_tp_methods, t_AtmosphericRefraction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AtmosphericRefraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericRefraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericRefraction, t_AtmosphericRefraction, AtmosphericRefraction);

        void t_AtmosphericRefraction::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericRefraction), &PY_TYPE_DEF(AtmosphericRefraction), module, "AtmosphericRefraction", 0);
        }

        void t_AtmosphericRefraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "class_", make_descriptor(AtmosphericRefraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "wrapfn_", make_descriptor(t_AtmosphericRefraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericRefraction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericRefraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericRefraction::initializeClass, 1)))
            return NULL;
          return t_AtmosphericRefraction::wrap_Object(AtmosphericRefraction(((t_AtmosphericRefraction *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericRefraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericRefraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AtmosphericRefraction_applyCorrection(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a2((jobject) NULL);
          ::org::orekit::rugged::intersection::IntersectionAlgorithm a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::orekit::rugged::intersection::IntersectionAlgorithm::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.applyCorrection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "applyCorrection", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_computeGridCorrectionFunctions(t_AtmosphericRefraction *self, PyObject *arg)
        {
          JArray< JArray< ::org::orekit::rugged::linesensor::SensorPixel > > a0((jobject) NULL);

          if (!parseArg(arg, "[[k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.computeGridCorrectionFunctions(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "computeGridCorrectionFunctions", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_configureCorrectionGrid(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_deactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.deactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_getBifLine(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getBifPixel(t_AtmosphericRefraction *self)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_getComputationParameters(t_AtmosphericRefraction *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters result((jobject) NULL);
          OBJ_CALL(result = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(result);
        }

        static PyObject *t_AtmosphericRefraction_isSameContext(t_AtmosphericRefraction *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Boolean result((jobject) NULL);

          if (!parseArgs(args, "sII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.isSameContext(a0, a1, a2));
            return ::java::lang::t_Boolean::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isSameContext", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_mustBeComputed(t_AtmosphericRefraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.mustBeComputed());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AtmosphericRefraction_reactivateComputation(t_AtmosphericRefraction *self)
        {
          OBJ_CALL(self->object.reactivateComputation());
          Py_RETURN_NONE;
        }

        static PyObject *t_AtmosphericRefraction_setGridSteps(t_AtmosphericRefraction *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_setInverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericRefraction_get__bifLine(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifLine());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__bifPixel(t_AtmosphericRefraction *self, void *data)
        {
          ::org::hipparchus::analysis::interpolation::BilinearInterpolatingFunction value((jobject) NULL);
          OBJ_CALL(value = self->object.getBifPixel());
          return ::org::hipparchus::analysis::interpolation::t_BilinearInterpolatingFunction::wrap_Object(value);
        }

        static PyObject *t_AtmosphericRefraction_get__computationParameters(t_AtmosphericRefraction *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericComputationParameters value((jobject) NULL);
          OBJ_CALL(value = self->object.getComputationParameters());
          return ::org::orekit::rugged::refraction::t_AtmosphericComputationParameters::wrap_Object(value);
        }

        static int t_AtmosphericRefraction_set__inverseLocMargin(t_AtmosphericRefraction *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/intersection/duvenhage/MinMaxTreeTile.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *MinMaxTreeTileFactory::class$ = NULL;
          jmethodID *MinMaxTreeTileFactory::mids$ = NULL;
          bool MinMaxTreeTileFactory::live$ = false;

          jclass MinMaxTreeTileFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/MinMaxTreeTileFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_createTile_afa2c7228c4fd74e] = env->getMethodID(cls, "createTile", "()Lorg/orekit/rugged/intersection/duvenhage/MinMaxTreeTile;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MinMaxTreeTileFactory::MinMaxTreeTileFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile MinMaxTreeTileFactory::createTile() const
          {
            return ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile(env->callObjectMethod(this$, mids$[mid_createTile_afa2c7228c4fd74e]));
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
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self);

          static PyMethodDef t_MinMaxTreeTileFactory__methods_[] = {
            DECLARE_METHOD(t_MinMaxTreeTileFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MinMaxTreeTileFactory, createTile, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MinMaxTreeTileFactory)[] = {
            { Py_tp_methods, t_MinMaxTreeTileFactory__methods_ },
            { Py_tp_init, (void *) t_MinMaxTreeTileFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MinMaxTreeTileFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MinMaxTreeTileFactory, t_MinMaxTreeTileFactory, MinMaxTreeTileFactory);

          void t_MinMaxTreeTileFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MinMaxTreeTileFactory), &PY_TYPE_DEF(MinMaxTreeTileFactory), module, "MinMaxTreeTileFactory", 0);
          }

          void t_MinMaxTreeTileFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "class_", make_descriptor(MinMaxTreeTileFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "wrapfn_", make_descriptor(t_MinMaxTreeTileFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MinMaxTreeTileFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MinMaxTreeTileFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MinMaxTreeTileFactory::initializeClass, 1)))
              return NULL;
            return t_MinMaxTreeTileFactory::wrap_Object(MinMaxTreeTileFactory(((t_MinMaxTreeTileFactory *) arg)->object.this$));
          }
          static PyObject *t_MinMaxTreeTileFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MinMaxTreeTileFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MinMaxTreeTileFactory_init_(t_MinMaxTreeTileFactory *self, PyObject *args, PyObject *kwds)
          {
            MinMaxTreeTileFactory object((jobject) NULL);

            INT_CALL(object = MinMaxTreeTileFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_MinMaxTreeTileFactory_createTile(t_MinMaxTreeTileFactory *self)
          {
            ::org::orekit::rugged::intersection::duvenhage::MinMaxTreeTile result((jobject) NULL);
            OBJ_CALL(result = self->object.createTile());
            return ::org::orekit::rugged::intersection::duvenhage::t_MinMaxTreeTile::wrap_Object(result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientFunction::class$ = NULL;
        jmethodID *GradientFunction::mids$ = NULL;
        bool GradientFunction::live$ = false;

        jclass GradientFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5edd2cde4e401e53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;)V");
            mids$[mid_value_14dee4cb8cc3e959] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GradientFunction::GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5edd2cde4e401e53, a0.this$)) {}

        JArray< jdouble > GradientFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_14dee4cb8cc3e959], a0.this$));
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
        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg);

        static PyMethodDef t_GradientFunction__methods_[] = {
          DECLARE_METHOD(t_GradientFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientFunction)[] = {
          { Py_tp_methods, t_GradientFunction__methods_ },
          { Py_tp_init, (void *) t_GradientFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientFunction, t_GradientFunction, GradientFunction);

        void t_GradientFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientFunction), &PY_TYPE_DEF(GradientFunction), module, "GradientFunction", 0);
        }

        void t_GradientFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "class_", make_descriptor(GradientFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "wrapfn_", make_descriptor(t_GradientFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientFunction::initializeClass, 1)))
            return NULL;
          return t_GradientFunction::wrap_Object(GradientFunction(((t_GradientFunction *) arg)->object.this$));
        }
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
          GradientFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0))
          {
            INT_CALL(object = GradientFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldAbsolutePVCoordinates::class$ = NULL;
      jmethodID *FieldAbsolutePVCoordinates::mids$ = NULL;
      bool FieldAbsolutePVCoordinates::live$ = false;

      jclass FieldAbsolutePVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldAbsolutePVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c9a81ca81006017] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)V");
          mids$[mid_init$_aa8c722bf91af587] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_d709f1a99e8f728c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_dbb5cbfe1e0f7743] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_ec297e7d63958cff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_a579737bd7b3a2fc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_cc8c6789cd732e7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_0c532ebd3e17863c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_a82918c7573e9c77] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_803de8b4e87e6ba6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_getFrame_2c51111cc6894ba1] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getPVCoordinates_243debd9cc1dd623] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_dda5a3346286675e] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_294c5c99690f2356] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_566ff18e6be34b64] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_6ce2d639ee84cd5a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_shiftedBy_4eea64d82cd4330d] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_toAbsolutePVCoordinates_900ea521fabf17ca] = env->getMethodID(cls, "toAbsolutePVCoordinates", "()Lorg/orekit/utils/AbsolutePVCoordinates;");
          mids$[mid_toTaylorProvider_0d134b6a2504033c] = env->getMethodID(cls, "toTaylorProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a1) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_3c9a81ca81006017, a0.this$, a1.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldAbsolutePVCoordinates & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_aa8c722bf91af587, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d709f1a99e8f728c, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_dbb5cbfe1e0f7743, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_ec297e7d63958cff, a0.this$, a1.this$, a2.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a579737bd7b3a2fc, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_cc8c6789cd732e7b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_0c532ebd3e17863c, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_a82918c7573e9c77, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

      FieldAbsolutePVCoordinates::FieldAbsolutePVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::CalculusFieldElement & a1, const FieldAbsolutePVCoordinates & a2, const ::org::hipparchus::CalculusFieldElement & a3, const FieldAbsolutePVCoordinates & a4, const ::org::hipparchus::CalculusFieldElement & a5, const FieldAbsolutePVCoordinates & a6, const ::org::hipparchus::CalculusFieldElement & a7, const FieldAbsolutePVCoordinates & a8) : ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_803de8b4e87e6ba6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$)) {}

      ::org::orekit::frames::Frame FieldAbsolutePVCoordinates::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_2c51111cc6894ba1]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_243debd9cc1dd623]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_dda5a3346286675e], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldAbsolutePVCoordinates::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_294c5c99690f2356], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAbsolutePVCoordinates::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_566ff18e6be34b64], a0.this$));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(jdouble a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_6ce2d639ee84cd5a], a0));
      }

      FieldAbsolutePVCoordinates FieldAbsolutePVCoordinates::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_4eea64d82cd4330d], a0.this$));
      }

      ::org::orekit::utils::AbsolutePVCoordinates FieldAbsolutePVCoordinates::toAbsolutePVCoordinates() const
      {
        return ::org::orekit::utils::AbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_toAbsolutePVCoordinates_900ea521fabf17ca]));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbsolutePVCoordinates::toTaylorProvider() const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_0d134b6a2504033c]));
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
      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args);
      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self);
      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data);
      static PyGetSetDef t_FieldAbsolutePVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, frame),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldAbsolutePVCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAbsolutePVCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toAbsolutePVCoordinates, METH_NOARGS),
        DECLARE_METHOD(t_FieldAbsolutePVCoordinates, toTaylorProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAbsolutePVCoordinates)[] = {
        { Py_tp_methods, t_FieldAbsolutePVCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldAbsolutePVCoordinates_init_ },
        { Py_tp_getset, t_FieldAbsolutePVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAbsolutePVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::TimeStampedFieldPVCoordinates),
        NULL
      };

      DEFINE_TYPE(FieldAbsolutePVCoordinates, t_FieldAbsolutePVCoordinates, FieldAbsolutePVCoordinates);
      PyObject *t_FieldAbsolutePVCoordinates::wrap_Object(const FieldAbsolutePVCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAbsolutePVCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAbsolutePVCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAbsolutePVCoordinates *self = (t_FieldAbsolutePVCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAbsolutePVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAbsolutePVCoordinates), &PY_TYPE_DEF(FieldAbsolutePVCoordinates), module, "FieldAbsolutePVCoordinates", 0);
      }

      void t_FieldAbsolutePVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "class_", make_descriptor(FieldAbsolutePVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "wrapfn_", make_descriptor(t_FieldAbsolutePVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbsolutePVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldAbsolutePVCoordinates::wrap_Object(FieldAbsolutePVCoordinates(((t_FieldAbsolutePVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldAbsolutePVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAbsolutePVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_of_(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAbsolutePVCoordinates_init_(t_FieldAbsolutePVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldAbsolutePVCoordinates::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldAbsolutePVCoordinates::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kKKKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAbsolutePVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldAbsolutePVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAbsolutePVCoordinates a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            FieldAbsolutePVCoordinates a8((jobject) NULL);
            PyTypeObject **p8;
            FieldAbsolutePVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, t_FieldAbsolutePVCoordinates::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, t_FieldAbsolutePVCoordinates::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, t_FieldAbsolutePVCoordinates::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldAbsolutePVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_FieldAbsolutePVCoordinates_getFrame(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPVCoordinates(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
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
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldAbsolutePVCoordinates_getPosition(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getPosition(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_shiftedBy(t_FieldAbsolutePVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAbsolutePVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldAbsolutePVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toAbsolutePVCoordinates(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::AbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toAbsolutePVCoordinates());
        return ::org::orekit::utils::t_AbsolutePVCoordinates::wrap_Object(result);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_toTaylorProvider(t_FieldAbsolutePVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.toTaylorProvider());
        return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldAbsolutePVCoordinates_get__parameters_(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__frame(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAbsolutePVCoordinates_get__pVCoordinates(t_FieldAbsolutePVCoordinates *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonGeoMagneticFields::class$ = NULL;
        jmethodID *PythonGeoMagneticFields::mids$ = NULL;
        bool PythonGeoMagneticFields::live$ = false;

        jclass PythonGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getField_63411221dee4d2d9] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_0b71ae56f8fa5718] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_0b71ae56f8fa5718] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGeoMagneticFields::PythonGeoMagneticFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        void PythonGeoMagneticFields::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
        }

        jlong PythonGeoMagneticFields::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
        }

        void PythonGeoMagneticFields::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self);
        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args);
        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data);
        static PyGetSetDef t_PythonGeoMagneticFields__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGeoMagneticFields, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_PythonGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGeoMagneticFields)[] = {
          { Py_tp_methods, t_PythonGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_PythonGeoMagneticFields_init_ },
          { Py_tp_getset, t_PythonGeoMagneticFields__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGeoMagneticFields, t_PythonGeoMagneticFields, PythonGeoMagneticFields);

        void t_PythonGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGeoMagneticFields), &PY_TYPE_DEF(PythonGeoMagneticFields), module, "PythonGeoMagneticFields", 1);
        }

        void t_PythonGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "class_", make_descriptor(PythonGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "wrapfn_", make_descriptor(t_PythonGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGeoMagneticFields::initializeClass);
          JNINativeMethod methods[] = {
            { "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getField0 },
            { "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getIGRF1 },
            { "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getWMM2 },
            { "pythonDecRef", "()V", (void *) t_PythonGeoMagneticFields_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_PythonGeoMagneticFields::wrap_Object(PythonGeoMagneticFields(((t_PythonGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          PythonGeoMagneticFields object((jobject) NULL);

          INT_CALL(object = PythonGeoMagneticFields());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args)
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

        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *o0 = ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::wrap_Object(::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel(a0));
          PyObject *result = PyObject_CallMethod(obj, "getField", "Od", o0, (double) a1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getField", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getIGRF", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getIGRF", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getWMM", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getWMM", result);
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

        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_6c0ce7e438e5ded4]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateMatrixFunctionDifferentiator.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "org/hipparchus/analysis/UnivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction.h"
#include "org/hipparchus/analysis/differentiation/UnivariateFunctionDifferentiator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FiniteDifferencesDifferentiator::class$ = NULL;
        jmethodID *FiniteDifferencesDifferentiator::mids$ = NULL;
        bool FiniteDifferencesDifferentiator::live$ = false;

        jclass FiniteDifferencesDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FiniteDifferencesDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5322b8b512aeb26] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_init$_390258812740a16c] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_differentiate_220981d5dd65e2eb] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction;");
            mids$[mid_differentiate_3622054ab553d5e4] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateMatrixFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableMatrixFunction;");
            mids$[mid_differentiate_3e92258d2209079c] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");
            mids$[mid_getNbPoints_55546ef6a647f39b] = env->getMethodID(cls, "getNbPoints", "()I");
            mids$[mid_getStepSize_b74f83833fdad017] = env->getMethodID(cls, "getStepSize", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5322b8b512aeb26, a0, a1)) {}

        FiniteDifferencesDifferentiator::FiniteDifferencesDifferentiator(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_390258812740a16c, a0, a1, a2, a3)) {}

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction(env->callObjectMethod(this$, mids$[mid_differentiate_220981d5dd65e2eb], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateMatrixFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction(env->callObjectMethod(this$, mids$[mid_differentiate_3622054ab553d5e4], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction FiniteDifferencesDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_3e92258d2209079c], a0.this$));
        }

        jint FiniteDifferencesDifferentiator::getNbPoints() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPoints_55546ef6a647f39b]);
        }

        jdouble FiniteDifferencesDifferentiator::getStepSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStepSize_b74f83833fdad017]);
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
        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args);
        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self);
        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data);
        static PyGetSetDef t_FiniteDifferencesDifferentiator__fields_[] = {
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, nbPoints),
          DECLARE_GET_FIELD(t_FiniteDifferencesDifferentiator, stepSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FiniteDifferencesDifferentiator__methods_[] = {
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getNbPoints, METH_NOARGS),
          DECLARE_METHOD(t_FiniteDifferencesDifferentiator, getStepSize, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FiniteDifferencesDifferentiator)[] = {
          { Py_tp_methods, t_FiniteDifferencesDifferentiator__methods_ },
          { Py_tp_init, (void *) t_FiniteDifferencesDifferentiator_init_ },
          { Py_tp_getset, t_FiniteDifferencesDifferentiator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FiniteDifferencesDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FiniteDifferencesDifferentiator, t_FiniteDifferencesDifferentiator, FiniteDifferencesDifferentiator);

        void t_FiniteDifferencesDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(FiniteDifferencesDifferentiator), &PY_TYPE_DEF(FiniteDifferencesDifferentiator), module, "FiniteDifferencesDifferentiator", 0);
        }

        void t_FiniteDifferencesDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "class_", make_descriptor(FiniteDifferencesDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "wrapfn_", make_descriptor(t_FiniteDifferencesDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FiniteDifferencesDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FiniteDifferencesDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 1)))
            return NULL;
          return t_FiniteDifferencesDifferentiator::wrap_Object(FiniteDifferencesDifferentiator(((t_FiniteDifferencesDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_FiniteDifferencesDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FiniteDifferencesDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FiniteDifferencesDifferentiator_init_(t_FiniteDifferencesDifferentiator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jint a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              FiniteDifferencesDifferentiator object((jobject) NULL);

              if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = FiniteDifferencesDifferentiator(a0, a1, a2, a3));
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

        static PyObject *t_FiniteDifferencesDifferentiator_differentiate(t_FiniteDifferencesDifferentiator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateMatrixFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableMatrixFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateMatrixFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableMatrixFunction::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.differentiate(a0));
                return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getNbPoints(t_FiniteDifferencesDifferentiator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPoints());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_getStepSize(t_FiniteDifferencesDifferentiator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStepSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__nbPoints(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPoints());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FiniteDifferencesDifferentiator_get__stepSize(t_FiniteDifferencesDifferentiator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStepSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationUtil.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationUtil::class$ = NULL;
            jmethodID *TleGenerationUtil::mids$ = NULL;
            bool TleGenerationUtil::live$ = false;

            jclass TleGenerationUtil::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationUtil");

                mids$ = new jmethodID[max_mid];
                mids$[mid_newTLE_ef6b956997c61aa5] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/FieldKeplerianOrbit;Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_newTLE_9290bedc5d8adcf1] = env->getStaticMethodID(cls, "newTLE", "(Lorg/orekit/orbits/KeplerianOrbit;Lorg/orekit/propagation/analytical/tle/TLE;DLorg/orekit/time/TimeScale;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::FieldKeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_ef6b956997c61aa5], a0.this$, a1.this$, a2.this$, a3.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationUtil::newTLE(const ::org::orekit::orbits::KeplerianOrbit & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1, jdouble a2, const ::org::orekit::time::TimeScale & a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::orekit::propagation::analytical::tle::TLE(env->callStaticObjectMethod(cls, mids$[mid_newTLE_9290bedc5d8adcf1], a0.this$, a1.this$, a2, a3.this$));
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
            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_TleGenerationUtil__methods_[] = {
              DECLARE_METHOD(t_TleGenerationUtil, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationUtil, newTLE, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationUtil)[] = {
              { Py_tp_methods, t_TleGenerationUtil__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationUtil)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationUtil, t_TleGenerationUtil, TleGenerationUtil);

            void t_TleGenerationUtil::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationUtil), &PY_TYPE_DEF(TleGenerationUtil), module, "TleGenerationUtil", 0);
            }

            void t_TleGenerationUtil::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "class_", make_descriptor(TleGenerationUtil::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "wrapfn_", make_descriptor(t_TleGenerationUtil::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationUtil), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationUtil_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationUtil::initializeClass, 1)))
                return NULL;
              return t_TleGenerationUtil::wrap_Object(TleGenerationUtil(((t_TleGenerationUtil *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationUtil_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationUtil::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationUtil_newTLE(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  ::org::orekit::orbits::KeplerianOrbit a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  jdouble a2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kkDk", ::org::orekit::orbits::KeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::orbits::FieldKeplerianOrbit a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KKKk", ::org::orekit::orbits::FieldKeplerianOrbit::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldKeplerianOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::generation::TleGenerationUtil::newTLE(a0, a1, a2, a3));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "newTLE", args);
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
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/text/FieldPosition.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/ComplexFormat.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/Double.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *ComplexFormat::class$ = NULL;
      jmethodID *ComplexFormat::mids$ = NULL;
      bool ComplexFormat::live$ = false;

      jclass ComplexFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/ComplexFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_b7f3d50b51ef7518] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_734b91ac30d5f9b4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_a87510accfde9c74] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_1b1de848c187f338] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;)V");
          mids$[mid_init$_b1394edf81bf8325] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_3351787dda287cdf] = env->getMethodID(cls, "format", "(Ljava/lang/Double;)Ljava/lang/String;");
          mids$[mid_format_19646432b3806a2a] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;)Ljava/lang/String;");
          mids$[mid_format_f87b9603d4d067a9] = env->getMethodID(cls, "format", "(Lorg/hipparchus/complex/Complex;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_format_b972afa1d89f0ad4] = env->getMethodID(cls, "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getComplexFormat_fd55193634edb023] = env->getStaticMethodID(cls, "getComplexFormat", "()Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_640ebfa8879b8bf2] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getComplexFormat_d54474d4837bd5a1] = env->getStaticMethodID(cls, "getComplexFormat", "(Ljava/lang/String;Ljava/util/Locale;)Lorg/hipparchus/complex/ComplexFormat;");
          mids$[mid_getImaginaryCharacter_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getImaginaryCharacter", "()Ljava/lang/String;");
          mids$[mid_getImaginaryFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getImaginaryFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getRealFormat_87ffffc449cd25a5] = env->getMethodID(cls, "getRealFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_02e1897cad01bc88] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/complex/Complex;");
          mids$[mid_parse_7140aaf11af966f0] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexFormat::ComplexFormat() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b7f3d50b51ef7518, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_734b91ac30d5f9b4, a0.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a87510accfde9c74, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1b1de848c187f338, a0.this$, a1.this$)) {}

      ComplexFormat::ComplexFormat(const ::java::lang::String & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b1394edf81bf8325, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::String ComplexFormat::format(const ::java::lang::Double & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_3351787dda287cdf], a0.this$));
      }

      ::java::lang::String ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_19646432b3806a2a], a0.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::org::hipparchus::complex::Complex & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_f87b9603d4d067a9], a0.this$, a1.this$, a2.this$));
      }

      ::java::lang::StringBuffer ComplexFormat::format(const ::java::lang::Object & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_b972afa1d89f0ad4], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > ComplexFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
      }

      ComplexFormat ComplexFormat::getComplexFormat()
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_fd55193634edb023]));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::util::Locale & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_640ebfa8879b8bf2], a0.this$));
      }

      ComplexFormat ComplexFormat::getComplexFormat(const ::java::lang::String & a0, const ::java::util::Locale & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ComplexFormat(env->callStaticObjectMethod(cls, mids$[mid_getComplexFormat_d54474d4837bd5a1], a0.this$, a1.this$));
      }

      ::java::lang::String ComplexFormat::getImaginaryCharacter() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getImaginaryCharacter_1c1fa1e935d6cdcf]));
      }

      ::java::text::NumberFormat ComplexFormat::getImaginaryFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getImaginaryFormat_87ffffc449cd25a5]));
      }

      ::java::text::NumberFormat ComplexFormat::getRealFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getRealFormat_87ffffc449cd25a5]));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_02e1897cad01bc88], a0.this$));
      }

      ::org::hipparchus::complex::Complex ComplexFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_parse_7140aaf11af966f0], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args);
      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self);
      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args);
      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data);
      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data);
      static PyGetSetDef t_ComplexFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexFormat, availableLocales),
        DECLARE_GET_FIELD(t_ComplexFormat, complexFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryCharacter),
        DECLARE_GET_FIELD(t_ComplexFormat, imaginaryFormat),
        DECLARE_GET_FIELD(t_ComplexFormat, realFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexFormat__methods_[] = {
        DECLARE_METHOD(t_ComplexFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ComplexFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getComplexFormat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryCharacter, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getImaginaryFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, getRealFormat, METH_NOARGS),
        DECLARE_METHOD(t_ComplexFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexFormat)[] = {
        { Py_tp_methods, t_ComplexFormat__methods_ },
        { Py_tp_init, (void *) t_ComplexFormat_init_ },
        { Py_tp_getset, t_ComplexFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexFormat, t_ComplexFormat, ComplexFormat);

      void t_ComplexFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexFormat), &PY_TYPE_DEF(ComplexFormat), module, "ComplexFormat", 0);
      }

      void t_ComplexFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "class_", make_descriptor(ComplexFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "wrapfn_", make_descriptor(t_ComplexFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexFormat::initializeClass, 1)))
          return NULL;
        return t_ComplexFormat::wrap_Object(ComplexFormat(((t_ComplexFormat *) arg)->object.this$));
      }
      static PyObject *t_ComplexFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexFormat_init_(t_ComplexFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat object((jobject) NULL);

            INT_CALL(object = ComplexFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ComplexFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "kk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::NumberFormat::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexFormat(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ComplexFormat object((jobject) NULL);

            if (!parseArgs(args, "skk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexFormat(a0, a1, a2));
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

      static PyObject *t_ComplexFormat_format(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Double a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(Double), &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
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

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_getComplexFormat(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ComplexFormat result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat());
            return t_ComplexFormat::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::util::Locale a0((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::util::Locale a1((jobject) NULL);
            ComplexFormat result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::util::Locale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::ComplexFormat::getComplexFormat(a0, a1));
              return t_ComplexFormat::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getComplexFormat", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_getImaginaryCharacter(t_ComplexFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryCharacter());
        return j2p(result);
      }

      static PyObject *t_ComplexFormat_getImaginaryFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_getRealFormat(t_ComplexFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ComplexFormat_parse(t_ComplexFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::complex::Complex result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_ComplexFormat_get__availableLocales(t_ComplexFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_ComplexFormat_get__complexFormat(t_ComplexFormat *self, void *data)
      {
        ComplexFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getComplexFormat());
        return t_ComplexFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryCharacter(t_ComplexFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryCharacter());
        return j2p(value);
      }

      static PyObject *t_ComplexFormat_get__imaginaryFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }

      static PyObject *t_ComplexFormat_get__realFormat(t_ComplexFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitPhysicalProperties::class$ = NULL;
              jmethodID *OrbitPhysicalProperties::mids$ = NULL;
              bool OrbitPhysicalProperties::live$ = false;

              jclass OrbitPhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitPhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_02135a6ef25adb4b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getAttitudeActuatorType_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttitudeActuatorType", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeControlAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAttitudeControlAccuracy", "()D");
                  mids$[mid_getAttitudeControlMode_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getAttitudeControlMode", "()Ljava/lang/String;");
                  mids$[mid_getAttitudeKnowledgeAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAttitudeKnowledgeAccuracy", "()D");
                  mids$[mid_getAttitudePointingAccuracy_b74f83833fdad017] = env->getMethodID(cls, "getAttitudePointingAccuracy", "()D");
                  mids$[mid_getBolDv_b74f83833fdad017] = env->getMethodID(cls, "getBolDv", "()D");
                  mids$[mid_getBusModel_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getBusModel", "()Ljava/lang/String;");
                  mids$[mid_getDockedWith_e62d3bb06d56d7e3] = env->getMethodID(cls, "getDockedWith", "()Ljava/util/List;");
                  mids$[mid_getDragCoefficient_b74f83833fdad017] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDragConstantArea_b74f83833fdad017] = env->getMethodID(cls, "getDragConstantArea", "()D");
                  mids$[mid_getDragUncertainty_b74f83833fdad017] = env->getMethodID(cls, "getDragUncertainty", "()D");
                  mids$[mid_getDryMass_b74f83833fdad017] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_f77d745f2128c391] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInitialWetMass_b74f83833fdad017] = env->getMethodID(cls, "getInitialWetMass", "()D");
                  mids$[mid_getManeuversFrequency_b74f83833fdad017] = env->getMethodID(cls, "getManeuversFrequency", "()D");
                  mids$[mid_getManeuversPerYear_b74f83833fdad017] = env->getMethodID(cls, "getManeuversPerYear", "()D");
                  mids$[mid_getManufacturer_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getManufacturer", "()Ljava/lang/String;");
                  mids$[mid_getMaxAreaForCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getMaxAreaForCollisionProbability", "()D");
                  mids$[mid_getMaxThrust_b74f83833fdad017] = env->getMethodID(cls, "getMaxThrust", "()D");
                  mids$[mid_getMinAreaForCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getMinAreaForCollisionProbability", "()D");
                  mids$[mid_getRemainingDv_b74f83833fdad017] = env->getMethodID(cls, "getRemainingDv", "()D");
                  mids$[mid_getSrpCoefficient_b74f83833fdad017] = env->getMethodID(cls, "getSrpCoefficient", "()D");
                  mids$[mid_getSrpConstantArea_b74f83833fdad017] = env->getMethodID(cls, "getSrpConstantArea", "()D");
                  mids$[mid_getSrpUncertainty_b74f83833fdad017] = env->getMethodID(cls, "getSrpUncertainty", "()D");
                  mids$[mid_getTypAreaForCollisionProbability_b74f83833fdad017] = env->getMethodID(cls, "getTypAreaForCollisionProbability", "()D");
                  mids$[mid_getWetMass_b74f83833fdad017] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setAttitudeActuatorType_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttitudeActuatorType", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeControlAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setAttitudeControlAccuracy", "(D)V");
                  mids$[mid_setAttitudeControlMode_734b91ac30d5f9b4] = env->getMethodID(cls, "setAttitudeControlMode", "(Ljava/lang/String;)V");
                  mids$[mid_setAttitudeKnowledgeAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setAttitudeKnowledgeAccuracy", "(D)V");
                  mids$[mid_setAttitudePointingAccuracy_8ba9fe7a847cecad] = env->getMethodID(cls, "setAttitudePointingAccuracy", "(D)V");
                  mids$[mid_setBolDv_8ba9fe7a847cecad] = env->getMethodID(cls, "setBolDv", "(D)V");
                  mids$[mid_setBusModel_734b91ac30d5f9b4] = env->getMethodID(cls, "setBusModel", "(Ljava/lang/String;)V");
                  mids$[mid_setDockedWith_0e7c3032c7c93ed3] = env->getMethodID(cls, "setDockedWith", "(Ljava/util/List;)V");
                  mids$[mid_setDragCoefficient_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDragConstantArea_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragConstantArea", "(D)V");
                  mids$[mid_setDragUncertainty_8ba9fe7a847cecad] = env->getMethodID(cls, "setDragUncertainty", "(D)V");
                  mids$[mid_setDryMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInitialWetMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setInitialWetMass", "(D)V");
                  mids$[mid_setManeuversFrequency_8ba9fe7a847cecad] = env->getMethodID(cls, "setManeuversFrequency", "(D)V");
                  mids$[mid_setManufacturer_734b91ac30d5f9b4] = env->getMethodID(cls, "setManufacturer", "(Ljava/lang/String;)V");
                  mids$[mid_setMaxAreaForCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxAreaForCollisionProbability", "(D)V");
                  mids$[mid_setMaxThrust_8ba9fe7a847cecad] = env->getMethodID(cls, "setMaxThrust", "(D)V");
                  mids$[mid_setMinAreaForCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setMinAreaForCollisionProbability", "(D)V");
                  mids$[mid_setRemainingDv_8ba9fe7a847cecad] = env->getMethodID(cls, "setRemainingDv", "(D)V");
                  mids$[mid_setSrpCoefficient_8ba9fe7a847cecad] = env->getMethodID(cls, "setSrpCoefficient", "(D)V");
                  mids$[mid_setSrpConstantArea_8ba9fe7a847cecad] = env->getMethodID(cls, "setSrpConstantArea", "(D)V");
                  mids$[mid_setSrpUncertainty_8ba9fe7a847cecad] = env->getMethodID(cls, "setSrpUncertainty", "(D)V");
                  mids$[mid_setTypAreaForCollisionProbability_8ba9fe7a847cecad] = env->getMethodID(cls, "setTypAreaForCollisionProbability", "(D)V");
                  mids$[mid_setWetMass_8ba9fe7a847cecad] = env->getMethodID(cls, "setWetMass", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitPhysicalProperties::OrbitPhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::ndm::CommonPhysicalProperties(env->newObject(initializeClass, &mids$, mid_init$_02135a6ef25adb4b, a0.this$)) {}

              ::java::lang::String OrbitPhysicalProperties::getAttitudeActuatorType() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeActuatorType_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeControlAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeControlAccuracy_b74f83833fdad017]);
              }

              ::java::lang::String OrbitPhysicalProperties::getAttitudeControlMode() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAttitudeControlMode_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitPhysicalProperties::getAttitudeKnowledgeAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudeKnowledgeAccuracy_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getAttitudePointingAccuracy() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAttitudePointingAccuracy_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getBolDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBolDv_b74f83833fdad017]);
              }

              ::java::lang::String OrbitPhysicalProperties::getBusModel() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getBusModel_1c1fa1e935d6cdcf]));
              }

              ::java::util::List OrbitPhysicalProperties::getDockedWith() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDockedWith_e62d3bb06d56d7e3]));
              }

              jdouble OrbitPhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getDragConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragConstantArea_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getDragUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragUncertainty_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_b74f83833fdad017]);
              }

              ::org::hipparchus::linear::RealMatrix OrbitPhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_f77d745f2128c391]));
              }

              jdouble OrbitPhysicalProperties::getInitialWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getInitialWetMass_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getManeuversFrequency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversFrequency_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getManeuversPerYear() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getManeuversPerYear_b74f83833fdad017]);
              }

              ::java::lang::String OrbitPhysicalProperties::getManufacturer() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManufacturer_1c1fa1e935d6cdcf]));
              }

              jdouble OrbitPhysicalProperties::getMaxAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxAreaForCollisionProbability_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getMaxThrust() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMaxThrust_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getMinAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMinAreaForCollisionProbability_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getRemainingDv() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRemainingDv_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getSrpCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpCoefficient_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getSrpConstantArea() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpConstantArea_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getSrpUncertainty() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSrpUncertainty_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getTypAreaForCollisionProbability() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTypAreaForCollisionProbability_b74f83833fdad017]);
              }

              jdouble OrbitPhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_b74f83833fdad017]);
              }

              void OrbitPhysicalProperties::setAttitudeActuatorType(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeActuatorType_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeControlAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlAccuracy_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setAttitudeControlMode(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeControlMode_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitPhysicalProperties::setAttitudeKnowledgeAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeKnowledgeAccuracy_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setAttitudePointingAccuracy(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudePointingAccuracy_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setBolDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBolDv_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setBusModel(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBusModel_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitPhysicalProperties::setDockedWith(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDockedWith_0e7c3032c7c93ed3], a0.this$);
              }

              void OrbitPhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setDragConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragConstantArea_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setDragUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragUncertainty_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_94fe8d9ffeb50676], a0, a1, a2);
              }

              void OrbitPhysicalProperties::setInitialWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInitialWetMass_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setManeuversFrequency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManeuversFrequency_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setManufacturer(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManufacturer_734b91ac30d5f9b4], a0.this$);
              }

              void OrbitPhysicalProperties::setMaxAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxAreaForCollisionProbability_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setMaxThrust(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMaxThrust_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setMinAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMinAreaForCollisionProbability_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setRemainingDv(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRemainingDv_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setSrpCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpCoefficient_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setSrpConstantArea(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpConstantArea_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setSrpUncertainty(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSrpUncertainty_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setTypAreaForCollisionProbability(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTypAreaForCollisionProbability_8ba9fe7a847cecad], a0);
              }

              void OrbitPhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_8ba9fe7a847cecad], a0);
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
              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args);
              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data);
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitPhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeActuatorType),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeControlMode),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudeKnowledgeAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, attitudePointingAccuracy),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, bolDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, busModel),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dockedWith),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dragUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, initialWetMass),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maneuversFrequency),
                DECLARE_GET_FIELD(t_OrbitPhysicalProperties, maneuversPerYear),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, manufacturer),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, maxThrust),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, minAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, remainingDv),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpCoefficient),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpConstantArea),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, srpUncertainty),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, typAreaForCollisionProbability),
                DECLARE_GETSET_FIELD(t_OrbitPhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitPhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_OrbitPhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeActuatorType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeControlMode, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudeKnowledgeAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getAttitudePointingAccuracy, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBolDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getBusModel, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDockedWith, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDragUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getInitialWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversFrequency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManeuversPerYear, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getManufacturer, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMaxThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getMinAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getRemainingDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpConstantArea, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getSrpUncertainty, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getTypAreaForCollisionProbability, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeActuatorType, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeControlMode, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudeKnowledgeAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setAttitudePointingAccuracy, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBolDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setBusModel, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDockedWith, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDragUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setInitialWetMass, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManeuversFrequency, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setManufacturer, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMaxThrust, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setMinAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setRemainingDv, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpCoefficient, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpConstantArea, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setSrpUncertainty, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setTypAreaForCollisionProbability, METH_O),
                DECLARE_METHOD(t_OrbitPhysicalProperties, setWetMass, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitPhysicalProperties)[] = {
                { Py_tp_methods, t_OrbitPhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_OrbitPhysicalProperties_init_ },
                { Py_tp_getset, t_OrbitPhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitPhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::CommonPhysicalProperties),
                NULL
              };

              DEFINE_TYPE(OrbitPhysicalProperties, t_OrbitPhysicalProperties, OrbitPhysicalProperties);

              void t_OrbitPhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitPhysicalProperties), &PY_TYPE_DEF(OrbitPhysicalProperties), module, "OrbitPhysicalProperties", 0);
              }

              void t_OrbitPhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "class_", make_descriptor(OrbitPhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "wrapfn_", make_descriptor(t_OrbitPhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitPhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitPhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_OrbitPhysicalProperties::wrap_Object(OrbitPhysicalProperties(((t_OrbitPhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_OrbitPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitPhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitPhysicalProperties_init_(t_OrbitPhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitPhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitPhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeActuatorType(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeActuatorType());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeControlMode(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeControlMode());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getAttitudePointingAccuracy(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBolDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBolDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getBusModel(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getBusModel());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDockedWith(t_OrbitPhysicalProperties *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitPhysicalProperties_getDragCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDragUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getDryMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInertiaMatrix(t_OrbitPhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getInitialWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversFrequency(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManeuversPerYear(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getManufacturer(t_OrbitPhysicalProperties *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManufacturer());
                return j2p(result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMaxThrust(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getRemainingDv(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpCoefficient(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpConstantArea(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getSrpUncertainty(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_getWetMass(t_OrbitPhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeActuatorType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeActuatorType", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeControlMode(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeControlMode", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudeKnowledgeAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeKnowledgeAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setAttitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAttitudePointingAccuracy(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudePointingAccuracy", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBolDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBolDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBolDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setBusModel(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setBusModel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBusModel", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDockedWith(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setDockedWith(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDockedWith", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setDryMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInertiaMatrixEntry(t_OrbitPhysicalProperties *self, PyObject *args)
              {
                jint a0;
                jint a1;
                jdouble a2;

                if (!parseArgs(args, "IID", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setInertiaMatrixEntry(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaMatrixEntry", args);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setInitialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setInitialWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInitialWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManeuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setManeuversFrequency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManeuversFrequency", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setManufacturer(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManufacturer(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManufacturer", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMaxThrust(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMaxThrust(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMaxThrust", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setMinAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMinAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMinAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setRemainingDv(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRemainingDv(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRemainingDv", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpCoefficient", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpConstantArea(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpConstantArea", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setSrpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSrpUncertainty(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSrpUncertainty", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setTypAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTypAreaForCollisionProbability(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTypAreaForCollisionProbability", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_setWetMass(t_OrbitPhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeActuatorType(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeActuatorType());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeActuatorType(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeActuatorType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeActuatorType", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeControlAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeControlMode(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeControlMode());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeControlMode(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setAttitudeControlMode(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeControlMode", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudeKnowledgeAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudeKnowledgeAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudeKnowledgeAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeKnowledgeAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAttitudePointingAccuracy());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__attitudePointingAccuracy(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAttitudePointingAccuracy(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudePointingAccuracy", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__bolDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBolDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__bolDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBolDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bolDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__busModel(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getBusModel());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__busModel(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setBusModel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "busModel", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dockedWith(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getDockedWith());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitPhysicalProperties_set__dockedWith(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDockedWith(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dockedWith", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dragUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dragUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__dryMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__dryMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__inertiaMatrix(t_OrbitPhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__initialWetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getInitialWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__initialWetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setInitialWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "initialWetMass", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversFrequency(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversFrequency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maneuversFrequency(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setManeuversFrequency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maneuversFrequency", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maneuversPerYear(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getManeuversPerYear());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OrbitPhysicalProperties_get__manufacturer(t_OrbitPhysicalProperties *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManufacturer());
                return j2p(value);
              }
              static int t_OrbitPhysicalProperties_set__manufacturer(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManufacturer(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manufacturer", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__maxThrust(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMaxThrust());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__maxThrust(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMaxThrust(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "maxThrust", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMinAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__minAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMinAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "minAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__remainingDv(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRemainingDv());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__remainingDv(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRemainingDv(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "remainingDv", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpCoefficient(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpCoefficient(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpCoefficient", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpConstantArea(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpConstantArea());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpConstantArea(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpConstantArea(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpConstantArea", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__srpUncertainty(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSrpUncertainty());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__srpUncertainty(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSrpUncertainty(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "srpUncertainty", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTypAreaForCollisionProbability());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__typAreaForCollisionProbability(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTypAreaForCollisionProbability(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "typAreaForCollisionProbability", arg);
                return -1;
              }

              static PyObject *t_OrbitPhysicalProperties_get__wetMass(t_OrbitPhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitPhysicalProperties_set__wetMass(t_OrbitPhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A::class$ = NULL;
          jmethodID *SubFrame4A::mids$ = NULL;
          bool SubFrame4A::live$ = false;

          jclass SubFrame4A::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_55546ef6a647f39b] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_55546ef6a647f39b] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_55546ef6a647f39b] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_55546ef6a647f39b] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_55546ef6a647f39b] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_55546ef6a647f39b] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved10_55546ef6a647f39b] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReservedA09_55546ef6a647f39b] = env->getMethodID(cls, "getReservedA09", "()I");
              mids$[mid_getReservedB09_55546ef6a647f39b] = env->getMethodID(cls, "getReservedB09", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4A::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReservedA09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA09_55546ef6a647f39b]);
          }

          jint SubFrame4A::getReservedB09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB09_55546ef6a647f39b]);
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
          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data);
          static PyGetSetDef t_SubFrame4A__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4A, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedA09),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedB09),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4A__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedA09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedB09, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A)[] = {
            { Py_tp_methods, t_SubFrame4A__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4A__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4A, t_SubFrame4A, SubFrame4A);

          void t_SubFrame4A::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A), &PY_TYPE_DEF(SubFrame4A), module, "SubFrame4A", 0);
          }

          void t_SubFrame4A::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "class_", make_descriptor(SubFrame4A::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "wrapfn_", make_descriptor(t_SubFrame4A::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A::wrap_Object(SubFrame4A(((t_SubFrame4A *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB09());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNegateDetector::class$ = NULL;
        jmethodID *FieldNegateDetector::mids$ = NULL;
        bool FieldNegateDetector::live$ = false;

        jclass FieldNegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ca1d91eb6a3ce219] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOriginal_e78af9d734a5fbe1] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_c00ed91df96c178e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNegateDetector::FieldNegateDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_ca1d91eb6a3ce219, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNegateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldNegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_e78af9d734a5fbe1]));
        }

        void FieldNegateDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
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
        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args);
        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self);
        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data);
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data);
        static PyGetSetDef t_FieldNegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNegateDetector, original),
          DECLARE_GET_FIELD(t_FieldNegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNegateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_FieldNegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNegateDetector)[] = {
          { Py_tp_methods, t_FieldNegateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNegateDetector_init_ },
          { Py_tp_getset, t_FieldNegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNegateDetector, t_FieldNegateDetector, FieldNegateDetector);
        PyObject *t_FieldNegateDetector::wrap_Object(const FieldNegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNegateDetector), &PY_TYPE_DEF(FieldNegateDetector), module, "FieldNegateDetector", 0);
        }

        void t_FieldNegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "class_", make_descriptor(FieldNegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "wrapfn_", make_descriptor(t_FieldNegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNegateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNegateDetector::wrap_Object(FieldNegateDetector(((t_FieldNegateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldNegateDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldNegateDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
